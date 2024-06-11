#include "../../../backend.hpp"
#include "../../../console/console.hpp"

#ifdef ENABLE_BACKEND_DX12
#include <Windows.h>

#include <d3d12.h>
#include <dxgi1_4.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")

#include <memory>

//#define STB_IMAGE_IMPLEMENTATION
#include "../../../utils/stb_image.h"

#include "hook_directx12.hpp"

#include "../../../dependencies/imgui/imgui_impl_dx12.h"
#include "../../../dependencies/imgui/imgui_impl_win32.h"
#include "../../../dependencies/minhook/MinHook.h"

#include "../../../utils/utils.hpp"
#include "../../hooks.hpp"

#include "../../../menu/menu.hpp"

#include "../../../SDK/Engine_classes.hpp"
#include "../../../SDK/OPP_classes.hpp"
#include "../../../SDK/CoreUObject_classes.hpp"

#include "../../../../resource.h"

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
    unsigned char rawData[2773] = {
        0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D,
        0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80,
        0x08, 0x03, 0x00, 0x00, 0x00, 0xF4, 0xE0, 0x91, 0xF9, 0x00, 0x00, 0x01,
        0xB6, 0x50, 0x4C, 0x54, 0x45, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x0B,
        0x0B, 0x0B, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 0x05,
        0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x00,
        0x00, 0x00, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x12, 0x12, 0x12, 0x03,
        0x03, 0x03, 0x02, 0x02, 0x02, 0x1C, 0x1C, 0x1C, 0x01, 0x01, 0x01, 0x0B,
        0x0B, 0x0B, 0x01, 0x01, 0x01, 0x0B, 0x0B, 0x0B, 0x13, 0x13, 0x13, 0x07,
        0x07, 0x07, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x14, 0x14, 0x14, 0x00,
        0x00, 0x00, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x02, 0x02, 0x02, 0x1E,
        0x1E, 0x1E, 0x0C, 0x0C, 0x0C, 0x0B, 0x0B, 0x0B, 0x06, 0x06, 0x06, 0x00,
        0x00, 0x00, 0x29, 0x29, 0x29, 0x0E, 0x0E, 0x0E, 0x28, 0x28, 0x28, 0x1C,
        0x1C, 0x1C, 0x00, 0x00, 0x00, 0x1F, 0x1F, 0x1F, 0x07, 0x07, 0x07, 0xB1,
        0xB1, 0xB1, 0x13, 0x13, 0x13, 0x34, 0x34, 0x34, 0x3F, 0x3F, 0x3F, 0x4D,
        0x4D, 0x4D, 0xA5, 0xA5, 0xA5, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x03,
        0x03, 0x03, 0xE7, 0xE7, 0xE7, 0x07, 0x07, 0x07, 0xEE, 0xEE, 0xEE, 0xDE,
        0xDE, 0xDE, 0xD7, 0xD7, 0xD7, 0xEB, 0xEB, 0xEB, 0xF1, 0xF1, 0xF1, 0xED,
        0xED, 0xED, 0xD3, 0xD3, 0xD3, 0xE6, 0xE6, 0xE6, 0xE3, 0xE3, 0xE3, 0xE0,
        0xE0, 0xE0, 0xEA, 0xEA, 0xEA, 0xE9, 0xE9, 0xE9, 0xD0, 0xD0, 0xD0, 0x10,
        0x10, 0x10, 0xD5, 0xD5, 0xD5, 0xD9, 0xD9, 0xD9, 0xBD, 0xBD, 0xBD, 0xE1,
        0xE1, 0xE1, 0xCA, 0xCA, 0xCA, 0xC0, 0xC0, 0xC0, 0xE4, 0xE4, 0xE4, 0xDD,
        0xDD, 0xDD, 0xDC, 0xDC, 0xDC, 0xE5, 0xE5, 0xE5, 0xDA, 0xDA, 0xDA, 0x0A,
        0x0A, 0x0A, 0xCF, 0xCF, 0xCF, 0xC8, 0xC8, 0xC8, 0xC6, 0xC6, 0xC6, 0x0C,
        0x0C, 0x0C, 0xF5, 0xF5, 0xF5, 0xF3, 0xF3, 0xF3, 0xF0, 0xF0, 0xF0, 0xD2,
        0xD2, 0xD2, 0xCD, 0xCD, 0xCD, 0xC2, 0xC2, 0xC2, 0x0E, 0x0E, 0x0E, 0xB9,
        0xB9, 0xB9, 0x15, 0x15, 0x15, 0xE2, 0xE2, 0xE2, 0xB4, 0xB4, 0xB4, 0xCC,
        0xCC, 0xCC, 0xBA, 0xBA, 0xBA, 0xAC, 0xAC, 0xAC, 0xDB, 0xDB, 0xDB, 0x1F,
        0x1F, 0x1F, 0x1B, 0x1B, 0x1B, 0xAE, 0xAE, 0xAE, 0x9D, 0x9D, 0x9D, 0x8B,
        0x8B, 0x8B, 0x31, 0x31, 0x31, 0x7C, 0x7C, 0x7C, 0x4C, 0x4C, 0x4C, 0xA9,
        0xA9, 0xA9, 0x84, 0x84, 0x84, 0x13, 0x13, 0x13, 0xCE, 0xCE, 0xCE, 0x2A,
        0x2A, 0x2A, 0x21, 0x21, 0x21, 0x18, 0x18, 0x18, 0x37, 0x37, 0x37, 0xC4,
        0xC4, 0xC4, 0xB6, 0xB6, 0xB6, 0xA6, 0xA6, 0xA6, 0xA1, 0xA1, 0xA1, 0x93,
        0x93, 0x93, 0x98, 0x98, 0x98, 0x77, 0x77, 0x77, 0x5F, 0x5F, 0x5F, 0x51,
        0x51, 0x51, 0x40, 0x40, 0x40, 0xC5, 0xC5, 0xC5, 0x88, 0x88, 0x88, 0x66,
        0x66, 0x66, 0x5A, 0x5A, 0x5A, 0x3B, 0x3B, 0x3B, 0x26, 0x26, 0x26, 0xBF,
        0xBF, 0xBF, 0xA3, 0xA3, 0xA3, 0x6D, 0x6D, 0x6D, 0xB1, 0xB1, 0xB1, 0x73,
        0x73, 0x73, 0x57, 0x57, 0x57, 0x81, 0x81, 0x81, 0x74, 0x74, 0x74, 0x6C,
        0x6C, 0x6C, 0x46, 0x46, 0x46, 0xF9, 0xF9, 0xF9, 0x17, 0x17, 0x17, 0x81,
        0x78, 0x3D, 0xF3, 0x00, 0x00, 0x00, 0x35, 0x74, 0x52, 0x4E, 0x53, 0x00,
        0x04, 0x08, 0x6C, 0xFC, 0x95, 0x70, 0x46, 0x24, 0xFB, 0xB7, 0xDC, 0xDA,
        0x6C, 0x34, 0xCA, 0xB5, 0x77, 0x1A, 0x10, 0xDD, 0xB8, 0xB5, 0x85, 0xE4,
        0xD3, 0xC3, 0xBA, 0xA3, 0x91, 0x7C, 0x67, 0x57, 0x53, 0x49, 0x3C, 0x2B,
        0xFC, 0xF1, 0xDC, 0xD0, 0xA5, 0xA4, 0x5C, 0x59, 0x4C, 0xFE, 0xE3, 0xD6,
        0xB7, 0xAE, 0x56, 0x10, 0x82, 0xD8, 0x87, 0x92, 0x00, 0x00, 0x08, 0x99,
        0x49, 0x44, 0x41, 0x54, 0x78, 0xDA, 0xED, 0xDA, 0xD5, 0x92, 0xE3, 0x46,
        0x14, 0x06, 0x60, 0x0D, 0x25, 0x33, 0xBB, 0x59, 0x08, 0x33, 0x33, 0xE3,
        0x69, 0x12, 0xB3, 0x64, 0x99, 0x99, 0x99, 0xC6, 0x1E, 0x66, 0xE6, 0x59,
        0x0A, 0xBF, 0x71, 0x34, 0xC9, 0x45, 0x1E, 0x20, 0x91, 0xF6, 0xC6, 0x5F,
        0xF9, 0xC2, 0xE5, 0x9B, 0xFE, 0xCB, 0x5D, 0x47, 0x3A, 0xDD, 0x75, 0xB8,
        0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0xFF, 0xD7,
        0xD4, 0x14, 0xF7, 0x14, 0xDC, 0x7D, 0xFE, 0xEE, 0x8B, 0xDC, 0xD3, 0x73,
        0xF7, 0x1E, 0x02, 0x80, 0x4F, 0x5E, 0x79, 0x9E, 0x7B, 0x4A, 0xEE, 0x21,
        0x04, 0x3E, 0x84, 0xD0, 0x1B, 0xAF, 0x3E, 0x8D, 0x0D, 0x98, 0x01, 0x80,
        0x34, 0x00, 0x10, 0xD2, 0x20, 0x00, 0xAF, 0xBF, 0xC3, 0x85, 0xED, 0x33,
        0x20, 0xB0, 0xBC, 0x91, 0x06, 0x02, 0xA4, 0x06, 0xBE, 0x37, 0xB9, 0x90,
        0x01, 0xE4, 0xC9, 0x7E, 0xD4, 0x7E, 0x78, 0x05, 0x0D, 0xB8, 0x31, 0x1B,
        0xF2, 0x7F, 0xF0, 0x21, 0x01, 0xD8, 0xD8, 0x8D, 0x5E, 0x8D, 0x9C, 0x93,
        0xF1, 0xF5, 0xE9, 0x9A, 0x1F, 0xE0, 0x75, 0x2E, 0x54, 0x33, 0x35, 0x20,
        0xE3, 0x8B, 0x5D, 0x4A, 0xEB, 0xAC, 0x7E, 0xB1, 0xBA, 0x4C, 0x60, 0x76,
        0x36, 0xDC, 0x92, 0x7C, 0x8E, 0xD4, 0x1A, 0xBF, 0x1C, 0x0C, 0x69, 0x6F,
        0xF8, 0x68, 0x38, 0x5A, 0x5D, 0x02, 0x34, 0xFB, 0x1C, 0x17, 0xA6, 0x79,
        0x80, 0x5A, 0xFF, 0x4C, 0x29, 0x2F, 0xEE, 0xB5, 0x47, 0x47, 0x8F, 0x8E,
        0x96, 0x11, 0x9A, 0x7D, 0x95, 0x0B, 0xD3, 0x9D, 0x71, 0x8D, 0x1C, 0xDB,
        0xDE, 0x70, 0x4F, 0x31, 0xC4, 0xF6, 0xD1, 0x45, 0x1F, 0xC1, 0xEC, 0xB3,
        0x5C, 0x98, 0xEE, 0x8F, 0x1B, 0x83, 0x83, 0x8E, 0xBC, 0x32, 0x2C, 0xAB,
        0xBB, 0xF2, 0xD2, 0x31, 0x02, 0x98, 0xE5, 0x42, 0xB5, 0x69, 0xE5, 0x6B,
        0xD9, 0x0E, 0x6B, 0x8D, 0x98, 0x21, 0x2B, 0x4B, 0xDB, 0x00, 0x70, 0x8F,
        0x0B, 0xD3, 0xB3, 0x96, 0x05, 0xE3, 0x26, 0x6D, 0xB7, 0xDB, 0x39, 0x5E,
        0xA1, 0xC7, 0x03, 0x40, 0xF0, 0x3E, 0x17, 0xA6, 0xB7, 0xFD, 0x00, 0x4F,
        0xEC, 0xFD, 0x36, 0x33, 0xDA, 0xB9, 0x2E, 0x7D, 0x44, 0x00, 0xA1, 0x70,
        0x8B, 0xF0, 0xB6, 0x45, 0xFA, 0x3B, 0x3B, 0xAE, 0xAE, 0x53, 0x0D, 0x57,
        0xA5, 0x13, 0x00, 0x78, 0x89, 0x0B, 0xD3, 0xFC, 0xD6, 0x16, 0xF4, 0x15,
        0xCD, 0xC1, 0x49, 0x4A, 0x8B, 0x52, 0xE1, 0x14, 0x20, 0x3D, 0xC3, 0x85,
        0x69, 0x86, 0x58, 0xE4, 0x67, 0x45, 0xD3, 0x92, 0x98, 0x16, 0x0A, 0x92,
        0xD4, 0x07, 0x80, 0x79, 0x2E, 0x4C, 0xB7, 0xC0, 0xB2, 0x16, 0x25, 0x45,
        0x49, 0x96, 0x1D, 0x3F, 0x00, 0x0F, 0x9B, 0x8D, 0xDB, 0x5C, 0x98, 0xE6,
        0x09, 0xC9, 0xAF, 0xF1, 0x11, 0x8C, 0x25, 0xB9, 0x52, 0x2C, 0x68, 0x4B,
        0x90, 0x3F, 0xBD, 0x3F, 0xCD, 0x85, 0x68, 0x0E, 0x00, 0xAE, 0x8A, 0x62,
        0x51, 0x2C, 0x89, 0x62, 0xA1, 0x24, 0xFF, 0x6E, 0xE5, 0xAF, 0xDF, 0x0B,
        0x33, 0xC0, 0xCC, 0x2C, 0x10, 0x78, 0x58, 0x12, 0xA9, 0x20, 0x15, 0x7D,
        0xBA, 0x65, 0xE5, 0xF3, 0xD3, 0xE1, 0x05, 0x98, 0x79, 0x6E, 0x76, 0x96,
        0x90, 0x2B, 0x9E, 0x51, 0x2C, 0x14, 0x8B, 0x85, 0x82, 0xF8, 0xC0, 0x82,
        0xAD, 0x1F, 0x42, 0x0A, 0x30, 0x3D, 0x3D, 0x3D, 0x07, 0x5B, 0xA8, 0x36,
        0x6E, 0x74, 0x23, 0xAC, 0x52, 0x61, 0xFE, 0x0E, 0x50, 0x75, 0x75, 0x63,
        0xF9, 0xE8, 0x47, 0x2E, 0x1C, 0xD3, 0x5F, 0xDF, 0x5E, 0x43, 0x0D, 0xD4,
        0x18, 0x77, 0xDD, 0x32, 0x8D, 0xC5, 0x62, 0x92, 0xAC, 0x88, 0xF4, 0xB2,
        0xB1, 0xDD, 0xFF, 0x2A, 0xA4, 0x83, 0xC9, 0x07, 0x7D, 0x42, 0x10, 0x21,
        0x27, 0xE5, 0x54, 0x2A, 0x65, 0x16, 0x0A, 0x54, 0xF0, 0x4B, 0x21, 0x79,
        0x99, 0x06, 0xF2, 0x5E, 0x38, 0x01, 0x5E, 0xF8, 0x74, 0x8D, 0x10, 0x38,
        0x59, 0x3D, 0x8C, 0x44, 0x52, 0xDD, 0x7D, 0x57, 0xAE, 0xB0, 0x42, 0x41,
        0x48, 0x1E, 0xDF, 0x04, 0xE0, 0x42, 0x71, 0x9F, 0x00, 0x81, 0x43, 0xE3,
        0xAC, 0x93, 0x12, 0x25, 0x73, 0xF8, 0x30, 0x93, 0x95, 0x25, 0x49, 0x14,
        0x9F, 0x58, 0x40, 0xE6, 0xB8, 0x30, 0xCC, 0x10, 0xD8, 0xDA, 0x58, 0xA5,
        0x34, 0xF1, 0x20, 0x56, 0x94, 0xA4, 0xA4, 0x61, 0x88, 0x05, 0x2C, 0x88,
        0xE2, 0xA2, 0x1F, 0x80, 0xCC, 0x70, 0x21, 0xB8, 0x05, 0xB0, 0xBD, 0x6A,
        0x27, 0x28, 0x6F, 0x8A, 0x85, 0xA2, 0x94, 0x14, 0x0B, 0x85, 0x82, 0xCD,
        0xFC, 0x00, 0xA7, 0x27, 0xA7, 0x97, 0xDF, 0x73, 0xC1, 0x9B, 0xB7, 0x08,
        0xB1, 0x3C, 0x8F, 0xA7, 0x46, 0x33, 0x96, 0x14, 0x71, 0xD2, 0x89, 0x8B,
        0x02, 0x4E, 0x09, 0xE2, 0x68, 0x71, 0xBC, 0xB9, 0x49, 0x82, 0xEF, 0x08,
        0xA7, 0x9E, 0x49, 0xA7, 0x61, 0x03, 0x63, 0xC1, 0x30, 0x9A, 0xD9, 0xAC,
        0x20, 0x18, 0x3B, 0xB2, 0xA1, 0x48, 0x75, 0x96, 0x3C, 0x8C, 0x5E, 0x5C,
        0x43, 0x3E, 0xF8, 0x9E, 0x78, 0xEA, 0x65, 0x48, 0xE7, 0x57, 0x30, 0x6E,
        0xF2, 0xBA, 0xE0, 0xF0, 0x11, 0x5D, 0x4B, 0xA5, 0x62, 0xD8, 0xA0, 0x7A,
        0xD3, 0xED, 0xB5, 0x2F, 0xF3, 0xD7, 0xDF, 0x71, 0x41, 0x9B, 0x6A, 0xC0,
        0x66, 0x9E, 0x56, 0x2A, 0xBA, 0xAA, 0xAB, 0x8E, 0x2A, 0x24, 0xE4, 0x18,
        0x2E, 0x8A, 0x82, 0x5E, 0x12, 0x75, 0x5D, 0x5C, 0xDE, 0xCA, 0x9F, 0xBE,
        0xC0, 0x05, 0x6C, 0xA6, 0x01, 0x8D, 0x01, 0x73, 0xA9, 0x64, 0xC4, 0x62,
        0x4C, 0x17, 0xD4, 0x78, 0x5C, 0x28, 0x52, 0x91, 0xE2, 0xA4, 0x6F, 0x19,
        0x20, 0xF8, 0xA6, 0xF4, 0xF3, 0x41, 0x1A, 0x1E, 0xC5, 0xE3, 0xD4, 0xD0,
        0x30, 0xC3, 0xA2, 0x68, 0x98, 0xBC, 0x20, 0x52, 0x5A, 0x12, 0x4B, 0x46,
        0x5C, 0x5D, 0x42, 0x08, 0xBD, 0xCB, 0x05, 0xEC, 0x5B, 0x48, 0xAF, 0xA9,
        0x2A, 0xC6, 0xAA, 0x86, 0x79, 0xD9, 0xE8, 0xB5, 0xB5, 0xA4, 0x20, 0xD0,
        0x92, 0xDF, 0x15, 0x08, 0x7C, 0xEA, 0x11, 0x02, 0xB8, 0xC3, 0x05, 0xEB,
        0xC3, 0x34, 0xC0, 0x40, 0x92, 0x24, 0xB9, 0x9D, 0x70, 0x78, 0x3E, 0x2E,
        0xB7, 0x05, 0x93, 0x37, 0xA4, 0x9E, 0x2D, 0x15, 0xA8, 0x90, 0xDC, 0x46,
        0x00, 0x77, 0xB9, 0x60, 0x3D, 0x03, 0x6B, 0x70, 0x2A, 0x49, 0x6A, 0x36,
        0xE7, 0x30, 0xCD, 0xC0, 0x72, 0x5B, 0xE5, 0xD5, 0x92, 0xA4, 0x95, 0x25,
        0x91, 0x0A, 0x2C, 0x8F, 0x08, 0xE2, 0x02, 0xF6, 0x32, 0x6C, 0x59, 0x2D,
        0xC1, 0x60, 0xFC, 0x7A, 0xCA, 0x10, 0xB0, 0xA6, 0xF1, 0x8A, 0xA0, 0x89,
        0x54, 0x54, 0x14, 0x1C, 0x89, 0x30, 0x80, 0xCD, 0xC0, 0xCF, 0x05, 0x04,
        0x21, 0x8B, 0x96, 0x24, 0x99, 0xE7, 0x53, 0x8A, 0xA2, 0x50, 0x8C, 0xB1,
        0x62, 0x88, 0x54, 0xF3, 0x03, 0xD8, 0x89, 0x11, 0x40, 0xFA, 0x73, 0x2E,
        0x58, 0x77, 0x48, 0x9A, 0xF4, 0x69, 0x49, 0x60, 0xA6, 0x56, 0x2E, 0x2B,
        0x38, 0x2E, 0xFB, 0xEB, 0xD3, 0x52, 0xAE, 0xAA, 0x2B, 0x91, 0x44, 0x62,
        0x03, 0x00, 0xBE, 0xE2, 0x82, 0x75, 0xDF, 0xAA, 0x91, 0x5F, 0xA9, 0x54,
        0xA2, 0x8A, 0xA2, 0x46, 0xF9, 0x54, 0x2E, 0x25, 0x96, 0x52, 0x4D, 0xCD,
        0xCD, 0x29, 0x6A, 0xC2, 0x4E, 0x80, 0x2F, 0xE8, 0xE7, 0xD0, 0x6D, 0x0B,
        0x11, 0x4C, 0x4B, 0x25, 0x8A, 0x85, 0x98, 0x57, 0x56, 0xD6, 0x6D, 0x1C,
        0x91, 0x59, 0xCF, 0x5F, 0x5C, 0x73, 0x32, 0x59, 0x40, 0xE8, 0x5E, 0xC0,
        0x1D, 0xD1, 0xB3, 0x04, 0x60, 0x4B, 0x90, 0xFC, 0xB2, 0xD7, 0x63, 0x98,
        0x77, 0x13, 0x2A, 0x56, 0xCD, 0x08, 0x53, 0x35, 0x4D, 0x31, 0x98, 0xB3,
        0xEC, 0x07, 0x98, 0x0B, 0x38, 0xC0, 0xCC, 0x16, 0x90, 0x65, 0x89, 0xD2,
        0x22, 0xC5, 0x11, 0x01, 0xDB, 0xBC, 0x4A, 0xC5, 0x48, 0xB4, 0x27, 0xA8,
        0x58, 0x51, 0x99, 0x63, 0xF9, 0x01, 0xBE, 0x0E, 0x38, 0xC0, 0x2D, 0x02,
        0xA4, 0x23, 0x61, 0x83, 0x16, 0xFD, 0x00, 0xB1, 0x44, 0xC4, 0xC1, 0xCE,
        0xE3, 0x95, 0x68, 0xA6, 0xA7, 0x33, 0x9B, 0x61, 0x0B, 0xA1, 0x97, 0x02,
        0x6E, 0x4A, 0x7F, 0x5A, 0x58, 0x18, 0x6C, 0x62, 0x8C, 0x75, 0x2A, 0xEA,
        0x86, 0x64, 0x9B, 0x9A, 0x2B, 0xEC, 0xB5, 0x64, 0x37, 0x8A, 0xA9, 0xFF,
        0xDB, 0xEA, 0x5A, 0x1A, 0xBD, 0xC5, 0x05, 0xEB, 0xFD, 0xC1, 0x60, 0xE1,
        0x84, 0x52, 0x2A, 0x49, 0x54, 0xC5, 0x52, 0xDC, 0x14, 0xB2, 0x8A, 0xA8,
        0xC4, 0x95, 0xB8, 0x83, 0xFD, 0x93, 0xD9, 0x78, 0x50, 0x43, 0xCF, 0x70,
        0xC1, 0x7A, 0x6B, 0x61, 0x61, 0xE1, 0xC2, 0xF1, 0x03, 0x88, 0x52, 0x2E,
        0x65, 0x4A, 0x71, 0x45, 0xD1, 0xC4, 0xA6, 0x9C, 0xF1, 0xAA, 0xCC, 0xC3,
        0x7A, 0x7F, 0x90, 0x46, 0x5C, 0xC0, 0x5E, 0x5B, 0xB8, 0xBA, 0x4A, 0x75,
        0x76, 0x52, 0xBA, 0xC8, 0x0E, 0x46, 0x51, 0x29, 0xA2, 0x29, 0x9A, 0xD2,
        0x94, 0x73, 0x2B, 0x97, 0xA3, 0xB2, 0x53, 0xB5, 0x10, 0xBC, 0xC1, 0x05,
        0x6B, 0x1E, 0xA0, 0xBF, 0x2C, 0x54, 0xDC, 0xB8, 0x50, 0x8A, 0x2D, 0xAE,
        0x76, 0x8C, 0x12, 0x2F, 0xD3, 0x5E, 0x45, 0xE5, 0x73, 0xA3, 0x7D, 0x8A,
        0x97, 0x11, 0x42, 0x41, 0x37, 0x84, 0x77, 0x00, 0x60, 0xBB, 0x5A, 0x69,
        0x36, 0x4B, 0x42, 0x26, 0x53, 0x61, 0x42, 0x91, 0x31, 0xDA, 0x2B, 0xAB,
        0xBC, 0xC9, 0x28, 0xC5, 0x79, 0x3F, 0x40, 0xD0, 0x2D, 0xF1, 0xFD, 0x1A,
        0xAA, 0x2D, 0xAD, 0xB8, 0xCD, 0x2A, 0x8B, 0x3D, 0x48, 0x15, 0x4A, 0xA5,
        0x52, 0x4C, 0xEE, 0xB1, 0xF2, 0x63, 0xD7, 0xC4, 0xF8, 0xEF, 0x00, 0xAF,
        0x71, 0x01, 0xB3, 0x6A, 0xE9, 0xC6, 0xB0, 0xCC, 0x0B, 0xD5, 0x4C, 0xAA,
        0x1E, 0x2B, 0x18, 0x49, 0xD6, 0xCB, 0x74, 0x32, 0xFC, 0x62, 0xCB, 0x34,
        0xEB, 0xD9, 0x25, 0x3F, 0xC0, 0x2B, 0x5C, 0x90, 0xA6, 0xA6, 0x9E, 0x01,
        0xD8, 0xDC, 0xB4, 0xCB, 0xF5, 0x7A, 0x7D, 0xD4, 0x5D, 0x7A, 0xC0, 0x54,
        0x41, 0xA5, 0x31, 0x93, 0x09, 0x9D, 0x6E, 0xC7, 0x3E, 0xAB, 0xF7, 0x01,
        0x20, 0xD0, 0x22, 0xF4, 0x03, 0xBC, 0xBC, 0x06, 0x1B, 0x8F, 0x5C, 0xEF,
        0xE0, 0x89, 0x77, 0xD8, 0x7E, 0xC0, 0x76, 0x33, 0x3D, 0x3E, 0x1B, 0xC5,
        0xB1, 0x44, 0xF6, 0x9B, 0xAC, 0x6D, 0xDA, 0xE0, 0x0B, 0xF4, 0x76, 0xC4,
        0x0F, 0x70, 0x7B, 0xBB, 0x56, 0xF3, 0xAA, 0xD5, 0xBA, 0x97, 0xAC, 0x3B,
        0x49, 0xE6, 0xCA, 0x32, 0x96, 0x3B, 0x51, 0xB3, 0x72, 0x13, 0x83, 0xD5,
        0x01, 0xE0, 0xCD, 0x80, 0x03, 0x7C, 0xB4, 0xBD, 0x56, 0x6B, 0x60, 0xCD,
        0xDB, 0x2B, 0x4B, 0x67, 0x6D, 0xD6, 0xF6, 0xA2, 0xBD, 0x0C, 0xB3, 0x63,
        0xB2, 0x9C, 0xA8, 0xEC, 0xFF, 0x76, 0x70, 0x75, 0xB3, 0x03, 0x01, 0x07,
        0xB8, 0xB3, 0xD9, 0x40, 0xA7, 0x2C, 0xB6, 0xDE, 0xCA, 0x3A, 0x95, 0x72,
        0x32, 0x97, 0xAB, 0x96, 0x77, 0xD7, 0x31, 0x6F, 0xF3, 0xAE, 0xBB, 0xF2,
        0xF3, 0x62, 0x03, 0x00, 0x02, 0x2E, 0xC2, 0x9B, 0x33, 0x21, 0xDA, 0x8F,
        0x97, 0xAB, 0x87, 0xF5, 0x6C, 0x6B, 0x35, 0x19, 0xED, 0xF1, 0xB9, 0x4E,
        0xB4, 0x52, 0x2D, 0x67, 0xCE, 0x5A, 0x2E, 0x63, 0x8D, 0xE0, 0xAF, 0xA9,
        0xA7, 0x00, 0x00, 0xB1, 0x72, 0x66, 0xE5, 0xFC, 0xA1, 0x5B, 0x3F, 0x8E,
        0x3A, 0x91, 0x72, 0x86, 0xF7, 0x2A, 0xBC, 0xE7, 0x99, 0x6E, 0x95, 0xAD,
        0x02, 0x40, 0xD0, 0xB7, 0x23, 0x7E, 0x11, 0xC2, 0x26, 0x8E, 0xC7, 0xEB,
        0x43, 0x39, 0x1B, 0x7D, 0x72, 0x18, 0xCD, 0xF0, 0xB1, 0x88, 0xCB, 0xC7,
        0xED, 0x9C, 0xC7, 0x9C, 0xEC, 0x46, 0x08, 0xF7, 0xE4, 0x6F, 0x21, 0x80,
        0x27, 0xAC, 0x2C, 0x47, 0xA3, 0x11, 0x96, 0x3D, 0x3F, 0xAF, 0xEF, 0xE6,
        0x3C, 0x8D, 0xF7, 0x6C, 0x35, 0x6E, 0xDB, 0x11, 0x6F, 0x0D, 0xE0, 0x13,
        0x2E, 0x60, 0xAF, 0xD5, 0x00, 0x32, 0x99, 0xAC, 0x57, 0x71, 0x92, 0x91,
        0x75, 0x77, 0xE5, 0xF1, 0xCE, 0xEE, 0x5E, 0x2E, 0x5A, 0x35, 0x59, 0x24,
        0xA2, 0xAE, 0x3F, 0xDE, 0xBA, 0xDE, 0xFE, 0x8C, 0x0B, 0x18, 0x20, 0x40,
        0x8F, 0xA3, 0x3B, 0x2C, 0x6B, 0x27, 0xD5, 0x14, 0xAB, 0x46, 0xB5, 0x9D,
        0xBD, 0xD6, 0x3A, 0x6F, 0x32, 0x23, 0xE1, 0x24, 0x7E, 0x27, 0xD7, 0xD7,
        0x6F, 0x73, 0xC1, 0xFA, 0x12, 0x00, 0xAC, 0x5F, 0x32, 0x1E, 0x8E, 0xBA,
        0x09, 0x7B, 0x3D, 0x99, 0x5A, 0x8F, 0xC9, 0xBB, 0x9E, 0xAC, 0x46, 0x22,
        0xF2, 0x3A, 0xCF, 0x5B, 0x60, 0x59, 0x41, 0xBF, 0x09, 0x6F, 0x01, 0xC0,
        0xF1, 0x32, 0x8E, 0x09, 0x15, 0x86, 0xE5, 0x3D, 0x5E, 0x93, 0x73, 0xF1,
        0xAA, 0x97, 0xCB, 0x38, 0xCD, 0x88, 0x27, 0xF3, 0x79, 0x80, 0x4F, 0xB9,
        0x80, 0x81, 0xAF, 0xBB, 0x2D, 0x0B, 0x82, 0x16, 0x33, 0x14, 0x39, 0x91,
        0xD0, 0x65, 0x33, 0x25, 0xCB, 0x4D, 0xC7, 0x8B, 0xF2, 0xFC, 0xAF, 0x90,
        0x0F, 0xBC, 0x08, 0xE7, 0x00, 0x60, 0xF0, 0x60, 0x7C, 0x10, 0xA3, 0x9A,
        0x21, 0x68, 0xBA, 0x12, 0x4D, 0x48, 0xF1, 0x94, 0x4C, 0xA9, 0x59, 0xF5,
        0x32, 0x72, 0xDF, 0x0F, 0x10, 0x74, 0x3B, 0xFA, 0x0A, 0x00, 0xFC, 0xAA,
        0x5E, 0x5E, 0xFA, 0xAB, 0x0A, 0x86, 0xA4, 0xEB, 0x3C, 0x2F, 0x4A, 0x5E,
        0x45, 0xD2, 0xBA, 0xAD, 0x5C, 0x74, 0x05, 0x01, 0xC0, 0x14, 0x17, 0x2C,
        0xF0, 0xFD, 0x81, 0x97, 0x96, 0x95, 0xDC, 0x6E, 0x44, 0x10, 0x74, 0x15,
        0x53, 0x3E, 0x93, 0xC2, 0x82, 0xB3, 0xD2, 0x5D, 0xC9, 0x2D, 0x12, 0xD2,
        0x7F, 0x85, 0x0B, 0xD6, 0x3C, 0x00, 0xE4, 0x55, 0x9A, 0x5B, 0x4E, 0x98,
        0x76, 0x5C, 0xC0, 0x38, 0x81, 0xF5, 0x4C, 0x45, 0xC7, 0x55, 0xD3, 0xCC,
        0x2D, 0xD6, 0x7F, 0xF7, 0x03, 0x04, 0xFD, 0x18, 0xFC, 0x00, 0xD2, 0xF0,
        0xE7, 0x3A, 0x4E, 0x2C, 0x9A, 0x4A, 0xCC, 0x8E, 0x9B, 0x39, 0x4D, 0xA4,
        0x4D, 0x96, 0x68, 0x9A, 0xF1, 0xB8, 0x63, 0xDB, 0x35, 0x44, 0x02, 0xBF,
        0xA1, 0x9D, 0xF3, 0x03, 0x9C, 0xE8, 0xEE, 0xE8, 0x60, 0x51, 0x89, 0xB8,
        0x67, 0xBC, 0x6B, 0xB6, 0x1D, 0x41, 0xA9, 0x28, 0x82, 0x80, 0x9B, 0xA2,
        0xD8, 0x20, 0x84, 0x70, 0x01, 0x7B, 0x1E, 0x00, 0x8E, 0xE4, 0xF3, 0xAE,
        0x7B, 0xD4, 0xED, 0x98, 0x3B, 0xC3, 0xD6, 0xD9, 0x41, 0x97, 0xA9, 0x3C,
        0x2F, 0xEA, 0xD9, 0x3A, 0x5B, 0x25, 0x08, 0x6E, 0x71, 0x01, 0xBB, 0x0B,
        0x00, 0x6B, 0xD1, 0xA3, 0x2E, 0x3B, 0xE9, 0x66, 0x87, 0x0F, 0x0F, 0xE3,
        0x2D, 0x37, 0x69, 0xF3, 0xBA, 0x44, 0x71, 0x36, 0x13, 0xDD, 0x40, 0x08,
        0x66, 0xB8, 0xA0, 0x3D, 0x07, 0x00, 0x83, 0xA3, 0xDF, 0x5A, 0xC7, 0xE7,
        0xC2, 0xF0, 0xE1, 0x4A, 0xAB, 0xB5, 0xB4, 0xC8, 0x4B, 0xBA, 0xE7, 0x68,
        0x12, 0x6B, 0x91, 0x74, 0x0D, 0xB8, 0xC0, 0x3D, 0x0F, 0x3E, 0x44, 0xB6,
        0xCF, 0xCF, 0x77, 0x3A, 0x9D, 0xE1, 0x6F, 0x7B, 0x4B, 0x7B, 0xCC, 0x1C,
        0xE6, 0x9C, 0x04, 0x9F, 0x69, 0x11, 0x84, 0x82, 0xDD, 0x81, 0x7F, 0x1F,
        0x85, 0x79, 0x20, 0x00, 0xFD, 0xF1, 0x7E, 0xEF, 0xE7, 0x9F, 0xF7, 0x9B,
        0xF8, 0xF0, 0xC0, 0xAD, 0xBA, 0x9D, 0xD6, 0x18, 0x21, 0x14, 0xC6, 0xF0,
        0x94, 0x9F, 0xC0, 0x67, 0x01, 0xA4, 0x01, 0xD6, 0xC6, 0xBF, 0x64, 0xB3,
        0x3C, 0x1E, 0x1E, 0xAF, 0x9A, 0x9D, 0x2E, 0xF2, 0x7D, 0xC8, 0x85, 0xE1,
        0x83, 0xB7, 0x6F, 0x13, 0xF8, 0x67, 0x62, 0xCD, 0x5F, 0x73, 0xB0, 0x74,
        0x71, 0xB1, 0x38, 0xDA, 0xEF, 0x2E, 0xF9, 0xDF, 0xC3, 0x1B, 0xDE, 0x7A,
        0xE1, 0xCB, 0x37, 0x88, 0xBF, 0x20, 0x80, 0xFF, 0x21, 0x83, 0xC1, 0xC6,
        0x68, 0x34, 0xBE, 0x09, 0x13, 0xEA, 0x28, 0xE3, 0x0B, 0xEF, 0xDE, 0xFB,
        0xF8, 0x63, 0x42, 0x00, 0xC0, 0x4A, 0x43, 0x1E, 0x6E, 0x3C, 0x17, 0xFA,
        0x3C, 0xE7, 0xDD, 0x99, 0x5B, 0xB0, 0x95, 0x4E, 0x23, 0x80, 0xFC, 0xCD,
        0xFA, 0xCF, 0x72, 0x4F, 0xC1, 0xFC, 0x9D, 0x37, 0x2D, 0x04, 0xF9, 0x0D,
        0x80, 0xB9, 0xA7, 0x35, 0xCF, 0x3A, 0x3D, 0xFD, 0xD1, 0x33, 0x5F, 0x7C,
        0xF1, 0xEE, 0x47, 0xDC, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4,
        0xC4, 0xC4, 0x7F, 0xF4, 0x17, 0x1D, 0x19, 0x9F, 0xBD, 0x5A, 0x20, 0xFD,
        0x75, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60,
        0x82};
    HRSRC hRsrc = FindResource(NULL, MAKEINTRESOURCE(IDB_PNG1), "PNG");

    HGLOBAL hGlob1 = LoadResource(NULL, hRsrc);

    int size = SizeofResource(NULL, hRsrc);

    HGLOBAL hGlobal = GlobalAlloc(GMEM_FIXED, size);

    unsigned char* data = (unsigned char*)LockResource(hGlob1);
    //unsigned char* bufferr = new unsigned char[size];
    //memcpy(bufferr, resPtr, size);
    //std::cout << data << std::endl;
    unsigned char* image_data = stbi_load_from_memory(data, size, &image_width, &image_height, NULL, 4);
    
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
        //Console::Alloc( );
       // AllocConsole( );
        if (!CreateDeviceD3D12(GetConsoleWindow())) {
            LOG("[!] CreateDeviceD3D12() failed.\n");
          //  Console::Free( );
            return;
        }
        //PostMessage(GetConsoleWindow( ), WM_CLOSE, 0, 0);
        //FreeConsole( );
    
        LOG("[+] DirectX12: g_pd3dDevice: 0x%p\n", g_pd3dDevice);
        LOG("[+] DirectX12: g_dxgiFactory: 0x%p\n", g_dxgiFactory);
        LOG("[+] DirectX12: g_pd3dCommandQueue: 0x%p\n", g_pd3dCommandQueue);
        LOG("[+] DirectX12: g_pSwapChain: 0x%p\n", g_pSwapChain);

        //Console::Free( );

        //SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine( ));
       // SDK::UWorld* World = SDK::UWorld::GetWorld( );

        //while (!SDK::UKismetSystemLibrary::IsValid(Engine) || !SDK::UKismetSystemLibrary::IsValid(World)) {
        //}

        //SDK::UInputSettings::GetDefaultObj( )->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");

        /* Creates a new UObject of class-type specified by Engine->ConsoleClass */
        //SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
        // SDK::UObject* NewCheatManager = SDK::UGameplayStatics::SpawnObject(SDK::UCheatManager::StaticClass(), SDK::UCheatManager::StaticClass()->Super);

        /* The Object we created is a subclass of UConsole, so this cast is **safe**. */
        //Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
        // World->OwningGameInstance->LocalPlayers[0]->PlayerController->CheatManager = static_cast<SDK::UCheatManager*>(NewCheatManager);

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
} // namespace DX12

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
                ImWchar rangesd[] = {0x1, 0x1FFFF, 0};
                ImVector<ImWchar> ranges;
                ImFontGlyphRangesBuilder builder;

                builder.AddRanges(rangesd);
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesChineseFull());
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesDefault( ));
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesCyrillic( ));
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesChineseSimplifiedCommon( ));
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesGreek());
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesKorean());
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesThai( ));
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesVietnamese( ));
               //builder.AddRanges(ImGui::GetIO( ).Fonts->GetGlyphRangesJapanese( )); // Add one of the default ranges
                builder.BuildRanges(&ranges);
                ImGui::GetIO( ).Fonts->AddFontFromFileTTF("c:\\Windows\\Fonts\\l_10646.ttf", 12.0f, nullptr, ranges.Data);
                ImGui::GetIO( ).Fonts->Build( );
               // l_10646.ttf

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

            //LoadFromResourceName( )

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
            g_pd3dCommandList->Close( );


            //g_pSwapChain->Present(1, 0);

            //Sleep(3000);

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
} // namespace DX12
#endif
