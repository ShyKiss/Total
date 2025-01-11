#include "../PCH/PCH.h"

namespace Menu {
    void Total_Slider                   (const char* label, float* value, float min, float max);
    void Total_Checkbox                 (const char* label, const char* desc, bool* value);
    bool IsValid                        (const SDK::UObject* Object);
    bool IsAllowedItem                  (SDK::EItemType Item);
    bool WorldToScreen                  (SDK::FVector Location, SDK::FVector2D* Location2D);
    SDK::FVector GetLocation            (SDK::AActor* Actor);
    SDK::FRotator GetRotation           (SDK::AActor* Actor);
    float CalcDistanceToPlayer          (SDK::AActor* Actor);
    std::string CalcRatingFromScore     (float Score);
    std::string GenerateName            (SDK::FText Name);
    std::string GenerateName            (SDK::FText Name, float DistanceToPlayer);
    std::string GenerateName            (SDK::FName Name, float DistanceToPlayer);
    std::string GenerateName            (std::string Name, float DistanceToPlayer);
    std::string GenerateNameWithCaps    (SDK::FText Name, float DistanceToPlayer);
    std::string utf8_encode             (const std::wstring& wstr);
    std::string RandomString            (int Length);
    void AddImage                       (ImU64 Texture, SDK::FVector2D Position);
    void AddText                        (std::string Text, SDK::FVector2D Position, ImVec4 Color, bool WithIcon);
    std::string LargeObjectToChar       (SDK::ELargeObjectType LargeObjectType);
    bool InitGlobals();
    bool GlobalAssert();
    bool IsLookInput();
    bool GetObjectiveCoordinators       (SDK::TArray<SDK::ARBBaseObjectiveCoordinator*>* ObjectiveCoordinators);
}