#pragma once

#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <tlhelp32.h>
#include <limits.h>
#include <codecvt>
#include <string>
#include <fstream>
#include <thread>
#include <dxgi.h>
#include <cstdio>
#include <mutex>
#include <stdio.h> 
#include <stdint.h>
#include <d3d11.h>
#include <d3d12.h>
#include <d3dcompiler.h>
#include <tchar.h>
#include <Psapi.h>
#include <memory>

#ifdef _MSC_VER
#include <intrin.h>
#endif

#include "dependencies/imgui/imgui.h"
#include "dependencies/imgui/imgui_internal.h"
#include "dependencies/imgui/imgui_impl_win32.h"
#include "dependencies/imgui/imgui_impl_dx11.h"
#include "dependencies/imgui/imgui_impl_dx12.h"


#if defined(_M_X64) || defined(__x86_64__)
#include "dependencies/minhook/hde/hde64.h"
#include "dependencies/minhook/hde/table64.h"
typedef hde64s HDE;
#define HDE_DISASM(code, hs) hde64_disasm(code, hs)
#else
#include "dependencies/minhook/hde/hde32.h"
#include "dependencies/minhook/hde/table32.h"
typedef hde32s HDE;
#define HDE_DISASM(code, hs) hde32_disasm(code, hs)
#endif

#include "dependencies/minhook/hde/pstdint.h"
#include "dependencies/minhook/buffer.h"
#include "dependencies/minhook/trampoline.h"
#include "dependencies/minhook/MinHook.h"

#define ENABLE_BACKEND_DX11
#define ENABLE_BACKEND_DX12

#include "hooks/backend/dx11/hook_directx11.hpp"
#include "hooks/backend/dx12/hook_directx12.hpp"

#include "sdk/Engine_classes.hpp"
#include "sdk/Engine_parameters.hpp"
#include "sdk/CoreUObject_classes.hpp"
#include "sdk/CoreUObject_structs.hpp"
#include "sdk/CoreUObject_parameters.hpp"
#include "sdk/Basic.hpp"
#include "sdk/OPP_classes.hpp"
#include "sdk/OPP_parameters.hpp"
#include "UnrealContainers.hpp"
#include "NameCollisions.inl"
#include "PropertyFixup.hpp"

#include "utils/utils.hpp"
#include "hooks/hooks.hpp"
#include "console/console.hpp"
#include "menu/menu.hpp"

#include "../resource.h"
