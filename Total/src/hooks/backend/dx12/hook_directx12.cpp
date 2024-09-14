#include "../../../pch.h"

#ifdef ENABLE_BACKEND_DX12

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")

#include "../../../utils/stb_image.h"

// Data
static int const NUM_BACK_BUFFERS = 3;

static IDXGIFactory4* g_dxgiFactory = NULL;
static ID3D12Device* g_pd3dDevice = NULL;
static ID3D12DescriptorHeap* g_pd3dRtvDescHeap = NULL;
static ID3D12DescriptorHeap* g_pd3dSrvDescHeap = NULL;
static ID3D12CommandQueue* g_pd3dCommandQueue = NULL;
static ID3D12GraphicsCommandList* g_pd3dCommandList = NULL;
static IDXGISwapChain3* g_pSwapChain = NULL;
static ID3D12CommandAllocator* g_commandAllocators[NUM_BACK_BUFFERS] = { };
static ID3D12Resource* g_mainRenderTargetResource[NUM_BACK_BUFFERS] = { };
static D3D12_CPU_DESCRIPTOR_HANDLE g_mainRenderTargetDescriptor[NUM_BACK_BUFFERS] = { };

static int HalfInt = 0;



static void CleanupDeviceD3D12( );
static void CleanupRenderTarget( );
static void RenderImGui_DX12(IDXGISwapChain3* pSwapChain);

// We presume here that we have our D3D device pointer in g_pd3dDevice

