#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyActiveSkillTutorialMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyActiveSkillTutorialMenu.LobbyActiveSkillTutorialMenu_C
// 0x0040 (0x0348 - 0x0308)
class ULobbyActiveSkillTutorialMenu_C final : public URBMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Show;                                              // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URBMenuButton_C*                        ExitButton;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0320(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Duration;                                          // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3426[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ALobby_ActiveSkillTuto_Interactible_BP_C* ParentBP;                                          // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Event_OnPush();
	void Event_OnFocusMenu();
	void Event_OnUnfocusMenu(bool bShouldHide);
	void BndEvt__LobbyActiveSkillTutorialMenu_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void PrepareToPop();
	void ExecuteUbergraph_LobbyActiveSkillTutorialMenu(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyActiveSkillTutorialMenu_C">();
	}
	static class ULobbyActiveSkillTutorialMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyActiveSkillTutorialMenu_C>();
	}
};
static_assert(alignof(ULobbyActiveSkillTutorialMenu_C) == 0x000008, "Wrong alignment on ULobbyActiveSkillTutorialMenu_C");
static_assert(sizeof(ULobbyActiveSkillTutorialMenu_C) == 0x000348, "Wrong size on ULobbyActiveSkillTutorialMenu_C");
static_assert(offsetof(ULobbyActiveSkillTutorialMenu_C, UberGraphFrame) == 0x000308, "Member 'ULobbyActiveSkillTutorialMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULobbyActiveSkillTutorialMenu_C, Show) == 0x000310, "Member 'ULobbyActiveSkillTutorialMenu_C::Show' has a wrong offset!");
static_assert(offsetof(ULobbyActiveSkillTutorialMenu_C, ExitButton) == 0x000318, "Member 'ULobbyActiveSkillTutorialMenu_C::ExitButton' has a wrong offset!");
static_assert(offsetof(ULobbyActiveSkillTutorialMenu_C, Text) == 0x000320, "Member 'ULobbyActiveSkillTutorialMenu_C::Text' has a wrong offset!");
static_assert(offsetof(ULobbyActiveSkillTutorialMenu_C, Duration) == 0x000338, "Member 'ULobbyActiveSkillTutorialMenu_C::Duration' has a wrong offset!");
static_assert(offsetof(ULobbyActiveSkillTutorialMenu_C, ParentBP) == 0x000340, "Member 'ULobbyActiveSkillTutorialMenu_C::ParentBP' has a wrong offset!");

}
