#include "../../../PCH/PCH.h"

#ifdef ENABLE_BACKEND_DX11

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

#define STB_IMAGE_IMPLEMENTATION
#include "../../../utils/stb_image.h"
#include "../../../Resources/Font/Ubuntu.hpp"

static ID3D11Device* g_pd3dDevice = NULL;
static ID3D11DeviceContext* g_pd3dDeviceContext = NULL;
static ID3D11RenderTargetView* g_pd3dRenderTarget = NULL;
static IDXGISwapChain* g_pSwapChain = NULL;

static void CleanupDeviceD3D11( );
static void CleanupRenderTarget( );
static void RenderImGui_DX11(IDXGISwapChain* pSwapChain);

bool LoadTextureFromDll(int name, ID3D11ShaderResourceView** out_srv) {
    // Load from disk into a raw RGBA buffer
    int image_width = 0;
    int image_height = 0;
    HRSRC hRsrc = FindResource(Utils::TotalInstance, MAKEINTRESOURCE(name), "PNG");
    HGLOBAL hResource = LoadResource(Utils::TotalInstance, hRsrc);
    DWORD size = SizeofResource(Utils::TotalInstance, hRsrc);
    const void* data = LockResource(hResource);

    unsigned char* image_data = stbi_load_from_memory((const unsigned char*)data, size, &image_width, &image_height, NULL, 4);
    if (image_data == NULL)
        return false;

    // Create texture
    D3D11_TEXTURE2D_DESC desc;
    ZeroMemory(&desc, sizeof(desc));
    desc.Width = image_width;
    desc.Height = image_height;
    desc.MipLevels = 1;
    desc.ArraySize = 1;
    desc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    desc.SampleDesc.Count = 1;
    desc.Usage = D3D11_USAGE_DEFAULT;
    desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
    desc.CPUAccessFlags = 0;

    ID3D11Texture2D* pTexture = NULL;
    D3D11_SUBRESOURCE_DATA subResource;
    subResource.pSysMem = image_data;
    subResource.SysMemPitch = desc.Width * 4;
    subResource.SysMemSlicePitch = 0;
    g_pd3dDevice->CreateTexture2D(&desc, &subResource, &pTexture);

    // Create texture view
    D3D11_SHADER_RESOURCE_VIEW_DESC srvDesc;
    ZeroMemory(&srvDesc, sizeof(srvDesc));
    srvDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    srvDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
    srvDesc.Texture2D.MipLevels = desc.MipLevels;
    srvDesc.Texture2D.MostDetailedMip = 0;
    g_pd3dDevice->CreateShaderResourceView(pTexture, &srvDesc, out_srv);
    pTexture->Release( );

    stbi_image_free(image_data);

    return true;
}

