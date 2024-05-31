#pragma once

#include <d3d12.h>
#include <dxgi1_4.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")

namespace DX12 {
    inline D3D12_CPU_DESCRIPTOR_HANDLE  KEY_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  KEY_GPU;
    inline ID3D12Resource*              KEY_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  BOTTLE_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  BOTTLE_GPU;
    inline ID3D12Resource*              BOTTLE_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  BRICK_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  BRICK_GPU;
    inline ID3D12Resource*              BRICK_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  ANTIDOTE_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  ANTIDOTE_GPU;
    inline ID3D12Resource*              ANTIDOTE_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  SKILLCHARGE_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  SKILLCHARGE_GPU;
    inline ID3D12Resource*              SKILLCHARGE_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  BATTERY_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  BATTERY_GPU;
    inline ID3D12Resource*              BATTERY_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  SMALL_BATTERY_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  SMALL_BATTERY_GPU;
    inline ID3D12Resource*              SMALL_BATTERY_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  HEAL_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  HEAL_GPU;
    inline ID3D12Resource*              HEAL_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  HEART_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  HEART_GPU;
    inline ID3D12Resource*              HEART_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  ADRENALINE_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  ADRENALINE_GPU;
    inline ID3D12Resource*              ADRENALINE_TEX = NULL;

    inline D3D12_CPU_DESCRIPTOR_HANDLE  TICKET_CPU;
    inline D3D12_GPU_DESCRIPTOR_HANDLE  TICKET_GPU;
    inline ID3D12Resource*              TICKET_TEX = NULL;

    inline int my_image_width = 0;
    inline int my_image_height = 0;
    inline int my_image_width1 = 0;
    inline int my_image_height1 = 0;
    
    

	void Hook(HWND hwnd);
	void Unhook( );
}