static bool LoadTextureFromFile(const char* filename, ID3D12Device* d3d_device, D3D12_CPU_DESCRIPTOR_HANDLE srv_cpu_handle) {
    // Load from disk into a raw RGBA buffer
    int image_width = 0;
    int image_height = 0;
    //HRSRC Image = LoadImage(NULL, MAKEINTRESOURCE(IDB_PNG1), IMAGE_ICON, 0, 0, LR_LOADTRANSPARENT);
    //unsigned char* image_data = stbi_load(filename, &image_width, &image_height, NULL, 4);
    //HRSRC hResource = FindResource(NULL, MAKEINTRESOURCE(IDB_PNG1), IMAGE_ICON);
    //HGLOBAL hGlobal = LoadResource(NULL, hResource);
    //DWORD dllSize = SizeofResource(NULL, hResource);
    //void* dllBuffer = LockResource(hGlobal);
    //std::cout << dllSize << " and " << dllBuffer << std::endl;
    HRSRC hRsrc = FindResource(NULL, MAKEINTRESOURCE(IDB_PNG1), "PNG");

    HGLOBAL hGlob1 = LoadResource(NULL, hRsrc);

    int size = SizeofResource(NULL, hRsrc);

    HGLOBAL hGlobal = GlobalAlloc(GMEM_FIXED, size);

    unsigned char* data = (unsigned char*)LockResource(hGlob1);
    //unsigned char* bufferr = new unsigned char[size];
    //memcpy(bufferr, resPtr, size);
    //std::cout << data << std::endl;
    unsigned char* image_data = stbi_load(filename, &image_width, &image_height, NULL, 4);
    
    if (image_data == NULL)
        return false;


    // Create texture resource
    D3D12_HEAP_PROPERTIES props;
    memset(&props, 0, sizeof(D3D12_HEAP_PROPERTIES));
    props.Type = D3D12_HEAP_TYPE_DEFAULT;
    props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;

    D3D12_RESOURCE_DESC desc;
    ZeroMemory(&desc, sizeof(desc));
    desc.Dimension = D3D12_RESOURCE_DIMENSION_TEXTURE2D;
    desc.Alignment = 0;
    desc.Width = image_width;
    desc.Height = image_height;
    desc.DepthOrArraySize = 1;
    desc.MipLevels = 0;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    desc.SampleDesc.Quality = 0;
    desc.Layout = D3D12_TEXTURE_LAYOUT_UNKNOWN;
    desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    ID3D12Resource* pTexture = NULL;
    d3d_device->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc,
                                        D3D12_RESOURCE_STATE_COPY_DEST, NULL, IID_PPV_ARGS(&pTexture));

    // Create a temporary upload resource to move the data in
    UINT uploadPitch = (image_width * 4 + D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u) & ~(D3D12_TEXTURE_DATA_PITCH_ALIGNMENT - 1u);
    UINT uploadSize = image_height * uploadPitch;
    desc.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    desc.Alignment = 0;
    desc.Width = uploadSize;
    desc.Height = 1;
    desc.DepthOrArraySize = 1;
    desc.MipLevels = 1;
    desc.Format = DXGI_FORMAT_UNKNOWN;
    desc.SampleDesc.Count = 1;
    desc.SampleDesc.Quality = 0;
    desc.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    desc.Flags = D3D12_RESOURCE_FLAG_NONE;

    props.Type = D3D12_HEAP_TYPE_UPLOAD;
    props.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    props.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;

    ID3D12Resource* uploadBuffer = NULL;
    HRESULT hr = d3d_device->CreateCommittedResource(&props, D3D12_HEAP_FLAG_NONE, &desc,
                                                     D3D12_RESOURCE_STATE_GENERIC_READ, NULL, IID_PPV_ARGS(&uploadBuffer));
    IM_ASSERT(SUCCEEDED(hr));

    // Write pixels into the upload resource
    void* mapped = NULL;
    D3D12_RANGE range = {0, uploadSize};
    hr = uploadBuffer->Map(0, &range, &mapped);
    IM_ASSERT(SUCCEEDED(hr));
    for (int y = 0; y < image_height; y++)
        memcpy((void*)((uintptr_t)mapped + y * uploadPitch), image_data + y * image_width * 4, image_width * 4);
    uploadBuffer->Unmap(0, &range);

    // Copy the upload resource content into the real resource
    D3D12_TEXTURE_COPY_LOCATION srcLocation = { };
    srcLocation.pResource = uploadBuffer;
    srcLocation.Type = D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT;
    srcLocation.PlacedFootprint.Footprint.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    srcLocation.PlacedFootprint.Footprint.Width = image_width;
    srcLocation.PlacedFootprint.Footprint.Height = image_height;
    srcLocation.PlacedFootprint.Footprint.Depth = 1;
    srcLocation.PlacedFootprint.Footprint.RowPitch = uploadPitch;

    D3D12_TEXTURE_COPY_LOCATION dstLocation = { };
    dstLocation.pResource = pTexture;
    dstLocation.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
    dstLocation.SubresourceIndex = 0;

    D3D12_RESOURCE_BARRIER barrier = { };
    barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
    barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
    barrier.Transition.pResource = pTexture;
    barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
    barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_COPY_DEST;
    barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE;

    // Create a temporary command queue to do the copy with
    ID3D12Fence* fence = NULL;
    hr = d3d_device->CreateFence(0, D3D12_FENCE_FLAG_NONE, IID_PPV_ARGS(&fence));
    IM_ASSERT(SUCCEEDED(hr));

    HANDLE event = CreateEvent(0, 0, 0, 0);
    IM_ASSERT(event != NULL);

    D3D12_COMMAND_QUEUE_DESC queueDesc = { };
    queueDesc.Type = D3D12_COMMAND_LIST_TYPE_DIRECT;
    queueDesc.Flags = D3D12_COMMAND_QUEUE_FLAG_NONE;
    queueDesc.NodeMask = 1;

    ID3D12CommandQueue* cmdQueue = NULL;
    hr = d3d_device->CreateCommandQueue(&queueDesc, IID_PPV_ARGS(&cmdQueue));
    IM_ASSERT(SUCCEEDED(hr));

    ID3D12CommandAllocator* cmdAlloc = NULL;
    hr = d3d_device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&cmdAlloc));
    IM_ASSERT(SUCCEEDED(hr));

    ID3D12GraphicsCommandList* cmdList = NULL;
    hr = d3d_device->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, cmdAlloc, NULL, IID_PPV_ARGS(&cmdList));
    IM_ASSERT(SUCCEEDED(hr));

    cmdList->CopyTextureRegion(&dstLocation, 0, 0, 0, &srcLocation, NULL);
    cmdList->ResourceBarrier(1, &barrier);

    hr = cmdList->Close( );
    IM_ASSERT(SUCCEEDED(hr));

    // Execute the copy
    cmdQueue->ExecuteCommandLists(1, (ID3D12CommandList* const*)&cmdList);
    hr = cmdQueue->Signal(fence, 1);
    IM_ASSERT(SUCCEEDED(hr));

    // Wait for everything to complete
    fence->SetEventOnCompletion(1, event);
    WaitForSingleObject(event, INFINITE);

    // Tear down our temporary command queue and release the upload resource
    cmdList->Release( );
    cmdAlloc->Release( );
    cmdQueue->Release( );
    CloseHandle(event);
    fence->Release( );
    uploadBuffer->Release( );

    // Create a shader resource view for the texture
    D3D12_SHADER_RESOURCE_VIEW_DESC srvDesc;
    ZeroMemory(&srvDesc, sizeof(srvDesc));
    srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    srvDesc.ViewDimension = D3D12_SRV_DIMENSION_TEXTURE2D;
    srvDesc.Texture2D.MipLevels = desc.MipLevels;
    srvDesc.Texture2D.MostDetailedMip = 0;
    srvDesc.Shader4ComponentMapping = D3D12_DEFAULT_SHADER_4_COMPONENT_MAPPING;
    d3d_device->CreateShaderResourceView(pTexture, &srvDesc, srv_cpu_handle);

    // Return results
    stbi_image_free(image_data);

    return true;
}


