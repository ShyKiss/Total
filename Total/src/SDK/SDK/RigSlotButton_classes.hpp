#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigSlotButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RigSlotButton.RigSlotButton_C
// 0x0208 (0x0468 - 0x0260)
class URigSlotButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ActiveSkillName;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ActiveSkillTier;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundImage;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundImage_1;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquippedIcon;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HoverBackground;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverBackgroundImage;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                InteractionButton;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewNotification;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectionBorderPanel;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMenuUpgradeItemInfo                   UpgradeInfo;                                       // 0x02C0(0x0190)(Edit, BlueprintVisible)
	int32                                         CurrentUpgradeTier;                                // 0x0450(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x0454(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_455[0x3];                                      // 0x0455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void RefreshNewStatus();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void ComputeTier();
	void SetHovered(bool bInHovered);
	void Refresh();
	void Init();
	void Setup();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_RigSlotButton(int32 EntryPoint);
	void OnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RigSlotButton_C">();
	}
	static class URigSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URigSlotButton_C>();
	}
};
static_assert(alignof(URigSlotButton_C) == 0x000008, "Wrong alignment on URigSlotButton_C");
static_assert(sizeof(URigSlotButton_C) == 0x000468, "Wrong size on URigSlotButton_C");
static_assert(offsetof(URigSlotButton_C, UberGraphFrame) == 0x000260, "Member 'URigSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, ActiveSkillName) == 0x000268, "Member 'URigSlotButton_C::ActiveSkillName' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, ActiveSkillTier) == 0x000270, "Member 'URigSlotButton_C::ActiveSkillTier' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, BackgroundImage) == 0x000278, "Member 'URigSlotButton_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, BackgroundImage_1) == 0x000280, "Member 'URigSlotButton_C::BackgroundImage_1' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, EquippedIcon) == 0x000288, "Member 'URigSlotButton_C::EquippedIcon' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, HoverBackground) == 0x000290, "Member 'URigSlotButton_C::HoverBackground' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, HoverBackgroundImage) == 0x000298, "Member 'URigSlotButton_C::HoverBackgroundImage' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, Icon) == 0x0002A0, "Member 'URigSlotButton_C::Icon' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, InteractionButton) == 0x0002A8, "Member 'URigSlotButton_C::InteractionButton' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, NewNotification) == 0x0002B0, "Member 'URigSlotButton_C::NewNotification' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, SelectionBorderPanel) == 0x0002B8, "Member 'URigSlotButton_C::SelectionBorderPanel' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, UpgradeInfo) == 0x0002C0, "Member 'URigSlotButton_C::UpgradeInfo' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, CurrentUpgradeTier) == 0x000450, "Member 'URigSlotButton_C::CurrentUpgradeTier' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, bHovered) == 0x000454, "Member 'URigSlotButton_C::bHovered' has a wrong offset!");
static_assert(offsetof(URigSlotButton_C, OnClicked) == 0x000458, "Member 'URigSlotButton_C::OnClicked' has a wrong offset!");

}

