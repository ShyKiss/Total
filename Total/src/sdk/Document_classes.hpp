#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Document

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Document.Document_C
// 0x0068 (0x0370 - 0x0308)
class UDocument_C final : public URBMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomLine;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CategoryText;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ContentText;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DateText;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DocumentImage;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        ExitButton;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ImageScaleBox;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ImageSizeBox;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         TitleText;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopLine;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_1;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Setup(const struct FRBCollectibleDocumentDefinitionRow& Document);
	void BndEvt__Document_ExitButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void ExecuteUbergraph_Document(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Document_C">();
	}
	static class UDocument_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDocument_C>();
	}
};
static_assert(alignof(UDocument_C) == 0x000008, "Wrong alignment on UDocument_C");
static_assert(sizeof(UDocument_C) == 0x000370, "Wrong size on UDocument_C");
static_assert(offsetof(UDocument_C, UberGraphFrame) == 0x000308, "Member 'UDocument_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDocument_C, Background) == 0x000310, "Member 'UDocument_C::Background' has a wrong offset!");
static_assert(offsetof(UDocument_C, BottomLine) == 0x000318, "Member 'UDocument_C::BottomLine' has a wrong offset!");
static_assert(offsetof(UDocument_C, CategoryText) == 0x000320, "Member 'UDocument_C::CategoryText' has a wrong offset!");
static_assert(offsetof(UDocument_C, ContentText) == 0x000328, "Member 'UDocument_C::ContentText' has a wrong offset!");
static_assert(offsetof(UDocument_C, DateText) == 0x000330, "Member 'UDocument_C::DateText' has a wrong offset!");
static_assert(offsetof(UDocument_C, DocumentImage) == 0x000338, "Member 'UDocument_C::DocumentImage' has a wrong offset!");
static_assert(offsetof(UDocument_C, ExitButton) == 0x000340, "Member 'UDocument_C::ExitButton' has a wrong offset!");
static_assert(offsetof(UDocument_C, ImageScaleBox) == 0x000348, "Member 'UDocument_C::ImageScaleBox' has a wrong offset!");
static_assert(offsetof(UDocument_C, ImageSizeBox) == 0x000350, "Member 'UDocument_C::ImageSizeBox' has a wrong offset!");
static_assert(offsetof(UDocument_C, TitleText) == 0x000358, "Member 'UDocument_C::TitleText' has a wrong offset!");
static_assert(offsetof(UDocument_C, TopLine) == 0x000360, "Member 'UDocument_C::TopLine' has a wrong offset!");
static_assert(offsetof(UDocument_C, VerticalBox_1) == 0x000368, "Member 'UDocument_C::VerticalBox_1' has a wrong offset!");

}