static bool CreateDeviceD3D12(HWND hWnd) {
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC1 sd = { };
    sd.BufferCount = NUM_BACK_BUFFERS;
    sd.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.SampleDesc.Count = 1;
    sd.SwapEffect = DXGI_SWAP_EFFECT_FLIP_DISCARD;

    // Create device
    D3D_FEATURE_LEVEL featureLevel = D3D_FEATURE_LEVEL_11_0;
    if (D3D12CreateDevice(NULL, featureLevel, IID_PPV_ARGS(&g_pd3dDevice)) != S_OK)
        return false;

    D3D12_COMMAND_QUEUE_DESC desc = { };
    if (g_pd3dDevice->CreateCommandQueue(&desc, IID_PPV_ARGS(&g_pd3dCommandQueue)) != S_OK)
        return false;

    IDXGISwapChain1* swapChain1 = NULL;
    if (CreateDXGIFactory1(IID_PPV_ARGS(&g_dxgiFactory)) != S_OK)
        return false;
    if (g_dxgiFactory->CreateSwapChainForHwnd(g_pd3dCommandQueue, hWnd, &sd, NULL, NULL, &swapChain1) != S_OK)
        return false;
    if (swapChain1->QueryInterface(IID_PPV_ARGS(&g_pSwapChain)) != S_OK)
        return false;
    swapChain1->Release( );

    return true;
}

static void CreateRenderTarget(IDXGISwapChain* pSwapChain) {
    for (UINT i = 0; i < NUM_BACK_BUFFERS; ++i) {
        ID3D12Resource* pBackBuffer = NULL;
        pSwapChain->GetBuffer(i, IID_PPV_ARGS(&pBackBuffer));
        if (pBackBuffer) {
            DXGI_SWAP_CHAIN_DESC sd;
            pSwapChain->GetDesc(&sd);
            sd.Windowed = ((GetWindowLongPtr(Utils::mainWindow, GWL_STYLE) & WS_POPUP) != 0) ? false : true;

            D3D12_RENDER_TARGET_VIEW_DESC desc = { };
            desc.Format = static_cast<DXGI_FORMAT>(Utils::GetCorrectDXGIFormat(sd.BufferDesc.Format));
            desc.ViewDimension = D3D12_RTV_DIMENSION_TEXTURE2D;

            g_pd3dDevice->CreateRenderTargetView(pBackBuffer, &desc, g_mainRenderTargetDescriptor[i]);
            g_mainRenderTargetResource[i] = pBackBuffer;
        }
    }
}

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain3*, UINT, UINT)> oPresent;
static HRESULT WINAPI hkPresent(IDXGISwapChain3* pSwapChain,
                                UINT SyncInterval,
                                UINT Flags) {
    RenderImGui_DX12(pSwapChain);

    return oPresent(pSwapChain, SyncInterval, Flags);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain3*, UINT, UINT, const DXGI_PRESENT_PARAMETERS*)> oPresent1;
static HRESULT WINAPI hkPresent1(IDXGISwapChain3* pSwapChain,
                                 UINT SyncInterval,
                                 UINT PresentFlags,
                                 const DXGI_PRESENT_PARAMETERS* pPresentParameters) {
    RenderImGui_DX12(pSwapChain);

    return oPresent1(pSwapChain, SyncInterval, PresentFlags, pPresentParameters);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT)> oResizeBuffers;
static HRESULT WINAPI hkResizeBuffers(IDXGISwapChain* pSwapChain,
                                      UINT BufferCount,
                                      UINT Width,
                                      UINT Height,
                                      DXGI_FORMAT NewFormat,
                                      UINT SwapChainFlags) {
    CleanupRenderTarget( );

    return oResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain3*, UINT, UINT, UINT, DXGI_FORMAT, UINT, const UINT*, IUnknown* const*)> oResizeBuffers1;
static HRESULT WINAPI hkResizeBuffers1(IDXGISwapChain3* pSwapChain,
                                       UINT BufferCount,
                                       UINT Width,
                                       UINT Height,
                                       DXGI_FORMAT NewFormat,
                                       UINT SwapChainFlags,
                                       const UINT* pCreationNodeMask,
                                       IUnknown* const* ppPresentQueue) {
    CleanupRenderTarget( );

    return oResizeBuffers1(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags, pCreationNodeMask, ppPresentQueue);
}

static std::add_pointer_t<void WINAPI(ID3D12CommandQueue*, UINT, ID3D12CommandList*)> oExecuteCommandLists;
static void WINAPI hkExecuteCommandLists(ID3D12CommandQueue* pCommandQueue,
                                         UINT NumCommandLists,
                                         ID3D12CommandList* ppCommandLists) {
    if (!g_pd3dCommandQueue) {
        g_pd3dCommandQueue = pCommandQueue;
    }

    return oExecuteCommandLists(pCommandQueue, NumCommandLists, ppCommandLists);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGIFactory*, IUnknown*, DXGI_SWAP_CHAIN_DESC*, IDXGISwapChain**)> oCreateSwapChain;
