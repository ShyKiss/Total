#include "../pch.h"

namespace ig = ImGui;

static ImGuiTextFilter filter;

bool start_pos_set = false;
bool start_pos_set2 = false;

const char8_t* LargeObjectToChar(uint8_t LargeObjectType) {
    switch (LargeObjectType) {
        case 0:
            return u8"None";
            break;
        case 1:
            return u8"Default";
            break;
        case 2:
            return u8"Large Box 30";
            break;
        case 3:
            return u8"Large Box 60";
            break;
        case 4:
            return u8"Кинопленка";
            break;
        case 5:
            return u8"Ведро кислоты";
            break;
        case 6:
            return u8"Мишка";
            break;
        case 7:
            return u8"Нигодяй";
            break;
        case 8:
            return u8"Горячая картошка";
            break;
        case 9:
            return u8"Пакет кокаина";
            break;
        case 10:
            return u8"Отбеливатель";
            break;
        case 11:
            return u8"Бомба";
            break;
        case 12:
            return u8"Канистра";
            break;
        case 13:
            return u8"Документы";
            break;
        case 14:
            return u8"Голова";
            break;
        case 15:
            return u8"Коробка";
            break;
        case 16:
            return u8"Коробка цветов";
            break;
        case 17:
            return u8"Пакет героина";
            break;
        case 18:
            return u8"Ведро с ядом";
            break;
        case 19:
            return u8"TYPE MAX";
            break;
    }
}

namespace Menu {

    float lightIntensity = 20.f;
    float lightRadius = 32768.f;
    float lightAngle = 90.f;
    bool lightBool = false;
    bool bFail = false;
    bool bShow = false;
    bool bFreeCamera = false;

    struct AllowedItems {
    public:
        bool bTempHeal;
        bool bHeal;
        bool bBottle;
        bool bBrick;
        bool bLockPick;
        bool bAntidote;
        bool bBattery;
        bool bSmallBattery;
        bool bAdrenaline;
        bool bGore;
        bool bSkillCharge;
        bool bBandage;
        bool bQuest;
        bool bDocument;
    };

    void InitializeContext(HWND hwnd) {
        if (ig::GetCurrentContext( ))
            return;



        ig::CreateContext( );
        ImGui_ImplWin32_Init(hwnd);

        ImGuiIO& io = ig::GetIO( );
        io.IniFilename = io.LogFilename = nullptr;
    }

    void Render( ) {

        ImVec4* colors = ig::GetStyle( ).Colors;
        ImGuiIO& io = ig::GetIO( );
        (void)io;

        colors[ImGuiCol_WindowBg] = ImVec4(0, 0, 0, 0);
        // colors[ImGuiCol_Border] = ImVec4(0, 0, 0, 0);
        colors[ImGuiCol_BorderShadow] = ImVec4(0, 0, 0, 0);


        //----------------------------------------- GLOBALS -----------------------------------------
#pragma region GLOBALS
        SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine( ));
        SDK::UWorld* World = SDK::UWorld::GetWorld( );
        SDK::URBWorld* OPPWorld = SDK::URBBlueprintLibrary::GetRBWorld( );

        if (!IsValid(Engine) || !IsValid(World) || !IsValid(OPPWorld))
            return;

        if (!bConsoleEnabled) Total_EnableConsole( );

        SDK::ARBGameState* GameState = SDK::URBBlueprintLibrary::GetRBGameState( );

