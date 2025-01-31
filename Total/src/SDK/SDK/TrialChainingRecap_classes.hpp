#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrialChainingRecap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TrialChainingRecap.TrialChainingRecap_C
// 0x0218 (0x0520 - 0x0308)
class UTrialChainingRecap_C final : public URBMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowContent;                                       // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URBMenuButton_C*                        BackBtn;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bgd;                                               // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        Blur;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ContentVBox;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             EntriesScrollBox;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingVideoWidget_C*                  LoadingVideoWidget;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentIndex;                                      // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentPlayerScore;                                // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UTexture2D*>          BannerPerId;                                       // 0x0350(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         LoadingCounter;                                    // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoadingAllBanners;                                 // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A5[0x3];                                      // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEndStageInfo                          End_Stage_Info;                                    // 0x03A8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEndStagePlayerInfo                    End_Stage_Player_Info;                             // 0x0400(0x0108)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsSetup;                                          // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_509[0x3];                                      // 0x0509(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ScrollingSpeedAccumulator;                         // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                     BannersRef;                                        // 0x0510(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Setup();
	void OnLoaded_D35494284187BF849A0317882CD3E128(class UObject* Loaded);
	void Construct();
	void BndEvt__TrialChainingRecap_NextButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button);
	void Init(const struct FEndStageInfo& EndStageInfo, const struct FEndStagePlayerInfo& EndStagePlayerInfo);
	void OnSetupDone();
	void ExecuteUbergraph_TrialChainingRecap(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TrialChainingRecap_C">();
	}
	static class UTrialChainingRecap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTrialChainingRecap_C>();
	}
};
static_assert(alignof(UTrialChainingRecap_C) == 0x000008, "Wrong alignment on UTrialChainingRecap_C");
static_assert(sizeof(UTrialChainingRecap_C) == 0x000520, "Wrong size on UTrialChainingRecap_C");
static_assert(offsetof(UTrialChainingRecap_C, UberGraphFrame) == 0x000308, "Member 'UTrialChainingRecap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, ShowContent) == 0x000310, "Member 'UTrialChainingRecap_C::ShowContent' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, BackBtn) == 0x000318, "Member 'UTrialChainingRecap_C::BackBtn' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, Bgd) == 0x000320, "Member 'UTrialChainingRecap_C::Bgd' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, Blur) == 0x000328, "Member 'UTrialChainingRecap_C::Blur' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, ContentVBox) == 0x000330, "Member 'UTrialChainingRecap_C::ContentVBox' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, EntriesScrollBox) == 0x000338, "Member 'UTrialChainingRecap_C::EntriesScrollBox' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, LoadingVideoWidget) == 0x000340, "Member 'UTrialChainingRecap_C::LoadingVideoWidget' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, CurrentIndex) == 0x000348, "Member 'UTrialChainingRecap_C::CurrentIndex' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, CurrentPlayerScore) == 0x00034C, "Member 'UTrialChainingRecap_C::CurrentPlayerScore' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, BannerPerId) == 0x000350, "Member 'UTrialChainingRecap_C::BannerPerId' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, LoadingCounter) == 0x0003A0, "Member 'UTrialChainingRecap_C::LoadingCounter' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, LoadingAllBanners) == 0x0003A4, "Member 'UTrialChainingRecap_C::LoadingAllBanners' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, End_Stage_Info) == 0x0003A8, "Member 'UTrialChainingRecap_C::End_Stage_Info' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, End_Stage_Player_Info) == 0x000400, "Member 'UTrialChainingRecap_C::End_Stage_Player_Info' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, bIsSetup) == 0x000508, "Member 'UTrialChainingRecap_C::bIsSetup' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, ScrollingSpeedAccumulator) == 0x00050C, "Member 'UTrialChainingRecap_C::ScrollingSpeedAccumulator' has a wrong offset!");
static_assert(offsetof(UTrialChainingRecap_C, BannersRef) == 0x000510, "Member 'UTrialChainingRecap_C::BannersRef' has a wrong offset!");

}