static void LoadTextures() {
    Timer timer;
    timer.add(std::chrono::milliseconds(0),     []() { LoadTextureFromDll(IDB_BOTTLE,           &DX11::BOTTLE_TEX            );}, true);
    timer.add(std::chrono::milliseconds(100),   []() { LoadTextureFromDll(IDB_KEY,              &DX11::KEY_TEX               );}, true);
    timer.add(std::chrono::milliseconds(200),   []() { LoadTextureFromDll(IDB_BRICK,            &DX11::BRICK_TEX             );}, true);
    timer.add(std::chrono::milliseconds(300),   []() { LoadTextureFromDll(IDB_ANTIDOTE,         &DX11::ANTIDOTE_TEX          );}, true);
    timer.add(std::chrono::milliseconds(400),   []() { LoadTextureFromDll(IDB_SKILLCHARGE,      &DX11::SKILLCHARGE_TEX       );}, true);
    timer.add(std::chrono::milliseconds(500),   []() { LoadTextureFromDll(IDB_BATTERY,          &DX11::BATTERY_TEX           );}, true);
    timer.add(std::chrono::milliseconds(600),   []() { LoadTextureFromDll(IDB_SMALL_BATTERY,    &DX11::SMALL_BATTERY_TEX     );}, true);
    timer.add(std::chrono::milliseconds(700),   []() { LoadTextureFromDll(IDB_HEAL,             &DX11::HEAL_TEX              );}, true);
    timer.add(std::chrono::milliseconds(800),   []() { LoadTextureFromDll(IDB_HEART,            &DX11::HEART_TEX             );}, true);
    timer.add(std::chrono::milliseconds(900),   []() { LoadTextureFromDll(IDB_ADRENALINE,       &DX11::ADRENALINE_TEX        );}, true);
    timer.add(std::chrono::milliseconds(1000),  []() { LoadTextureFromDll(IDB_TICKET,           &DX11::TICKET_TEX            );}, true);
    timer.add(std::chrono::milliseconds(1100),  []() { LoadTextureFromDll(IDB_SMALL_HEAL,       &DX11::SMALL_HEAL_TEX        );}, true);
    timer.add(std::chrono::milliseconds(1200),  []() { LoadTextureFromDll(IDB_BANDAGE,          &DX11::BANDAGE_TEX           );}, true);
    timer.add(std::chrono::milliseconds(1300),  []() { LoadTextureFromDll(IDB_LOCKPICK,         &DX11::LOCKPICK_TEX          );}, true);
    timer.add(std::chrono::milliseconds(1400),  []() { LoadTextureFromDll(IDB_VALVE,            &DX11::VALVE_TEX             );}, true);
    timer.add(std::chrono::milliseconds(1500),  []() { LoadTextureFromDll(IDB_DIAPO,            &DX11::DIAPO_TEX             );}, true);
    timer.add(std::chrono::milliseconds(1600),  []() { LoadTextureFromDll(IDB_ENEMY,            &DX11::ENEMY_TEX             );}, true);
    timer.add(std::chrono::milliseconds(1700),  []() { LoadTextureFromDll(IDB_KIDS,             &DX11::KIDS_TEX              );}, true);
    timer.add(std::chrono::milliseconds(1800),  []() { LoadTextureFromDll(IDB_ACID_BOTTLE,      &DX11::ACID_BOTTLE_TEX       );}, true);
    timer.add(std::chrono::milliseconds(1900),  []() { LoadTextureFromDll(IDB_ACID_BUCKET,      &DX11::ACID_BUCKET_TEX       );}, true);
    timer.add(std::chrono::milliseconds(2000),  []() { LoadTextureFromDll(IDB_CANISTER,         &DX11::CANISTER_TEX          );}, true);
    timer.add(std::chrono::milliseconds(2100),  []() { LoadTextureFromDll(IDB_DOCUMENT,         &DX11::DOCUMENT_TEX          );}, true);
    timer.add(std::chrono::milliseconds(2200),  []() { LoadTextureFromDll(IDB_EVIDENCE,         &DX11::EVIDENCE_TEX          );}, true);
    timer.add(std::chrono::milliseconds(2300),  []() { LoadTextureFromDll(IDB_OBJECTIVE,        &DX11::OBJECTIVE_TEX         );}, true);
    timer.add(std::chrono::milliseconds(2400),  []() { LoadTextureFromDll(IDB_POSTER,           &DX11::POSTER_TEX            );}, true);
    timer.add(std::chrono::milliseconds(2500),  []() { LoadTextureFromDll(IDB_MATERIAL_OBJECT,  &DX11::MATERIAL_OBJECT_TEX   );}, true);
}

static bool CreateDeviceD3D11(HWND hWnd) {
    // Create the D3DDevice
    DXGI_SWAP_CHAIN_DESC swapChainDesc = { };
    swapChainDesc.Windowed = TRUE;
    swapChainDesc.BufferCount = 2;
    swapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    swapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    swapChainDesc.OutputWindow = hWnd;
    swapChainDesc.SampleDesc.Count = 1;

    const D3D_FEATURE_LEVEL featureLevels[] = {
        D3D_FEATURE_LEVEL_11_0,
        D3D_FEATURE_LEVEL_10_0,
    };
    HRESULT hr = D3D11CreateDeviceAndSwapChain(NULL, D3D_DRIVER_TYPE_NULL, NULL, 0, featureLevels, 2, D3D11_SDK_VERSION, &swapChainDesc, &g_pSwapChain, &g_pd3dDevice, nullptr, nullptr);
    if (hr != S_OK) {
        LOG("[!] D3D11CreateDeviceAndSwapChain() failed. [rv: %lu]\n", hr);
        return false;
    }

    return true;
}

