#pragma once

#include <Windows.h>
#include <tlhelp32.h>
#include <mutex>

// IMGUI

#include "dependencies/imgui/imgui.h"
#include "dependencies/imgui/imgui_internal.h"
#include "dependencies/imgui/imgui_impl_win32.h"
#include "dependencies/imgui/imgui_impl_dx11.h"
#include "dependencies/imgui/imgui_impl_dx12.h"

// MINHOOK

#include "dependencies/minhook/hde/hde64.h"
#include "dependencies/minhook/hde/table64.h"
typedef hde64s HDE;
#define HDE_DISASM(code, hs) hde64_disasm(code, hs)
#include "dependencies/minhook/hde/pstdint.h"
#include "dependencies/minhook/buffer.h"
#include "dependencies/minhook/trampoline.h"
#include "dependencies/minhook/MinHook.h"

// BACKENDS

#define ENABLE_BACKEND_DX11
#define ENABLE_BACKEND_DX12

#include "hooks/backend/dx11/hook_directx11.hpp"
#include "hooks/backend/dx12/hook_directx12.hpp"

// SDK

#include "SDK.hpp"
#include "UnrealContainers.hpp"
#include "NameCollisions.inl"
#include "PropertyFixup.hpp"

// OTHER

#include "utils/utils.hpp"
#include "hooks/hooks.hpp"
#include "console/console.hpp"
#include "menu/menu.hpp"
#include "../resource.h"