static HRESULT WINAPI hkCreateSwapChain(IDXGIFactory* pFactory,
                                        IUnknown* pDevice,
                                        DXGI_SWAP_CHAIN_DESC* pDesc,
                                        IDXGISwapChain** ppSwapChain) {
    CleanupRenderTarget( );

    return oCreateSwapChain(pFactory, pDevice, pDesc, ppSwapChain);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGIFactory*, IUnknown*, HWND, const DXGI_SWAP_CHAIN_DESC1*, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC*, IDXGIOutput*, IDXGISwapChain1**)> oCreateSwapChainForHwnd;
static HRESULT WINAPI hkCreateSwapChainForHwnd(IDXGIFactory* pFactory,
                                               IUnknown* pDevice,
                                               HWND hWnd,
                                               const DXGI_SWAP_CHAIN_DESC1* pDesc,
                                               const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc,
                                               IDXGIOutput* pRestrictToOutput,
                                               IDXGISwapChain1** ppSwapChain) {
    CleanupRenderTarget( );

    return oCreateSwapChainForHwnd(pFactory, pDevice, hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGIFactory*, IUnknown*, IUnknown*, const DXGI_SWAP_CHAIN_DESC1*, IDXGIOutput*, IDXGISwapChain1**)> oCreateSwapChainForCoreWindow;
static HRESULT WINAPI hkCreateSwapChainForCoreWindow(IDXGIFactory* pFactory,
                                                     IUnknown* pDevice,
                                                     IUnknown* pWindow,
                                                     const DXGI_SWAP_CHAIN_DESC1* pDesc,
                                                     IDXGIOutput* pRestrictToOutput,
                                                     IDXGISwapChain1** ppSwapChain) {
    CleanupRenderTarget( );

    return oCreateSwapChainForCoreWindow(pFactory, pDevice, pWindow, pDesc, pRestrictToOutput, ppSwapChain);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGIFactory*, IUnknown*, const DXGI_SWAP_CHAIN_DESC1*, IDXGIOutput*, IDXGISwapChain1**)> oCreateSwapChainForComposition;
static HRESULT WINAPI hkCreateSwapChainForComposition(IDXGIFactory* pFactory,
                                                      IUnknown* pDevice,
                                                      const DXGI_SWAP_CHAIN_DESC1* pDesc,
                                                      IDXGIOutput* pRestrictToOutput,
                                                      IDXGISwapChain1** ppSwapChain) {
    CleanupRenderTarget( );

    return oCreateSwapChainForComposition(pFactory, pDevice, pDesc, pRestrictToOutput, ppSwapChain);
}

namespace DX12 {
    void Hook(HWND hwnd) {
        if (!CreateDeviceD3D12(GetConsoleWindow())) {
            LOG("[!] CreateDeviceD3D12() failed.\n");
            return;
        }
    
        LOG("[+] DirectX12: g_pd3dDevice: 0x%p\n", g_pd3dDevice);
        LOG("[+] DirectX12: g_dxgiFactory: 0x%p\n", g_dxgiFactory);
        LOG("[+] DirectX12: g_pd3dCommandQueue: 0x%p\n", g_pd3dCommandQueue);
        LOG("[+] DirectX12: g_pSwapChain: 0x%p\n", g_pSwapChain);


        if (g_pd3dDevice) {
            Menu::InitializeContext(hwnd);
            
            // Hook
            void** pVTable = *reinterpret_cast<void***>(g_pSwapChain);
            void** pCommandQueueVTable = *reinterpret_cast<void***>(g_pd3dCommandQueue);
            void** pFactoryVTable = *reinterpret_cast<void***>(g_dxgiFactory);

            void* fnCreateSwapChain = pFactoryVTable[10];
            void* fnCreateSwapChainForHwndChain = pFactoryVTable[15];
            void* fnCreateSwapChainForCWindowChain = pFactoryVTable[16];
            void* fnCreateSwapChainForCompChain = pFactoryVTable[24];

            void* fnPresent = pVTable[8];
            void* fnPresent1 = pVTable[22];

            void* fnResizeBuffers = pVTable[13];
            void* fnResizeBuffers1 = pVTable[39];

            void* fnExecuteCommandLists = pCommandQueueVTable[10];

            if (g_pd3dCommandQueue) {
                g_pd3dCommandQueue->Release( );
                g_pd3dCommandQueue = NULL;
            }
            CleanupDeviceD3D12( );

            static MH_STATUS cscStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChain), &hkCreateSwapChain, reinterpret_cast<void**>(&oCreateSwapChain));
            static MH_STATUS cschStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChainForHwndChain), &hkCreateSwapChainForHwnd, reinterpret_cast<void**>(&oCreateSwapChainForHwnd));
            static MH_STATUS csccwStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChainForCWindowChain), &hkCreateSwapChainForCoreWindow, reinterpret_cast<void**>(&oCreateSwapChainForCoreWindow));
            static MH_STATUS csccStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChainForCompChain), &hkCreateSwapChainForComposition, reinterpret_cast<void**>(&oCreateSwapChainForComposition));

            static MH_STATUS presentStatus = MH_CreateHook(reinterpret_cast<void**>(fnPresent), &hkPresent, reinterpret_cast<void**>(&oPresent));
            static MH_STATUS present1Status = MH_CreateHook(reinterpret_cast<void**>(fnPresent1), &hkPresent1, reinterpret_cast<void**>(&oPresent1));

            static MH_STATUS resizeStatus = MH_CreateHook(reinterpret_cast<void**>(fnResizeBuffers), &hkResizeBuffers, reinterpret_cast<void**>(&oResizeBuffers));
            static MH_STATUS resize1Status = MH_CreateHook(reinterpret_cast<void**>(fnResizeBuffers1), &hkResizeBuffers1, reinterpret_cast<void**>(&oResizeBuffers1));

            static MH_STATUS eclStatus = MH_CreateHook(reinterpret_cast<void**>(fnExecuteCommandLists), &hkExecuteCommandLists, reinterpret_cast<void**>(&oExecuteCommandLists));

            MH_EnableHook(fnCreateSwapChain);
            MH_EnableHook(fnCreateSwapChainForHwndChain);
            MH_EnableHook(fnCreateSwapChainForCWindowChain);
            MH_EnableHook(fnCreateSwapChainForCompChain);

            MH_EnableHook(fnPresent);
            MH_EnableHook(fnPresent1);

            MH_EnableHook(fnResizeBuffers);
            MH_EnableHook(fnResizeBuffers1);

            MH_EnableHook(fnExecuteCommandLists);
        }
    }

    void Unhook( ) {
        if (ImGui::GetCurrentContext( )) {
            if (ImGui::GetIO( ).BackendRendererUserData)
                ImGui_ImplDX12_Shutdown( );

            if (ImGui::GetIO( ).BackendPlatformUserData)
                ImGui_ImplWin32_Shutdown( );

            ImGui::DestroyContext( );
        }

        CleanupDeviceD3D12( );
    }
}

