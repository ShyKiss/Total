#pragma once
#include "../PCH/PCH.h"
#include "../Utils/Str.h"
#include "Style.hpp"

namespace Menu {

    void InitializeContext(HWND hwnd);
    void Render();
    void Total_ShowObjectiveActors          (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators);
    void Total_ShowPrimaryObjectiveActors   (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators);
    void Total_ShowPasscodes                (UC::TArray<SDK::ARBRoom*> Puzzles);
    void Total_ShowDecodableCodes           (UC::TArray<SDK::UObject*> Decodables, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators);
    void Total_ShowPlayers                  (UC::TArray<SDK::ARBPlayer*> Players);
    void Total_ShowNPCs                     (UC::TArray<SDK::ARBNPC*> NPCs);
    void Total_ShowDoorTraps                (UC::TArray<SDK::ARBDoor*> Doors);
    void Total_ShowItems                    (UC::TArray<SDK::ARBPickup*> Pickups, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coords);
    void Total_ShowLargeItems               (UC::TArray<SDK::ARBLargePickup*> LargePickups);
    void Total_ShowFPSAndPing();
    void Total_ShowLevelSeed();
    void Total_ShowStageTime();
    void Total_ShowScore();
    void Total_SetNightVisionColor();
    void Total_PlayerBrightnessBoost();
    void Total_GetCheatManager();
    void Total_EnableConsole();
    void Total_ForceExitToMenu();

    inline Str256f                          GlobalInfoText          = "";
    inline bool                             bShowMenu               = false;
    inline bool                             bIsLoading              = false;
    inline ImVec4                           NVColor                 = ImVec4(1,1,1,1);
    inline SDK::ARBPlayer*                  TotalPlayer             = nullptr;
    inline SDK::ARBMenuPlayerController*    TotalController         = nullptr;
    inline SDK::UOPPEngine*                 RBEngine                = nullptr;
    inline SDK::URBWorld*                   RBWorld                 = nullptr;
    inline SDK::ARBGameState*               GameState               = nullptr;
    inline bool                             bTotalPlayerAlive       = false;
    inline bool                             bTotalControllerAlive   = false;
    inline float                            fPlayerPing             = 0;
    inline float                            fStageTime              = 0;
    inline int                              LevelSeed               = 0;
    inline float                            IconSize                = 24;
    inline std::string                      Passcode                = "";
    inline float                            PlayerScore             = 0;
    inline float                            CalculatedPlayerScore   = 0;
    inline std::string                      PlayerRating            = "";
    inline std::string                      DecodableCodes          = "";

    inline std::vector<std::vector<const wchar_t*>> BoneGroups = {
                { L"Head",          L"Spine2"       },
                { L"Neck",          L"LeftArm"      },
                { L"Neck",          L"RightArm"     },
                { L"LeftArm",       L"LeftForeArm"  },
                { L"RightArm",      L"RightForeArm" },
                { L"LeftForeArm",   L"LeftHand"     },
                { L"RightForeArm",  L"RightHand"    },
                { L"Spine2",        L"LeftUpLeg"    },
                { L"Spine2",        L"RightUpLeg"   },
                { L"LeftUpLeg",     L"LeftLeg"      },
                { L"RightUpLeg",    L"RightLeg"     },
                { L"LeftLeg",       L"LeftFoot"     },
                { L"RightLeg",      L"RightFoot"    },
    };
} // namespace Menu
