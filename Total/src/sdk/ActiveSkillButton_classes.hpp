#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActiveSkillButton

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ActiveSkillButton.ActiveSkillButton_C
// 0x01A8 (0x0408 - 0x0260)
class UActiveSkillButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCategoryButtonWidget_C*                CategoryButtonWidget;                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36EB[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickedEvent;                                    // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EMenuUpgradeItemState                         State;                                             // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36EC[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHoveredEvent;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhoveredEvent;                                  // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMenuUpgradeItemInfo                   ItemInfo;                                          // 0x02B0(0x0128)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             OnPressedEvent;                                    // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleasedEvent;                                   // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ItemId;                                            // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSlot;                                           // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void GamepadNav_MenuConfirm_Release();
	void GamepadNav_MenuConfirm();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetHovered(bool bInHovered);
	void UpdateNewStatus();
	void GetIsEquipped(bool* IsEquipped);
	void SetIsEquipped(bool IsEquipped);
	void SetSelected(bool Selected);
	void Initialize_Empty_Slot();
	void Initialize(const struct FMenuUpgradeItemInfo& Param_ItemInfo, bool bInIsSlot);
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_0_Event_OnClicked__DelegateSignature();
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_1_Event_OnHovered__DelegateSignature();
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_2_Event_OnUnhovered__DelegateSignature();
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_3_Event_OnPressed__DelegateSignature();
	void BndEvt__CategoryButtonWidget_K2Node_ComponentBoundEvent_4_Event_OnReleased__DelegateSignature();
	void Construct();
	void OnUpdateNewStatus_Event_0();
	void ExecuteUbergraph_ActiveSkillButton(int32 EntryPoint);
	void OnReleasedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& Param_ItemInfo);
	void OnPressedEvent__DelegateSignature(const struct FMenuUpgradeItemInfo& Param_ItemInfo);
	void OnUnhoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button);
	void OnHoveredEvent__DelegateSignature(class UActiveSkillButton_C* Button);
	void OnClickedEvent__DelegateSignature(class UActiveSkillButton_C* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActiveSkillButton_C">();
	}
	static class UActiveSkillButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActiveSkillButton_C>();
	}
};
static_assert(alignof(UActiveSkillButton_C) == 0x000008, "Wrong alignment on UActiveSkillButton_C");
static_assert(sizeof(UActiveSkillButton_C) == 0x000408, "Wrong size on UActiveSkillButton_C");
static_assert(offsetof(UActiveSkillButton_C, UberGraphFrame) == 0x000260, "Member 'UActiveSkillButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, CategoryButtonWidget) == 0x000268, "Member 'UActiveSkillButton_C::CategoryButtonWidget' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, ActiveSkillType) == 0x000270, "Member 'UActiveSkillButton_C::ActiveSkillType' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, OnClickedEvent) == 0x000278, "Member 'UActiveSkillButton_C::OnClickedEvent' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, State) == 0x000288, "Member 'UActiveSkillButton_C::State' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, OnHoveredEvent) == 0x000290, "Member 'UActiveSkillButton_C::OnHoveredEvent' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, OnUnhoveredEvent) == 0x0002A0, "Member 'UActiveSkillButton_C::OnUnhoveredEvent' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, ItemInfo) == 0x0002B0, "Member 'UActiveSkillButton_C::ItemInfo' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, OnPressedEvent) == 0x0003D8, "Member 'UActiveSkillButton_C::OnPressedEvent' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, OnReleasedEvent) == 0x0003E8, "Member 'UActiveSkillButton_C::OnReleasedEvent' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, ItemId) == 0x0003F8, "Member 'UActiveSkillButton_C::ItemId' has a wrong offset!");
static_assert(offsetof(UActiveSkillButton_C, bIsSlot) == 0x000400, "Member 'UActiveSkillButton_C::bIsSlot' has a wrong offset!");

}