static void CleanupRenderTarget( ) {
    for (UINT i = 0; i < NUM_BACK_BUFFERS; ++i)
        if (g_mainRenderTargetResource[i]) {
            g_mainRenderTargetResource[i]->Release( );
            g_mainRenderTargetResource[i] = NULL;
        }
}

static void CleanupDeviceD3D12( ) {
    CleanupRenderTarget( );

    if (g_pSwapChain) {
        g_pSwapChain->Release( );
        g_pSwapChain = NULL;
    }
    for (UINT i = 0; i < NUM_BACK_BUFFERS; ++i)
        if (g_commandAllocators[i]) {
            g_commandAllocators[i]->Release( );
            g_commandAllocators[i] = NULL;
        }
    if (g_pd3dCommandList) {
        g_pd3dCommandList->Release( );
        g_pd3dCommandList = NULL;
    }
    if (g_pd3dRtvDescHeap) {
        g_pd3dRtvDescHeap->Release( );
        g_pd3dRtvDescHeap = NULL;
    }
    if (g_pd3dSrvDescHeap) {
        g_pd3dSrvDescHeap->Release( );
        g_pd3dSrvDescHeap = NULL;
    }
    if (g_pd3dDevice) {
        g_pd3dDevice->Release( );
        g_pd3dDevice = NULL;
    }
    if (g_dxgiFactory) {
        g_dxgiFactory->Release( );
        g_dxgiFactory = NULL;
    }
}

