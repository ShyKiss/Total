#pragma once

#include <Windows.h>
#include <algorithm>
#include <tlhelp32.h>
#include <iostream>
#include <string>
#include <mutex>

// IMGUI

#include "../Dependencies/ImGui/imgui.h"
#include "../Dependencies/ImGui/imgui_internal.h"
#include "../Dependencies/ImGui/imgui_freetype.h"
#include "../Dependencies/ImGui/imgui_impl_win32.h"
#include "../Dependencies/ImGui/imgui_impl_dx11.h"
#include "../Dependencies/ImGui/imgui_impl_dx12.h"

// MINHOOK

#include "../Dependencies/minhook/hde/hde64.h"
#include "../Dependencies/minhook/hde/table64.h"
typedef hde64s HDE;
#define HDE_DISASM(code, hs) hde64_disasm(code, hs)
#include "../Dependencies/minhook/hde/pstdint.h"
#include "../Dependencies/minhook/buffer.h"
#include "../Dependencies/minhook/trampoline.h"
#include "../Dependencies/minhook/MinHook.h"

// BACKENDS

#define ENABLE_BACKEND_DX11
#define ENABLE_BACKEND_DX12

#include "../Hooks/Backend/DX11/Hook_directx11.hpp"
#include "../Hooks/Backend/DX12/Hook_directx12.hpp"

// SDK

#include "../SDK/SDK/Basic.hpp"
#include "../SDK/SDK/CoreUObject_classes.hpp"
#include "../SDK/SDK/Engine_classes.hpp"
#include "../SDK/SDK/UMG_classes.hpp"
#include "../SDK/SDK/OPP_classes.hpp"
#include "../SDK/SDK/ProjectionSymbol_BP_classes.hpp"
#include "../SDK/SDK/PasscodeTriggerable_Base_BP_classes.hpp"
#include "../SDK/SDK/DebugMenu_classes.hpp"
#include "../SDK/UnrealContainers.hpp"
#include "../SDK/NameCollisions.inl"
#include "../SDK/PropertyFixup.hpp"

// OTHER

#include "../Utils/magic_enum/magic_enum.hpp"
#include "../Utils/magic_enum/magic_enum_iostream.hpp"
#include "../Utils/Utils.hpp"
#include "../Utils/Timer.hpp"
#include "../Config/Config.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Console/Console.hpp"
#include "../Menu/Style.hpp"
#include "../Menu/Menu.hpp"
#include "../Menu/MenuUtils.hpp"
#include "../Resources/Resource.h"
