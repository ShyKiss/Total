#include "../PCH/PCH.h"

namespace ig = ImGui;

namespace Menu {
    void Total_Slider(const char* label, float* value, float min, float max) {
        ig::SetNextItemWidth(-FLT_MIN);
        if (ig::SliderFloat(label, value, min, max)) Config::SaveConfig();
    }
    void Total_Checkbox(const char* label, const char* desc, bool* value) {
        if (ig::Checkbox(label, value)) Config::SaveConfig();
        desc != "" ? ig::SetItemTooltip(desc) : void();
    }
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
        if (std::all_of(std::begin(Config::AllowedItems), std::end(Config::AllowedItems), [](bool i) {return !i; })) {
            return true;
        }
        return Config::AllowedItems[(int)Item];
    }

    bool IsValid(const SDK::UObject* Object) {
        return SDK::UKismetSystemLibrary::IsValid(Object);
    }

    SDK::FVector GetLocation(SDK::AActor* Actor) {
        return Actor->K2_GetActorLocation();
    }

    SDK::FRotator GetRotation(SDK::AActor* Actor) {
        return Actor->K2_GetActorRotation();
    }

    bool WorldToScreen(SDK::FVector Location, SDK::FVector2D* Location2D) {
        return TotalController->ProjectWorldLocationToScreen(Location, Location2D, false);
    }

    float CalcDistanceToPlayer(SDK::AActor* Actor) {
        return Actor->K2_GetActorLocation().GetDistanceTo(TotalPlayer->K2_GetActorLocation());
    }

    std::string GenerateName(SDK::FText Name) {
        return utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString()).c_str();
    }
    std::string GenerateName(SDK::FText Name, float DistanceToPlayer) {
        return utf8_encode(SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString()).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str();
    }
    std::string GenerateName(SDK::FName Name, float DistanceToPlayer) {
        return utf8_encode(SDK::UKismetStringLibrary::Conv_NameToString(Name).ToWString()).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str();
    }
    std::string GenerateName(std::string Name, float DistanceToPlayer) {
        return Name.append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str();
    }
    std::string GenerateNameWithCaps(SDK::FText Name, float DistanceToPlayer) {
        std::wstring TempName = SDK::UKismetTextLibrary::Conv_TextToString(Name).ToWString();
        std::use_facet<std::ctype<wchar_t>>(std::locale()).toupper(&TempName[0], &TempName[0] + TempName.size());
        return utf8_encode(TempName).append(" (").append(std::to_string(int(round(DistanceToPlayer / 100))).append("m")).append(")").c_str();
    }

    std::string LargeObjectToChar(SDK::ELargeObjectType LargeObjectType) {
        return std::string{ magic_enum::enum_name(LargeObjectType) };
    }

    std::string utf8_encode(const std::wstring& wstr) {
        if (wstr.empty())
            return std::string();
        int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
        std::string strTo(size_needed, 0);
        WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
        return strTo;
    }
    std::string RandomString(int Length) {
        int range = 126 - 33 + 1;
        int num = rand() % range + 33;
        std::string result = "";

        for (int i = 0; i < Length; i++) result += (char)(rand() % range + 33);
        return result;
    }
    bool InitGlobals() {
        RBEngine = static_cast<SDK::UOPPEngine*>(SDK::UOPPEngine::GetEngine());
        RBWorld = SDK::URBBlueprintLibrary::GetRBWorld();

        if (!GlobalAssert()) return false;

        TotalPlayer             = SDK::URBBlueprintLibrary::GetControlledPlayer();
        TotalController         = SDK::URBBlueprintLibrary::GetLocalMenuController();
        GameState               = SDK::URBBlueprintLibrary::GetRBGameState();
        bTotalPlayerAlive       = IsValid(TotalPlayer);
        bTotalControllerAlive   = bTotalPlayerAlive && IsValid(TotalController);
        bIsLoading              = SDK::URBUIBlueprintLibrary::IsShowingLoadingScreen();

        GlobalInfoText.clear();
        return true;
    }
    bool GlobalAssert() {
        return IsValid(RBEngine) && IsValid(RBWorld);
    }
    bool IsLookInput() {
        return bTotalControllerAlive ? !TotalController->IsLookInputIgnored() : false;
    }
    bool GetObjectiveCoordinators(SDK::TArray<SDK::ARBBaseObjectiveCoordinator*>* ObjectiveCoordinators) {
        if (IsValid(SDK::URBBlueprintLibrary::GetRBGameInstance())) {
            *ObjectiveCoordinators = SDK::URBBlueprintLibrary::GetRBGameInstance()->ObjectiveManager->ObjectiveCoordinators;
            return true;
        }
        return false;
    }
}