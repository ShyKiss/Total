#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuButton.MainMenuButton_C
// 0x02C8 (0x0528 - 0x0260)
class UMainMenuButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Focus;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_32;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_61;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   OptionName;                                        // 0x0288(0x0018)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_             Event_Clicked;                                     // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FButtonStyle                           Style;                                             // 0x02B0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Get_Button_Enabled(bool* Enabled);
	void SetText(const class FText& Param_Text);
	void Set_Button_Enabled(bool IsEnabled);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_32_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void HighlighButton();
	void DownplayButton();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_MainMenuButton(int32 EntryPoint);
	void Event_Clicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuButton_C">();
	}
	static class UMainMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainMenuButton_C>();
	}
};
static_assert(alignof(UMainMenuButton_C) == 0x000008, "Wrong alignment on UMainMenuButton_C");
static_assert(sizeof(UMainMenuButton_C) == 0x000528, "Wrong size on UMainMenuButton_C");
static_assert(offsetof(UMainMenuButton_C, UberGraphFrame) == 0x000260, "Member 'UMainMenuButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Focus) == 0x000268, "Member 'UMainMenuButton_C::Focus' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Button_32) == 0x000270, "Member 'UMainMenuButton_C::Button_32' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Image_61) == 0x000278, "Member 'UMainMenuButton_C::Image_61' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Text) == 0x000280, "Member 'UMainMenuButton_C::Text' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, OptionName) == 0x000288, "Member 'UMainMenuButton_C::OptionName' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Event_Clicked) == 0x0002A0, "Member 'UMainMenuButton_C::Event_Clicked' has a wrong offset!");
static_assert(offsetof(UMainMenuButton_C, Style) == 0x0002B0, "Member 'UMainMenuButton_C::Style' has a wrong offset!");

}
