#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MicTestOptionsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MicTestOptionsWidget.MicTestOptionsWidget_C
// 0x00C0 (0x03D0 - 0x0310)
class UMicTestOptionsWidget_C final : public URBMicTestOptionsEntryWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                GlobalHoveringDetection;                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                MicTestButton;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionTitle;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SubEntryTitle;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBackground;                                   // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ValueBackground;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         VoicePips;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VoicePipsBackground;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            HoveredTint;                                       // 0x0358(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            HoveredTint_Semi;                                  // 0x0380(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            UnhoveredTint;                                     // 0x03A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_MicTestOptionsWidget(int32 EntryPoint);
	void RefreshValue(bool ForceUpdateSlider);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__MicTestOptionsWidget_Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnEchoChannelStateChanged();
	void DownplayEntry();
	void HighlightEntry();
	void BndEvt__MicTestOptionsWidget_Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__MicTestOptionsWidget_MicTestButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	class FText GetTestButtonText();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MicTestOptionsWidget_C">();
	}
	static class UMicTestOptionsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMicTestOptionsWidget_C>();
	}
};
static_assert(alignof(UMicTestOptionsWidget_C) == 0x000008, "Wrong alignment on UMicTestOptionsWidget_C");
static_assert(sizeof(UMicTestOptionsWidget_C) == 0x0003D0, "Wrong size on UMicTestOptionsWidget_C");
static_assert(offsetof(UMicTestOptionsWidget_C, UberGraphFrame) == 0x000310, "Member 'UMicTestOptionsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, GlobalHoveringDetection) == 0x000318, "Member 'UMicTestOptionsWidget_C::GlobalHoveringDetection' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, MicTestButton) == 0x000320, "Member 'UMicTestOptionsWidget_C::MicTestButton' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, OptionTitle) == 0x000328, "Member 'UMicTestOptionsWidget_C::OptionTitle' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, SubEntryTitle) == 0x000330, "Member 'UMicTestOptionsWidget_C::SubEntryTitle' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, TitleBackground) == 0x000338, "Member 'UMicTestOptionsWidget_C::TitleBackground' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, ValueBackground) == 0x000340, "Member 'UMicTestOptionsWidget_C::ValueBackground' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, VoicePips) == 0x000348, "Member 'UMicTestOptionsWidget_C::VoicePips' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, VoicePipsBackground) == 0x000350, "Member 'UMicTestOptionsWidget_C::VoicePipsBackground' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, HoveredTint) == 0x000358, "Member 'UMicTestOptionsWidget_C::HoveredTint' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, HoveredTint_Semi) == 0x000380, "Member 'UMicTestOptionsWidget_C::HoveredTint_Semi' has a wrong offset!");
static_assert(offsetof(UMicTestOptionsWidget_C, UnhoveredTint) == 0x0003A8, "Member 'UMicTestOptionsWidget_C::UnhoveredTint' has a wrong offset!");

}
