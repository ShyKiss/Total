#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSheetTabs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterSheetTabs.CharacterSheetTabs_C
// 0x0040 (0x02A0 - 0x0260)
class UCharacterSheetTabs_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBCharacterSheetTabMenuButton_C*       BadgesButton;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBCharacterSheetTabMenuButton_C*       EvidenceButton;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionIconWidget_C*                    LeftTabButton;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBCharacterSheetTabMenuButton_C*       LoadoutsButton;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionIconWidget_C*                    RightTabButton;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBCharacterSheetTabMenuButton_C*       StatsButton;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBCharacterSheetTabMenuButton_C*       TrialButton_1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CharacterSheetTabs(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterSheetTabs_C">();
	}
	static class UCharacterSheetTabs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterSheetTabs_C>();
	}
};
static_assert(alignof(UCharacterSheetTabs_C) == 0x000008, "Wrong alignment on UCharacterSheetTabs_C");
static_assert(sizeof(UCharacterSheetTabs_C) == 0x0002A0, "Wrong size on UCharacterSheetTabs_C");
static_assert(offsetof(UCharacterSheetTabs_C, UberGraphFrame) == 0x000260, "Member 'UCharacterSheetTabs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, BadgesButton) == 0x000268, "Member 'UCharacterSheetTabs_C::BadgesButton' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, EvidenceButton) == 0x000270, "Member 'UCharacterSheetTabs_C::EvidenceButton' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, LeftTabButton) == 0x000278, "Member 'UCharacterSheetTabs_C::LeftTabButton' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, LoadoutsButton) == 0x000280, "Member 'UCharacterSheetTabs_C::LoadoutsButton' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, RightTabButton) == 0x000288, "Member 'UCharacterSheetTabs_C::RightTabButton' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, StatsButton) == 0x000290, "Member 'UCharacterSheetTabs_C::StatsButton' has a wrong offset!");
static_assert(offsetof(UCharacterSheetTabs_C, TrialButton_1) == 0x000298, "Member 'UCharacterSheetTabs_C::TrialButton_1' has a wrong offset!");

}
