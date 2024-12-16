#include "../PCH/PCH.h"
#define STR_IMPLEMENTATION
#include "../Utils/Str.h"

namespace ig = ImGui;

static ImGuiTextFilter filter;

namespace Menu {

    float lightIntensity = 20.f;
    float lightRadius = 32768.f;
    float lightAngle = 90.f;
    bool lightBool = false;
    bool bFail = false;
    bool bShow = false;
    bool bFreeCamera = false;

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
        colors[ImGuiCol_Border] = ImVec4(0, 0, 0, 0);
        colors[ImGuiCol_BorderShadow] = ImVec4(0, 0, 0, 0);


        //----------------------------------------- GLOBALS -----------------------------------------
#pragma region GLOBALS
        RBEngine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine());
        RBWorld = SDK::URBBlueprintLibrary::GetRBWorld();

        if (!Total_GlobalAssert()) return;

        TotalPlayer = SDK::URBBlueprintLibrary::GetControlledPlayer();
        TotalController = SDK::URBBlueprintLibrary::GetLocalMenuController();

        GlobalInfoText.clear();

        if (!IsValid(RBEngine->GameViewport->ViewportConsole) || (IsValid(RBEngine->GameViewport->ViewportConsole) && SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName.ToString() != "F2")) Total_EnableConsole();
        
        SDK::ARBGameState* GameState = SDK::URBBlueprintLibrary::GetRBGameState();

        bTotalPlayerAlive       =       IsValid(TotalPlayer);
        bTotalControllerAlive   =       bTotalPlayerAlive ? IsValid(TotalController) : false;

        bIsLoading              =       SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen();
        bNoLookInput            =       bTotalControllerAlive ? TotalController->IsLookInputIgnored( ) : false;

        bTotalPlayerAlive && IsValid(TotalPlayer->GetRBPlayerState()) ? fPlayerPing = TotalPlayer->GetRBPlayerState()->Ping : fPlayerPing = 0;

        GlobalInfoText.appendf("F/P: %.0f/%.0f\n", io.Framerate, fPlayerPing);

        if (IsValid(GameState)) {
            LevelSeed = GameState->LevelSeed;
            fStageTime = GameState->IsStageStarted() ? SDK::URBBlueprintLibrary::GetServerTime() - GameState->StageStartedServerTime : 0; // - GameState->StageStartedServerTime;

            GlobalInfoText.appendf("Seed: %d\nStage Time: %s\n", LevelSeed, utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fStageTime).ToWString()).c_str());
        }

        if (bTotalPlayerAlive) {
            TotalPlayer->NVComponent->SetLightColor(SDK::FLinearColor(NVColor.x, NVColor.y, NVColor.z, NVColor.w), false);
        }
