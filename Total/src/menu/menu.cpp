#include "../PCH/PCH.h"
#define STR_IMPLEMENTATION
#include "../Utils/Str.h"

namespace ig = ImGui;

static ImGuiTextFilter filter;

namespace Menu {
    void InitializeContext(HWND hwnd) {
        if (ig::GetCurrentContext( ))
            return;
        ig::CreateContext( );
        ImGui_ImplWin32_Init(hwnd);

        ImGuiIO& io = ig::GetIO( );
        io.IniFilename = io.LogFilename = nullptr;
    }

    void Render( ) {
        ImGuiIO& io = ig::GetIO( );
        (void)io;

        Style::Apply();

        if (!InitGlobals()) return;

        Total_ShowFPSAndPing();
        Total_ShowLevelSeed();
        Total_ShowStageTime();
        Total_ShowScore();
        Total_ShowPasscodes                     (RBWorld->Rooms);

        if (IsLookInput()) {
            SDK::TArray<SDK::ARBBaseObjectiveCoordinator*> ObjectiveCoordinators;

            GetObjectiveCoordinators(&ObjectiveCoordinators);

            Total_ShowItems                     (RBWorld->GetRBPickups(), ObjectiveCoordinators);
            Total_ShowDecodableCodes            (RBWorld->Decodables, ObjectiveCoordinators);
            Total_ShowLargeItems                (RBWorld->GetRBLargePickups());
            Total_ShowPlayers                   (RBWorld->GetRBPlayers());
            Total_ShowNPCs                      (RBWorld->GetNPCs());
            Total_ShowObjectiveActors           (ObjectiveCoordinators);
            Total_ShowPrimaryObjectiveActors    (ObjectiveCoordinators);
            //Total_ShowDoorTraps               (OPPWorld->GetDoors());
        }

        Total_PlayerBrightnessBoost();
        Total_EnableConsole();
        Total_SetNightVisionColor();

        //----------------------------------------- OVERLAY -----------------------------------------

        if (Config::bShowGlobalHud) {
            if (ig::Begin("Overlay", &Config::bShowGlobalHud, ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground))
            {
                ig::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_FirstUseEver);
                ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);

                ig::TextColored(ImVec4(1.f, 0.3f, 0.3f, 1.f), "[Total]");
                ImVec2 TempVec = ImVec2(ig::GetItemRectMin().x - 5, ig::GetItemRectMin().y - 5);
                ig::Text(GlobalInfoText.c_str());
                ig::GetBackgroundDrawList()->AddRectFilled(TempVec, ImVec2(ig::GetItemRectMax().x + 5, ig::GetItemRectMax().y + 5), ImColor(0, 0, 0, 125), 8);

                if (bTotalControllerAlive && IsLookInput() && Config::bShowStamina) {
                    ig::SetCursorPos(ImVec2((io.DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(bTotalPlayerAlive ? int(round(TotalPlayer->Stamina)) : 0).c_str())).x / 2), io.DisplaySize.y / 2 + 30));
                    ig::Text("%.0f", bTotalPlayerAlive ? TotalPlayer->Stamina : 0);
                }
                ig::End();
            }
        }

        //-------------------------------------------------------------------------------------------

        io.MouseDrawCursor = bShowMenu;

        //----------------------------------------- MENU -----------------------------------------

        if (bShowMenu) {
            if (ig::Begin("Total", &bShowMenu, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoTitleBar)) {
                ig::SetWindowPos(ImVec2(io.DisplaySize.x / 4, io.DisplaySize.y / 4), ImGuiCond_FirstUseEver);
                ig::SetWindowSize(ImVec2(450, 600), ImGuiCond_FirstUseEver);


                ig::BeginChild("TotalTitlebar", ImVec2(0, 30));

                ig::SetCursorPos(ImVec2((ig::GetWindowWidth() - ig::CalcTextSize("Total").x) * 0.5f, (ig::GetWindowHeight() - ig::CalcTextSize("Total").y) * 0.5f));
                ig::Text("Total");

                ig::EndChild();

                ig::Separator();

                if (ig::BeginTabBar("Tabs")) {
                    if (ig::BeginTabItem("Shows")) {
                        ig::BeginChild("#ShowsChild", ImVec2(0,0), ImGuiChildFlags_AlwaysUseWindowPadding);
                        if (ig::BeginTable("##ShowsTable", 2, ImGuiTableFlags_SizingStretchSame)) {
                            ig::TableSetupColumn("#Header", ImGuiTableColumnFlags_WidthFixed);
                            ig::TableNextColumn();

                            Total_Checkbox("Show Overlay",                  "Toggles main background hud",                      &Config::bShowGlobalHud);
                            ig::TableNextRow();
                            ig::TableNextColumn();
                            Total_Checkbox("Show Items",                    "Bottles, adrenalines, antidotes... etc.",          &Config::bShowItems);
                            ig::TableNextColumn();
                            Total_Slider("#ShowItemsDistance",              &Config::fShowItems, 1.0f, 300.0f);
                            ig::TableNextColumn();
                            Total_Checkbox("Show Large Items",              "Canisters, boxes, reels... etc.",                  &Config::bShowLargeItems);
                            ig::TableNextColumn();
                            Total_Slider("#ShowLargeItemsDistance",         &Config::fShowLargeItems, 1.0f, 300.0f);
                            ig::TableNextColumn();
                            Total_Checkbox("Show NPCs",                     "NPC names + their skeleton",                       &Config::bShowNPCs);
                            ig::TableNextColumn();
                            Total_Slider("##ShowNPCsDistance",              &Config::fShowNPCs, 1.0f, 300.0f);
                            ig::TableNextColumn();
                            Total_Checkbox("Show Players",                  "Players nicknames + their skeleton",               &Config::bShowPlayers);
                            ig::TableNextColumn();
                            Total_Slider("##ShowPlayersDistance",           &Config::fShowPlayers, 1.0f, 300.0f);
                            ig::TableNextColumn();
                            Total_Checkbox("Show Objective Actors",         "Objects related to the main objectives",           &Config::bShowObjectiveActors);
                            ig::TableNextColumn();
                            Total_Slider("##ShowObjectiveActorsDistance",   &Config::fShowObjectiveActors, 1.0f, 300.0f);
                            ig::TableNextColumn();
                            Total_Checkbox("Show Primary Actors",           "Objects related to the primary objectives",        &Config::bShowPrimaryObjectiveActors);
                            ig::TableNextColumn();
                            Total_Slider("##ShowPrimaryActorsDistance",     &Config::fShowPrimaryObjectiveActors, 1.0f, 300.0f);
                            ig::TableNextColumn();
                            Total_Checkbox("Show Stamina",                  "Stamina in numerical view under the crosshair",    &Config::bShowStamina);

                            ig::EndTable();
                        }

                        ig::Spacing();
                        ig::Separator();
                        ig::Spacing();

                        if (Config::bShowItems) {
                            ig::Text("Show Items List:");
                            ig::Spacing();
                            ig::BeginChild("#ShowItemsChild", ImVec2(0, 0));
                            if (ig::BeginTable("#ShowItemsTable", 1)) {
                                ig::TableNextColumn();

                                for (int i = 2; i < (int)SDK::EItemType::Max; i++) {
                                    if (ig::Selectable({ magic_enum::enum_name(magic_enum::enum_value<SDK::EItemType>(i)).data() }, &Config::AllowedItems[i])) Config::SaveConfig();
                                }
                                ig::EndTable();
                            }
                            ig::EndChild();
                        }
                        ig::EndChild();
                        ig::EndTabItem();
                    }

                    if (ig::BeginTabItem("Superlight")) {
                        ig::BeginChild("#SuperlightChild", ImVec2(0, 0), ImGuiChildFlags_AlwaysUseWindowPadding);

                        ig::Checkbox("Enable Superlight", &Config::bSuperlight);

                        ig::Separator();

                        if (!Config::bSuperlight) {
                            ig::PushItemFlag(ImGuiItemFlags_Disabled, true);
                            ig::PushStyleVar(ImGuiStyleVar_Alpha, ImGui::GetStyle().Alpha * 0.5f);
                        }

                        ig::SliderFloat("Light Radius", &Config::fSuperlightRadius, 0.0f, 100000.0f);
                        ig::SliderFloat("Light Intensity", &Config::fSuperlightIntensity, 0.0f, 100.0f);
                        ig::SliderFloat("Light Angle", &Config::fSuperlightAngle, 0.0f, 360.0f);
                        ig::ColorEdit4("Light Color##1", (float*)&NVColor);

                        if (!Config::bSuperlight) {
                            ig::PopItemFlag();
                            ig::PopStyleVar();
                        }

                        ig::EndChild();
                        ig::EndTabItem();
                    }

                    if (ig::BeginTabItem("Other")) {
                        ig::BeginChild("#OtherChild", ImVec2(0, 0), ImGuiChildFlags_AlwaysUseWindowPadding);

                        if (ig::Button("Detach me")) {
                            Utils::UnloadDLL();
                        }
                        ig::SetItemTooltip("Unhook Total (DEL key)");

                        if (ig::Button("Get CheatManager")) {
                            Total_GetCheatManager();
                        }
                        ig::SetItemTooltip("!!! Crashes after changing the map");

                        if (ig::Button("Show Console")) {
                            Console::IsOpened ? Console::Hide() : Console::Show();
                        }

                        ig::EndChild();
                        ig::EndTabItem();
                    }
                    ig::EndTabBar();
                }
            }
            ig::End();

            //ig::ShowDemoWindow(&bShowMenu);
        }
    } //void Render()
    void Total_ShowObjectiveActors(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators) {
        if (!Config::bShowObjectiveActors) return;
        for (int i = 0; i < Coordinators.Num( ); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Coordinators[i];

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
                        std::string Name = GenerateName(Obj->ObjectiveLevelText, DistanceToPlayer);
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
                    std::string Name = GenerateName(static_cast<SDK::ARBToyMachineLargeObjectCoordinator*>(Obj)->SpecificObjectiveComponentTag, DistanceToPlayer);
                    SDK::FVector2D Location2D;
                    bool InsideScreen = WorldToScreen(Location, &Location2D);
                    if (InsideScreen && DistanceToPlayer <= Config::fShowObjectiveActors * 100) {
                        AddImage(H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX, Location2D);
                        AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
                    }
                }
            }
            else {
                for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num(); d++) {
                    SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];

                    if (ObjAct->IsA(SDK::AVolume::StaticClass()))
                        continue;
                    if (ObjAct->IsA(SDK::ARBBaseObjectiveCoordinator::StaticClass()))
                        continue;

                    SDK::FVector Location = GetLocation(ObjAct);
                    std::string Name;
                    float DistanceToPlayer = CalcDistanceToPlayer(ObjAct);
                    Name = GenerateName(Obj->ObjectiveTitle, DistanceToPlayer);
                    SDK::FVector2D Location2D;
                    bool InsideScreen = WorldToScreen(Location, &Location2D);
                    if (InsideScreen && DistanceToPlayer <= Config::fShowObjectiveActors * 100) {
                        AddImage(H::IsD3D12 ? (ImTextureID)DX12::OBJECTIVE_GPU.ptr : (ImTextureID)(void*)DX11::OBJECTIVE_TEX, Location2D);
                        AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
                    }
                }
            }
        }
    }
    void Total_ShowPrimaryObjectiveActors(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coordinators) {
        if (!Config::bShowPrimaryObjectiveActors) return;
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
                Name = GenerateName(Obj->ObjectiveTitle, DistanceToPlayer);
                SDK::FVector2D Location2D;
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= Config::fShowPrimaryObjectiveActors * 100) {
                    AddImage(H::IsD3D12 ? (ImTextureID)DX12::POSTER_GPU.ptr : (ImTextureID)(void*)DX11::POSTER_TEX, Location2D);
                    AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), true);
                }
            }
        }
    }
    void Total_ShowPasscodes(UC::TArray<SDK::ARBRoom*> Puzzles) {
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

            if (!Passcode.empty()) {
                GlobalInfoText.appendf("Passcode: %s\n", Passcode);
            }

            if (!Config::bShowObjectiveActors || !IsLookInput()) return;
            
            SDK::FVector Location = GetLocation(Obj);
            SDK::FVector2D Location2D;
            bool InsideScreen = WorldToScreen(Location, &Location2D);
            if (InsideScreen)
                AddText(Passcode, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), false);
        }
    }
    void Total_ShowDecodableCodes(UC::TArray<SDK::UObject*> Decodables) {
        DecodableCodes = "";
        for (int i = 0; i < Decodables.Num(); i++) {
            SDK::UObject* Obj = Decodables[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (!Obj->IsA(SDK::AProjectionSymbol_BP_C::StaticClass()))
                continue;

            SDK::AProjectionSymbol_BP_C* Decodable = static_cast<SDK::AProjectionSymbol_BP_C*>(Obj);

            if (Decodable->Passcode.Num() == 0)
                continue;

            for (int d = 0; d < Decodable->Passcode.Num(); d++) {
                DecodableCodes.append(std::to_string(Decodable->Passcode[d]));
            }
            DecodableCodes.append(" ");
        }

        if (!DecodableCodes.empty()) {
            GlobalInfoText.appendf("Codes: %s\n", DecodableCodes);
        }
    }
    void Total_ShowPlayers(UC::TArray<SDK::ARBPlayer*> Players) {
        if (!Config::bShowPlayers || !bTotalPlayerAlive) return;
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
            std::string Name = GenerateName(utf8_encode(Obj->GetGamePlayerName().ToWString()), DistanceToPlayer);

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
    void Total_ShowNPCs(UC::TArray<SDK::ARBNPC*> NPCs) {
        if (!Config::bShowNPCs) return;
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
            std::string Name = GenerateName(std::string{ magic_enum::enum_name(Obj->NPCType) }, DistanceToPlayer);


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
    }
    void Total_ShowItems(UC::TArray<SDK::ARBPickup*> Pickups, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coords) {
        if (!Config::bShowItems) return;
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
                std::string Name = GenerateNameWithCaps(Obj->DisplayName, DistanceToPlayer);
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
    }
    void Total_ShowLargeItems(UC::TArray<SDK::ARBLargePickup*> LargePickups) {
        if (!Config::bShowLargeItems || !bTotalPlayerAlive) return;
        for (int i = 0; i < LargePickups.Num( ); i++) {
            SDK::ARBLargePickup* Obj = LargePickups[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            if (!Obj->IsInteractible.CurrentValue)
                continue;
            if (Obj->HoldingPawn.CurrentValue == TotalPlayer)
                continue;

            if (Obj->bTrapped == false && Obj->bForceTrapped == false && Obj->LargeObjectType == SDK::ELargeObjectType::MaterialBox || Obj->LargeObjectType != SDK::ELargeObjectType::MaterialBox) {
                SDK::FVector Location = GetLocation(Obj);
                float DistanceToPlayer = CalcDistanceToPlayer(Obj);
                SDK::FVector2D Location2D;
                std::string Name = GenerateName(LargeObjectToChar(Obj->LargeObjectType), DistanceToPlayer);
                bool InsideScreen = WorldToScreen(Location, &Location2D);
                if (InsideScreen && DistanceToPlayer <= Config::fShowLargeItems * 100) {
                    AddText(Name, Location2D, ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0), false);
                }
            }
        }
    }
    void Total_ShowFPSAndPing() {
        fPlayerPing = bTotalPlayerAlive && IsValid(TotalPlayer->GetRBPlayerState()) ? TotalPlayer->GetRBPlayerState()->Ping : 0;
        GlobalInfoText.appendf("F/P: %.0f/%.0f\n", ig::GetIO().Framerate, fPlayerPing);
    }
    void Total_ShowLevelSeed() {
        if (IsValid(GameState)) {
            LevelSeed = GameState->LevelSeed;
            GlobalInfoText.appendf("Seed: %d\n", LevelSeed);
        }
    }
    void Total_ShowStageTime() {
        if (IsValid(GameState)) {
            fStageTime = GameState->IsStageStarted() ? SDK::URBBlueprintLibrary::GetServerTime() - GameState->StageStartedServerTime : 0;
            GlobalInfoText.appendf("Stage Time: %s\n", utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fStageTime).ToWString()).c_str());
        }
    }
    void Total_ShowScore() {
        if (bTotalPlayerAlive && IsValid(TotalPlayer->GetRBPlayerState()) && IsValid(GameState) && GameState->IsStageStarted()) {
            PlayerScore = TotalPlayer->GetRBPlayerState()->Score;
            CalculatedPlayerScore = 0.0000833333f * (10000 + PlayerScore);
            PlayerRating = CalcRatingFromScore(CalculatedPlayerScore);

            GlobalInfoText.appendf("Score: %.0f (%s)\n", PlayerScore, PlayerRating);
        }
    }
    void Total_SetNightVisionColor() {
        if (bTotalPlayerAlive) {
            TotalPlayer->NVComponent->SetLightColor(SDK::FLinearColor(NVColor.x, NVColor.y, NVColor.z, NVColor.w), false);
        }
    }
    void Total_PlayerBrightnessBoost() {
        if (Config::bSuperlight && bTotalPlayerAlive) {
            TotalPlayer->ProximityLight->SetAttenuationRadius(Config::fSuperlightRadius);
            TotalPlayer->ProximityLight->SetIntensity(Config::fSuperlightIntensity);
            TotalPlayer->ProximityLight->SetOuterConeAngle(Config::fSuperlightAngle);
        }
        else if (bTotalPlayerAlive) {
            TotalPlayer->ProximityLight->SetAttenuationRadius(200);
            TotalPlayer->ProximityLight->SetIntensity(0.75f);
            TotalPlayer->ProximityLight->SetOuterConeAngle(60.f);
        }
    }
    void Total_GetCheatManager() {
        SDK::URBBlueprintLibrary::GetLocalMenuController()->CheatManager = static_cast<SDK::URBCheatManager*>(SDK::UGameplayStatics::SpawnObject(SDK::URBBlueprintLibrary::GetLocalMenuController()->CheatClass, SDK::URBBlueprintLibrary::GetLocalMenuController()));
    }
    void Total_EnableConsole() {
        if (IsValid(RBEngine->GameViewport->ViewportConsole) && (IsValid(RBEngine->GameViewport->ViewportConsole) && SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName.ToString() == "F2")) return;
        SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(RBEngine->ConsoleClass, RBEngine->GameViewport);

        SDK::UInputSettings::GetDefaultObj( )->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
        RBEngine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
    }
    void Total_ForceExitToMenu() {
        if (bTotalControllerAlive) TotalController->ExitToMainMenu();
    }
} // namespace Menu
