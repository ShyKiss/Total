#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EvalCorridorEntrance_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EvalCorridorEntrance_BP.EvalCorridorEntrance_BP_C
// 0x0100 (0x0368 - 0x0268)
class AEvalCorridorEntrance_BP_C final : public ARBEvalCorridorEntrance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PostProcess_Box;                                   // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TestGateRotatingDoorShadowMinus01;                 // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TestGateLightMinus01;                              // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SasInerRotatingDoor1;                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SasExtRotatingDoorCollision;                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBEvalCorridorHelperComponent*         RBEvalCorridorHelper;                              // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBVolumetricFogLightComponent*         RBVolumetricFogLight;                              // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSpotLightComponent*                  TopSpotLight;                                      // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SasInerRotatingDoor;                               // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SasExtRotatingDoor;                                // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_DoorOne_652D8563485724BAE430D6BDE2BB30E9; // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_652D8563485724BAE430D6BDE2BB30E9; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD3[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          TriggeredForwardAKEvent;                           // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UntriggeredForwardAKEvent;                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          TriggeredBackwardAKEvent;                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UntriggeredBackwardAKEvent;                        // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivationDelay;                                   // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeActivationDelay;                                 // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             AnimationCompletedForward;                         // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             AnimationCompletedBackward;                        // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLightingChannels                      LightingChannels;                                  // 0x0330(0x0001)(Edit, BlueprintVisible, NoDestructor)
	bool                                          IsOpenedBP;                                        // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD4[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnOpenedStageChanged;                              // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         ActivatedFogLightIntensity;                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeactivatedFogLightIntensity;                      // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivatedLightIntensity;                           // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeactivatedLightIntensity;                         // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForcedLightDisabled;                               // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CD5[0x3];                                     // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FogLightIntensity;                                 // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExitSas;                                         // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void UpdateShadowVisual();
	void ForceLightDisabled(bool Disabled);
	void UpdateTubeLighting();
	void OnActivationChanged(bool LightsEnabled);
	void ApplyLightChannel();
	void Initialize(float FogIntensity);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void Open();
	void Close();
	void Event_OnLocallyClosedChanged();
	void ExecuteUbergraph_EvalCorridorEntrance_BP(int32 EntryPoint);
	void OnOpenedStageChanged__DelegateSignature(class ASASTubeMinus02_BP_C* SASTube);
	void AnimationCompletedBackward__DelegateSignature();
	void AnimationCompletedForward__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EvalCorridorEntrance_BP_C">();
	}
	static class AEvalCorridorEntrance_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEvalCorridorEntrance_BP_C>();
	}
};
static_assert(alignof(AEvalCorridorEntrance_BP_C) == 0x000008, "Wrong alignment on AEvalCorridorEntrance_BP_C");
static_assert(sizeof(AEvalCorridorEntrance_BP_C) == 0x000368, "Wrong size on AEvalCorridorEntrance_BP_C");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, UberGraphFrame) == 0x000268, "Member 'AEvalCorridorEntrance_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, PostProcess) == 0x000270, "Member 'AEvalCorridorEntrance_BP_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, PostProcess_Box) == 0x000278, "Member 'AEvalCorridorEntrance_BP_C::PostProcess_Box' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, TestGateRotatingDoorShadowMinus01) == 0x000280, "Member 'AEvalCorridorEntrance_BP_C::TestGateRotatingDoorShadowMinus01' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, RBSound) == 0x000288, "Member 'AEvalCorridorEntrance_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, TestGateLightMinus01) == 0x000290, "Member 'AEvalCorridorEntrance_BP_C::TestGateLightMinus01' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, SasInerRotatingDoor1) == 0x000298, "Member 'AEvalCorridorEntrance_BP_C::SasInerRotatingDoor1' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, SasExtRotatingDoorCollision) == 0x0002A0, "Member 'AEvalCorridorEntrance_BP_C::SasExtRotatingDoorCollision' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, RBEvalCorridorHelper) == 0x0002A8, "Member 'AEvalCorridorEntrance_BP_C::RBEvalCorridorHelper' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, RBVolumetricFogLight) == 0x0002B0, "Member 'AEvalCorridorEntrance_BP_C::RBVolumetricFogLight' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, PointLight) == 0x0002B8, "Member 'AEvalCorridorEntrance_BP_C::PointLight' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, TopSpotLight) == 0x0002C0, "Member 'AEvalCorridorEntrance_BP_C::TopSpotLight' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, SasInerRotatingDoor) == 0x0002C8, "Member 'AEvalCorridorEntrance_BP_C::SasInerRotatingDoor' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, SasExtRotatingDoor) == 0x0002D0, "Member 'AEvalCorridorEntrance_BP_C::SasExtRotatingDoor' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, Timeline_0_DoorOne_652D8563485724BAE430D6BDE2BB30E9) == 0x0002D8, "Member 'AEvalCorridorEntrance_BP_C::Timeline_0_DoorOne_652D8563485724BAE430D6BDE2BB30E9' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, Timeline_0__Direction_652D8563485724BAE430D6BDE2BB30E9) == 0x0002DC, "Member 'AEvalCorridorEntrance_BP_C::Timeline_0__Direction_652D8563485724BAE430D6BDE2BB30E9' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, Timeline_0) == 0x0002E0, "Member 'AEvalCorridorEntrance_BP_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, TriggeredForwardAKEvent) == 0x0002E8, "Member 'AEvalCorridorEntrance_BP_C::TriggeredForwardAKEvent' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, UntriggeredForwardAKEvent) == 0x0002F0, "Member 'AEvalCorridorEntrance_BP_C::UntriggeredForwardAKEvent' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, TriggeredBackwardAKEvent) == 0x0002F8, "Member 'AEvalCorridorEntrance_BP_C::TriggeredBackwardAKEvent' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, UntriggeredBackwardAKEvent) == 0x000300, "Member 'AEvalCorridorEntrance_BP_C::UntriggeredBackwardAKEvent' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, ActivationDelay) == 0x000308, "Member 'AEvalCorridorEntrance_BP_C::ActivationDelay' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, DeActivationDelay) == 0x00030C, "Member 'AEvalCorridorEntrance_BP_C::DeActivationDelay' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, AnimationCompletedForward) == 0x000310, "Member 'AEvalCorridorEntrance_BP_C::AnimationCompletedForward' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, AnimationCompletedBackward) == 0x000320, "Member 'AEvalCorridorEntrance_BP_C::AnimationCompletedBackward' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, LightingChannels) == 0x000330, "Member 'AEvalCorridorEntrance_BP_C::LightingChannels' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, IsOpenedBP) == 0x000331, "Member 'AEvalCorridorEntrance_BP_C::IsOpenedBP' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, OnOpenedStageChanged) == 0x000338, "Member 'AEvalCorridorEntrance_BP_C::OnOpenedStageChanged' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, ActivatedFogLightIntensity) == 0x000348, "Member 'AEvalCorridorEntrance_BP_C::ActivatedFogLightIntensity' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, DeactivatedFogLightIntensity) == 0x00034C, "Member 'AEvalCorridorEntrance_BP_C::DeactivatedFogLightIntensity' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, ActivatedLightIntensity) == 0x000350, "Member 'AEvalCorridorEntrance_BP_C::ActivatedLightIntensity' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, DeactivatedLightIntensity) == 0x000354, "Member 'AEvalCorridorEntrance_BP_C::DeactivatedLightIntensity' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, ForcedLightDisabled) == 0x000358, "Member 'AEvalCorridorEntrance_BP_C::ForcedLightDisabled' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, FogLightIntensity) == 0x00035C, "Member 'AEvalCorridorEntrance_BP_C::FogLightIntensity' has a wrong offset!");
static_assert(offsetof(AEvalCorridorEntrance_BP_C, IsExitSas) == 0x000360, "Member 'AEvalCorridorEntrance_BP_C::IsExitSas' has a wrong offset!");

}
