#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToasterDetectorMinus01_BP

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ToasterDetector-01_BP.ToasterDetector-01_BP_C
// 0x00D0 (0x0350 - 0x0280)
class AToasterDetectorMinus01_BP_C final : public ARBToasterDetector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      CurrentlyHackingVFX;                               // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBHackableComponent*                   GateHackZone;                                      // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      OnHackedVFX;                                       // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBHackableComponent*                   DeviceHackZone;                                    // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBDamageableComponent*                 RBDamageable;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Ray_BP;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultPositionRef;                                // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBPlayerDetectionComponent*            RBPlayerDetection;                                 // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ToasterDetectorMinus01;                            // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ToasterDetectorBaseMinus01;                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ToasterDetectorHingeMinus01;                       // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ToasterDetectorHingeMinus02;                       // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                IdleAnimation_NewTrack_0_605BFFFB4F279A85BDD9FAB099A5AFA7; // 0x02F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            IdleAnimation__Direction_605BFFFB4F279A85BDD9FAB099A5AFA7; // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_305[0x3];                                      // 0x0305(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     IdleAnimation;                                     // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetRoll;                                        // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetYaw;                                         // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IdleAnimationStartTime;                            // 0x0318(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRoll;                                       // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentYaw;                                        // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bStopTrackingWhenOutOfLOS;                         // 0x0324(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_325[0x3];                                      // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxRoll;                                           // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         MaxYaw;                                            // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ARay_BP_C*                              RayObjectRef;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          IsSilentDetectionOverride;                         // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSupportsThrowableInteraction;                     // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A[0x2];                                      // 0x033A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIdleDetectionSettings                 IdleDetectionSettings;                             // 0x033C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          bHacked;                                           // 0x034C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ToasterDetectorMinus01_BP(int32 EntryPoint);
	void OnTriggerEvent(bool IsOn, class ARBTriggerable* Triggerable);
	void BndEvt__ToasterDetectorMinus01_BP_RBPlayerDetection_K2Node_ComponentBoundEvent_1_OnDisableStateChanged__DelegateSignature(bool bDisabled);
	void BndEvt__ToasterDetectorMinus01_BP_RBHackable_K2Node_ComponentBoundEvent_0_OnCurrentHackStateChanged__DelegateSignature(class URBHackableComponent* HackableComponent);
	void BndEvt__ToasterDetectorMinus01_BP_RBDamageable_K2Node_ComponentBoundEvent_2_OnNumberOfHitsChanged__DelegateSignature(class URBDamageableComponent* DamageableComponent);
	void Event_OnResetStage();
	void OnDetectionStateChanged(EPlayerComponentDetectionState OldState, EPlayerComponentDetectionState NewState);
	void SetIdleAnimationTime(float NewTime);
	void StopIdleAnimation();
	void PlayIdleAnimation();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void IdleAnimation__UpdateFunc();
	void IdleAnimation__FinishedFunc();
	void UserConstructionScript();
	void UpdateDetectionLevel(bool ShouldReset);
	void UpdateCameraRotations(float DeltaTime);
	void OnRep_IdleAnimationStartTime();
	void UpdateIdleAnimationTime();
	void UpdateTrackedTarget();
	void CalculateTargetRoll(const struct FVector& TrackedPosition, float* Value);
	void CalculateTargetYaw(const struct FVector& TrackedPosition, float* Value);
	void UpdateRayDetectionDistance();
	void OverrideIdleDetectionSettings(const struct FIdleDetectionSettings& NewSettings);
	void IsIdle(bool* Value);
	void RefreshGateHackZoneSizes();
	void GetLinkedTriggerable(class ARBTriggerable** Triggerable);
	void RefreshHackedVFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ToasterDetector-01_BP_C">();
	}
	static class AToasterDetectorMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AToasterDetectorMinus01_BP_C>();
	}
};
static_assert(alignof(AToasterDetectorMinus01_BP_C) == 0x000008, "Wrong alignment on AToasterDetectorMinus01_BP_C");
static_assert(sizeof(AToasterDetectorMinus01_BP_C) == 0x000350, "Wrong size on AToasterDetectorMinus01_BP_C");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, UberGraphFrame) == 0x000280, "Member 'AToasterDetectorMinus01_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, CurrentlyHackingVFX) == 0x000288, "Member 'AToasterDetectorMinus01_BP_C::CurrentlyHackingVFX' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, GateHackZone) == 0x000290, "Member 'AToasterDetectorMinus01_BP_C::GateHackZone' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, OnHackedVFX) == 0x000298, "Member 'AToasterDetectorMinus01_BP_C::OnHackedVFX' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, DeviceHackZone) == 0x0002A0, "Member 'AToasterDetectorMinus01_BP_C::DeviceHackZone' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, Box) == 0x0002A8, "Member 'AToasterDetectorMinus01_BP_C::Box' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, RBDamageable) == 0x0002B0, "Member 'AToasterDetectorMinus01_BP_C::RBDamageable' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, Ray_BP) == 0x0002B8, "Member 'AToasterDetectorMinus01_BP_C::Ray_BP' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, DefaultPositionRef) == 0x0002C0, "Member 'AToasterDetectorMinus01_BP_C::DefaultPositionRef' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, RBSound) == 0x0002C8, "Member 'AToasterDetectorMinus01_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, RBPlayerDetection) == 0x0002D0, "Member 'AToasterDetectorMinus01_BP_C::RBPlayerDetection' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, ToasterDetectorMinus01) == 0x0002D8, "Member 'AToasterDetectorMinus01_BP_C::ToasterDetectorMinus01' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, ToasterDetectorBaseMinus01) == 0x0002E0, "Member 'AToasterDetectorMinus01_BP_C::ToasterDetectorBaseMinus01' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, ToasterDetectorHingeMinus01) == 0x0002E8, "Member 'AToasterDetectorMinus01_BP_C::ToasterDetectorHingeMinus01' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, ToasterDetectorHingeMinus02) == 0x0002F0, "Member 'AToasterDetectorMinus01_BP_C::ToasterDetectorHingeMinus02' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, IdleAnimation_NewTrack_0_605BFFFB4F279A85BDD9FAB099A5AFA7) == 0x0002F8, "Member 'AToasterDetectorMinus01_BP_C::IdleAnimation_NewTrack_0_605BFFFB4F279A85BDD9FAB099A5AFA7' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, IdleAnimation__Direction_605BFFFB4F279A85BDD9FAB099A5AFA7) == 0x000304, "Member 'AToasterDetectorMinus01_BP_C::IdleAnimation__Direction_605BFFFB4F279A85BDD9FAB099A5AFA7' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, IdleAnimation) == 0x000308, "Member 'AToasterDetectorMinus01_BP_C::IdleAnimation' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, TargetRoll) == 0x000310, "Member 'AToasterDetectorMinus01_BP_C::TargetRoll' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, TargetYaw) == 0x000314, "Member 'AToasterDetectorMinus01_BP_C::TargetYaw' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, IdleAnimationStartTime) == 0x000318, "Member 'AToasterDetectorMinus01_BP_C::IdleAnimationStartTime' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, CurrentRoll) == 0x00031C, "Member 'AToasterDetectorMinus01_BP_C::CurrentRoll' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, CurrentYaw) == 0x000320, "Member 'AToasterDetectorMinus01_BP_C::CurrentYaw' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, bStopTrackingWhenOutOfLOS) == 0x000324, "Member 'AToasterDetectorMinus01_BP_C::bStopTrackingWhenOutOfLOS' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, MaxRoll) == 0x000328, "Member 'AToasterDetectorMinus01_BP_C::MaxRoll' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, MaxYaw) == 0x00032C, "Member 'AToasterDetectorMinus01_BP_C::MaxYaw' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, RayObjectRef) == 0x000330, "Member 'AToasterDetectorMinus01_BP_C::RayObjectRef' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, IsSilentDetectionOverride) == 0x000338, "Member 'AToasterDetectorMinus01_BP_C::IsSilentDetectionOverride' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, bSupportsThrowableInteraction) == 0x000339, "Member 'AToasterDetectorMinus01_BP_C::bSupportsThrowableInteraction' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, IdleDetectionSettings) == 0x00033C, "Member 'AToasterDetectorMinus01_BP_C::IdleDetectionSettings' has a wrong offset!");
static_assert(offsetof(AToasterDetectorMinus01_BP_C, bHacked) == 0x00034C, "Member 'AToasterDetectorMinus01_BP_C::bHacked' has a wrong offset!");

}