static void CreateRenderTarget(IDXGISwapChain* pSwapChain) {
    ID3D11Texture2D* pBackBuffer = NULL;
    pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    if (pBackBuffer) {
        DXGI_SWAP_CHAIN_DESC sd;
        pSwapChain->GetDesc(&sd);

        D3D11_RENDER_TARGET_VIEW_DESC desc = { };
        desc.Format = static_cast<DXGI_FORMAT>(Utils::GetCorrectDXGIFormat(sd.BufferDesc.Format));
        desc.ViewDimension = D3D11_RTV_DIMENSION_TEXTURE2D;

        g_pd3dDevice->CreateRenderTargetView(pBackBuffer, &desc, &g_pd3dRenderTarget);
        pBackBuffer->Release( );
    }
}

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain*, UINT, UINT)> oPresent;
static HRESULT WINAPI hkPresent(IDXGISwapChain* pSwapChain,
                                UINT SyncInterval,
                                UINT Flags) {
    RenderImGui_DX11(pSwapChain);

    return oPresent(pSwapChain, SyncInterval, Flags);
}

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain*, UINT, UINT, const DXGI_PRESENT_PARAMETERS*)> oPresent1;
static HRESULT WINAPI hkPresent1(IDXGISwapChain* pSwapChain,
                                 UINT SyncInterval,
                                 UINT PresentFlags,
                                 const DXGI_PRESENT_PARAMETERS* pPresentParameters) {
    RenderImGui_DX11(pSwapChain);

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

static std::add_pointer_t<HRESULT WINAPI(IDXGISwapChain*, UINT, UINT, UINT, DXGI_FORMAT, UINT, const UINT*, IUnknown* const*)> oResizeBuffers1;
static HRESULT WINAPI hkResizeBuffers1(IDXGISwapChain* pSwapChain,
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

namespace DX11 {
    void Hook(HWND hwnd) {
        if (!CreateDeviceD3D11(GetConsoleWindow( ))) {
            LOG("[!] CreateDeviceD3D11() failed.\n");
            return;
        }

        LOG("DirectX11: g_pd3dDevice: 0x%p\n", g_pd3dDevice);
        LOG("DirectX11: g_pSwapChain: 0x%p\n", g_pSwapChain);

        if (g_pd3dDevice) {
            Menu::InitializeContext(hwnd);

            // Hook
            IDXGIDevice* pDXGIDevice = NULL;
            g_pd3dDevice->QueryInterface(IID_PPV_ARGS(&pDXGIDevice));

            IDXGIAdapter* pDXGIAdapter = NULL;
            pDXGIDevice->GetAdapter(&pDXGIAdapter);

            IDXGIFactory* pIDXGIFactory = NULL;
            pDXGIAdapter->GetParent(IID_PPV_ARGS(&pIDXGIFactory));

            if (!pIDXGIFactory) {
                LOG("[!] pIDXGIFactory is NULL.\n");
                return;
            }

            pIDXGIFactory->Release( );
            pDXGIAdapter->Release( );
            pDXGIDevice->Release( );

            void** pVTable = *reinterpret_cast<void***>(g_pSwapChain);
            void** pFactoryVTable = *reinterpret_cast<void***>(pIDXGIFactory);

            void* fnCreateSwapChain = pFactoryVTable[10];
            void* fnCreateSwapChainForHwndChain = pFactoryVTable[15];
            void* fnCreateSwapChainForCWindowChain = pFactoryVTable[16];
            void* fnCreateSwapChainForCompChain = pFactoryVTable[24];

            void* fnPresent = pVTable[8];
            void* fnPresent1 = pVTable[22];

            void* fnResizeBuffers = pVTable[13];
            void* fnResizeBuffers1 = pVTable[39];

            CleanupDeviceD3D11( );

            static MH_STATUS cscStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChain), &hkCreateSwapChain, reinterpret_cast<void**>(&oCreateSwapChain));
            static MH_STATUS cschStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChainForHwndChain), &hkCreateSwapChainForHwnd, reinterpret_cast<void**>(&oCreateSwapChainForHwnd));
            static MH_STATUS csccwStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChainForCWindowChain), &hkCreateSwapChainForCoreWindow, reinterpret_cast<void**>(&oCreateSwapChainForCoreWindow));
            static MH_STATUS csccStatus = MH_CreateHook(reinterpret_cast<void**>(fnCreateSwapChainForCompChain), &hkCreateSwapChainForComposition, reinterpret_cast<void**>(&oCreateSwapChainForComposition));

            static MH_STATUS presentStatus = MH_CreateHook(reinterpret_cast<void**>(fnPresent), &hkPresent, reinterpret_cast<void**>(&oPresent));
            static MH_STATUS present1Status = MH_CreateHook(reinterpret_cast<void**>(fnPresent1), &hkPresent1, reinterpret_cast<void**>(&oPresent1));

            static MH_STATUS resizeStatus = MH_CreateHook(reinterpret_cast<void**>(fnResizeBuffers), &hkResizeBuffers, reinterpret_cast<void**>(&oResizeBuffers));
            static MH_STATUS resize1Status = MH_CreateHook(reinterpret_cast<void**>(fnResizeBuffers1), &hkResizeBuffers1, reinterpret_cast<void**>(&oResizeBuffers1));

            MH_EnableHook(fnCreateSwapChain);
            MH_EnableHook(fnCreateSwapChainForHwndChain);
            MH_EnableHook(fnCreateSwapChainForCWindowChain);
            MH_EnableHook(fnCreateSwapChainForCompChain);

            MH_EnableHook(fnPresent);
            MH_EnableHook(fnPresent1);

            MH_EnableHook(fnResizeBuffers);
            MH_EnableHook(fnResizeBuffers1);
        }
    }

    void Unhook( ) {
        if (ImGui::GetCurrentContext( )) {
            if (ImGui::GetIO( ).BackendRendererUserData)
                ImGui_ImplDX11_Shutdown( );

            if (ImGui::GetIO( ).BackendPlatformUserData)
                ImGui_ImplWin32_Shutdown( );

            ImGui::DestroyContext( );
        }

        CleanupDeviceD3D11( );
    }
} // namespace DX11

