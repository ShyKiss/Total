#pragma once

#include <d3d12.h>
#include <dxgi1_4.h>

#pragma comment(lib, "d3d12.lib")
#pragma comment(lib, "dxgi.lib")

namespace DX12 {
    inline D3D12_CPU_DESCRIPTOR_HANDLE my_texture_srv_cpu_handle;
    inline D3D12_GPU_DESCRIPTOR_HANDLE my_texture_srv_gpu_handle;
    inline int my_image_width = 0;
    inline int my_image_height = 0;
    inline ID3D12Resource* my_texture = NULL;

	void Hook(HWND hwnd);
	void Unhook( );
}