        bTotalPlayerAlive       =       IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer( ));
        TotalPlayer             =       bTotalPlayerAlive ? SDK::URBBlueprintLibrary::GetControlledPlayer( ) : nullptr;

        bTotalControllerAlive   =       bTotalPlayerAlive ? IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer( )->RBController) : false;
        TotalController         =       bTotalControllerAlive ? SDK::URBBlueprintLibrary::GetControlledPlayer( )->RBController : nullptr;

        bIsLoading              =       SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( );
        bNoLookInput            =       bTotalControllerAlive ? TotalController->IsLookInputIgnored( ) : false;

        bTotalPlayerAlive && IsValid(TotalPlayer->GetRBPlayerState()) ? fPlayerPing = TotalPlayer->GetRBPlayerState()->Ping : fPlayerPing = 0;

        if (IsValid(GameState)) {
            //IsValid(SDK::URBBlueprintLibrary::GetRBGameMode( )) ? fPlayerIdleTime = SDK::URBBlueprintLibrary::GetRBGameMode( )->InactivePlayerStateLifeSpan : fPlayerIdleTime = 1337;
            LevelSeed = GameState->LevelSeed;
            fStageTime = GameState->IsStageStarted() ? SDK::URBBlueprintLibrary::GetServerTime() - GameState->StageStartedServerTime : 0; // - GameState->StageStartedServerTime;
        } else {
            //fPlayerIdleTime = 133823;
            LevelSeed = 0;
            fStageTime = 0;
        }

        if (bTotalPlayerAlive && IsValid(TotalPlayer->GetAnimInstance( ))) {
            bTotalPlayerIsRunning = TotalPlayer->GetAnimInstance( )->IsRunning;
            TotalPlayer->NVComponent->SetLightColor(SDK::FLinearColor(NVColor.x, NVColor.y, NVColor.z, NVColor.w), false);
        }
        else
            bTotalPlayerIsRunning = false;