static void CleanupRenderTarget( ) {
    if (g_pd3dRenderTarget) {
        g_pd3dRenderTarget->Release( );
        g_pd3dRenderTarget = NULL;
    }
}

static void CleanupDeviceD3D11( ) {
    CleanupRenderTarget( );

    if (g_pSwapChain) {
        g_pSwapChain->Release( );
        g_pSwapChain = NULL;
    }
    if (g_pd3dDevice) {
        g_pd3dDevice->Release( );
        g_pd3dDevice = NULL;
    }
    if (g_pd3dDeviceContext) {
        g_pd3dDeviceContext->Release( );
        g_pd3dDeviceContext = NULL;
    }
}

static void RenderImGui_DX11(IDXGISwapChain* pSwapChain) {
    if (!ImGui::GetIO( ).BackendRendererUserData) {
        if (SUCCEEDED(pSwapChain->GetDevice(IID_PPV_ARGS(&g_pd3dDevice)))) {

            ImGui::GetIO( ).WantCaptureMouse || ImGui::GetIO( ).WantTextInput || ImGui::GetIO( ).WantCaptureKeyboard;
            ImGui::GetIO( ).ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

            ImFontConfig cfg;
            cfg.FontDataOwnedByAtlas = false;
            cfg.FontBuilderFlags |= ImGuiFreeTypeBuilderFlags::ImGuiFreeTypeBuilderFlags_ForceAutoHint;
            ImGui::GetIO( ).Fonts->AddFontFromMemoryCompressedBase85TTF(ubuntu_compressed_data_base85, 14.0f, &cfg, ImGui::GetIO( ).Fonts->GetGlyphRangesCyrillic( ));

            g_pd3dDevice->GetImmediateContext(&g_pd3dDeviceContext);
            ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);
        }
    }

    if (!H::bShuttingDown) {
        if (!g_pd3dRenderTarget) {
            CreateRenderTarget(pSwapChain);
        }

        if (ImGui::GetCurrentContext( ) && g_pd3dRenderTarget) {
            if (!Utils::TexturesLoaded) {
                LoadTextures();
                Utils::TexturesLoaded = true;
            }

            ImGui_ImplDX11_NewFrame( );
            ImGui_ImplWin32_NewFrame( );
            ImGui::NewFrame( );

            Menu::Render( );
            ImGui::Render( );

            g_pd3dDeviceContext->OMSetRenderTargets(1, &g_pd3dRenderTarget, NULL);
            ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData( ));
        }
    }
}
#else
#include <Windows.h>
namespace DX11 {
    void Hook(HWND hwnd) { LOG("[!] DirectX11 backend is not enabled!\n"); }
    void Unhook( ) { }
} // namespace DX11
#endif
