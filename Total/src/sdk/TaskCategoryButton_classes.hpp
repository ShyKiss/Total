#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskCategoryButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TaskCategoryButton.TaskCategoryButton_C
// 0x00A8 (0x0308 - 0x0260)
class UTaskCategoryButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedBottomLeftBracket_1;                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedBottomRightBracket_1;                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedTopLeftBracket_1;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FocussedTopRightBracket_1;                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Iconbackground;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                InteractionButton;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ReadyToClaimTagImage;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectionBorderPanel;                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeLeft;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TimeLeftHBox;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bFocused;                                          // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHovered;                                          // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D4B[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsGamepad;                                        // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D4C[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ID;                                                // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasCompletedTasksPendingConsume;                  // 0x02FC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSelected;                                         // 0x02FD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasRefreshTimer;                                  // 0x02FE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D4D[0x1];                                     // 0x02FF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DaysUntilRefresh;                                  // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HoursUntilRefresh;                                 // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClicked__DelegateSignature(class FName Param_ID);
	void ExecuteUbergraph_TaskCategoryButton(int32 EntryPoint);
	void SetIcon(TSoftObjectPtr<class UObject> Asset);
	void Destruct();
	void OnMenuInputSourceChanged();
	void Construct();
	void BndEvt__PerkCategoryButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PerkCategoryButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PerkCategoryButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void OnLoaded_DB41A6CB40D5CBDE4EA03AB9C7E72F12(class UObject* Loaded);
	void Setup(class FName Param_ID, const class FText& Text, bool Param_bHasCompletedTasksPendingConsume, TSoftObjectPtr<class UTexture2D> Param_Icon, bool Param_bHasRefreshTimer, int32 Param_DaysUntilRefresh, int32 Param_HoursUntilRefresh);
	void Update(bool Param_bHasCompletedTasksPendingConsume, bool HasRefreshTimer, int32 Param_DaysUntilRefresh, int32 Param_HoursUntilRefresh);
	void Refresh();
	void SetHovered(bool Param_IsHovered);
	void SetFocused(bool bInFocused);
	void IsConsideredHovered(bool* bConsideredHovered);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void SetSelected(bool Param_IsSelected);
	void UpdateMenuFocusAction();
	void IsSelected(bool* Param_bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TaskCategoryButton_C">();
	}
	static class UTaskCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTaskCategoryButton_C>();
	}
};
static_assert(alignof(UTaskCategoryButton_C) == 0x000008, "Wrong alignment on UTaskCategoryButton_C");
static_assert(sizeof(UTaskCategoryButton_C) == 0x000308, "Wrong size on UTaskCategoryButton_C");
static_assert(offsetof(UTaskCategoryButton_C, UberGraphFrame) == 0x000260, "Member 'UTaskCategoryButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, BackgroundImage) == 0x000268, "Member 'UTaskCategoryButton_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, FocussedBottomLeftBracket_1) == 0x000270, "Member 'UTaskCategoryButton_C::FocussedBottomLeftBracket_1' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, FocussedBottomRightBracket_1) == 0x000278, "Member 'UTaskCategoryButton_C::FocussedBottomRightBracket_1' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, FocussedTopLeftBracket_1) == 0x000280, "Member 'UTaskCategoryButton_C::FocussedTopLeftBracket_1' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, FocussedTopRightBracket_1) == 0x000288, "Member 'UTaskCategoryButton_C::FocussedTopRightBracket_1' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, Icon) == 0x000290, "Member 'UTaskCategoryButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, Iconbackground) == 0x000298, "Member 'UTaskCategoryButton_C::Iconbackground' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, Image_103) == 0x0002A0, "Member 'UTaskCategoryButton_C::Image_103' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, InteractionButton) == 0x0002A8, "Member 'UTaskCategoryButton_C::InteractionButton' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, ReadyToClaimTagImage) == 0x0002B0, "Member 'UTaskCategoryButton_C::ReadyToClaimTagImage' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, SelectionBorderPanel) == 0x0002B8, "Member 'UTaskCategoryButton_C::SelectionBorderPanel' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, TimeLeft) == 0x0002C0, "Member 'UTaskCategoryButton_C::TimeLeft' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, TimeLeftHBox) == 0x0002C8, "Member 'UTaskCategoryButton_C::TimeLeftHBox' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, Title) == 0x0002D0, "Member 'UTaskCategoryButton_C::Title' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, bFocused) == 0x0002D8, "Member 'UTaskCategoryButton_C::bFocused' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, bHovered) == 0x0002D9, "Member 'UTaskCategoryButton_C::bHovered' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, OnClicked) == 0x0002E0, "Member 'UTaskCategoryButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, bIsGamepad) == 0x0002F0, "Member 'UTaskCategoryButton_C::bIsGamepad' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, ID) == 0x0002F4, "Member 'UTaskCategoryButton_C::ID' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, bHasCompletedTasksPendingConsume) == 0x0002FC, "Member 'UTaskCategoryButton_C::bHasCompletedTasksPendingConsume' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, bSelected) == 0x0002FD, "Member 'UTaskCategoryButton_C::bSelected' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, bHasRefreshTimer) == 0x0002FE, "Member 'UTaskCategoryButton_C::bHasRefreshTimer' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, DaysUntilRefresh) == 0x000300, "Member 'UTaskCategoryButton_C::DaysUntilRefresh' has a wrong offset!");
static_assert(offsetof(UTaskCategoryButton_C, HoursUntilRefresh) == 0x000304, "Member 'UTaskCategoryButton_C::HoursUntilRefresh' has a wrong offset!");

}