static void RenderImGui_DX12(IDXGISwapChain3* pSwapChain) {
    if (!ImGui::GetIO( ).BackendRendererUserData) {
        if (SUCCEEDED(pSwapChain->GetDevice(IID_PPV_ARGS(&g_pd3dDevice)))) {
            {
                ImGui::GetIO( ).WantCaptureMouse || ImGui::GetIO( ).WantTextInput || ImGui::GetIO( ).WantCaptureKeyboard;
                ImGui::GetIO( ).ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
                ImGui::GetIO( ).Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\Consolab.ttf", 12.0f, NULL, ImGui::GetIO( ).Fonts->GetGlyphRangesCyrillic( ));
                ImGui::GetIO( ).Fonts->Build( );

                D3D12_DESCRIPTOR_HEAP_DESC desc = { };
                desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_RTV;
                desc.NumDescriptors = NUM_BACK_BUFFERS;
                desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_NONE;
                desc.NodeMask = 1;
                if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dRtvDescHeap)) != S_OK)
                    return;

                SIZE_T rtvDescriptorSize = g_pd3dDevice->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_RTV);
                D3D12_CPU_DESCRIPTOR_HANDLE rtvHandle = g_pd3dRtvDescHeap->GetCPUDescriptorHandleForHeapStart( );
                for (UINT i = 0; i < NUM_BACK_BUFFERS; ++i) {
                    g_mainRenderTargetDescriptor[i] = rtvHandle;
                    rtvHandle.ptr += rtvDescriptorSize;
                }
            }

            {
                D3D12_DESCRIPTOR_HEAP_DESC desc = { };
                desc.Type = D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV;
                desc.NumDescriptors = 1'000'000;
                desc.Flags = D3D12_DESCRIPTOR_HEAP_FLAG_SHADER_VISIBLE;
                if (g_pd3dDevice->CreateDescriptorHeap(&desc, IID_PPV_ARGS(&g_pd3dSrvDescHeap)) != S_OK)
                    return;
            }

            for (UINT i = 0; i < NUM_BACK_BUFFERS; ++i)
                if (g_pd3dDevice->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, IID_PPV_ARGS(&g_commandAllocators[i])) != S_OK)
                    return;

            if (g_pd3dDevice->CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT, g_commandAllocators[0], NULL, IID_PPV_ARGS(&g_pd3dCommandList)) != S_OK ||
                g_pd3dCommandList->Close( ) != S_OK)
                return;

            ImGui_ImplDX12_Init(g_pd3dDevice, NUM_BACK_BUFFERS,
                                DXGI_FORMAT_R8G8B8A8_UNORM, g_pd3dSrvDescHeap,
                                g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( ),
                                g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( ));

            /////////////////////////////////// ICONS ///////////////////////////////////

            static_assert(sizeof(ImTextureID) >= sizeof(D3D12_CPU_DESCRIPTOR_HANDLE), "D3D12_CPU_DESCRIPTOR_HANDLE is too large to fit in an ImTextureID");
            UINT handle_increment = g_pd3dDevice->GetDescriptorHandleIncrementSize(D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);

            DX12::BOTTLE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::BOTTLE_CPU.ptr += (handle_increment * 2);
            DX12::BOTTLE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::BOTTLE_GPU.ptr += (handle_increment * 2);

            DX12::KEY_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::KEY_CPU.ptr += (handle_increment * 3);
            DX12::KEY_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::KEY_GPU.ptr += (handle_increment * 3);

            DX12::BRICK_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::BRICK_CPU.ptr += (handle_increment * 4);
            DX12::BRICK_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::BRICK_GPU.ptr += (handle_increment * 4);

            DX12::ANTIDOTE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::ANTIDOTE_CPU.ptr += (handle_increment * 5);
            DX12::ANTIDOTE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::ANTIDOTE_GPU.ptr += (handle_increment * 5);

            DX12::SKILLCHARGE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::SKILLCHARGE_CPU.ptr += (handle_increment * 6);
            DX12::SKILLCHARGE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::SKILLCHARGE_GPU.ptr += (handle_increment * 6);

            DX12::BATTERY_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::BATTERY_CPU.ptr += (handle_increment * 7);
            DX12::BATTERY_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::BATTERY_GPU.ptr += (handle_increment * 7);

            DX12::SMALL_BATTERY_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::SMALL_BATTERY_CPU.ptr += (handle_increment * 8);
            DX12::SMALL_BATTERY_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::SMALL_BATTERY_GPU.ptr += (handle_increment * 8);

            DX12::SMALL_HEAL_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::SMALL_HEAL_CPU.ptr += (handle_increment * 9);
            DX12::SMALL_HEAL_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::SMALL_HEAL_GPU.ptr += (handle_increment * 9);

            DX12::HEAL_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::HEAL_CPU.ptr += (handle_increment * 10);
            DX12::HEAL_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::HEAL_GPU.ptr += (handle_increment * 10);

            DX12::BANDAGE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::BANDAGE_CPU.ptr += (handle_increment * 11);
            DX12::BANDAGE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::BANDAGE_GPU.ptr += (handle_increment * 11);

            DX12::HEART_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::HEART_CPU.ptr += (handle_increment * 12);
            DX12::HEART_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::HEART_GPU.ptr += (handle_increment * 12);

            DX12::ADRENALINE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::ADRENALINE_CPU.ptr += (handle_increment * 13);
            DX12::ADRENALINE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::ADRENALINE_GPU.ptr += (handle_increment * 13);

            DX12::TICKET_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::TICKET_CPU.ptr += (handle_increment * 14);
            DX12::TICKET_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::TICKET_GPU.ptr += (handle_increment * 14);

            DX12::LOCKPICK_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::LOCKPICK_CPU.ptr += (handle_increment * 15);
            DX12::LOCKPICK_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::LOCKPICK_GPU.ptr += (handle_increment * 15);

            DX12::VALVE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::VALVE_CPU.ptr += (handle_increment * 16);
            DX12::VALVE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::VALVE_GPU.ptr += (handle_increment * 16);

            DX12::ENEMY_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::ENEMY_CPU.ptr += (handle_increment * 17);
            DX12::ENEMY_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::ENEMY_GPU.ptr += (handle_increment * 17);

            DX12::DIAPO_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::DIAPO_CPU.ptr += (handle_increment * 18);
            DX12::DIAPO_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::DIAPO_GPU.ptr += (handle_increment * 18);

            DX12::DOCUMENT_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::DOCUMENT_CPU.ptr += (handle_increment * 19);
            DX12::DOCUMENT_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::DOCUMENT_GPU.ptr += (handle_increment * 19);

            DX12::KIDS_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::KIDS_CPU.ptr += (handle_increment * 20);
            DX12::KIDS_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::KIDS_GPU.ptr += (handle_increment * 20);

            DX12::CANISTER_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::CANISTER_CPU.ptr += (handle_increment * 21);
            DX12::CANISTER_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::CANISTER_GPU.ptr += (handle_increment * 22);

            DX12::ACID_BOTTLE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::ACID_BOTTLE_CPU.ptr += (handle_increment * 23);
            DX12::ACID_BOTTLE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::ACID_BOTTLE_GPU.ptr += (handle_increment * 23);

            DX12::ACID_BUCKET_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::ACID_BUCKET_CPU.ptr += (handle_increment * 24);
            DX12::ACID_BUCKET_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::ACID_BUCKET_GPU.ptr += (handle_increment * 24);

            DX12::MATERIAL_OBJECT_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::MATERIAL_OBJECT_CPU.ptr += (handle_increment * 25);
            DX12::MATERIAL_OBJECT_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::MATERIAL_OBJECT_GPU.ptr += (handle_increment * 25);

            DX12::EVIDENCE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::EVIDENCE_CPU.ptr += (handle_increment * 26);
            DX12::EVIDENCE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::EVIDENCE_GPU.ptr += (handle_increment * 26);

            DX12::OBJECTIVE_CPU = g_pd3dSrvDescHeap->GetCPUDescriptorHandleForHeapStart( );
            DX12::OBJECTIVE_CPU.ptr += (handle_increment * 27);
            DX12::OBJECTIVE_GPU = g_pd3dSrvDescHeap->GetGPUDescriptorHandleForHeapStart( );
            DX12::OBJECTIVE_GPU.ptr += (handle_increment * 27);
        }
    }

    if (!H::bShuttingDown) {
        if (!g_mainRenderTargetResource[0]) {
            CreateRenderTarget(pSwapChain);
        }

        if (ImGui::GetCurrentContext( ) && g_pd3dCommandQueue && g_mainRenderTargetResource[0]) {

            if (HalfInt < 24) {
                switch (HalfInt) {
                    case 0:     LoadTextureFromFile("icons\\inventory\\item_bottle.png",            g_pd3dDevice, DX12::BOTTLE_CPU              );  break;
                    case 1:     LoadTextureFromFile("icons\\inventory\\key.png",                    g_pd3dDevice, DX12::KEY_CPU                 );  break;
                    case 2:     LoadTextureFromFile("icons\\inventory\\item_brick.png",             g_pd3dDevice, DX12::BRICK_CPU               );  break;
                    case 3:     LoadTextureFromFile("icons\\inventory\\item_antidote_psy.png",      g_pd3dDevice, DX12::ANTIDOTE_CPU            );  break;
                    case 4:     LoadTextureFromFile("icons\\inventory\\item_skillcharge.png",       g_pd3dDevice, DX12::SKILLCHARGE_CPU         );  break;
                    case 5:     LoadTextureFromFile("icons\\inventory\\item_battery.png",           g_pd3dDevice, DX12::BATTERY_CPU             );  break;
                    case 6:     LoadTextureFromFile("icons\\inventory\\item_battery_small.png",     g_pd3dDevice, DX12::SMALL_BATTERY_CPU       );  break;
                    case 7:     LoadTextureFromFile("icons\\inventory\\item_heal_drink.png",        g_pd3dDevice, DX12::HEAL_CPU                );  break;
                    case 8:     LoadTextureFromFile("icons\\inventory\\bloody_heart.png",           g_pd3dDevice, DX12::HEART_CPU               );  break;
                    case 9:     LoadTextureFromFile("icons\\inventory\\item_pill.png",              g_pd3dDevice, DX12::ADRENALINE_CPU          );  break;
                    case 10:    LoadTextureFromFile("icons\\inventory\\ticket.png",                 g_pd3dDevice, DX12::TICKET_CPU              );  break;
                    case 11:    LoadTextureFromFile("icons\\inventory\\item_temp_heal_drink.png",   g_pd3dDevice, DX12::SMALL_HEAL_CPU          );  break;
                    case 12:    LoadTextureFromFile("icons\\inventory\\item_bandage.png",           g_pd3dDevice, DX12::BANDAGE_CPU             );  break;
                    case 13:    LoadTextureFromFile("icons\\inventory\\item_lockpick.png",          g_pd3dDevice, DX12::LOCKPICK_CPU            );  break;
                    case 14:    LoadTextureFromFile("icons\\other\\item_valve.png",                 g_pd3dDevice, DX12::VALVE_CPU               );  break;
                    case 15:    LoadTextureFromFile("icons\\largepickups\\item_diapo.png",          g_pd3dDevice, DX12::DIAPO_CPU               );  break;
                    case 16:    LoadTextureFromFile("icons\\other\\item_enemy.png",                 g_pd3dDevice, DX12::ENEMY_CPU               );  break;
                    case 17:    LoadTextureFromFile("icons\\largepickups\\item_kids.png",           g_pd3dDevice, DX12::KIDS_CPU                );  break;
                    case 18:    LoadTextureFromFile("icons\\largepickups\\item_acidbottle.png",     g_pd3dDevice, DX12::ACID_BOTTLE_CPU         );  break;
                    case 19:    LoadTextureFromFile("icons\\largepickups\\item_acidbucket.png",     g_pd3dDevice, DX12::ACID_BUCKET_CPU         );  break;
                    case 20:    LoadTextureFromFile("icons\\largepickups\\gas_canister.png",        g_pd3dDevice, DX12::CANISTER_CPU            );  break;
                    case 21:    LoadTextureFromFile("icons\\other\\item_Mk_folder.png",             g_pd3dDevice, DX12::DOCUMENT_CPU            );  break;
                    case 22:    LoadTextureFromFile("icons\\inventory\\item_evidence.png",          g_pd3dDevice, DX12::EVIDENCE_CPU            );  break;
                    case 23:    LoadTextureFromFile("icons\\other\\objectif_base_03.png",           g_pd3dDevice, DX12::OBJECTIVE_CPU           );  break;
                    case 24:    LoadTextureFromFile("icons\\largepickups\\item_object.png",         g_pd3dDevice, DX12::MATERIAL_OBJECT_CPU     );  break;
                }
                HalfInt++;
            }
                

            ImGui_ImplDX12_NewFrame( );
            ImGui_ImplWin32_NewFrame( );
            ImGui::NewFrame( );

            Menu::Render( );
            ImGui::Render( );

            UINT backBufferIdx = pSwapChain->GetCurrentBackBufferIndex( );
            ID3D12CommandAllocator* commandAllocator = g_commandAllocators[backBufferIdx];
            commandAllocator->Reset( );

            D3D12_RESOURCE_BARRIER barrier = { };
            barrier.Type = D3D12_RESOURCE_BARRIER_TYPE_TRANSITION;
            barrier.Flags = D3D12_RESOURCE_BARRIER_FLAG_NONE;
            barrier.Transition.pResource = g_mainRenderTargetResource[backBufferIdx];
            barrier.Transition.Subresource = D3D12_RESOURCE_BARRIER_ALL_SUBRESOURCES;
            barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_PRESENT;
            barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_RENDER_TARGET;
            g_pd3dCommandList->Reset(commandAllocator, NULL);
            g_pd3dCommandList->ResourceBarrier(1, &barrier);

            g_pd3dCommandList->OMSetRenderTargets(1, &g_mainRenderTargetDescriptor[backBufferIdx], FALSE, NULL);
            g_pd3dCommandList->SetDescriptorHeaps(1, &g_pd3dSrvDescHeap);
            ImGui_ImplDX12_RenderDrawData(ImGui::GetDrawData( ), g_pd3dCommandList);
            barrier.Transition.StateBefore = D3D12_RESOURCE_STATE_RENDER_TARGET;
            barrier.Transition.StateAfter = D3D12_RESOURCE_STATE_PRESENT;
            g_pd3dCommandList->ResourceBarrier(1, &barrier);
            g_pd3dCommandList->Close();
            g_pd3dCommandQueue->ExecuteCommandLists(1, reinterpret_cast<ID3D12CommandList* const*>(&g_pd3dCommandList));
        }
    }
}

bool IsValid(const SDK::UObject* Object) {
    return SDK::UKismetSystemLibrary::IsValid(Object);
}

#else
#include <Windows.h>
namespace DX12 {
    void Hook(HWND hwnd) { LOG("[!] DirectX12 backend is not enabled!\n"); }
    void Unhook( ) { }
}
#endif
