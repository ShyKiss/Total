#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingScreen.LoadingScreen_C
// 0x00B0 (0x0320 - 0x0270)
class ULoadingScreen_C final : public URBLoadingScreenWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HintFadeOut;                                       // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HintFadeIn;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ExtendedBackground;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         HintText;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RorchachOverlay;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Vignette;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsLoadingScreen;                                  // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F53[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           HintEntries;                                       // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           AvailableHintEntries;                              // 0x02D8(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	TArray<class FText>                           MansionEscapeHintsEntries;                         // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstance*                      Rorschach_MatInst;                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              MansionEscape_Mat;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMansionEscape_MP;                              // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFailedInMansionEscape;                            // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsReagentReleaseTrial;                            // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F54[0x2];                                     // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DEBUG_HintIndex;                                   // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bFromTrial;                                        // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LoadingScreen(int32 EntryPoint);
	void DEBUG_StartLoadingScreen();
	void OnHintFadeInCompleted();
	void OnHintFadeOutCompleted();
	void Construct();
	void FadeOutCompleted();
	void Event_StopLoadingScreen(bool SkipOutro);
	void Event_StartLoadingScreen(bool SkipIntro);
	class FText GetProgressionText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingScreen_C">();
	}
	static class ULoadingScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingScreen_C>();
	}
};
static_assert(alignof(ULoadingScreen_C) == 0x000008, "Wrong alignment on ULoadingScreen_C");
static_assert(sizeof(ULoadingScreen_C) == 0x000320, "Wrong size on ULoadingScreen_C");
static_assert(offsetof(ULoadingScreen_C, UberGraphFrame) == 0x000270, "Member 'ULoadingScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, HintFadeOut) == 0x000278, "Member 'ULoadingScreen_C::HintFadeOut' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, HintFadeIn) == 0x000280, "Member 'ULoadingScreen_C::HintFadeIn' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, FadeIn) == 0x000288, "Member 'ULoadingScreen_C::FadeIn' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, Background) == 0x000290, "Member 'ULoadingScreen_C::Background' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, ExtendedBackground) == 0x000298, "Member 'ULoadingScreen_C::ExtendedBackground' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, HintText) == 0x0002A0, "Member 'ULoadingScreen_C::HintText' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, RorchachOverlay) == 0x0002A8, "Member 'ULoadingScreen_C::RorchachOverlay' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, TextBlock) == 0x0002B0, "Member 'ULoadingScreen_C::TextBlock' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, Vignette) == 0x0002B8, "Member 'ULoadingScreen_C::Vignette' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, bIsLoadingScreen) == 0x0002C0, "Member 'ULoadingScreen_C::bIsLoadingScreen' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, HintEntries) == 0x0002C8, "Member 'ULoadingScreen_C::HintEntries' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, AvailableHintEntries) == 0x0002D8, "Member 'ULoadingScreen_C::AvailableHintEntries' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, MansionEscapeHintsEntries) == 0x0002E8, "Member 'ULoadingScreen_C::MansionEscapeHintsEntries' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, Rorschach_MatInst) == 0x0002F8, "Member 'ULoadingScreen_C::Rorschach_MatInst' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, MansionEscape_Mat) == 0x000300, "Member 'ULoadingScreen_C::MansionEscape_Mat' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, BinkMansionEscape_MP) == 0x000308, "Member 'ULoadingScreen_C::BinkMansionEscape_MP' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, bFailedInMansionEscape) == 0x000310, "Member 'ULoadingScreen_C::bFailedInMansionEscape' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, bIsReagentReleaseTrial) == 0x000311, "Member 'ULoadingScreen_C::bIsReagentReleaseTrial' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, DEBUG_HintIndex) == 0x000314, "Member 'ULoadingScreen_C::DEBUG_HintIndex' has a wrong offset!");
static_assert(offsetof(ULoadingScreen_C, bFromTrial) == 0x000318, "Member 'ULoadingScreen_C::bFromTrial' has a wrong offset!");

}
