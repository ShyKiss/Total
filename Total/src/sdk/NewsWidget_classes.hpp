#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewsWidget.NewsWidget_C
// 0x00A0 (0x0388 - 0x02E8)
class UNewsWidget_C final : public URBNewsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Description;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DescriptionVerticalBox;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Dots;                                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               DotsSize;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBackground;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NewsButton;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NewsCanvas;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewsImage;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionIconWidget_C*                    NewsLeft;                                          // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActionIconWidget_C*                    NewsRight;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewsWidgetDot_C*                       NewsWidgetDot;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewsWidgetDot_C*                       NewsWidgetDot_1;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewsWidgetDot_C*                       NewsWidgetDot_2;                                   // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Title;                                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TitleVerticalBox;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EHorizontalAlignment                          DotsHorizontalAlignment;                           // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          TextHorizontalAlignment;                           // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVerticalAlignment                            TextVerticalAlignment;                             // 0x0372(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHovered;                                          // 0x0373(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BFB[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             NewsUpdated;                                       // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void RequestPageChange(bool Left);
	void UpdateBorderColor();
	void UpdateDots();
	void Construct();
	void BndEvt__Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__NewsWidget_CTA_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__NewsWidget_CTA_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnDotButtonClicked(int32 Param_Index);
	void Event_NextItem();
	void Event_Refresh();
	void PressCTAInput();
	void ExecuteUbergraph_NewsWidget(int32 EntryPoint);
	void NewsUpdated__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewsWidget_C">();
	}
	static class UNewsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewsWidget_C>();
	}
};
static_assert(alignof(UNewsWidget_C) == 0x000008, "Wrong alignment on UNewsWidget_C");
static_assert(sizeof(UNewsWidget_C) == 0x000388, "Wrong size on UNewsWidget_C");
static_assert(offsetof(UNewsWidget_C, UberGraphFrame) == 0x0002E8, "Member 'UNewsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, Background) == 0x0002F0, "Member 'UNewsWidget_C::Background' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, Description) == 0x0002F8, "Member 'UNewsWidget_C::Description' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, DescriptionVerticalBox) == 0x000300, "Member 'UNewsWidget_C::DescriptionVerticalBox' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, Dots) == 0x000308, "Member 'UNewsWidget_C::Dots' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, DotsSize) == 0x000310, "Member 'UNewsWidget_C::DotsSize' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, HeaderBackground) == 0x000318, "Member 'UNewsWidget_C::HeaderBackground' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsButton) == 0x000320, "Member 'UNewsWidget_C::NewsButton' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsCanvas) == 0x000328, "Member 'UNewsWidget_C::NewsCanvas' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsImage) == 0x000330, "Member 'UNewsWidget_C::NewsImage' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsLeft) == 0x000338, "Member 'UNewsWidget_C::NewsLeft' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsRight) == 0x000340, "Member 'UNewsWidget_C::NewsRight' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsWidgetDot) == 0x000348, "Member 'UNewsWidget_C::NewsWidgetDot' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsWidgetDot_1) == 0x000350, "Member 'UNewsWidget_C::NewsWidgetDot_1' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsWidgetDot_2) == 0x000358, "Member 'UNewsWidget_C::NewsWidgetDot_2' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, Title) == 0x000360, "Member 'UNewsWidget_C::Title' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, TitleVerticalBox) == 0x000368, "Member 'UNewsWidget_C::TitleVerticalBox' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, DotsHorizontalAlignment) == 0x000370, "Member 'UNewsWidget_C::DotsHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, TextHorizontalAlignment) == 0x000371, "Member 'UNewsWidget_C::TextHorizontalAlignment' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, TextVerticalAlignment) == 0x000372, "Member 'UNewsWidget_C::TextVerticalAlignment' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, bHovered) == 0x000373, "Member 'UNewsWidget_C::bHovered' has a wrong offset!");
static_assert(offsetof(UNewsWidget_C, NewsUpdated) == 0x000378, "Member 'UNewsWidget_C::NewsUpdated' has a wrong offset!");

}
