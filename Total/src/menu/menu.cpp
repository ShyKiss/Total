#include "menu.hpp"

#include "../dependencies/imgui/imgui.h"
#include "../dependencies/imgui/imgui_impl_win32.h"
#include <iostream>
#include "../utils/utils.hpp"
#include "../hooks/hooks.hpp"
#include "../SDK/Engine_classes.hpp"
#include "../SDK/OPP_classes.hpp"
#include "../SDK/CoreUObject_classes.hpp"

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
            return u8"Документ";
            break;
        case 26:
            return u8"Квест";
            break;
        case 27:
            return u8"Исцеление/Рентген";
            break;
        case 28:
            return u8"Оглушение";
            break;
        case 29:
            return u8"Завеса";
            break;
        case 30:
            return u8"Брось меня";
            break;
        case 31:
            return u8"Сердце";
            break;
        case 32:
            return u8"Цель сбора";
            break;
        case 33:
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
            return u8"Пленка";
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
        ImGuiIO& io = ig::GetIO( ); (void)io;
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

        SDK::UOPPEngine* Engine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine( ));
        SDK::UWorld* World = SDK::UWorld::GetWorld( );
        SDK::URBWorld* OPPWorld = SDK::URBBlueprintLibrary::GetRBWorld( ); // static_cast<SDK::URBWorld*>(Engine->GameViewport->World);
        // SDK::FVector Location;
        // std::string PawnName;
        // std::cout << "looooool" << std::endl;

        // std::cout << World->OwningGameInstance-> << std::endl;
        // std::cout << World->OwningGameInstance->LocalPlayers[0]->GetFullName() << std::endl;
        // bool PlayerValid = World->OwningGameInstance->LocalPlayers.IsValidIndex(0);
        if (SDK::UKismetSystemLibrary::IsValid(World))
            if (SDK::UKismetSystemLibrary::IsValid(World->PersistentLevel))
                if (!SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( ))
                    if (SDK::UKismetSystemLibrary::IsValid(SDK::URBBlueprintLibrary::GetControlledPlayer( ))) {
                    // std::cout << OPPPlayer << "1" << std::endl;
                    /* UC::TArray<SDK::AActor*> Actors = World->PersistentLevel->Actors;
                    for (int i = 0; i < Actors.Num( ); i++) {
                        SDK::AActor* Obj = Actors[i];
                        if (!Obj)
                            continue;
                        if (!SDK::UKismetSystemLibrary::IsValid(Obj))
                            continue;

                        if (Obj->IsA(SDK::ARBPlayer::StaticClass( ))) {*/
                            //SDK::ARBPlayer* OPPPlayer = static_cast<SDK::ARBPlayer*>(Obj);
                            // if (!OPPPlayer)
                            
                            SDK::ARBPlayer* OPPPlayer = SDK::URBBlueprintLibrary::GetControlledPlayer();
                            if (SDK::UKismetSystemLibrary::IsValid(OPPPlayer)) {
                                if (lightBool) {
                                    OPPPlayer->ProximityLight->SetAttenuationRadius(lightRadius);
                                    OPPPlayer->ProximityLight->SetIntensity(lightIntensity);
                                    OPPPlayer->ProximityLight->SetInnerConeAngle(lightAngle - 1);
                                    OPPPlayer->ProximityLight->SetOuterConeAngle(lightAngle);
                                }
                                if (bFail) {
                                    bFail = false;
                                    OPPPlayer->RBController->Client_TravelToLobby( );
                                    SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(OPPPlayer->RBController->CheatClass, OPPPlayer->RBController);
                                    // SDK::UObject* NewCheatManager = SDK::UGameplayStatics::SpawnObject(SDK::UCheatManager::StaticClass(), SDK::UCheatManager::StaticClass()->Super);

                                    OPPPlayer->RBController->CheatManager = static_cast<SDK::URBCheatManager*>(NewObject);
                                    OPPPlayer->RBHUD->bShowHUD = 1;
                                    OPPPlayer->RBHUD->bShowDebugInfo = 1;
                                    std::cout << OPPPlayer->RBController->CheatClass->GetFullName( ) << " " << OPPPlayer->RBController->CheatManager->GetFullName( ) << std::endl;
                                    std::cout << static_cast<SDK::URBCheatManager*>(OPPPlayer->RBController->CheatManager)->bCheatsEnabled;
                                    static_cast<SDK::URBCheatManager*>(OPPPlayer->RBController->CheatManager)->bCheatsEnabled = true;
                                    std::cout << " -> " << static_cast<SDK::URBCheatManager*>(OPPPlayer->RBController->CheatManager)->bCheatsEnabled << std::endl;
                                    // OPPPlayer->RBController->CheatManager = SDK::UGameplayStatics::SpawnObject(SDK::UCheatManager::StaticClass(), SDK::UCheatManager::StaticClass());
                                    //
                              //  }
                           // }
                            //}
                        }
                        // LoadImage(globals::mainModule, MAKEINTRESOURCE(IDB_PNG1), IMAGE_ICON, 128, 128, LR_LOADTRANSPARENT);
                    }
                }
        if (SDK::UKismetSystemLibrary::IsValid(Engine))
            if (SDK::UKismetSystemLibrary::IsValid(World))
                if (SDK::UKismetSystemLibrary::IsValid(World->OwningGameInstance))
                    if (World->OwningGameInstance->LocalPlayers.IsValid( ))
                        if (World->OwningGameInstance->LocalPlayers.IsValidIndex(0))
                            if (SDK::UKismetSystemLibrary::IsValid(OPPWorld))
                                if (SDK::UKismetSystemLibrary::IsValid(OPPWorld->RBGameStateBase))
                                    if (SDK::UKismetSystemLibrary::IsValid(World->OwningGameInstance->LocalPlayers[0]->PlayerController))
                                        if (SDK::UKismetSystemLibrary::IsValid(World->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerState))
                                            if (!SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( )) {
                                                UC::TArray<SDK::ARBPickup*> Pickups = OPPWorld->RBPickups;
                                                UC::TArray<SDK::URBPuzzleRoomComponent*> PuzzleRooms = OPPWorld->PuzzleRooms;
                                                UC::TArray<SDK::ARBLargePickup*> LargePickups = OPPWorld->GetRBLargePickups();
                                                UC::TArray<SDK::ARBPlayer*> Players = OPPWorld->GetRBPlayers();
                                                UC::TArray<SDK::AActor*> Actors = World->PersistentLevel->Actors;
                                                UC::TArray<SDK::ARBGeneratorMultiObjectiveActor*> Generators = OPPWorld->Generators;
                                                //globals::selfPing = World->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerState->Ping;
                                               // globals::levelSeed = OPPWorld->RBGameStateBase->LevelSeed;
                                               // Password = "";
                                                /* for (int i = 0; i < PuzzleRooms.Num( ); i++) {
                                                    SDK::URBPuzzleRoomComponent* PuzzleRoom = PuzzleRooms[i];
                                                    std::string Passcode = "";
                                                    for (int i = 0; PuzzleRoom->Passcode_Server.Num( ); i++) {
                                                        UC::int32 Number = PuzzleRoom->Passcode_Server[i];
                                                        Passcode += Number;
                                                    }
                                                //    Password = Passcode.append(" ").c_str( );
                                                }*/
                                                /*if (!SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen()) {
                                                //std::cout << OPPPlayer << "1" << std::endl;
                                                        for (int i = 0; i < Actors.Num(); i++)
                                                        {
                                                                SDK::AActor* Obj = Actors[i];
                                                                if (!Obj) continue;
                                                                if (!SDK::UKismetSystemLibrary::IsValid(Obj)) continue;

                                                                if (Obj->IsA(SDK::ARBPlayer::StaticClass())) {
                                                                        SDK::ARBPlayer* OPPPlayer = static_cast<SDK::ARBPlayer*>(Obj);
                                                        if (!OPPPlayer)
                                                                if (!SDK::UKismetSystemLibrary::IsValid(OPPPlayer)) {
                                                                        OPPPlayer->ProximityLight->SetAttenuationRadius(lightRadius);
                                                                        OPPPlayer->ProximityLight->SetIntensity(lightIntensity);
                                                                        OPPPlayer->ProximityLight->SetInnerConeAngle(lightAngle - 1);
                                                                        OPPPlayer->ProximityLight->SetOuterConeAngle(lightAngle);
                                                                        if (bFail) {
                                                                                bFail = false;
                                                                                OPPPlayer->RBController->Client_TravelToLobby();
                                                                                SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(OPPPlayer->RBController->CheatClass, OPPPlayer->RBController);
                                                                                //SDK::UObject* NewCheatManager = SDK::UGameplayStatics::SpawnObject(SDK::UCheatManager::StaticClass(), SDK::UCheatManager::StaticClass()->Super);


                                                                                OPPPlayer->RBController->CheatManager = static_cast<SDK::URBCheatManager*>(NewObject);
                                                                                OPPPlayer->RBHUD->bShowHUD = 1;
                                                                                OPPPlayer->RBHUD->bShowDebugInfo = 1;
                                                                                std::cout << OPPPlayer->RBController->CheatClass->GetFullName() << " " << OPPPlayer->RBController->CheatManager->GetFullName() << std::endl;
                                                                                std::cout << static_cast<SDK::URBCheatManager*>(OPPPlayer->RBController->CheatManager)->bCheatsEnabled;
                                                                                static_cast<SDK::URBCheatManager*>(OPPPlayer->RBController->CheatManager)->bCheatsEnabled = true;
                                                                                std::cout << " -> " << static_cast<SDK::URBCheatManager*>(OPPPlayer->RBController->CheatManager)->bCheatsEnabled << std::endl;
                                                                                //OPPPlayer->RBController->CheatManager = SDK::UGameplayStatics::SpawnObject(SDK::UCheatManager::StaticClass(), SDK::UCheatManager::StaticClass());
                                                                                //
                                                                        }
                                                                }
                                                                        //LoadImage(globals::mainModule, MAKEINTRESOURCE(IDB_PNG1), IMAGE_ICON, 128, 128, LR_LOADTRANSPARENT);
                                                                }*/
                                                //}
                                                //}
                                                for (int i = 0; i < Players.Num( ); i++) {
                                                    SDK::ARBPlayer* Player = Players[i];

                                                    if (!Player)
                                                        continue;
                                                    if (!SDK::UKismetSystemLibrary::IsValid(Player))
                                                        continue;
                                                    SDK::FVector Location = Player->K2_GetActorLocation( );
                                                    std::string PawnName = TEXT(Player->GetGamePlayerName( ).ToString().c_str()); //(const char*)std::string(u8"ХУЕСОС ").append(Player->GetGamePlayerName( ).ToString().c_str());
                                                    SDK::FVector2D Location2D;
                                                    bool LocationNotZero = World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                    float SizeLocation = Player->K2_GetActorLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                    if (LocationNotZero)
                                                        ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));

                                                }
                                                for (int i = 0; i < Actors.Num( ); i++) {
                                                    SDK::AActor* Obj = Actors[i];
                                                    if (!Obj)
                                                        continue;
                                                    if (!SDK::UKismetSystemLibrary::IsValid(Obj))
                                                        continue;
                                                    SDK::FVector Location = Obj->K2_GetActorLocation( );
                                                    std::string PawnName = "Prikol2";
                                                    SDK::FVector2D Location2D;
                                                    if (Obj->IsA(SDK::ARBGeneratorMultiObjectiveActor::StaticClass( ))) {
                                                        SDK::ARBGeneratorMultiObjectiveActor* Generator = static_cast<SDK::ARBGeneratorMultiObjectiveActor*>(Obj);
                                                        // if (!(Generator->bIsCompleted) && Generator->bIsInteractible) {
                                                        World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                        ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.c_str( ));
                                                        ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y + 18), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), std::to_string(int(round(SizeLocation / 100))).append("m").c_str( ));
                                                        //}
                                                    }
                                                    if (Obj->IsA(SDK::ARBRadioDistraction::StaticClass( ))) {
                                                        SDK::ARBRadioDistraction* Radio = static_cast<SDK::ARBRadioDistraction*>(Obj);
                                                        if (Radio->bIsPlaying && Radio->bIsBroken) {
                                                            World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                            float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                            ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.c_str( ));
                                                            ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y + 18), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), std::to_string(int(round(SizeLocation / 100))).append("m").c_str( ));
                                                        }
                                                    }
                                                }
                                                for (int i = 0; i < Generators.Num( ); i++) {
                                                    std::string PawnName = (const char*)u8"Генератор";
                                                    SDK::FVector2D Location2D;
                                                    SDK::ARBGeneratorMultiObjectiveActor* Generator = Generators[i]; // static_cast<SDK::ARBGeneratorMultiObjectiveActor*>(Obj);
                                                    if (!SDK::UKismetSystemLibrary::IsValid(Generator) || SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( ))
                                                        continue;
                                                    SDK::FVector Location = Generator->K2_GetActorLocation( );
                                                    if (!(Generator->bIsCompleted) && Generator->bIsInteractible) {
                                                        bool LocationNotZero = World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                        float SizeLocation = Generator->K2_GetActorLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                        if (LocationNotZero)
                                                            ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
                                                        // ig::GetBackgroundDrawList()->AddText(ImVec2(Location2D.X, Location2D.Y - 32), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), );
                                                    }
                                                }
                                                for (int i = 0; i < Pickups.Num( ); i++) {
                                                    // SDK::ARBPickup* Obj = World->PersistentLevel->Actors[i];
                                                    SDK::ARBPickup* Obj = Pickups[i];
                                                    // SDK::AActor* obj = World->PersistentLevel->Actors->GetByIndex(i);

                                                    if (!Obj)
                                                        continue;
                                                    if (!SDK::UKismetSystemLibrary::IsValid(Obj))
                                                        continue;

                                                    // if (!Obj->IsDefaultObject())
                                                    //     continue;

                                                    // if (Obj->IsA(SDK::ARBPlayer::StaticClass()))
                                                    //{
                                                    if (!(Obj->bHasBeenPickedUp))
                                                        if (Obj->ItemDefinition.ItemType == SDK::EItemType::Quest) {
                                                            // std::cout << Obj->GetFullName() << "\n";
                                                            // auto Pawn = static_cast<SDK::ARBPlayer*>(Obj);
                                                            // Pawn->Mesh->bDisplayBones = 1;
                                                            // Location = Pawn->K2_GetActorLocation();
                                                            // PawnName = Pawn->GetName();// = SDK::EStreamingVolumeUsage::SVB_LoadingAndVisibility;
                                                            // World->OwningGameInstance->LocalPlayers[0]->PlayerController->GetActorEyesViewPoint(&playerEyesPos, &playerEyesRot);
                                                            // float Distance = SDK::UKismetMathLibrary::VSize(playerEyesPos - Location) * (World->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerCameraManager->GetFOVAngle() / 100);
                                                            // Location = World->OwningGameInstance->LocalPlayers[0]->PlayerController->MyHUD->Project(Location, true);
                                                            SDK::FVector Location = Obj->K2_GetActorLocation( );
                                                            float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                            // std::cout << "d" << std::endl;
                                                            uint8_t PawnName = static_cast<uint8_t>(Obj->ItemDefinition.ItemType);
                                                            SDK::FVector2D Location2D;
                                                            // Pickups[i].Allocator
                                                            // std::cout << Location.X << " " << Location.Y << " " << Location.Z << std::endl;
                                                            bool LocationNotZero = World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                            // for (int i = 0; i < Array.Num(); i++) { Actor = Array[i]; }
                                                            if (LocationNotZero) {
                                                                ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), (const char*)(std::string((const char*)ObjectToChar(PawnName)).append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( )));
                                                            }
                                                            // Pawn->SetActorScale3D(SDK::FVector(1,2,1));
                                                            // std::cout << Location.X << " " << Location.Y << " " << Location.Z << std::endl;
                                                        }
                                                }
                                                for (int i = 0; i < LargePickups.Num( ); i++) {
                                                    // SDK::ARBPickup* Obj = World->PersistentLevel->Actors[i];
                                                    SDK::ARBLargePickup* Obj = LargePickups[i];
                                                    // SDK::AActor* obj = World->PersistentLevel->Actors->GetByIndex(i);

                                                    if (!Obj)
                                                        continue;
                                                    if (!SDK::UKismetSystemLibrary::IsValid(Obj) || SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen( ))
                                                        continue;

                                                    // if (!Obj->IsDefaultObject())
                                                    //     continue;

                                                    // if (Obj->IsA(SDK::ARBPlayer::StaticClass()))
                                                    //{
                                                    if (Obj->IsInteractible.CurrentValue == true && Obj->bTrapped == false && Obj->bForceTrapped == false && Obj->LargeObjectType == SDK::ELargeObjectType::MaterialBox || Obj->LargeObjectType != SDK::ELargeObjectType::MaterialBox && Obj->IsInteractible.CurrentValue == true) {
                                                        // std::cout << Obj->GetFullName() << "\n";
                                                        // auto Pawn = static_cast<SDK::ARBPlayer*>(Obj);
                                                        // Pawn->Mesh->bDisplayBones = 1;
                                                        // Location = Pawn->K2_GetActorLocation();
                                                        // PawnName = Pawn->GetName();// = SDK::EStreamingVolumeUsage::SVB_LoadingAndVisibility;
                                                        // World->OwningGameInstance->LocalPlayers[0]->PlayerController->GetActorEyesViewPoint(&playerEyesPos, &playerEyesRot);
                                                        // float Distance = SDK::UKismetMathLibrary::VSize(playerEyesPos - Location) * (World->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerCameraManager->GetFOVAngle() / 100);
                                                        // Location = World->OwningGameInstance->LocalPlayers[0]->PlayerController->MyHUD->Project(Location, true);
                                                        SDK::FVector Location = Obj->K2_GetActorLocation( );
                                                        float SizeLocation = Obj->K2_GetActorLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                        // std::cout << "d" << std::endl;
                                                        uint8_t PawnName = static_cast<uint8_t>(Obj->LargeObjectType);
                                                        SDK::FVector2D Location2D;
                                                        // Pickups[i].Allocator
                                                        // std::cout << Location.X << " " << Location.Y << " " << Location.Z << std::endl;
                                                        bool LocationNotZero = World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                        // for (int i = 0; i < Array.Num(); i++) { Actor = Array[i]; }
                                                        if (LocationNotZero) {
                                                            ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), (const char*)(std::string((const char*)LargeObjectToChar(PawnName)).append(" (").append(std::to_string(int(round(SizeLocation / 100))).c_str( )).append("m").append(")").c_str( )));
                                                        }
                                                        // Pawn->SetActorScale3D(SDK::FVector(1,2,1));
                                                        // std::cout << Location.X << " " << Location.Y << " " << Location.Z << std::endl;
                                                    }
                                                }
                                                if (SDK::UKismetSystemLibrary::IsValid(OPPWorld))
                                                    if (SDK::UKismetSystemLibrary::IsValid(World->PersistentLevel)) {
                                                       // UC::TArray<SDK::UObject*> Actorss = Engine->GObjects;
                                                        for (int i = 0; i < Engine->GObjects->Num(); i++) {
                                                            // Actorss[i];
                                                           // SDK::UObject* Obj = Engine->GObjects[i];
                                                            if (!Engine->GObjects->GetByIndex(i))
                                                                continue;
                                                            SDK::UObject* Obj2 = Engine->GObjects->GetByIndex(i);
                                                            if (!Obj2->IsA(SDK::URBValvePanelComponent::StaticClass( )))
                                                                continue;
                                                            if (!SDK::UKismetSystemLibrary::IsValid(Obj2))
                                                                continue;
                                                            //if (!Obj->IsInteractible.CurrentValue)
                                                               // continue;
                                                            SDK::URBValvePanelComponent* Obj = static_cast<SDK::URBValvePanelComponent*>(Obj2);
                                                            //if (Obj->K2_GetComponentLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( )) > 500)
                                                              //  continue;
                                                                ;
                                                            SDK::FVector Location = Obj->K2_GetComponentLocation( );
                                                            std::string PawnName = Obj->GetName( );
                                                            SDK::FVector2D Location2D;
                                                            bool LocationNotZero = World->OwningGameInstance->LocalPlayers[0]->PlayerController->ProjectWorldLocationToScreen(Location, &Location2D, false);
                                                            float SizeLocation = Obj->K2_GetComponentLocation( ).GetDistanceTo(World->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->K2_GetActorLocation( ));
                                                            if (LocationNotZero)
                                                                ig::GetBackgroundDrawList( )->AddText(ImVec2(Location2D.X, Location2D.Y - 50), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), PawnName.append(" (").append(std::to_string(int(round(SizeLocation / 100))).append("m").c_str( )).append(")").c_str( ));
                                                            // ig::GetBackgroundDrawList()->AddText(ImVec2(Location2D.X, Location2D.Y - 32), ig::ColorConvertFloat4ToU32(ImVec4(255 / 255.0, 255 / 255.0, 255 / 255.0, 255 / 255.0)), );
                                                        }
                                                    }
                                            }
	

        ig::Begin("Overlay", (bool*)true, ImGuiWindowFlags(197120 | 43));
        {
            ig::SetWindowSize(ImVec2(ig::GetIO( ).DisplaySize.x, ig::GetIO( ).DisplaySize.y), ImGuiCond_Always);
            ig::SetWindowPos(ImVec2(0, 0));
            ig::Text("[Total] FPS: %.0f  Ping: %.0f ms  Seed: %.0f  XSIZE: %.0f  YSIZE: %.0f", ig::GetIO( ).Framerate, (float)1337, (float)228, ig::GetIO( ).DisplaySize.x, ig::GetIO( ).DisplaySize.y);
        }
        ig::End;
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
            if (ig::Button("Fail")) {
                c::cout << "lol" << c::endl;
                // bFail = true;
            }
            ig::Checkbox("Light?", &lightBool);
            ig::SliderFloat("Light Radius", &lightRadius, 0.0f, 100000.0f);
            ig::SliderFloat("Light Intensity", &lightIntensity, 0.0f, 100.0f);
            ig::SliderFloat("Light Angle", &lightAngle, 0.0f, 360.0f);

            // std::cout << LoadImage(globals::mainModule, MAKEINTRESOURCE(IDB_BITMAP1), IMAGE_ICON, 0, 0, LR_LOADTRANSPARENT), ImVec2(128, 128)) << std::endl;
            /*ig::PushItemWidth(ig::GetWindowWidth() * 0.65f);
            ig::PushItemWidth(-140);

            if (ig::CollapsingHeader("MENU"))
            {
                    if (ig::TreeNode("SUB MENU"))
                    {
                            ig::Text("Text Test");
                            if (ig::Button("Button Test")) {}
                            ig::Checkbox("CheckBox Test", &no_titlebar);
                            ig::SliderFloat("Slider Test", &test, 1.0f, 100.0f);

                            ig::TreePop();
                    }
            }*/
            // ig::ShowDemoWindow();
            ig::End( );

            colors[ImGuiCol_TableHeaderBg] = ImVec4(0.00f, 0.00f, 0.00f, 0.83f);
            ig::ShowDemoWindow(&bShowMenu);
            ig::Begin("Actor Scene", &bShowMenu, 0);
            if (!start_pos_set2) {
                ig::SetWindowPos(ImVec2(ig::GetIO( ).DisplaySize.x / 5, ig::GetIO( ).DisplaySize.y / 4));
                ig::SetWindowSize(ImVec2(-1, 600));
                start_pos_set2 = true;
            }
            ImGui::Text("Search:");
            filter.Draw("##searchbar");
            /* SDK::TUObjectArrayWrapper* Objs = SDK::UObject::GObjects;
            if (items.Size == 0) {
                for (int n = 0; n < items.Size; n++) {

                    SDK::UObject& item = items[n];
                    SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(n);
                    if (!Obj)
                        continue;
                    if (!SDK::UKismetSystemLibrary::IsValid(Obj))
                        continue;
                    if (!filter.PassFilter(Obj->GetName( ).c_str( )) && !filter.PassFilter(Obj->Class->GetName( ).c_str( )))
                        continue;

                    ig::Text("%s", Obj->GetName( ).c_str( ));
                    ig::TableNextColumn( );
                    ig::Text("%s", Obj->Class->GetName( ).c_str( ));
                    ig::TableNextColumn( );
                    if (Obj->IsA(SDK::AActor::StaticClass( ))) {
                        SDK::AActor* Actor = static_cast<SDK::AActor*>(Obj);
                        ig::Text("%.3f %.3f %.3f / %.0f", Actor->K2_GetActorLocation( ).X, Actor->K2_GetActorLocation( ).Y, Actor->K2_GetActorLocation( ).Z, Actor->K2_GetActorRotation( ).Yaw);
                    } else {
                        ig::Text("");
                    }
                }
            }*/
            ig::BeginChild("DD");
            float TEXT_BASE_HEIGHT = ImGui::GetTextLineHeightWithSpacing( );
            ImVec2 outer_size = ImVec2(0.0f, TEXT_BASE_HEIGHT * 18);
            static ImGuiTableFlags flags = ImGuiTableFlags_ScrollY | ImGuiTableFlags_RowBg | ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersV | ImGuiTableFlags_Resizable | ImGuiTableFlags_Reorderable | ImGuiTableFlags_Hideable;
            ig::BeginTable("ActorScene", 4, flags, outer_size);
            {
                if (SDK::UKismetSystemLibrary::IsValid(World))
                    if (SDK::UKismetSystemLibrary::IsValid(World->PersistentLevel)) {
                        UC::TArray<SDK::AActor*> Actors = World->PersistentLevel->Actors;
                        ig::TableSetupColumn("ID");
                        ig::TableSetupColumn("NAME");
                        ig::TableSetupColumn("CLASS");
                        ig::TableSetupColumn("LOCATION / POSITION");
                        ImGui::TableSetupScrollFreeze(0, 1);
                        ImGui::TableHeadersRow( );
                        ImGuiListClipper clipper;
                        clipper.Begin(Actors.Num( ));
                        while (clipper.Step( ))
                            for (int row_n = clipper.DisplayStart; row_n < clipper.DisplayEnd; row_n++) {
                                //SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(row_n);
                                SDK::AActor* Obj = Actors[row_n];
                                //ig::TableNextRow( );
                                 if (!Obj) {
                                    /*ig::TableNextRow( );
                                    ig::TableNextColumn( );
                                    ig::Text("%d", row_n + 1);
                                    ig::TableNextColumn( );
                                    ig::Text("---");
                                    ig::TableNextColumn( );
                                    ig::Text("---");
                                    ig::TableNextColumn( );
                                    ig::Text("---");*/
                                    continue;
                                }
                                if (!SDK::UKismetSystemLibrary::IsValid(Obj)) {
                                    /*ig::TableNextRow( );
                                    ig::TableNextColumn( );
                                    ig::Text("%d", row_n + 1);
                                    ig::TableNextColumn( );
                                    ig::Text("---");
                                    ig::TableNextColumn( );
                                    ig::Text("---");
                                    ig::TableNextColumn( );
                                    ig::Text("---");*/
                                    continue;
                                }
                                if (!filter.PassFilter(Obj->GetName( ).c_str( )) /* && filter.PassFilter(Obj->Class->GetName( ).c_str( ))*/) {
                                    // clipper.DisplayEnd = clipper.DisplayEnd - 1;
                                    continue;
                                }
                                ig::TableNextColumn( );
                                ig::Text("%d", row_n + 1);
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
                                }
                                
                                // ig::TableNextColumn( );
                                // for (int column = 0; column < 4; column++) {
                                //     ImGui::TableSetColumnIndex(column);
                                //     ImGui::TableNextRow( );
                                // ig::TableNextColumn( );
                                //    ig::Text("%d", 1);
                                // }
                            }

                        /* for (int i = 0; i < SDK::UObject::GObjects->Num( ); i++) {
                                SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);
                                // SDK::AActor* Actor = Actors[i];
                                if (!Obj)
                                    continue;
                                if (!SDK::UKismetSystemLibrary::IsValid(Obj))
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
            ig::End( );
        }
    }
} // namespace Menu
