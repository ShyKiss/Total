#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IntroRecapVideoMenuWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IntroRecapVideoMenuWidget.IntroRecapVideoMenuWidget_C
// 0x0060 (0x0368 - 0x0308)
class UIntroRecapVideoMenuWidget_C final : public URBCutsceneMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeInSkipPrompt;                                  // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URBMenuButton_C*                        SkipPrompt;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VideoImage;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             FinishedReading;                                   // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMediaSoundComponent*                   VideoSound;                                        // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMediaPlayer;                                   // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkipPressedTimeStamp;                              // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34E2[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SkipTimerHandle;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsShowingSkipPrompt;                              // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetSkipButton();
	void Finished_F6A9744E4EE11F3E963A7D8C071ED177();
	void Construct();
	void OnMediaOpened(const class FString& OpenedUrl);
	void HideSkipPrompt();
	void OnCutsceneEnded();
	void Event_ShowSkipPrompt(bool bShouldStartHideTimer);
	void Event_EndCutsceneRequested();
	void Destruct();
	void Event_OnPop();
	void ExecuteUbergraph_IntroRecapVideoMenuWidget(int32 EntryPoint);
	void FinishedReading__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IntroRecapVideoMenuWidget_C">();
	}
	static class UIntroRecapVideoMenuWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIntroRecapVideoMenuWidget_C>();
	}
};
static_assert(alignof(UIntroRecapVideoMenuWidget_C) == 0x000008, "Wrong alignment on UIntroRecapVideoMenuWidget_C");
static_assert(sizeof(UIntroRecapVideoMenuWidget_C) == 0x000368, "Wrong size on UIntroRecapVideoMenuWidget_C");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, UberGraphFrame) == 0x000308, "Member 'UIntroRecapVideoMenuWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, FadeInSkipPrompt) == 0x000310, "Member 'UIntroRecapVideoMenuWidget_C::FadeInSkipPrompt' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, Background) == 0x000318, "Member 'UIntroRecapVideoMenuWidget_C::Background' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, SkipPrompt) == 0x000320, "Member 'UIntroRecapVideoMenuWidget_C::SkipPrompt' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, VideoImage) == 0x000328, "Member 'UIntroRecapVideoMenuWidget_C::VideoImage' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, FinishedReading) == 0x000330, "Member 'UIntroRecapVideoMenuWidget_C::FinishedReading' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, VideoSound) == 0x000340, "Member 'UIntroRecapVideoMenuWidget_C::VideoSound' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, BinkMediaPlayer) == 0x000348, "Member 'UIntroRecapVideoMenuWidget_C::BinkMediaPlayer' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, SkipPressedTimeStamp) == 0x000350, "Member 'UIntroRecapVideoMenuWidget_C::SkipPressedTimeStamp' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, SkipTimerHandle) == 0x000358, "Member 'UIntroRecapVideoMenuWidget_C::SkipTimerHandle' has a wrong offset!");
static_assert(offsetof(UIntroRecapVideoMenuWidget_C, bIsShowingSkipPrompt) == 0x000360, "Member 'UIntroRecapVideoMenuWidget_C::bIsShowingSkipPrompt' has a wrong offset!");

}
