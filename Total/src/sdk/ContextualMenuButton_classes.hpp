#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ContextualMenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ContextualMenuButton.ContextualMenuButton_C
// 0x0020 (0x0280 - 0x0260)
class UContextualMenuButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_46;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventClicked;                                      // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventClicked__DelegateSignature();
	void ExecuteUbergraph_ContextualMenuButton(int32 EntryPoint);
	void BndEvt__Button_46_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContextualMenuButton_C">();
	}
	static class UContextualMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContextualMenuButton_C>();
	}
};
static_assert(alignof(UContextualMenuButton_C) == 0x000008, "Wrong alignment on UContextualMenuButton_C");
static_assert(sizeof(UContextualMenuButton_C) == 0x000280, "Wrong size on UContextualMenuButton_C");
static_assert(offsetof(UContextualMenuButton_C, UberGraphFrame) == 0x000260, "Member 'UContextualMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContextualMenuButton_C, Button_46) == 0x000268, "Member 'UContextualMenuButton_C::Button_46' has a wrong offset!");
static_assert(offsetof(UContextualMenuButton_C, EventClicked) == 0x000270, "Member 'UContextualMenuButton_C::EventClicked' has a wrong offset!");

}