#pragma endregion GLOBALS
        //-------------------------------------------------------------------------------------------


        if (!bIsLoading && bTotalPlayerAlive && bTotalControllerAlive && IsValid(SDK::URBBlueprintLibrary::GetRBGameInstance( ))) {
            SDK::TArray<SDK::ARBBaseObjectiveCoordinator*> ObjectiveCoordinators = SDK::URBBlueprintLibrary::GetRBGameInstance( )->ObjectiveManager->ObjectiveCoordinators;
            
            // Player

            if (IsValid(TotalPlayer->GetRBPlayerState())) {
                if (IsValid(GameState) && GameState->IsStageStarted()) {
                    PlayerScore = TotalPlayer->GetRBPlayerState()->Score;
                    CalculatedPlayerScore = 0.0000833333f * (10000 + PlayerScore);
                    PlayerRating = CalcRatingFromScore(CalculatedPlayerScore);
                }
                else {
                    PlayerScore = 0;
                    PlayerRating = "";
                }
            }

            IsValid(SDK::URBBlueprintLibrary::GetRBGameMode( )) ? fPlayerIdleTime = SDK::URBBlueprintLibrary::GetRBGameMode( )->InactivePlayerStateLifeSpan : fPlayerIdleTime = 1337;

            Total_PlayerBrightnessBoost( );

            // Shows

            if (bShowItems && !bNoLookInput ||
                bShowQuestItems && !bNoLookInput ||
                bShowDocuments && !bNoLookInput
                )
                Total_ShowItems(OPPWorld->GetRBPickups( ), ObjectiveCoordinators);
            if (bShowLargeItems && !bNoLookInput)
                Total_ShowLargeItems(OPPWorld->GetRBLargePickups( ));

            if (bShowPlayers && !bNoLookInput)
                Total_ShowPlayers(OPPWorld->GetRBPlayers( ));
                //Total_ShowDoorTraps(OPPWorld->GetDoors( ));

            if (bShowObjectiveActors && bTotalControllerAlive && !bNoLookInput) {
                Total_ShowDecodables(OPPWorld->Decodables);
                Total_ShowPuzzles(OPPWorld->Rooms);
                Total_ShowObjectiveActors(ObjectiveCoordinators);
            }
           
        }



        if (ig::Begin("Overlay", (bool*)true, ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration))
        {
            ig::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_FirstUseEver);
            ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);

            ig::TextColored(ImVec4(1.f, 0.3f, 0.3f, 1.f), "[Total]");

            ig::SameLine( );
            ig::SetCursorPosX(ig::GetWindowContentRegionMax( ).x - ig::CalcTextSize(std::format("Beta %s", Total_Version).c_str( )).x - ig::GetTextLineHeightWithSpacing( ));
            ig::TextColored(ImVec4(1.f, 0.3f, 0.3f, 1.f), "Beta %s", Total_Version);

            ig::Text("FPS: %.0f  Random: %s \nPing: %.0f ms  IsRunning: %d\nSeed: %d  Stage Time: %s\nPasscode: %s  Idle Time: %s\nScore: %.0f (%s)\nDecodable Codes: %s",
                io.Framerate, RandomString(rand( ) % (15 - 1 + 1) + 1),
                fPlayerPing, bTotalPlayerIsRunning, LevelSeed,
                     utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fStageTime).ToWString( )).c_str( ), (const char*)Passcode.c_str( ),
                utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fPlayerIdleTime).ToWString( )).c_str( ), PlayerScore, (const char*)PlayerRating.c_str(), (const char*)DecodableCodes.c_str());

            if (bTotalControllerAlive && !bNoLookInput) {
                ig::SetCursorPos(ImVec2((io.DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(bTotalPlayerAlive ? int(round(TotalPlayer->Stamina)) : 0).c_str( ))).x / 2), io.DisplaySize.y / 2 + 20));
                ig::Text("%.0f", bTotalPlayerAlive ? TotalPlayer->Stamina : 0);
                ig::SetCursorPos(ImVec2((io.DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(int(round(TotalPlayer->Stamina))).c_str( ))).x / 2), io.DisplaySize.y / 2 + 30));
            }
            ig::End();
        }
        
        colors[ImGuiCol_TitleBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
        colors[ImGuiCol_TitleBgActive] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
        colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
        colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
        colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
        colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        io.MouseDrawCursor = bShowMenu;



        if (bShowMenu) {
            ig::Begin("Total", &bShowMenu);
            if (!start_pos_set) {
                ig::SetWindowPos(ImVec2(io.DisplaySize.x / 4, io.DisplaySize.y / 4));
                ig::SetWindowSize(ImVec2(450, 600));
                start_pos_set = true;
            }
            if (ig::Button("Detach me")) {
                Utils::UnloadDLL( );
            }
            ig::SameLine( );
            if (ig::Button("Get CheatManager (Maybe Crash)")) {
                Total_GetCheatManager();
            }

            if(ig::TreeNode("Shows"))
            {
                ig::Checkbox("Show Items", &bShowItems);
                ig::SameLine( );
                ig::SliderFloat("##Distance1", &fShowItems, 1.0f, 300.0f);

                ig::Checkbox("Show Large Items", &bShowLargeItems);
                ig::SameLine( );
                ig::SliderFloat("##Distance2", &fShowLargeItems, 1.0f, 300.0f);

                ig::Checkbox("Show Quest Items", &bShowQuestItems);
                ig::SameLine( );
                ig::SliderFloat("##Distance3", &fShowQuestItems, 1.0f, 300.0f);

                ig::Checkbox("Show Objective Actors", &bShowObjectiveActors);
                ig::SameLine( );
                ig::SliderFloat("##Distance4", &fShowObjectiveActors, 1.0f, 300.0f);

                ig::Checkbox("Show Players", &bShowPlayers);
                ig::SameLine( );
                ig::SliderFloat("##Distance5", &fShowPlayers, 1.0f, 300.0f);

                ig::Checkbox("Show Documents", &bShowDocuments);
                ig::SameLine( );
                ig::SliderFloat("##Distance6", &fShowDocuments, 1.0f, 300.0f);

                ig::Spacing( );
                ig::TreePop( );
            }
            ig::Separator( );

            ig::Checkbox("Show Actors", &bShow);
            ig::Checkbox("Light?", &lightBool);
            ig::SliderFloat("Icon Size", &IconSize, 1.0f, 128.0f);
            ig::SliderFloat("Light Radius", &lightRadius, 0.0f, 100000.0f);
            ig::SliderFloat("Light Intensity", &lightIntensity, 0.0f, 100.0f);
            ig::SliderFloat("Light Angle", &lightAngle, 0.0f, 360.0f);
            ig::ColorEdit3("Light Color##1", (float*)&NVColor);

            ig::End( );

            colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
            //ig::ShowDemoWindow(&bShowMenu);
        }
    } //void Render()

    void Total_ShowDecodables(UC::TArray<SDK::UObject*> Decodables) {
        DecodableCodes = "";
        for (int i = 0; i < Decodables.Num(); i++) {
            SDK::UObject* Obj = Decodables[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (!Obj->IsA(SDK::ARBCodeProjector::StaticClass()))
                continue;

            SDK::ARBCodeProjector* Decodable = static_cast<SDK::ARBCodeProjector*>(Obj);

            if (Decodable->Passcode.Num() == 0)
                continue;

            DecodableCodes.append(utf8_encode(SDK::UKismetStringLibrary::Conv_NameToString(Decodable->LinkedContainerClue).ToWString()).c_str()).append(": ");

            for (int d = 0; d < Decodable->Passcode.Num(); d++) {
                DecodableCodes.append(std::to_string(Decodable->Passcode[d]));
            }
            DecodableCodes.append(" ");
        }
    }

    void Total_ShowObjectiveActors(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators) {
        for (int i = 0; i < Coordinators.Num( ); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Coordinators[i]; // URBInteractionZoneComponent URBUnlockableLargePickupRequirement

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (!Obj->bIsMainObjective)
                continue;

            if (Obj->IsA(SDK::ARBLargeInteractObjectiveCoordinator::StaticClass( ))) {
                UC::TArray<SDK::AActor*> Locks = static_cast<SDK::ARBLargeInteractObjectiveCoordinator*>(Obj)->LockingLargePickupsActors;

                for (int k = 0; k < Locks.Num( ); k++) {
                    SDK::AActor* ObjAct = Locks[k];
                    std::cout << ObjAct->GetName( ) << std::endl;
                    if (IsValid(ObjAct->GetComponentByClass(SDK::URBInteractibleComponent::StaticClass( ))) && static_cast<SDK::URBInteractibleComponent*>(ObjAct->GetComponentByClass(SDK::URBInteractibleComponent::StaticClass( )))->bCurrentlyEnabled) {
                        SDK::FVector Location = GetLocation(ObjAct);
                        float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                        std::string Name = GenerateNameWithDistance(Obj->ObjectiveLevelText, DistanceToPlayer);
                        SDK::FVector2D Location2D;
                        bool InsideScreen = WorldToScreen(Location, &Location2D);
                        if (InsideScreen && DistanceToPlayer <= fShowObjectiveActors * 100) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    }
                }
            }
            if (Obj->IsA(SDK::ARBToyMachineLargeObjectCoordinator::StaticClass( )) && false) {
                UC::TArray<SDK::ARBLargePickup*> Larges = static_cast<SDK::ARBToyMachineLargeObjectCoordinator*>(Obj)->ObjectiveLargePickups_Server;

                for (int k = 0; k < Larges.Num( ); k++) {
                    SDK::ARBLargePickup* ObjAct = Larges[k];
                    SDK::FVector Location = GetLocation(ObjAct);
                    float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                    std::string Name = GenerateNameWithDistance(static_cast<SDK::ARBToyMachineLargeObjectCoordinator*>(Obj)->SpecificObjectiveComponentTag, DistanceToPlayer);
                    SDK::FVector2D Location2D;
                    bool InsideScreen = WorldToScreen(Location, &Location2D);
                    if (InsideScreen && DistanceToPlayer <= fShowObjectiveActors * 100) {
                        ig::GetBackgroundDrawList( )->AddImage(
                            H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX,
                            ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                            ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                            ImVec2(0.0f, 0.0f),
                            ImVec2(1.0f, 1.0f));
                        ig::GetBackgroundDrawList( )->AddText(
                            ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                            ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                            (const char*)Name.c_str( ));
                    }
                }
            }

            for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num( ); d++) {
                SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                SDK::FVector Location = GetLocation(ObjAct);
                std::string Name;
                float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                Name = GenerateNameWithDistance(Obj->ObjectiveTitle, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= fShowObjectiveActors * 100) {
                    ig::GetBackgroundDrawList( )->AddImage(
                        H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX,
                        ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                        ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                        ImVec2(0.0f, 0.0f),
                        ImVec2(1.0f, 1.0f));
                    ig::GetBackgroundDrawList( )->AddText(
                        ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                        ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                        (const char*)Name.c_str( ));
                }
            }
        }
    }
    void Total_ShowPuzzles(UC::TArray<SDK::ARBRoom*> Puzzles) {
        float currentClosestDistance = 0;
        Passcode = "";

        for (int i = 0; i < Puzzles.Num( ); i++) {
            SDK::ARBRoom* Obj = Puzzles[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (!Obj->bPuzzleRoom)
                continue;

            std::string tempp = "";
            for (int d = 0; d < Obj->PuzzleRoomComponent->ChosenPasscodeDecals.Num( ); d++) {
                tempp.append(std::to_string(Obj->PuzzleRoomComponent->ChosenPasscodeDecals[d]->DecalData.Digit));
            }
            float Distance = CalcDistanceToPlayer(Obj);
            if (tempp != "" && (Distance < currentClosestDistance || currentClosestDistance == 0))
                if (Distance < currentClosestDistance || currentClosestDistance == 0) {
                    currentClosestDistance = Distance;
                    Passcode = tempp.c_str( );
                }
            
            SDK::FVector Location = GetLocation(Obj);
            SDK::FVector2D Location2D;
            bool InsideScreen = WorldToScreen(Location, &Location2D);
            if (InsideScreen)
                ig::GetBackgroundDrawList( )->AddText(
                    ImVec2(Location2D.X - (ig::CalcTextSize((const char*)tempp.c_str( )).x / 2), Location2D.Y),
                    ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                    (const char*)tempp.c_str( ));
        }
    } // void Total_ShowPuzzles()
    void Total_ShowPlayers(UC::TArray<SDK::ARBPlayer*> Players) {
        for (int i = 0; i < Players.Num( ); i++) {
            SDK::ARBPlayer* Player = Players[i];

            if (!Player)
                continue;
            if (!IsValid(Player))
                continue;

            Player->bHidden = false;
            // Player->SetActorScale3D(FVector(1, 1, 1));
            SDK::FVector Location = GetLocation(Player);
            std::string Name = utf8_encode(Player->GetGamePlayerName( ).ToWString( )).c_str( );
            SDK::FVector2D Location2D;
            bool InsideScreen = WorldToScreen(Location, &Location2D);
            float DistanceToPlayer = CalcDistanceToPlayer(Player);
            if (InsideScreen && DistanceToPlayer <= fShowPlayers * 100)
                ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), Name.append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m").c_str( )).append(")").c_str( ));
        }
    }
    void Total_ShowDoorTraps(UC::TArray<SDK::ARBDoor*> Doors) {
        for (int i = 0; i < Doors.Num( ); i++) {
            SDK::ARBDoor* Door = Doors[i];

            if (!Door)
                continue;
            if (!IsValid(Door))
                continue;
            if (!IsValid(Door->LinkedTrap))
                continue;

            SDK::FVector Location = GetLocation(Door);
            std::string Name = Door->GetName();
            SDK::FVector2D Location2D;
            bool InsideScreen = WorldToScreen(Location, &Location2D);
            float DistanceToPlayer = CalcDistanceToPlayer(Door);
            if (InsideScreen)
                ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), Name.append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m").c_str( )).append(")").c_str( ));
        }
    } // void Total_ShowTrapDoors()
    void Total_ShowItems(UC::TArray<SDK::ARBPickup*> Pickups, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coords) {
        for (int i = 0; i < Pickups.Num( ); i++) {
            SDK::ARBPickup* Obj = Pickups[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;

            //------------------------------------------------------------------------------------------------------------------------------------------------------------------//

            if (bShowQuestItems && !Obj->bHasBeenPickedUp && Obj->ItemDefinition.ItemType == SDK::EItemType::Quest) {
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                std::string Name = GenerateNameWithDistanceAndCaps(Obj->DisplayName, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);

                if (InsideScreen && int(round(DistanceToPlayer / 100)) <= fShowQuestItems) {
                    ig::GetBackgroundDrawList( )->AddImage(
                        H::IsD3D12 ? (ImTextureID)DX12::KEY_GPU.ptr : (ImTextureID)(void*)DX11::KEY_TEX,
                        ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                        ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                        ImVec2(0.0f, 0.0f),
                        ImVec2(1.0f, 1.0f));
                    ig::GetBackgroundDrawList( )->AddText(
                        ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                        ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                        (const char*)Name.c_str( ));
                }
            }

            if(bShowDocuments && Obj->ItemDefinition.ItemType == SDK::EItemType::CollectibleDocument) {
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                std::string Name = GenerateNameWithDistance(Obj->DisplayName, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);

                if (InsideScreen && int(round(DistanceToPlayer / 100)) <= fShowQuestItems) {
                    ig::GetBackgroundDrawList( )->AddImage(
                        H::IsD3D12 ? (ImTextureID)DX12::DOCUMENT_GPU.ptr : (ImTextureID)(void*)DX11::DOCUMENT_TEX,
                        ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                        ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                        ImVec2(0.0f, 0.0f),
                        ImVec2(1.0f, 1.0f));
                    ig::GetBackgroundDrawList( )->AddText(
                        ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                        ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                        (const char*)Name.c_str( ));
                }
            }

            //------------------------------------------------------------------------------------------------------------------------------------------------------------------//
            
            if (bShowItems) {
                ImTextureID TEX;
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                std::string Name = GenerateNameWithDistance(Obj->DisplayName, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);

                switch (Obj->ItemDefinition.ItemType) {
                    case SDK::EItemType::Bottle:            TEX = H::IsD3D12 ? (ImTextureID)DX12::BOTTLE_GPU.ptr            :       (ImTextureID)(void*)DX11::BOTTLE_TEX;           break;
                    case SDK::EItemType::Brick:             TEX = H::IsD3D12 ? (ImTextureID)DX12::BRICK_GPU.ptr             :       (ImTextureID)(void*)DX11::BRICK_TEX;            break;
                    case SDK::EItemType::PsychosisAntidote: TEX = H::IsD3D12 ? (ImTextureID)DX12::ANTIDOTE_GPU.ptr          :       (ImTextureID)(void*)DX11::ANTIDOTE_TEX;         break;
                    case SDK::EItemType::SkillCharge:       TEX = H::IsD3D12 ? (ImTextureID)DX12::SKILLCHARGE_GPU.ptr       :       (ImTextureID)(void*)DX11::SKILLCHARGE_TEX;      break;
                    case SDK::EItemType::Battery:           TEX = H::IsD3D12 ? (ImTextureID)DX12::BATTERY_GPU.ptr           :       (ImTextureID)(void*)DX11::BATTERY_TEX;          break;
                    case SDK::EItemType::SmallBattery:      TEX = H::IsD3D12 ? (ImTextureID)DX12::SMALL_BATTERY_GPU.ptr     :       (ImTextureID)(void*)DX11::SMALL_BATTERY_TEX;    break;
                    case SDK::EItemType::TempHealthGain:    TEX = H::IsD3D12 ? (ImTextureID)DX12::SMALL_HEAL_GPU.ptr        :       (ImTextureID)(void*)DX11::SMALL_HEAL_TEX;       break;
                    case SDK::EItemType::HealthGain:        TEX = H::IsD3D12 ? (ImTextureID)DX12::HEAL_GPU.ptr              :       (ImTextureID)(void*)DX11::HEAL_TEX;             break;
                    case SDK::EItemType::Bandage:           TEX = H::IsD3D12 ? (ImTextureID)DX12::BANDAGE_GPU.ptr           :       (ImTextureID)(void*)DX11::BANDAGE_TEX;          break;
                    case SDK::EItemType::GoreThrowable:     TEX = H::IsD3D12 ? (ImTextureID)DX12::HEART_GPU.ptr             :       (ImTextureID)(void*)DX11::HEART_TEX;            break;
                    case SDK::EItemType::StaminaRegen:      TEX = H::IsD3D12 ? (ImTextureID)DX12::ADRENALINE_GPU.ptr        :       (ImTextureID)(void*)DX11::ADRENALINE_TEX;       break;
                    case SDK::EItemType::LockPick:          TEX = H::IsD3D12 ? (ImTextureID)DX12::LOCKPICK_GPU.ptr          :       (ImTextureID)(void*)DX11::ADRENALINE_TEX;       break;
                    default: continue;
                }

                if (InsideScreen && int(round(DistanceToPlayer / 100)) <= fShowItems) {
                    ig::GetBackgroundDrawList( )->AddImage(
                        TEX,
                        ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                        ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                        ImVec2(0.0f, 0.0f),
                        ImVec2(1.0f, 1.0f)
                    );
                    ig::GetBackgroundDrawList( )->AddText(
                        ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                        ig::ColorConvertFloat4ToU32(ImVec4(1,1,1,1)),
                        (const char*)Name.c_str( )
                    );
                }
            }
        }
    } // void Total_ShowItems()
    void Total_ShowLargeItems(UC::TArray<SDK::ARBLargePickup*> LargePickups) {
        for (int i = 0; i < LargePickups.Num( ); i++) {
            SDK::ARBLargePickup* Obj = LargePickups[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (!Obj->IsInteractible.CurrentValue)
                continue;

            if (Obj->bTrapped == false && Obj->bForceTrapped == false && Obj->LargeObjectType == SDK::ELargeObjectType::MaterialBox || Obj->LargeObjectType != SDK::ELargeObjectType::MaterialBox) {
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                uint8_t Name = static_cast<uint8_t>(Obj->LargeObjectType);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= fShowLargeItems * 100) {
                    ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X - (ig::CalcTextSize((const char*)(std::string((const char*)LargeObjectToChar(Name)).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).c_str( )).append("m").append(")").c_str( )))).x / 2, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), (const char*)(std::string((const char*)LargeObjectToChar(Name)).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).c_str( )).append("m").append(")").c_str( )));
                }
            }
        }
    } // void Total_ShowLargeItems()
    void Total_PlayerBrightnessBoost() {
        if (lightBool) {
            TotalPlayer->ProximityLight->SetAttenuationRadius(lightRadius);
            TotalPlayer->ProximityLight->SetIntensity(lightIntensity);
            TotalPlayer->ProximityLight->SetInnerConeAngle(lightAngle - 1);
            TotalPlayer->ProximityLight->SetOuterConeAngle(lightAngle);
        }
    } // void Total_PlayerBrightnessBoost()
    void Total_GetCheatManager() {
        TotalPlayer->Server_SetWantsNVActive(!TotalPlayer->bIsNVActive.CurrentValue);
        TotalPlayer->bWantsNVActive.DesiredValue = !TotalPlayer->bWantsNVActive.CurrentValue;
        //SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine( ));
        //SDK::UObject* CheatManager = SDK::UGameplayStatics::SpawnObject(TotalController->CheatClass, TotalController);
        //
        ////std::cout << CheatManager->GetName() << std::endl;
        //
        //TotalController->CheatManager = static_cast<SDK::URBCheatManager*>(CheatManager);
        //
        //static_cast<SDK::URBCheatManager*>(TotalController->CheatManager)->bCheatsEnabled = true;

    }

    void Total_EnableConsole() {
        SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine( ));
        SDK::UWorld* World = SDK::UWorld::GetWorld( );
        SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);

        bConsoleEnabled = true;
        SDK::UInputSettings::GetDefaultObj( )->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
        Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
    } // void Total_EnableConsole()

    std::string CalcRatingFromScore(float Score) {
        switch (SDK::URBUIBlueprintLibrary::NormalizedScoreToRating(Score)) {
            case SDK::EPlayerTrialRating::F:        return "F";
            case SDK::EPlayerTrialRating::D:        return "D";
            case SDK::EPlayerTrialRating::DPlus:    return "D+";
            case SDK::EPlayerTrialRating::CMinus:   return "C-";
            case SDK::EPlayerTrialRating::C:        return "C";
            case SDK::EPlayerTrialRating::CPlus:    return "C+";
            case SDK::EPlayerTrialRating::BMinus:   return "B-";
            case SDK::EPlayerTrialRating::B:        return "B";
            case SDK::EPlayerTrialRating::BPlus:    return "B+";
            case SDK::EPlayerTrialRating::AMinus:   return "A-";
            case SDK::EPlayerTrialRating::A:        return "A";
            case SDK::EPlayerTrialRating::APlus:    return "A+";
            default:                                return "?";
        }
    }

    //bool IsAllowedItem(SDK::EItemType Item) {
    //    return AllowedItems[(int)Item];
    //}

    bool IsValid(const SDK::UObject* Object) {
        return SDK::UKismetSystemLibrary::IsValid(Object);
    }

    std::string GenerateAllowedItemName(SDK::EItemType Item) {
        SDK::FText Name, Description;
        SDK::URBUIBlueprintLibrary::GetPickupItemNameAndDescription(Item, &Name, &Description);
        return utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString( )).c_str( );
    }

    SDK::FVector GetLocation(SDK::AActor* Actor) {
        return Actor->K2_GetActorLocation( );
    }

    SDK::FRotator GetRotation(SDK::AActor* Actor) {
        return Actor->K2_GetActorRotation( );
    }

    bool WorldToScreen(SDK::FVector Location, SDK::FVector2D* Location2D) {
        return TotalController->ProjectWorldLocationToScreen(Location, Location2D, false);
    }

    float CalcDistanceToPlayer(SDK::AActor* Actor) {
        return Actor->K2_GetActorLocation( ).GetDistanceTo(TotalPlayer->K2_GetActorLocation( ));
    }

    std::string GenerateName(SDK::FText Name) {
        return utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString( )).c_str( );
    }

    std::string GenerateNameWithDistance(SDK::FText Name, float DistanceToPlayer) {
        return utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString( )).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str( );
    }
    std::string GenerateNameWithDistance(SDK::FName Name, float DistanceToPlayer) {
        return utf8_encode(SDK::UKismetStringLibrary::Conv_NameToString(Name).ToWString( )).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str( );
    }
    std::string GenerateNameWithDistance(std::string Name, float DistanceToPlayer) {
        return Name.append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str();
    }
    std::string GenerateNameWithDistanceAndCaps(SDK::FText Name, float DistanceToPlayer) {
        std::wstring TempName = SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString( );
        std::use_facet<std::ctype<wchar_t>>(std::locale( )).toupper(&TempName[0], &TempName[0] + TempName.size( ));
        return utf8_encode(TempName).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str( );
    }

    std::string GenerateNameFromIdWithDistance(uint32_t Id, float DistanceToPlayer) {
        return std::string((const char*)LargeObjectToChar(Id)).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).c_str( )).append("m").append(")").c_str( );
    }

    std::string utf8_encode(const std::wstring& wstr) {
        if (wstr.empty( ))
            return std::string( );
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size( ), NULL, 0, NULL, NULL);
        std::string strTo(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size( ), &strTo[0], size_needed, NULL, NULL);
        return strTo;
    }
    ImVec2 CentralText(std::string Name, SDK::FVector2D Location2D, float DistanceToPlayer) {
        return ImVec2(Location2D.X - (ig::CalcTextSize((const char*)(Name.append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m").c_str( )).append(")").c_str( ))).x / 2), Location2D.Y + IconSize + 12);
    }
    const char* RandomString(int Length) {
        int range = 126 - 33 + 1;
        int num = rand( ) % range + 33;
        std::string result = "";

        for (int i = 0; i < Length; i++) result += (char)(rand( ) % range + 33); 
        return result.c_str();
    }
} // namespace Menu
