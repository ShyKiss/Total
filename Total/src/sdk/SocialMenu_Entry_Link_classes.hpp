#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialMenu_Entry_Link

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialMenu_Entry_Link.SocialMenu_Entry_Link_C
// 0x0030 (0x04A0 - 0x0470)
class USocialMenu_Entry_Link_C final : public URBSocialMenuEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                InteractionButton;                                 // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             InviteLinkText;                                    // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsGamepad;                                        // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bHovered;                                          // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bFocused;                                          // 0x0492(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_493[0x5];                                      // 0x0493(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialMenu_ContextualMenu_C*           ContextualMenu;                                    // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialMenu_Entry_Link(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BndEvt__SocialMenu_Entry_InteractionButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void OnMenuInputSourceChanged();
	void Construct();
	void BndEvt__SocialMenu_Entry_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SocialMenu_Entry_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Refresh();
	void SetHovered(bool bInHovered);
	void SetFocused(bool bInFocused);
	void IsConsideredHovered(bool* bConsideredHovered);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Event_Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialMenu_Entry_Link_C">();
	}
	static class USocialMenu_Entry_Link_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialMenu_Entry_Link_C>();
	}
};
static_assert(alignof(USocialMenu_Entry_Link_C) == 0x000008, "Wrong alignment on USocialMenu_Entry_Link_C");
static_assert(sizeof(USocialMenu_Entry_Link_C) == 0x0004A0, "Wrong size on USocialMenu_Entry_Link_C");
static_assert(offsetof(USocialMenu_Entry_Link_C, UberGraphFrame) == 0x000470, "Member 'USocialMenu_Entry_Link_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, BackgroundImage) == 0x000478, "Member 'USocialMenu_Entry_Link_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, InteractionButton) == 0x000480, "Member 'USocialMenu_Entry_Link_C::InteractionButton' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, InviteLinkText) == 0x000488, "Member 'USocialMenu_Entry_Link_C::InviteLinkText' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, bIsGamepad) == 0x000490, "Member 'USocialMenu_Entry_Link_C::bIsGamepad' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, bHovered) == 0x000491, "Member 'USocialMenu_Entry_Link_C::bHovered' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, bFocused) == 0x000492, "Member 'USocialMenu_Entry_Link_C::bFocused' has a wrong offset!");
static_assert(offsetof(USocialMenu_Entry_Link_C, ContextualMenu) == 0x000498, "Member 'USocialMenu_Entry_Link_C::ContextualMenu' has a wrong offset!");

}
