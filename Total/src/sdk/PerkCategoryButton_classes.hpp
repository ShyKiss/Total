#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkCategoryButton

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PerkCategoryButton.PerkCategoryButton_C
// 0x0090 (0x02F0 - 0x0260)
class UPerkCategoryButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedBottomLeftBracket_1;                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedBottomRightBracket_1;                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedTopLeftBracket_1;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedTopRightBracket_1;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                InteractionButton;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewNotification;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              NewScale;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PerkCategoryName;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PerkCount;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PerkIcon;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PickupListBox;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectionBorderPanel;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EPerkCategory                                 PerkCategory;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFocused;                                          // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHovered;                                          // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3787[0x5];                                     // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPerkCategoryClicked;                             // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsLoadout;                                        // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Update_Is_New();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void IsConsideredHovered(bool* bConsideredHovered);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetFocused(bool bInFocused);
	void SetHovered(bool Param_IsHovered);
	void Refresh();
	void Setup();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__PerkCategoryButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkCategoryButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkCategoryButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnPerkCategoriesPageDisplayed();
	void ExecuteUbergraph_PerkCategoryButton(int32 EntryPoint);
	void OnPerkCategoryClicked__DelegateSignature(EPerkCategory Category);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PerkCategoryButton_C">();
	}
	static class UPerkCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPerkCategoryButton_C>();
	}
};
static_assert(alignof(UPerkCategoryButton_C) == 0x000008, "Wrong alignment on UPerkCategoryButton_C");
static_assert(sizeof(UPerkCategoryButton_C) == 0x0002F0, "Wrong size on UPerkCategoryButton_C");
static_assert(offsetof(UPerkCategoryButton_C, UberGraphFrame) == 0x000260, "Member 'UPerkCategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, BackgroundImage) == 0x000268, "Member 'UPerkCategoryButton_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, FocussedBottomLeftBracket_1) == 0x000270, "Member 'UPerkCategoryButton_C::FocussedBottomLeftBracket_1' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, FocussedBottomRightBracket_1) == 0x000278, "Member 'UPerkCategoryButton_C::FocussedBottomRightBracket_1' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, FocussedTopLeftBracket_1) == 0x000280, "Member 'UPerkCategoryButton_C::FocussedTopLeftBracket_1' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, FocussedTopRightBracket_1) == 0x000288, "Member 'UPerkCategoryButton_C::FocussedTopRightBracket_1' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, InteractionButton) == 0x000290, "Member 'UPerkCategoryButton_C::InteractionButton' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, NewNotification) == 0x000298, "Member 'UPerkCategoryButton_C::NewNotification' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, NewScale) == 0x0002A0, "Member 'UPerkCategoryButton_C::NewScale' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, PerkCategoryName) == 0x0002A8, "Member 'UPerkCategoryButton_C::PerkCategoryName' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, PerkCount) == 0x0002B0, "Member 'UPerkCategoryButton_C::PerkCount' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, PerkIcon) == 0x0002B8, "Member 'UPerkCategoryButton_C::PerkIcon' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, PickupListBox) == 0x0002C0, "Member 'UPerkCategoryButton_C::PickupListBox' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, SelectionBorderPanel) == 0x0002C8, "Member 'UPerkCategoryButton_C::SelectionBorderPanel' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, PerkCategory) == 0x0002D0, "Member 'UPerkCategoryButton_C::PerkCategory' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, bFocused) == 0x0002D1, "Member 'UPerkCategoryButton_C::bFocused' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, bHovered) == 0x0002D2, "Member 'UPerkCategoryButton_C::bHovered' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, OnPerkCategoryClicked) == 0x0002D8, "Member 'UPerkCategoryButton_C::OnPerkCategoryClicked' has a wrong offset!");
static_assert(offsetof(UPerkCategoryButton_C, bIsLoadout) == 0x0002E8, "Member 'UPerkCategoryButton_C::bIsLoadout' has a wrong offset!");

}
