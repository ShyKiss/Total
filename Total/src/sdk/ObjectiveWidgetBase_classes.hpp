#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectiveWidgetBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ObjectiveWidgetBase.ObjectiveWidgetBase_C
// 0x0028 (0x0330 - 0x0308)
class UObjectiveWidgetBase_C : public URBObjectiveWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsCompleted;                                       // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D1F[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             VisibilityEventDispatcher;                         // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bPauseMenu;                                        // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void VisibilityEventDispatcher__DelegateSignature(bool Param_IsVisible);
	void ExecuteUbergraph_ObjectiveWidgetBase(int32 EntryPoint);
	void OnRemoveAnimationFinished();
	void Remove();
	void Event_Completed();
	void OnFadeOutAnimationFinished();
	void Event_Hide();
	void Event_Show();
	void Initialize(class ARBBaseObjectiveCoordinator* Coordinator);
	void SetCompleted();
	void UpdateProgress(float Progress, bool IsPositiveProgress, const class FText& ObjectiveText);
	void GetFadeInAnimation(class UWidgetAnimation** FadeInAnimation);
	void ClearBindings();
	void GetRemoveAnimation(class UWidgetAnimation** RemoveAnimation);

	bool IsInValidStateForExtraInfo() const;
	bool ShouldShow() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectiveWidgetBase_C">();
	}
	static class UObjectiveWidgetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectiveWidgetBase_C>();
	}
};
static_assert(alignof(UObjectiveWidgetBase_C) == 0x000008, "Wrong alignment on UObjectiveWidgetBase_C");
static_assert(sizeof(UObjectiveWidgetBase_C) == 0x000330, "Wrong size on UObjectiveWidgetBase_C");
static_assert(offsetof(UObjectiveWidgetBase_C, UberGraphFrame) == 0x000308, "Member 'UObjectiveWidgetBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UObjectiveWidgetBase_C, IsCompleted) == 0x000310, "Member 'UObjectiveWidgetBase_C::IsCompleted' has a wrong offset!");
static_assert(offsetof(UObjectiveWidgetBase_C, VisibilityEventDispatcher) == 0x000318, "Member 'UObjectiveWidgetBase_C::VisibilityEventDispatcher' has a wrong offset!");
static_assert(offsetof(UObjectiveWidgetBase_C, bPauseMenu) == 0x000328, "Member 'UObjectiveWidgetBase_C::bPauseMenu' has a wrong offset!");

}
