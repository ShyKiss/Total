#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkListTabButton

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkListTabButton.PerkListTabButton_C
// 0x0098 (0x02F8 - 0x0260)
class UPerkListTabButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ButtonTxt;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Delimiter;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MainButton;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPerkCategory                                 Category;                                          // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_36EF[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPerkButtonClicked;                               // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          CurrentlySelected;                                 // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CurrentlyHovered;                                  // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36F0[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            UnSelectedTextColor;                               // 0x02A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            SelectedTextColor;                                 // 0x02D0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Refresh();
	void SetHovered(bool Hovered);
	void SetSelected(bool Selected);
	void Init();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PerkListTabButton_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PerkListTabButton_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkListTabButton_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_PerkListTabButton(int32 EntryPoint);
	void OnPerkButtonClicked__DelegateSignature(EPerkCategory Param_Category);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkListTabButton_C">();
	}
	static class UPerkListTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkListTabButton_C>();
	}
};
static_assert(alignof(UPerkListTabButton_C) == 0x000008, "Wrong alignment on UPerkListTabButton_C");
static_assert(sizeof(UPerkListTabButton_C) == 0x0002F8, "Wrong size on UPerkListTabButton_C");
static_assert(offsetof(UPerkListTabButton_C, UberGraphFrame) == 0x000260, "Member 'UPerkListTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, ButtonTxt) == 0x000268, "Member 'UPerkListTabButton_C::ButtonTxt' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, Delimiter) == 0x000270, "Member 'UPerkListTabButton_C::Delimiter' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, Highlight) == 0x000278, "Member 'UPerkListTabButton_C::Highlight' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, MainButton) == 0x000280, "Member 'UPerkListTabButton_C::MainButton' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, Category) == 0x000288, "Member 'UPerkListTabButton_C::Category' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, OnPerkButtonClicked) == 0x000290, "Member 'UPerkListTabButton_C::OnPerkButtonClicked' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, CurrentlySelected) == 0x0002A0, "Member 'UPerkListTabButton_C::CurrentlySelected' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, CurrentlyHovered) == 0x0002A1, "Member 'UPerkListTabButton_C::CurrentlyHovered' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, UnSelectedTextColor) == 0x0002A8, "Member 'UPerkListTabButton_C::UnSelectedTextColor' has a wrong offset!");
static_assert(offsetof(UPerkListTabButton_C, SelectedTextColor) == 0x0002D0, "Member 'UPerkListTabButton_C::SelectedTextColor' has a wrong offset!");

}
