#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuitMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuitMenu.QuitMenu_C
// 0x0048 (0x0350 - 0x0308)
class UQuitMenu_C final : public URBQuitMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       WaitingAnimation;                                  // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background_1;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        CancelBtn;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ControlsHorizontalBox;                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                GamepadFocusHandler;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LeavingTutoWarning;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        QuitGameBtn;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuitMenu(int32 EntryPoint);
	void BndEvt__QuitMenu_GamepadFocusHandler_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void Event_OnPush();
	void Event_MenuCancel_Pressed();
	void Event_MenuConfirm_Pressed();
	void BndEvt__CancelBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void BndEvt__QuitGameBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Event_Exiting();
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuitMenu_C">();
	}
	static class UQuitMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuitMenu_C>();
	}
};
static_assert(alignof(UQuitMenu_C) == 0x000008, "Wrong alignment on UQuitMenu_C");
static_assert(sizeof(UQuitMenu_C) == 0x000350, "Wrong size on UQuitMenu_C");
static_assert(offsetof(UQuitMenu_C, UberGraphFrame) == 0x000308, "Member 'UQuitMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, WaitingAnimation) == 0x000310, "Member 'UQuitMenu_C::WaitingAnimation' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, Background_1) == 0x000318, "Member 'UQuitMenu_C::Background_1' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, CancelBtn) == 0x000320, "Member 'UQuitMenu_C::CancelBtn' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, ControlsHorizontalBox) == 0x000328, "Member 'UQuitMenu_C::ControlsHorizontalBox' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, GamepadFocusHandler) == 0x000330, "Member 'UQuitMenu_C::GamepadFocusHandler' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, LeavingTutoWarning) == 0x000338, "Member 'UQuitMenu_C::LeavingTutoWarning' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, QuitGameBtn) == 0x000340, "Member 'UQuitMenu_C::QuitGameBtn' has a wrong offset!");
static_assert(offsetof(UQuitMenu_C, Title) == 0x000348, "Member 'UQuitMenu_C::Title' has a wrong offset!");

}
