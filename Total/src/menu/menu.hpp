#pragma once

#include <Windows.h>
#include "../dependencies/imgui/imgui.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include "../SDK/Engine_classes.hpp"
#include "../SDK/OPP_classes.hpp"
#include "../SDK/CoreUObject_classes.hpp"

namespace Menu {
    using namespace SDK;
    using namespace std;

    void InitializeContext(HWND hwnd);
    void Render( );
    void Total_PlayerBrightnessBoost( );
    void Total_ShowGenerators(UC::TArray<SDK::ARBGeneratorMultiObjectiveActor*> Generators);
    void Total_ShowRadio(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Radio);
    void Total_ShowValves(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Valves);
    void Total_ShowProjectors(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Projectors, UC::TArray<SDK::ARBGeneratorMultiObjectiveActor*> Generators);
    void Total_ShowPlayers(UC::TArray<SDK::ARBPlayer*> Players);
    void Total_ShowDoorTraps(UC::TArray<SDK::ARBDoor*> Doors);
    void Total_ShowItems(UC::TArray<SDK::ARBPickup*> Pickups);
    void Total_ShowLargeItems(UC::TArray<SDK::ARBLargePickup*> LargePickups);
    bool IsValid(const UObject* Object);
    string utf8_encode(const wstring& wstr);
    const char* RandomString(int Length);

    // Random

    inline bool bShowMenu = false;
    inline bool bShowItems = false;
    inline bool bShowLargeItems = true;
    inline bool bShowQuestItems = true;
    inline bool bShowObjectiveActors = true;
    inline bool bShowPlayers = false;

    inline float fShowItems = 150;
    inline float fShowQuestItems = 300;
    inline float fShowLargeItems = 300;
    inline float fShowObjectiveActors = 300;
    inline float fShowPlayers = 150;

    inline bool bIsLoading = false;
    inline bool bTotalPlayerIsRunning;
    inline ImVec4 NVColor = ImVec4(1,1,1,1);
    inline ARBPlayer* TotalPlayer = nullptr;
    inline ARBController* TotalController = nullptr;
    inline bool bTotalPlayerAlive = false;
    inline bool bTotalControllerAlive = false;
    inline float fPlayerPing = 0;
    inline float fStageTime = 0;
    inline int LevelSeed = 0;
    inline float IconSize = 24;
} // namespace Menu
