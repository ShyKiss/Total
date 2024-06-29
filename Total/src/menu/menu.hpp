#pragma once
#include "../pch.h"

namespace Menu {
    using namespace SDK;
    using namespace std;

    void InitializeContext(HWND hwnd);
    void Render( );
    void Total_EnableConsole( );
    void Total_PlayerBrightnessBoost( );
    void Total_ShowGenerators           (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Generators);
    void Total_ShowRadio                (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Radio);
    void Total_ShowPuzzles              (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Puzzles);
    void Total_ShowValves               (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Valves);
    void Total_ShowProjectors           (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Projectors, UC::TArray<SDK::ARBGeneratorMultiObjectiveActor*> Generators);
    void Total_ShowPlayers              (UC::TArray<SDK::ARBPlayer*> Players);
    void Total_ShowDoorTraps            (UC::TArray<SDK::ARBDoor*> Doors);
    void Total_ShowItems                (UC::TArray<SDK::ARBPickup*> Pickups, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coords);
    void Total_ShowLargeItems           (UC::TArray<SDK::ARBLargePickup*> LargePickups);

    bool IsValid(const UObject* Object);
    string utf8_encode(const wstring& wstr);
    ImVec2 CentralText(string PawnName, FVector2D Location2D, float SizeLocation);
    const char* RandomString(int Length);

    // Random

    inline bool bShowMenu = false;
    inline bool bShowItems = false;
    inline bool bShowLargeItems = true;
    inline bool bShowQuestItems = true;
    inline bool bShowObjectiveActors = true;
    inline bool bShowPlayers = false;
    inline bool bConsoleEnabled = false;

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
    inline float fPlayerIdleTime = 0;
    inline int LevelSeed = 0;
    inline float IconSize = 24;
    inline int Passcode = 0;
} // namespace Menu