#pragma endregion GLOBALS
        //-------------------------------------------------------------------------------------------


        if (!bIsLoading && bTotalPlayerAlive && bTotalControllerAlive && IsValid(SDK::URBBlueprintLibrary::GetRBGameInstance())) {
            SDK::TArray<SDK::ARBBaseObjectiveCoordinator*> ObjectiveCoordinators = SDK::URBBlueprintLibrary::GetRBGameInstance()->ObjectiveManager->ObjectiveCoordinators;

            // Player

            if (IsValid(TotalPlayer->GetRBPlayerState())) {
                if (IsValid(GameState) && GameState->IsStageStarted()) {
                    PlayerScore = TotalPlayer->GetRBPlayerState()->Score;
                    CalculatedPlayerScore = 0.0000833333f * (10000 + PlayerScore);
                    PlayerRating = CalcRatingFromScore(CalculatedPlayerScore);

                    GlobalInfoText.appendf("Score: %.0f (%s)\n", PlayerScore, PlayerRating);
                }
            }

            IsValid(SDK::URBBlueprintLibrary::GetRBGameMode()) ? fPlayerIdleTime = SDK::URBBlueprintLibrary::GetRBGameMode()->InactivePlayerStateLifeSpan : fPlayerIdleTime = 1337;

            Total_PlayerBrightnessBoost();

            // Shows

            if (Config::bShowItems && !bNoLookInput)
                Total_ShowItems(RBWorld->GetRBPickups(), ObjectiveCoordinators);
            if (Config::bShowLargeItems && !bNoLookInput)
                Total_ShowLargeItems(RBWorld->GetRBLargePickups());

            if (Config::bShowPlayers && !bNoLookInput)
                Total_ShowPlayers(RBWorld->GetRBPlayers());

            //Total_ShowDoorTraps(OPPWorld->GetDoors( ));

            if (Config::bShowNPCs && !bNoLookInput)
                Total_ShowNPCs(RBWorld->GetNPCs());

            if (Config::bShowObjectiveActors && bTotalControllerAlive && !bNoLookInput) {
                Total_ShowObjectiveActors(ObjectiveCoordinators);
            }
            if (Config::bShowPrimaryObjectiveActors && bTotalControllerAlive && !bNoLookInput) {
                Total_ShowPrimaryObjectiveActors(ObjectiveCoordinators);
            }
            Total_ShowDecodables(RBWorld->Decodables);
            Total_ShowPuzzles(RBWorld->Rooms);

            if (!Passcode.empty()) {
                GlobalInfoText.appendf("Passcode: %s\n", Passcode);
            }

            if (!DecodableCodes.empty()) {
                GlobalInfoText.appendf("Codes: %s\n", DecodableCodes);
            }
           
        }

        if (Config::bShowGlobalHud) {
            if (ig::Begin("Overlay", &Config::bShowGlobalHud, ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration))
            {
                ig::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_FirstUseEver);
                ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);

                ig::TextColored(ImVec4(1.f, 0.3f, 0.3f, 1.f), "[Total]");
                ig::Text(GlobalInfoText.c_str());

                if (bTotalControllerAlive && !bNoLookInput && Config::bShowStamina) {
                    ig::SetCursorPos(ImVec2((io.DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(bTotalPlayerAlive ? int(round(TotalPlayer->Stamina)) : 0).c_str())).x / 2), io.DisplaySize.y / 2 + 20));
                    ig::Text("%.0f", bTotalPlayerAlive ? TotalPlayer->Stamina : 0);
                    ig::SetCursorPos(ImVec2((io.DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(int(round(TotalPlayer->Stamina))).c_str())).x / 2), io.DisplaySize.y / 2 + 30));
                }
                ig::End();
            }
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
            ig::SetWindowPos(ImVec2(io.DisplaySize.x / 4, io.DisplaySize.y / 4), ImGuiCond_FirstUseEver);
            ig::SetWindowSize(ImVec2(450, 600), ImGuiCond_FirstUseEver);

            {
                ImVec2 Temp = ig::GetCursorPos();

                ig::SetCursorPos(ImVec2((ig::GetWindowSize().x - 300) * 0.5f, (ig::GetWindowSize().y - 300) * 0.5f));
                ig::Image(
                    H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX,
                    ImVec2(300, 300));
                ig::SetCursorPos(Temp);
            }

            if (ig::Button("Detach me")) {
                Utils::UnloadDLL( );
            }
            ig::SetItemTooltip("Unhook Total (DEL key)");
            ig::SameLine( );
            if (ig::Button("Get CheatManager")) {
                Total_GetCheatManager();
            }
            ig::SetItemTooltip("!!! Crashes after changing the map");
            ig::SameLine();
            if (ig::Button("Toggle Hud")) {
                Config::bShowGlobalHud = !Config::bShowGlobalHud;
                Config::SaveConfig();
            }
            ig::SetItemTooltip("Toggles Main Background Hud");

            if(ig::TreeNode("Shows"))
            {
                if (ig::Checkbox("Show Items", &Config::bShowItems)) Config::SaveConfig();
                ig::SameLine( );
                if(ig::SliderFloat("##Distance1", &Config::fShowItems, 1.0f, 300.0f)) Config::SaveConfig();

                if (ig::Checkbox("Show Large Items", &Config::bShowLargeItems)) Config::SaveConfig();
                ig::SameLine( );
                if (ig::SliderFloat("##Distance2", &Config::fShowLargeItems, 1.0f, 300.0f)) Config::SaveConfig();

                if (ig::Checkbox("Show NPCs", &Config::bShowNPCs)) Config::SaveConfig();
                ig::SameLine();
                if (ig::SliderFloat("##Distance3", &Config::fShowNPCs, 1.0f, 300.0f)) Config::SaveConfig();

                if (ig::Checkbox("Show Objective Actors", &Config::bShowObjectiveActors)) Config::SaveConfig();
                ig::SameLine( );
                if (ig::SliderFloat("##Distance4", &Config::fShowObjectiveActors, 1.0f, 300.0f)) Config::SaveConfig();

                if (ig::Checkbox("Show Primary Actors", &Config::bShowPrimaryObjectiveActors)) Config::SaveConfig();
                ig::SameLine();
                if (ig::SliderFloat("##Distance5", &Config::fShowPrimaryObjectiveActors, 1.0f, 300.0f)) Config::SaveConfig();

                if (ig::Checkbox("Show Players", &Config::bShowPlayers)) Config::SaveConfig();
                ig::SameLine( );
                if (ig::SliderFloat("##Distance6", &Config::fShowPlayers, 1.0f, 300.0f)) Config::SaveConfig();

                ig::Spacing( );
                ig::TreePop( );
            }
            ig::Separator( );

            if (ig::Checkbox("Show Stamina", &Config::bShowStamina)) Config::SaveConfig();
            //if (ig::Checkbox("Show Actors", &bShow));
            ig::Checkbox("Light?", &lightBool);
            ig::SliderFloat("Icon Size", &IconSize, 1.0f, 128.0f);
            ig::SliderFloat("Light Radius", &lightRadius, 0.0f, 100000.0f);
            ig::SliderFloat("Light Intensity", &lightIntensity, 0.0f, 100.0f);
            ig::SliderFloat("Light Angle", &lightAngle, 0.0f, 360.0f);
            ig::ColorEdit3("Light Color##1", (float*)&NVColor);

            if (ig::TreeNode("Allowed Items")) {
                for (int i = 2; i < (int)SDK::EItemType::Max; i++) {
                    if (ig::Selectable({magic_enum::enum_name(magic_enum::enum_value<SDK::EItemType>(i)).data()}, &Config::AllowedItems[i])) Config::SaveConfig();
                    //std::cout << magic_enum::enum_name(magic_enum::enum_value<SDK::EItemType>(i)) << std::endl;
                }

                ig::Spacing();
                ig::TreePop();
            }

            ig::End( );

            colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
            //ig::ShowDemoWindow(&bShowMenu);
        }
    } //void Render()

    void Total_ShowNPCs(UC::TArray<SDK::ARBNPC*> NPCs) {
        for (int i = 0; i < NPCs.Num(); i++) {
            SDK::ARBNPC* Obj = NPCs[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;

            SDK::USkeletalMeshComponent* Mesh = static_cast<SDK::USkeletalMeshComponent*>(Obj->GetComponentByClass(SDK::USkeletalMeshComponent::StaticClass()));

            if (!IsValid(Mesh))
                continue;

            SDK::FVector Location = GetLocation(Obj);
            SDK::FVector2D Location2D;
            float DistanceToPlayer = CalcDistanceToPlayer(Obj);
            std::string Name = GenerateNameWithDistance(std::string{ magic_enum::enum_name(Obj->NPCType) }, DistanceToPlayer);


            for (int d = 0; d < BoneGroups.size(); d++) {
                SDK::FVector Bone1 = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(SDK::UKismetStringLibrary::Conv_StringToName(BoneGroups[d][0])));
                SDK::FVector Bone2 = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(SDK::UKismetStringLibrary::Conv_StringToName(BoneGroups[d][1])));

                SDK::FVector2D Location2D_Bone1;
                SDK::FVector2D Location2D_Bone2;

                

                bool InsideScreen = WorldToScreen(Bone1, &Location2D_Bone1) && WorldToScreen(Bone2, &Location2D_Bone2);

                if (InsideScreen && DistanceToPlayer <= Config::fShowNPCs * 100) {
                    ig::GetBackgroundDrawList()->AddLine({ Location2D_Bone1.X, Location2D_Bone1.Y }, { Location2D_Bone2.X, Location2D_Bone2.Y }, ig::ColorConvertFloat4ToU32(ImVec4(1, 1, 1, 1)), 1.0f);
                }
            }

            bool InsideScreen = WorldToScreen(Location, &Location2D);

            if (InsideScreen && DistanceToPlayer <= Config::fShowNPCs * 100) {
                AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), false);
            }
        }
    }

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

            //DecodableCodes.append(utf8_encode(SDK::UKismetStringLibrary::Conv_NameToString(Decodable->LinkedContainerClue).ToWString()).c_str()).append(": ");
            for (int d = 0; d < Decodable->Passcode.Num(); d++) {
                DecodableCodes.append(std::to_string(Decodable->Passcode[d]));
            }
            DecodableCodes.append(" ");
        }
    }

    void Total_ShowPrimaryObjectiveActors(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators) {
        for (int i = 0; i < Coordinators.Num(); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Coordinators[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (Obj->bIsMainObjective)
                continue;
            if (Obj->IsCompleted())
                continue;

            for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num(); d++) {
                SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];

                if (ObjAct->IsA(SDK::AVolume::StaticClass()))
                    continue;
                if (ObjAct->IsA(SDK::ARBBaseObjectiveCoordinator::StaticClass()))
                    continue;

                SDK::FVector Location = GetLocation(ObjAct);

                if (SDK::UStaticMeshComponent* Mesh = static_cast<SDK::UStaticMeshComponent*>(ObjAct->GetComponentByClass(SDK::UStaticMeshComponent::StaticClass()))) {
                    Location = Mesh->K2_GetComponentLocation();
                }
                else if (SDK::USkeletalMeshComponent* Mesh = static_cast<SDK::USkeletalMeshComponent*>(ObjAct->GetComponentByClass(SDK::USkeletalMeshComponent::StaticClass()))) {
                    Location = Mesh->K2_GetComponentLocation();
                }

                //SDK::FVector Location = ObjAct->IsA(SDK::ARBPickup::StaticClass()) ? GetLocation(ObjAct) : GetLocation(ObjAct) + SDK::FVector(0,0,160);
                std::string Name;
                float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                Name = GenerateNameWithDistance(Obj->ObjectiveTitle, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= Config::fShowPrimaryObjectiveActors * 100) {
                    AddImage(H::IsD3D12 ? (ImTextureID)DX12::POSTER_GPU.ptr : (ImTextureID)(void*)DX11::POSTER_TEX, Location2D);
                    AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
                }
            }
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
            if (Obj->IsCompleted())
                continue;

            if (Obj->IsA(SDK::ARBLargeInteractObjectiveCoordinator::StaticClass( ))) {
                UC::TArray<SDK::AActor*> Locks = static_cast<SDK::ARBLargeInteractObjectiveCoordinator*>(Obj)->LockingLargePickupsActors;

                for (int k = 0; k < Locks.Num( ); k++) {
                    SDK::AActor* ObjAct = Locks[k];
                    if (IsValid(ObjAct->GetComponentByClass(SDK::URBInteractibleComponent::StaticClass( ))) && static_cast<SDK::URBInteractibleComponent*>(ObjAct->GetComponentByClass(SDK::URBInteractibleComponent::StaticClass( )))->bCurrentlyEnabled) {
                        SDK::FVector Location = GetLocation(ObjAct);
                        float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                        std::string Name = GenerateNameWithDistance(Obj->ObjectiveLevelText, DistanceToPlayer);
                        SDK::FVector2D Location2D;
                        bool InsideScreen = WorldToScreen(Location, &Location2D);
                        if (InsideScreen && DistanceToPlayer <= Config::fShowObjectiveActors * 100) {
                            AddImage(H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX, Location2D);
                            AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
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
                    if (InsideScreen && DistanceToPlayer <= Config::fShowObjectiveActors * 100) {
                        AddImage(H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX, Location2D);
                        AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
                    }
                }
            }

            for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num( ); d++) {
                SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                
                if (ObjAct->IsA(SDK::AVolume::StaticClass()))
                    continue;
                if (ObjAct->IsA(SDK::ARBBaseObjectiveCoordinator::StaticClass()))
                    continue;

                //std::cout << ObjAct->GetFullName() << std::endl;

                SDK::FVector Location = GetLocation(ObjAct);
                std::string Name;
                float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                Name = GenerateNameWithDistance(Obj->ObjectiveTitle, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= Config::fShowObjectiveActors * 100) {
                    AddImage(H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX, Location2D);
                    AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
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
            SDK::ARBPlayer* Obj = Players[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (Obj == TotalPlayer)
                continue;

            SDK::USkeletalMeshComponent* Mesh = static_cast<SDK::USkeletalMeshComponent*>(Obj->GetComponentByClass(SDK::USkeletalMeshComponent::StaticClass()));

            if (!IsValid(Mesh))
                continue;

            SDK::FVector Location = GetLocation(Obj);
            SDK::FVector2D Location2D;
            float DistanceToPlayer = CalcDistanceToPlayer(Obj);
            std::string Name = GenerateNameWithDistance(utf8_encode(Obj->GetGamePlayerName().ToWString()), DistanceToPlayer);

            for (int d = 0; d < BoneGroups.size(); d++) {
                SDK::FVector Bone1 = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(SDK::UKismetStringLibrary::Conv_StringToName(BoneGroups[d][0])));
                SDK::FVector Bone2 = Mesh->GetSocketLocation(Mesh->GetSocketBoneName(SDK::UKismetStringLibrary::Conv_StringToName(BoneGroups[d][1])));

                SDK::FVector2D Location2D_Bone1;
                SDK::FVector2D Location2D_Bone2;



                bool InsideScreen = WorldToScreen(Bone1, &Location2D_Bone1) && WorldToScreen(Bone2, &Location2D_Bone2);

                if (InsideScreen && DistanceToPlayer <= Config::fShowPlayers * 100) {
                    ig::GetBackgroundDrawList()->AddLine({ Location2D_Bone1.X, Location2D_Bone1.Y }, { Location2D_Bone2.X, Location2D_Bone2.Y }, ig::ColorConvertFloat4ToU32(ImVec4(1, 1, 1, 1)), 1.0f);
                }
            }

            bool InsideScreen = WorldToScreen(Location, &Location2D);

            if (InsideScreen && DistanceToPlayer <= Config::fShowPlayers * 100)
                AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), false);
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
            if (Obj->GetPawnOwner())
                continue;
            if (!IsAllowedItem(Obj->ItemDefinition.ItemType))
                continue;
            
            if (Config::bShowItems) {
                ImTextureID TEX;
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                std::string Name = GenerateNameWithDistanceAndCaps(Obj->DisplayName, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);

                switch (Obj->ItemDefinition.ItemType) {
                    case SDK::EItemType::Bottle:                TEX = H::IsD3D12 ? (ImTextureID)DX12::BOTTLE_GPU.ptr            :       (ImTextureID)(void*)DX11::BOTTLE_TEX;           break;
                    case SDK::EItemType::Brick:                 TEX = H::IsD3D12 ? (ImTextureID)DX12::BRICK_GPU.ptr             :       (ImTextureID)(void*)DX11::BRICK_TEX;            break;
                    case SDK::EItemType::PsychosisAntidote:     TEX = H::IsD3D12 ? (ImTextureID)DX12::ANTIDOTE_GPU.ptr          :       (ImTextureID)(void*)DX11::ANTIDOTE_TEX;         break;
                    case SDK::EItemType::SkillCharge:           TEX = H::IsD3D12 ? (ImTextureID)DX12::SKILLCHARGE_GPU.ptr       :       (ImTextureID)(void*)DX11::SKILLCHARGE_TEX;      break;
                    case SDK::EItemType::Battery:               TEX = H::IsD3D12 ? (ImTextureID)DX12::BATTERY_GPU.ptr           :       (ImTextureID)(void*)DX11::BATTERY_TEX;          break;
                    case SDK::EItemType::SmallBattery:          TEX = H::IsD3D12 ? (ImTextureID)DX12::SMALL_BATTERY_GPU.ptr     :       (ImTextureID)(void*)DX11::SMALL_BATTERY_TEX;    break;
                    case SDK::EItemType::TempHealthGain:        TEX = H::IsD3D12 ? (ImTextureID)DX12::SMALL_HEAL_GPU.ptr        :       (ImTextureID)(void*)DX11::SMALL_HEAL_TEX;       break;
                    case SDK::EItemType::HealthGain:            TEX = H::IsD3D12 ? (ImTextureID)DX12::HEAL_GPU.ptr              :       (ImTextureID)(void*)DX11::HEAL_TEX;             break;
                    case SDK::EItemType::Bandage:               TEX = H::IsD3D12 ? (ImTextureID)DX12::BANDAGE_GPU.ptr           :       (ImTextureID)(void*)DX11::BANDAGE_TEX;          break;
                    case SDK::EItemType::GoreThrowable:         TEX = H::IsD3D12 ? (ImTextureID)DX12::HEART_GPU.ptr             :       (ImTextureID)(void*)DX11::HEART_TEX;            break;
                    case SDK::EItemType::StaminaRegen:          TEX = H::IsD3D12 ? (ImTextureID)DX12::ADRENALINE_GPU.ptr        :       (ImTextureID)(void*)DX11::ADRENALINE_TEX;       break;
                    case SDK::EItemType::LockPick:              TEX = H::IsD3D12 ? (ImTextureID)DX12::LOCKPICK_GPU.ptr          :       (ImTextureID)(void*)DX11::ADRENALINE_TEX;       break;
                    case SDK::EItemType::Quest:                 TEX = H::IsD3D12 ? (ImTextureID)DX12::KEY_GPU.ptr               :       (ImTextureID)(void*)DX11::KEY_TEX;              break;
                    case SDK::EItemType::CollectibleDocument:   TEX = H::IsD3D12 ? (ImTextureID)DX12::DOCUMENT_GPU.ptr          :       (ImTextureID)(void*)DX11::DOCUMENT_TEX;         break;
                    default: TEX = 0; break;
                }

                if (InsideScreen && int(round(DistanceToPlayer / 100)) <= Config::fShowItems) {
                    AddImage(TEX, Location2D);
                    AddText(Name, Location2D, ImVec4(1, 1, 1, 1), TEX != 0 ? true : false);
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
            if (Obj->HoldingPawn.CurrentValue)
                continue;

            if (Obj->bTrapped == false && Obj->bForceTrapped == false && Obj->LargeObjectType == SDK::ELargeObjectType::MaterialBox || Obj->LargeObjectType != SDK::ELargeObjectType::MaterialBox) {
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                SDK::FVector2D Location2D;
                std::string Name = GenerateNameWithDistance(LargeObjectToChar(Obj->LargeObjectType), DistanceToPlayer);
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= Config::fShowLargeItems * 100) {
                    AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), false);
                    //ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X - (ig::CalcTextSize(Name.c_str(), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), (const char*)((const char*)LargeObjectToChar(Obj->LargeObjectType).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).c_str()).append("m").append(")").c_str()));
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
        SDK::URBBlueprintLibrary::GetLocalMenuController()->CheatManager = static_cast<SDK::URBCheatManager*>(SDK::UGameplayStatics::SpawnObject(SDK::URBBlueprintLibrary::GetLocalMenuController()->CheatClass, SDK::URBBlueprintLibrary::GetLocalMenuController()));
        //SDK::UGameplayStatics::SpawnObject(TotalController->CheatClass, SDK::URBBlueprintLibrary::GetLocalMenuController());
        //static_cast<SDK::URBCheatManager*>(SDK::URBBlueprintLibrary::GetLocalMenuController()->CheatManager)->ToggleDebugMenu();
        //std::cout << TotalController->CheatManager << std::endl;
        //SDK::UWorld::GetWorld()->Destroy
        // 
        //TotalController->CheatManager = static_cast<SDK::URBCheatManager*>(CheatManager);
        //
        //static_cast<SDK::URBCheatManager*>(TotalController->CheatManager)->bCheatsEnabled = true;

    }

    void Total_EnableConsole() {
        SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(RBEngine->ConsoleClass, RBEngine->GameViewport);

        bConsoleEnabled = true;
        SDK::UInputSettings::GetDefaultObj( )->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
        RBEngine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
    } // void Total_EnableConsole()

    void Total_OpenDebugMenu() {

    }

    void Total_ForceExitToMenu() {
        if (bTotalControllerAlive) TotalController->ExitToMainMenu();
    } // void Total_ForceExitToMenu()

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

    void AddImage(ImU64 Texture, SDK::FVector2D Position) {
        ig::GetBackgroundDrawList()->AddImage(Texture, ImVec2(Position.X - IconSize, Position.Y - IconSize), ImVec2(Position.X + IconSize, Position.Y + IconSize), ImVec2(0.0f, 0.0f), ImVec2(1.0f, 1.0f));
    }

    void AddText(std::string Text, SDK::FVector2D Position, ImVec4 Color, bool WithIcon) {
        ig::GetBackgroundDrawList()->AddText(ImVec2(Position.X - (ig::CalcTextSize((const char*)Text.c_str()).x / 2), Position.Y + (WithIcon ? IconSize + IconSize / 2 : 0)), ig::ColorConvertFloat4ToU32(Color), (const char*)Text.c_str());
    }

    bool IsAllowedItem(SDK::EItemType Item) {
        return Config::AllowedItems[(int)Item];
    }

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

    std::string LargeObjectToChar(SDK::ELargeObjectType LargeObjectType) {
       return std::string{ magic_enum::enum_name(LargeObjectType) };
    }

    std::string utf8_encode(const std::wstring& wstr) {
        if (wstr.empty( ))
            return std::string( );
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size( ), NULL, 0, NULL, NULL);
        std::string strTo(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size( ), &strTo[0], size_needed, NULL, NULL);
        return strTo;
    }
    std::string RandomString(int Length) {
        int range = 126 - 33 + 1;
        int num = rand( ) % range + 33;
        std::string result = "";

        for (int i = 0; i < Length; i++) result += (char)(rand( ) % range + 33); 
        return result;
    }

    bool Total_GlobalAssert() {
        return IsValid(RBEngine) && IsValid(RBWorld);
    }
} // namespace Menu
