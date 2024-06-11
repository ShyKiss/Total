#include "menu.hpp"

#include "../dependencies/imgui/imgui.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include <iostream>
#include <codecvt>
#include <string>
#include <Windows.h>
#include "../utils/utils.hpp"
#include "../hooks/hooks.hpp"
#include "../SDK/Engine_classes.hpp"
#include "../SDK/OPP_classes.hpp"
#include "../SDK/CoreUObject_classes.hpp"
#include "../utils/WICTextureLoader.h"
#include "../utils/stb_image.h"
#include "../hooks/backend/dx12/hook_directx12.hpp"
#include "../../resource.h"
#include "../hooks/backend/dx11/hook_directx11.hpp"
#include <algorithm>

#define STB_IMAGE_IMPLEMENTATION

namespace ig = ImGui;
namespace c = std;

static ImGuiTextFilter filter;

bool start_pos_set = false;
bool start_pos_set2 = false;

const char8_t* ObjectToChar(uint8_t ObjectType) {
    switch (ObjectType) {
        case 0:
            return u8"Nothing";
            break;
        case 1:
            return u8"Кулаки";
            break;
        case 2:
            return u8"Большая аптечка";
            break;
        case 3:
            return u8"Бустер здоровья";
            break;
        case 4:
            return u8"Аптечка";
            break;
        case 5:
            return u8"Шприц";
            break;
        case 6:
            return u8"Возрождение";
            break;
        case 7:
            return u8"Регенерация выносливости";
            break;
        case 8:
            return u8"Бустер выносливости";
            break;
        case 9:
            return u8"Батарея";
            break;
        case 10:
            return u8"Большая батарея";
            break;
        case 11:
            return u8"Супербатарея";
            break;
        case 12:
            return u8"Отмычка";
            break;
        case 13:
            return u8"Главный ключ";
            break;
        case 14:
            return u8"Зарядка";
            break;
        case 15:
            return u8"Бутылка";
            break;
        case 16:
            return u8"Антидот";
            break;
        case 17:
            return u8"Ваучеры";
            break;
        case 18:
            return u8"Титры";
            break;
        case 19:
            return u8"Кирпич";
            break;
        case 20:
            return u8"Датчик";
            break;
        case 21:
            return u8"Бинт";
            break;
        case 22:
            return u8"Продлятор";
            break;
        case 23:
            return u8"Оживин";
            break;
        case 24:
            return u8"Стаминин";
            break;
        case 25:
            return u8"Декодер";
            break;
        case 26:
            return u8"Документ";
            break;
        case 27:
            return u8"Квест";
            break;
        case 28:
            return u8"Исцеление/Рентген";
            break;
        case 29:
            return u8"Оглушение";
            break;
        case 30:
            return u8"Завеса";
            break;
        case 31:
            return u8"Брось меня";
            break;
        case 32:
            return u8"Сердце";
            break;
        case 33:
            return u8"Цель оснащения";
            break;
        case 34:
            return u8"Цель сбора";
            break;
        case 35:
            return u8"Ключевой элемент апгрейда";
            break;
        case 36:
            return u8"TYPE MAX";
            break;
    }
}
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

    void InitializeContext(HWND hwnd) {
        if (ig::GetCurrentContext( ))
            return;



        ig::CreateContext( );
        ImGui_ImplWin32_Init(hwnd);

        ImGuiIO& io = ig::GetIO( );
        io.IniFilename = io.LogFilename = nullptr;
    }

    void Render( ) {

        static bool no_titlebar = false;
        static bool no_border = true;
        static bool no_resize = false;
        static bool auto_resize = false;
        static bool no_move = false;
        static bool no_scrollbar = false;
        static bool no_collapse = false;
        static bool no_menu = true;

        ImVec4* colors = ig::GetStyle( ).Colors;
        ImGuiIO& io = ig::GetIO( );
        (void)io;
        ImGuiWindowFlags window_flags = 0;
        if (no_titlebar)
            window_flags |= ImGuiWindowFlags_NoTitleBar;
        if (no_resize)
            window_flags |= ImGuiWindowFlags_NoResize;
        if (auto_resize)
            window_flags |= ImGuiWindowFlags_AlwaysAutoResize;
        if (no_move)
            window_flags |= ImGuiWindowFlags_NoMove;
        if (no_scrollbar)
            window_flags |= ImGuiWindowFlags_NoScrollbar;
        if (no_collapse)
            window_flags |= ImGuiWindowFlags_NoCollapse;
        if (!no_menu)
            window_flags |= ImGuiWindowFlags_MenuBar;

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

        bIsLoading = SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( );

        bTotalPlayerAlive = IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer( ));
        TotalPlayer = bTotalPlayerAlive ? SDK::URBBlueprintLibrary::GetControlledPlayer( ) : nullptr;

        bTotalPlayerAlive ? bTotalControllerAlive = IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer( )->RBController) : bTotalControllerAlive = false;
        TotalController = bTotalControllerAlive ? SDK::URBBlueprintLibrary::GetControlledPlayer( )->RBController : nullptr;

        bTotalPlayerAlive&& IsValid(TotalPlayer->GetRBPlayerState()) ? fPlayerPing = TotalPlayer->GetRBPlayerState()->Ping : fPlayerPing = 0;

        bTotalPlayerAlive&& IsValid(SDK::URBBlueprintLibrary::GetRBGameMode( )) ? fPlayerIdleTime = SDK::URBBlueprintLibrary::GetRBGameMode( )->InactivePlayerStateLifeSpan : fPlayerIdleTime = 0;

        if (IsValid(SDK::URBBlueprintLibrary::GetRBGameState( ))) {
            LevelSeed = SDK::URBBlueprintLibrary::GetRBGameState( )->LevelSeed;
            fStageTime = SDK::URBBlueprintLibrary::GetRBGameState()->IsStageStarted() ? SDK::URBBlueprintLibrary::GetServerTime() - SDK::URBBlueprintLibrary::GetRBGameState( )->StageStartedServerTime : 0; // - SDK::URBBlueprintLibrary::GetRBGameState( )->StageStartedServerTime;
        } else {
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

        if (!bIsLoading && bTotalPlayerAlive && bTotalControllerAlive && IsValid(SDK::URBBlueprintLibrary::GetRBGameInstance())) {
            SDK::TArray<class ARBBaseObjectiveCoordinator*> ObjectiveCoordinators = SDK::URBBlueprintLibrary::GetRBGameInstance( )->ObjectiveManagers[0]->ObjectiveCoordinators;

            // Player

            Total_PlayerBrightnessBoost( );

            // Shows

            if(bShowItems || bShowQuestItems) Total_ShowItems(OPPWorld->GetRBPickups(), ObjectiveCoordinators);
            if (bShowLargeItems) Total_ShowLargeItems(OPPWorld->GetRBLargePickups( ));

            if (bShowPlayers) Total_ShowPlayers(OPPWorld->GetRBPlayers( ));
            //Total_ShowDoorTraps(OPPWorld->GetDoors( ));

            if (bShowObjectiveActors) {
                Total_ShowGenerators(OPPWorld->Generators);
                Total_ShowRadio(ObjectiveCoordinators);
                Total_ShowPuzzles(ObjectiveCoordinators);
                Total_ShowValves(ObjectiveCoordinators);
                Total_ShowProjectors(ObjectiveCoordinators, OPPWorld->Generators);
            }

        }



        if (ig::Begin("Overlay", (bool*)true, ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration))
        {
            ig::SetWindowSize(ImVec2(ig::GetIO( ).DisplaySize.x, ig::GetIO( ).DisplaySize.y), ImGuiCond_FirstUseEver);
            ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);
            ig::Text("[Total]\n  FPS: %.0f  Random: %s \n  Ping: %.0f ms  IsRunning: %d\n  Seed: %d  Stage Time: %s\n  Passcode: %d  Idle Time: %s", ig::GetIO( ).Framerate, "None" /*RandomString(rand( ) % (35 - 1 + 1) + 1)*/, fPlayerPing, bTotalPlayerIsRunning, LevelSeed, utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fStageTime).ToWString( )).c_str( ), Passcode, utf8_encode(SDK::URBBlueprintLibrary::FormatTimeFromFloat(fPlayerIdleTime).ToWString( )).c_str( ));
            if (bTotalControllerAlive) {
                ig::SetCursorPos(ImVec2((ig::GetIO( ).DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(bTotalPlayerAlive ? int(round(TotalPlayer->Stamina)) : 0).c_str( ))).x / 2), ig::GetIO( ).DisplaySize.y / 2 + 20));
                ig::Text("%.0f", bTotalPlayerAlive ? TotalPlayer->Stamina : 0);
                ig::SetCursorPos(ImVec2((ig::GetIO( ).DisplaySize.x / 2) - (ig::CalcTextSize((const char*)(std::to_string(int(round(TotalPlayer->Stamina))).c_str( ))).x / 2), ig::GetIO( ).DisplaySize.y / 2 + 30));
                // std::cout << (float)(double)((bTotalPlayerAlive ? TotalPlayer->Stamina : 0)) / 125 << std::endl;
                // ig::ProgressBar((float)(double)((bTotalPlayerAlive ? TotalPlayer->Stamina : 0)) / 125, ImVec2(30, 5));
            }
            ig::End();
        }
        


        colors[ImGuiCol_TitleBg] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
        colors[ImGuiCol_TitleBgActive] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
        colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.05f, 0.05f, 0.05f, 1.00f);
        colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
        colors[ImGuiCol_Border] = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
        colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        ig::GetIO( ).MouseDrawCursor = bShowMenu;



        if (bShowMenu) {
            ig::Begin("Total", &bShowMenu, window_flags);
            if (!start_pos_set) {
                ig::SetWindowPos(ImVec2(ig::GetIO( ).DisplaySize.x / 4, ig::GetIO( ).DisplaySize.y / 4));
                ig::SetWindowSize(ImVec2(450, 600));
                start_pos_set = true;
            }
            if (ig::Button("Detach me")) {
                Utils::UnloadDLL( );
            }
            ig::SameLine( );
            if (ig::Button("Get CheatManager (Maybe Crash)")) {
                bFail = true;
            }

            ig::SameLine( );

            if (ig::Button("Teleport Up")) {
                if (bTotalPlayerAlive) {
                    //SDK::FHitResult Result;
                    //TotalPlayer->K2_SetActorLocation(SDK::FVector(TotalPlayer->K2_GetActorLocation( ).X + 1, TotalPlayer->K2_GetActorLocation( ).Y, TotalPlayer->K2_GetActorLocation( ).Z + 0), false, &Result, false);
                    //TotalPlayer->Server_RemoveAllPings( );
                    //TotalPlayer->Server_SetWantsNVActive(true);
                    TotalPlayer->Server_TryStartTrading( );
                    //TotalPlayer->Multicast_GhostPawn(true, SDK::FVector(TotalPlayer->K2_GetActorLocation( ).X, TotalPlayer->K2_GetActorLocation( ).Y, TotalPlayer->K2_GetActorLocation( ).Z + 100), SDK::FRotator(0,0,0));
                }
            }

            ig::SameLine( );

            if (ig::Button("Teleport Down")) {
                if (bTotalPlayerAlive) {
                    //SDK::FHitResult Result;
                    // TotalPlayer->K2_SetActorLocation(SDK::FVector(TotalPlayer->K2_GetActorLocation( ).X + 1, TotalPlayer->K2_GetActorLocation( ).Y, TotalPlayer->K2_GetActorLocation( ).Z + 0), false, &Result, false);
                    // TotalPlayer->Server_RemoveAllPings( );
                    //TotalPlayer->Server_SetWantsNVActive(false);
                }
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
            ig::ShowDemoWindow(&bShowMenu);
            if (ig::Begin("Actor Scene", &bShowMenu, 0)) {
                ig::SetWindowPos(ImVec2(ig::GetIO( ).DisplaySize.x / 5, ig::GetIO( ).DisplaySize.y / 4), ImGuiCond_FirstUseEver);
                ig::SetWindowSize(ImVec2(-1, 0), ImGuiCond_FirstUseEver);
                ig::Text("Search:");
                filter.Draw("##searchbar");
                if (ig::BeginChild("DD")) {
                    ImVec2 outer_size = ImVec2(0.0f, ig::GetTextLineHeightWithSpacing( ) * 18);
                    static ImGuiTableFlags flags = ImGuiTableFlags_ScrollY | ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_RowBg | ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersV | ImGuiTableFlags_Resizable | ImGuiTableFlags_Reorderable | ImGuiTableFlags_Hideable;
                    if (ig::BeginTable("ActorScene", 4, flags, outer_size)) {
                        if (IsValid(World->PersistentLevel)) {
                            UC::TArray<SDK::AActor*> Actors = World->PersistentLevel->Actors;
                            ig::TableSetupColumn("ID");
                            ig::TableSetupColumn("NAME");
                            ig::TableSetupColumn("CLASS");
                            ig::TableSetupColumn("LOCATION / POSITION");
                            ig::TableSetupScrollFreeze(0, 1);
                            ig::TableHeadersRow( );
                            ImGuiListClipper clipper;
                            clipper.Begin(Engine->GObjects->Num( ));
                            while (clipper.Step( ))
                                for (int row_n = clipper.DisplayStart; row_n < clipper.DisplayEnd; row_n++) {
                                    SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(row_n);
                                    // SDK::AActor* Obj = Actors[row_n];
                                    // ig::TableNextRow( );
                                    if (!Obj) {
                                        continue;
                                    }
                                    if (!IsValid(Obj)) {
                                        continue;
                                    }
                                    if (!filter.PassFilter(Obj->GetName( ).c_str( )) /* && filter.PassFilter(Obj->Class->GetName( ).c_str( ))*/) {
                                        // clipper.DisplayEnd = clipper.DisplayEnd - 1;
                                        continue;
                                    }
                                    ig::TableNextColumn( );
                                    ig::Text("%d", row_n + 1);
                                    ig::TableNextColumn( );
                                    ig::Text("%s", Obj->GetFullName( ).c_str( ));
                                    ig::TableNextColumn( );
                                    ig::Text("%s", Obj->Outer->GetFullName( ).c_str( ));
                                    ig::TableNextColumn( );
                                    if (Obj->IsA(SDK::AActor::StaticClass( ))) {
                                        SDK::AActor* Actor = static_cast<SDK::AActor*>(Obj);
                                        ig::Text("%.3f %.3f %.3f / %.0f", Actor->K2_GetActorLocation( ).X, Actor->K2_GetActorLocation( ).Y, Actor->K2_GetActorLocation( ).Z, Actor->K2_GetActorRotation( ).Yaw);
                                    } else {
                                        ig::Text("");
                                    }

                                    // ig::TableNextColumn( );
                                    // for (int column = 0; column < 4; column++) {
                                    //     ig::TableSetColumnIndex(column);
                                    //     ig::TableNextRow( );
                                    // ig::TableNextColumn( );
                                    //    ig::Text("%d", 1);
                                    // }
                                }

                            /* for (int i = 0; i < SDK::UObject::GObjects->Num( ); i++) {
                                    SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);
                                    // SDK::AActor* Actor = Actors[i];
                                    if (!Obj)
                                        continue;
                                    if (!IsValid(Obj))
                                        continue;
                                    if (!filter.PassFilter(Obj->GetName( ).c_str( )) && !filter.PassFilter(Obj->Class->GetName( ).c_str( )))
                                        continue;

                                    ig::Text("%d", i + 1);
                                    ig::TableNextColumn( );
                                    ig::Text("%s", Obj->GetName( ).c_str( ));
                                    ig::TableNextColumn( );
                                    ig::Text("%s", Obj->Class->GetName( ).c_str( ));
                                    ig::TableNextColumn( );
                                    if (Obj->IsA(SDK::AActor::StaticClass( ))) {
                                        SDK::AActor* Actor = static_cast<SDK::AActor*>(Obj);
                                        ig::Text("%.3f %.3f %.3f / %.0f", Actor->K2_GetActorLocation( ).X, Actor->K2_GetActorLocation( ).Y, Actor->K2_GetActorLocation( ).Z, Actor->K2_GetActorRotation( ).Yaw);
                                    } else {
                                        ig::Text("");
                                    }*/
                            //}
                        }
                        ig::EndTable( );
                    }

                    ig::EndChild( );
                }
                ig::End( );
            }



        }
    } //void Render()

    void Total_ShowGenerators(UC::TArray<SDK::ARBGeneratorMultiObjectiveActor*> Generators) {
        for (int i = 0; i < Generators.Num( ); i++) {
            std::string PawnName = (const char*)u8"Генератор";
            SDK::FVector2D Location2D;
            SDK::ARBGeneratorMultiObjectiveActor* Generator = Generators[i];
            if (!IsValid(Generator) || SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( ))
                continue;
            SDK::FVector Location = Generator->K2_GetActorLocation( );
            if (!(Generator->bIsCompleted) && Generator->bIsInteractible) {
                bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                float SizeLocation = Generator->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                if (LocationNotZero && SizeLocation <= fShowObjectiveActors * 100)
                    ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
            }
        }
    } // void Total_ShowGenerators()
    void Total_ShowRadio(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Radio) {
        for (int i = 0; i < Radio.Num( ); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Radio[i];
            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num( ); d++) {
                SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                if (IsValid(ObjAct->GetComponentByClass(SDK::URBFrequencyMatchPanelComponent::StaticClass( )))) {
                    cout << Obj->ObjectiveActors.Num( ) << std::endl;
                    SDK::FVector Location = ObjAct->K2_GetActorLocation( );
                    std::string PawnName = (const char*)u8"Радиоприемник";
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    float SizeLocation = ObjAct->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    if (LocationNotZero && SizeLocation <= fShowObjectiveActors * 100)
                        ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
                }
            }
        }
    } // void Total_ShowRadio()
    void Total_ShowPuzzles(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Puzzles) {
        /* for (int i = 0; i < Puzzles.Num( ); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Puzzles[i];
            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            //std::cout << Obj->DebugPasscode.Num( ) << std::endl;
            //for (int d = 0; d < Obj->DebugPasscode.Num( ); d++) {
            //Passcode = Obj->GetNumberOfDigitsToUnlock( );
            //}
            //Passcode = Obj->Passcode_Server[0];
            if (Obj->IsA(SDK::ARBPuzzleRoomLargeInteractObjectiveCoordinator::StaticClass( ))) {
                // Passcode = static_cast<SDK::ARBProjectionCodeCoordinator>(Obj).PasscodeNumberOfDigits.Values1P.;
                // std::cout << "dsdsddsd" << std::endl;
                for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num( ); d++) {
                    SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                    if (IsValid(ObjAct->GetComponentByClass(SDK::URBSimplePasscodePadComponent::StaticClass( )))) {
                        // for (int d = 0; d < Code->SpecificCodeProjectors.Num( ); d++) {
                        // SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                        // if (ObjAct->IsA(SDK::ARBCodeProjector::StaticClass( ))) {
                        cout << ObjAct->ObjectiveActors.Num( ) << std::endl;
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        std::string PawnName = (const char*)u8"Прожектор";
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        float SizeLocation = ObjAct->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        if (LocationNotZero && SizeLocation <= fShowObjectiveActors * 100)
                            ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
                        //}
                    }
                }
            }
            
        }*/
    } // void Total_ShowRadio()
    void Total_ShowValves(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Valves) {
        for (int i = 0; i < Valves.Num( ); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Valves[i];
            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num( ); d++) {
                SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                if (IsValid(ObjAct->GetComponentByClass(SDK::URBValvePanelComponent::StaticClass( )))) {
                    SDK::FVector Location = ObjAct->K2_GetActorLocation( );
                    std::string PawnName = (const char*)u8"Заслонка";
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    float SizeLocation = ObjAct->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    if (LocationNotZero && SizeLocation <= fShowObjectiveActors * 100)
                        ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
                }
            }
        }
    } // void Total_ShowValves()
    void Total_ShowProjectors(UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Projectors, UC::TArray<SDK::ARBGeneratorMultiObjectiveActor*> Generators) {
        for (int i = 0; i < Projectors.Num( ); i++) {
            SDK::ARBBaseObjectiveCoordinator* Obj = Projectors[i];
            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;
            for (int d = 0; d < Obj->ObjectiveActorsInitialized.Num( ); d++) {
                SDK::AActor* ObjAct = Obj->ObjectiveActorsInitialized[d];
                if (IsValid(ObjAct->GetComponentByClass(SDK::URBLargeObjectInteractionPanelComponent::StaticClass( )))) {
                    bool gen_skip = false;
                    for (int b = 0; b < Generators.Num( ); b++) {
                            if (SDK::URBBlueprintLibrary::GetRBWorld( )->Generators[b]->IsA(ObjAct->Class))
                                gen_skip = true;
                    }
                    if (gen_skip)
                        continue;
                    SDK::FVector Location = ObjAct->K2_GetActorLocation( );
                    std::string PawnName = (const char*)u8"Кинопроектор";
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    float SizeLocation = ObjAct->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    if (LocationNotZero && SizeLocation <= fShowObjectiveActors * 100)
                        ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
                }
            }
        }
    } // void ShowProjectors()
    void Total_ShowPlayers(UC::TArray<SDK::ARBPlayer*> Players) {
        for (int i = 0; i < Players.Num( ); i++) {
            SDK::ARBPlayer* Player = Players[i];

            if (!Player)
                continue;
            if (!IsValid(Player))
                continue;

            Player->bHidden = false;
            // Player->SetActorScale3D(FVector(1, 1, 1));
            SDK::FVector Location = Player->K2_GetActorLocation( );
            std::string PawnName = utf8_encode(Player->GetGamePlayerName( ).ToWString( )).c_str( );
            SDK::FVector2D Location2D;
            bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
            float SizeLocation = Player->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
            if (LocationNotZero && SizeLocation <= fShowPlayers * 100)
                ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
        }
    }
    void Total_ShowDoorTraps(UC::TArray<SDK::ARBDoor*> Doors) {
        for (int i = 0; i < Doors.Num( ); i++) {
            SDK::ARBDoor* Door = Doors[i];

            if (!Door)
                continue;
            if (!IsValid(Door))
                continue;

            SDK::FVector Location = Door->K2_GetActorLocation( );
            std::string PawnName = Door->GetName();
            SDK::FVector2D Location2D;
            bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
            float SizeLocation = Door->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
            if (LocationNotZero)
                ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
        }
    } // void Total_ShowTrapDoors()
    void Total_ShowItems(UC::TArray<SDK::ARBPickup*> Pickups, UC::TArray<SDK::ARBBaseObjectiveCoordinator*> Coords) {
        for (int i = 0; i < Pickups.Num( ); i++) {
            SDK::ARBPickup* Obj = Pickups[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj))
                continue;

            if (Obj->bHasBeenPickedUp)
                continue;

            //------------------------------------------------------------------------------------------------------------------------------------------------------------------//

            if (bShowQuestItems) switch (Obj->ItemDefinition.ItemType) {
                case SDK::EItemType::Quest: // QUEST
                    {
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::wstring TempName = SDK::UKismetTextLibrary::Conv_TextToString(Obj->DisplayName).ToWString( );
                        //std::transform(TempName.begin( ), TempName.end( ), TempName.begin( ), ::toupper);
                        auto& f = std::use_facet<std::ctype<wchar_t>>(std::locale( ));
                        f.toupper(&TempName[0], &TempName[0] + TempName.size( ));
                        std::string Name = utf8_encode(TempName).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);

                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowQuestItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::KEY_GPU.ptr : (ImTextureID)(void*)DX11::KEY_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str()).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str());
                        }
                    } break;

                case SDK::EItemType::CollectibleDocument: // DOCUMENT
                    {
                        //SDK::FText Text;
                        //SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemCollectible"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Obj->DisplayName).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowQuestItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::DOCUMENT_GPU.ptr : (ImTextureID)(void*)DX11::DOCUMENT_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str()).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str());
                        }
                    } break;

            }

            //------------------------------------------------------------------------------------------------------------------------------------------------------------------//
            
            if (bShowItems) switch (Obj->ItemDefinition.ItemType) {
                case SDK::EItemType::Bottle: // BOTTLE
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemThrowableBottle"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::BOTTLE_GPU.ptr : (ImTextureID)(void*)DX11::BOTTLE_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str()).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;

                case SDK::EItemType::Brick: // BRICK
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemThrowableBrick"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::BRICK_GPU.ptr : (ImTextureID)(void*)DX11::BRICK_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;

                case SDK::EItemType::PsychosisAntidote: // ANTIDOTE
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemSanity"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::ANTIDOTE_GPU.ptr : (ImTextureID)(void*)DX11::ANTIDOTE_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;

                case SDK::EItemType::SkillCharge: // SKILLCHARGE
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemRigCharge"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::SKILLCHARGE_GPU.ptr : (ImTextureID)(void*)DX11::SKILLCHARGE_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;

                case SDK::EItemType::Battery: // BATTERY
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemBatteryLarge"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::BATTERY_GPU.ptr : (ImTextureID)(void*)DX11::BATTERY_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;

                case SDK::EItemType::SmallBattery: // SMALL BATTERY
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemBatterySmall"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::SMALL_BATTERY_GPU.ptr : (ImTextureID)(void*)DX11::SMALL_BATTERY_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;

                case SDK::EItemType::TempHealthGain: // SMALL HEAL
                    {
                        SDK::FText Text;
                        SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemHealthMedicineSmall"), &Text);
                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                        std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                        SDK::FVector2D Location2D;
                        bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                        if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                            ig::GetBackgroundDrawList( )->AddImage(
                                H::IsD3D12 ? (ImTextureID)DX12::SMALL_HEAL_GPU.ptr : (ImTextureID)(void*)DX11::SMALL_HEAL_TEX,
                                ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                                ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                                ImVec2(0.0f, 0.0f),
                                ImVec2(1.0f, 1.0f));
                            ig::GetBackgroundDrawList( )->AddText(
                                ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                                ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                                (const char*)Name.c_str( ));
                        }
                    } break;
                case SDK::EItemType::HealthGain: // HEAL
                {
                    SDK::FText Text;
                    SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemHealthMedicineLarge"), &Text);
                    SDK::FVector Location = Obj->K2_GetActorLocation( );
                    float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                        ig::GetBackgroundDrawList( )->AddImage(
                            H::IsD3D12 ? (ImTextureID)DX12::HEAL_GPU.ptr : (ImTextureID)(void*)DX11::HEAL_TEX,
                            ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                            ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                            ImVec2(0.0f, 0.0f),
                            ImVec2(1.0f, 1.0f));
                        ig::GetBackgroundDrawList( )->AddText(
                            ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                            ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                            (const char*)Name.c_str( ));
                    }
                } break;
                case SDK::EItemType::Bandage: // BANDAGE
                {
                    SDK::FText Text;
                    SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemBleeding"), &Text);
                    SDK::FVector Location = Obj->K2_GetActorLocation( );
                    float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                        ig::GetBackgroundDrawList( )->AddImage(
                            H::IsD3D12 ? (ImTextureID)DX12::BANDAGE_GPU.ptr : (ImTextureID)(void*)DX11::BANDAGE_TEX,
                            ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                            ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                            ImVec2(0.0f, 0.0f),
                            ImVec2(1.0f, 1.0f));
                        ig::GetBackgroundDrawList( )->AddText(
                            ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                            ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                            (const char*)Name.c_str( ));
                    }
                } break;

                case SDK::EItemType::GoreThrowable: // HEART
                {
                    SDK::FText Text;
                    SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ThrowableGibsName"), &Text);
                    SDK::FVector Location = Obj->K2_GetActorLocation( );
                    float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                        ig::GetBackgroundDrawList( )->AddImage(
                            H::IsD3D12 ? (ImTextureID)DX12::HEART_GPU.ptr : (ImTextureID)(void*)DX11::HEART_TEX,
                            ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                            ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                            ImVec2(0.0f, 0.0f),
                            ImVec2(1.0f, 1.0f));
                        ig::GetBackgroundDrawList( )->AddText(
                            ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                            ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                            (const char*)Name.c_str( ));
                    }
                } break;

                case SDK::EItemType::StaminaRegen: // ADRENALINE
                {
                    SDK::FText Text;
                    SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemStamina"), &Text);
                    SDK::FVector Location = Obj->K2_GetActorLocation( );
                    float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                        ig::GetBackgroundDrawList( )->AddImage(
                            H::IsD3D12 ? (ImTextureID)DX12::ADRENALINE_GPU.ptr : (ImTextureID)(void*)DX11::ADRENALINE_TEX,
                            ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                            ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                            ImVec2(0.0f, 0.0f),
                            ImVec2(1.0f, 1.0f));
                        ig::GetBackgroundDrawList( )->AddText(
                            ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str()).x / 2), Location2D.Y + IconSize + 12),
                            ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                            (const char*)Name.c_str());
                    }
                } break;
                case SDK::EItemType::LockPick: // LOCKPICK
                {
                    SDK::FText Text;
                    SDK::UKismetTextLibrary::FindTextInLocalizationTable(SDK::FString(L"Ingame_Inventory"), SDK::FString(L"ItemLockpick"), &Text);
                    SDK::FVector Location = Obj->K2_GetActorLocation( );
                    float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                    std::string Name = utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Text).ToWString( )).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( );
                    SDK::FVector2D Location2D;
                    bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                    if (LocationNotZero && int(round(SizeLocation / 100)) <= fShowItems) {
                        ig::GetBackgroundDrawList( )->AddImage(
                            H::IsD3D12 ? (ImTextureID)DX12::LOCKPICK_GPU.ptr : (ImTextureID)(void*)DX11::ADRENALINE_TEX,
                            ImVec2(Location2D.X - IconSize, Location2D.Y - IconSize),
                            ImVec2(Location2D.X + IconSize, Location2D.Y + IconSize),
                            ImVec2(0.0f, 0.0f),
                            ImVec2(1.0f, 1.0f));
                        ig::GetBackgroundDrawList( )->AddText(
                            ImVec2(Location2D.X - (ig::CalcTextSize((const char*)Name.c_str( )).x / 2), Location2D.Y + IconSize + 12),
                            ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)),
                            (const char*)Name.c_str( ));
                    }
                } break;
            }
        }
    } // void Total_ShowItems()
    void Total_ShowLargeItems(UC::TArray<SDK::ARBLargePickup*> LargePickups) {
        for (int i = 0; i < LargePickups.Num( ); i++) {
            SDK::ARBLargePickup* Obj = LargePickups[i];

            if (!Obj)
                continue;
            if (!IsValid(Obj) || SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( ))
                continue;

            if (Obj->IsInteractible.CurrentValue == true && Obj->bTrapped == false && Obj->bForceTrapped == false && Obj->LargeObjectType == SDK::ELargeObjectType::MaterialBox || Obj->LargeObjectType != SDK::ELargeObjectType::MaterialBox && Obj->IsInteractible.CurrentValue == true) {
                SDK::FVector Location = Obj->K2_GetActorLocation( );
                float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(TotalController->AcknowledgedPawn->K2_GetActorLocation( ));
                uint8_t PawnName = static_cast<uint8_t>(Obj->LargeObjectType);
                SDK::FVector2D Location2D;
                bool LocationNotZero = TotalController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                if (LocationNotZero && SizeLocation <= fShowLargeItems * 100) {
                    ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), (const char*)(std::string((const char*)LargeObjectToChar(PawnName)).append(" (").append(std::to_string(int(round(SizeLocation / 100))).c_str( )).append("m").append(")").c_str( )));
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
        if (bFail) {
            bFail = false;
            //TotalController->Client_TravelToLobby( );
            SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(TotalController->CheatClass, TotalController);

            TotalController->CheatManager = static_cast<SDK::URBCheatManager*>(NewObject);
            TotalPlayer->RBHUD->bShowHUD = 1;
            TotalPlayer->RBHUD->bShowDebugInfo = 1;
            std::cout << TotalController->CheatClass->GetFullName( ) << " " << TotalController->CheatManager->GetFullName( ) << std::endl;
            std::cout << static_cast<SDK::URBCheatManager*>(TotalController->CheatManager)->bCheatsEnabled;
            static_cast<SDK::URBCheatManager*>(TotalController->CheatManager)->bCheatsEnabled = true;
            std::cout << " -> " << static_cast<SDK::URBCheatManager*>(TotalController->CheatManager)->bCheatsEnabled << std::endl;
        }
    } // void Total_PlayerBrightnessBoost()

    void Total_EnableConsole() {
        SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine( ));
        SDK::UWorld* World = SDK::UWorld::GetWorld( );
        SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);

        bConsoleEnabled = true;
        SDK::UInputSettings::GetDefaultObj( )->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
        Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
    } // void Total_EnableConsole()

    bool IsValid(const SDK::UObject* Object) {
        return SDK::UKismetSystemLibrary::IsValid(Object);
    }
    std::string utf8_encode(const std::wstring& wstr) {
        if (wstr.empty( ))
            return std::string( );
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size( ), NULL, 0, NULL, NULL);
        std::string strTo(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size( ), &strTo[0], size_needed, NULL, NULL);
        return strTo;
    }
    ImVec2 CentralText(std::string PawnName, SDK::FVector2D Location2D, float SizeLocation) {
        return ImVec2(Location2D.X - (ig::CalcTextSize((const char*)(PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ))).x / 2), Location2D.Y + IconSize + 12);
    }
    const char* RandomString(int Length) {
        int range = 126 - 33 + 1;
        int num = rand( ) % range + 33;
        string result = "";

        for (int i = 0; i < Length; i++) result += (char)(rand( ) % range + 33); 
        return result.c_str();
    }
} // namespace Menu
