#pragma once
#include "../PCH/PCH.h"
#include "../Utils/Str.h"

namespace Menu {

    void InitializeContext(HWND hwnd);
    void Render( );
    void Total_EnableConsole( );
    void Total_PlayerBrightnessBoost( );
    void Total_ShowDecodables               (UC::TArray<SDK::UObject*> Decodables);
    void Total_ShowNPCs                     (UC::TArray<SDK::ARBNPC*> NPCs);
    void Total_ShowObjectiveActors          (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators);
    void Total_ShowPrimaryObjectiveActors   (UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators);
    void Total_ShowPuzzles                  (UC::TArray<SDK::ARBRoom*> Puzzles);
    void Total_ShowPlayers                  (UC::TArray<SDK::ARBPlayer*> Players);
    void Total_ShowDoorTraps                (UC::TArray<SDK::ARBDoor*> Doors);
    void Total_ShowItems                    (UC::TArray<SDK::ARBPickup*> Pickups, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coords);
    void Total_ShowLargeItems               (UC::TArray<SDK::ARBLargePickup*> LargePickups);
    void Total_GetCheatManager( );
    void Total_ForceExitToMenu( );
    void Total_OpenDebugMenu( );

    bool IsValid(const SDK::UObject* Object);
    bool IsAllowedItem(SDK::EItemType Item);
    bool Total_GlobalAssert();
    bool WorldToScreen(SDK::FVector Location, SDK::FVector2D* Location2D);
    SDK::FVector GetLocation(SDK::AActor* Actor);
    SDK::FRotator GetRotation(SDK::AActor* Actor);
    float CalcDistanceToPlayer(SDK::AActor* Actor);
    std::string CalcRatingFromScore(float Score);
    std::string GenerateName(SDK::FText Name);
    std::string GenerateAllowedItemName(SDK::EItemType Item);
    std::string GenerateNameWithDistance(SDK::FText Name, float DistanceToPlayer);
    std::string GenerateNameWithDistance(SDK::FName Name, float DistanceToPlayer);
    std::string GenerateNameWithDistance(std::string Name, float DistanceToPlayer);
    std::string GenerateNameWithDistanceAndCaps(SDK::FText Name, float DistanceToPlayer);
    std::string utf8_encode(const std::wstring& wstr);
    std::string RandomString(int Length);
    void AddImage(ImU64 Texture, SDK::FVector2D Position);
    void AddText(std::string Text, SDK::FVector2D Position, ImVec4 Color, bool WithIcon);
    std::string LargeObjectToChar(SDK::ELargeObjectType LargeObjectType);

    // OTHER

    inline Str256f GlobalInfoText = "";
    inline bool bShowMenu = false;
    inline bool bConsoleEnabled = false;
    inline bool bIsLoading = false;
    inline bool bNoLookInput = false;
    inline bool bTotalPlayerIsRunning;
    inline ImVec4 NVColor = ImVec4(1,1,1,1);
    inline SDK::ARBPlayer*      TotalPlayer     = nullptr;
    inline SDK::ARBMenuPlayerController*  TotalController = nullptr;
    inline SDK::UOPPEngine*     RBEngine        = nullptr;
    inline SDK::URBWorld*       RBWorld         = nullptr;
    inline bool bTotalPlayerAlive = false;
    inline bool bTotalControllerAlive = false;
    inline float fPlayerPing = 0;
    inline float fStageTime = 0;
    inline float fPlayerIdleTime = 0;
    inline int LevelSeed = 0;
    inline float IconSize = 24;
    inline std::string Passcode;
    inline float PlayerScore;
    inline float CalculatedPlayerScore;
    inline std::string PlayerRating;
    inline std::string DecodableCodes;
    inline int DesiredFPS = 0;
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
