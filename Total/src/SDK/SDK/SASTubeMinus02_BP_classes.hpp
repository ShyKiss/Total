#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SASTubeMinus02_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SASTube-02_BP.SASTube-02_BP_C
// 0x01B0 (0x0680 - 0x04D0)
class ASASTubeMinus02_BP_C final : public ARBSASTube
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBSoundComponent*                      RBSound;                                           // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PostProcess_Box;                                   // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TestGateRotatingDoorShadowMinus01;                 // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ForwardDoorLeft;                                   // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackwardRotatingDoor;                              // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ForwardDoorRight;                                  // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TubeIndoorRoot;                                    // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   BackwardMarker;                                    // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   ForwardMarker;                                     // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   TestGateLightMinus01;                              // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBVolumetricFogLightComponent*         RBVolumetricFogLight;                              // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSpotLightComponent*                  TopSpotLight;                                      // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBPlayerTriggerComponent*              PlayerInSASTrigger;                                // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PlayerBlockingCollision;                           // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PlayerBlockingTrigger;                             // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardTimeline_DoorOne_E921714448EEE7FDF92A55A1CB305737; // 0x0570(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ForwardTimeline__Direction_E921714448EEE7FDF92A55A1CB305737; // 0x0574(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_575[0x3];                                      // 0x0575(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ForwardTimeline;                                   // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BackwardTimeline_DoorOne_EA441158402700E9E4835EAC1E372A82; // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BackwardTimeline__Direction_EA441158402700E9E4835EAC1E372A82; // 0x0584(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_585[0x3];                                      // 0x0585(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BackwardTimeline;                                  // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightOff_NewTrack_0_797ABFDA428A9C9CA241DE9B6B9FA16F; // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LightOff__Direction_797ABFDA428A9C9CA241DE9B6B9FA16F; // 0x0594(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_595[0x3];                                      // 0x0595(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LightOff;                                          // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightOn_NewTrack_0_7B3D4C2E4515ACBA20C80BAB518C2189; // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LightOn__Direction_7B3D4C2E4515ACBA20C80BAB518C2189; // 0x05A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A5[0x3];                                      // 0x05A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LightOn;                                           // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AnimationDurationSeconds;                          // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B4[0x4];                                      // 0x05B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          TriggeredForwardAKEvent;                           // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UntriggeredForwardAKEvent;                         // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          TriggeredBackwardAKEvent;                          // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          UntriggeredBackwardAKEvent;                        // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivationDelay;                                   // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeActivationDelay;                                 // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             AnimationCompletedForward;                         // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             AnimationCompletedBackward;                        // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bSoundPassthrough;                                 // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bSoundConnector;                                   // 0x0601(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_602[0x2];                                      // 0x0602(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SoundConnectorYawRotation;                         // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SoundConnectorDimension;                           // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                           PlayerStart;                                       // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLightingChannels                      LightingChannels;                                  // 0x0618(0x0001)(Edit, BlueprintVisible, NoDestructor)
	uint8                                         Pad_619[0x7];                                      // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer*                              PlayerInTubeZone;                                  // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AreFrontLightsEnabled;                             // 0x0628(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpenedBackward_BP;                               // 0x0629(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A[0x6];                                      // 0x062A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 SASOwner;                                          // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   GreenLight;                                        // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RedLight;                                          // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOpenedStageChanged;                              // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         ActivatedFogLightIntensity;                        // 0x0658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeactivatedFogLightIntensity;                      // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ActivatedLightIntensity;                           // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeactivatedLightIntensity;                         // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForcedLightDisabled;                               // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_669[0x3];                                      // 0x0669(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FogLightIntensity;                                 // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenedForward_BP;                                // 0x0670(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayingBackwardSequence;                        // 0x0671(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayingForwardSequence;                         // 0x0672(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAreLightsOn;                                      // 0x0673(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         ExtraOpeningDelay;                                 // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimationCompletedForward__DelegateSignature();
	void AnimationCompletedBackward__DelegateSignature();
	void OnOpenedStageChanged__DelegateSignature(class ASASTubeMinus02_BP_C* SASTube);
	void ExecuteUbergraph_SASTubeMinus02_BP(int32 EntryPoint);
	void BP_OnPlayersInsideChanged();
	void SetLight(float SpotLightIntensity, float PointLightIntensity, float FogLight, float MeshLight);
	void TurnOffLights();
	void TurnOnLights();
	void BP_OnOpen();
	void BP_OnClose();
	void BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
	void BndEvt__PlayerInSASTrigger_K2Node_ComponentBoundEvent_0_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
	void Event_OnTubeFacingForwardChanged();
	void OnDoorSequenceFinished();
	void StartOpeningSequence();
	void StartClosingSequence();
	void OpenForwardDoor();
	void CloseForwardDoor();
	void OpenBackwardDoor();
	void CloseBackwardDoor();
	void ReceiveBeginPlay();
	void Event_OnDoorStateChanged();
	void LightOn__UpdateFunc();
	void LightOn__FinishedFunc();
	void LightOff__UpdateFunc();
	void LightOff__FinishedFunc();
	void ForwardTimeline__UpdateFunc();
	void ForwardTimeline__FinishedFunc();
	void BackwardTimeline__UpdateFunc();
	void BackwardTimeline__FinishedFunc();
	void UserConstructionScript();
	void Initialize(class AActor* Owner_0, class UStaticMeshComponent* Red_Light, class UStaticMeshComponent* Green_Light, float FogIntensity);
	void UpdateColor();
	void ValidateTubeActivation(bool* Valid);
	bool GetStateName(class FString* StateA, class FString* StateB);
	void ApplyLightChannel();
	void SetPlayerInTubeZone(class ARBPlayer* Player);
	void SetFrontLightsEnabled(bool Enable);
	void OnActivationChanged(bool LightsEnabled);
	void UpdateTubeLighting();
	void ForceLightDisabled(bool Disabled);
	void UpdateOpenedState();
	void IsPlayingDoorSequence(bool* bValue);
	void UpdateShadowVisual();
	void UpdatePostProcess();

	bool IsStateA() const;
	bool ShouldBeIgnoredForLots() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SASTube-02_BP_C">();
	}
	static class ASASTubeMinus02_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASASTubeMinus02_BP_C>();
	}
};
static_assert(alignof(ASASTubeMinus02_BP_C) == 0x000010, "Wrong alignment on ASASTubeMinus02_BP_C");
static_assert(sizeof(ASASTubeMinus02_BP_C) == 0x000680, "Wrong size on ASASTubeMinus02_BP_C");
static_assert(offsetof(ASASTubeMinus02_BP_C, UberGraphFrame) == 0x0004D0, "Member 'ASASTubeMinus02_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, RBSound) == 0x0004D8, "Member 'ASASTubeMinus02_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PostProcess) == 0x0004E0, "Member 'ASASTubeMinus02_BP_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PostProcess_Box) == 0x0004E8, "Member 'ASASTubeMinus02_BP_C::PostProcess_Box' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, TestGateRotatingDoorShadowMinus01) == 0x0004F0, "Member 'ASASTubeMinus02_BP_C::TestGateRotatingDoorShadowMinus01' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForwardDoorLeft) == 0x0004F8, "Member 'ASASTubeMinus02_BP_C::ForwardDoorLeft' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, BackwardRotatingDoor) == 0x000500, "Member 'ASASTubeMinus02_BP_C::BackwardRotatingDoor' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForwardDoorRight) == 0x000508, "Member 'ASASTubeMinus02_BP_C::ForwardDoorRight' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, TubeIndoorRoot) == 0x000510, "Member 'ASASTubeMinus02_BP_C::TubeIndoorRoot' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, BackwardMarker) == 0x000518, "Member 'ASASTubeMinus02_BP_C::BackwardMarker' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForwardMarker) == 0x000520, "Member 'ASASTubeMinus02_BP_C::ForwardMarker' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, TestGateLightMinus01) == 0x000528, "Member 'ASASTubeMinus02_BP_C::TestGateLightMinus01' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, RBVolumetricFogLight) == 0x000530, "Member 'ASASTubeMinus02_BP_C::RBVolumetricFogLight' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PointLight) == 0x000538, "Member 'ASASTubeMinus02_BP_C::PointLight' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, TopSpotLight) == 0x000540, "Member 'ASASTubeMinus02_BP_C::TopSpotLight' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PlayerInSASTrigger) == 0x000548, "Member 'ASASTubeMinus02_BP_C::PlayerInSASTrigger' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PlayerBlockingCollision) == 0x000550, "Member 'ASASTubeMinus02_BP_C::PlayerBlockingCollision' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PlayerBlockingTrigger) == 0x000558, "Member 'ASASTubeMinus02_BP_C::PlayerBlockingTrigger' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, Capsule) == 0x000560, "Member 'ASASTubeMinus02_BP_C::Capsule' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, Box) == 0x000568, "Member 'ASASTubeMinus02_BP_C::Box' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForwardTimeline_DoorOne_E921714448EEE7FDF92A55A1CB305737) == 0x000570, "Member 'ASASTubeMinus02_BP_C::ForwardTimeline_DoorOne_E921714448EEE7FDF92A55A1CB305737' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForwardTimeline__Direction_E921714448EEE7FDF92A55A1CB305737) == 0x000574, "Member 'ASASTubeMinus02_BP_C::ForwardTimeline__Direction_E921714448EEE7FDF92A55A1CB305737' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForwardTimeline) == 0x000578, "Member 'ASASTubeMinus02_BP_C::ForwardTimeline' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, BackwardTimeline_DoorOne_EA441158402700E9E4835EAC1E372A82) == 0x000580, "Member 'ASASTubeMinus02_BP_C::BackwardTimeline_DoorOne_EA441158402700E9E4835EAC1E372A82' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, BackwardTimeline__Direction_EA441158402700E9E4835EAC1E372A82) == 0x000584, "Member 'ASASTubeMinus02_BP_C::BackwardTimeline__Direction_EA441158402700E9E4835EAC1E372A82' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, BackwardTimeline) == 0x000588, "Member 'ASASTubeMinus02_BP_C::BackwardTimeline' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightOff_NewTrack_0_797ABFDA428A9C9CA241DE9B6B9FA16F) == 0x000590, "Member 'ASASTubeMinus02_BP_C::LightOff_NewTrack_0_797ABFDA428A9C9CA241DE9B6B9FA16F' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightOff__Direction_797ABFDA428A9C9CA241DE9B6B9FA16F) == 0x000594, "Member 'ASASTubeMinus02_BP_C::LightOff__Direction_797ABFDA428A9C9CA241DE9B6B9FA16F' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightOff) == 0x000598, "Member 'ASASTubeMinus02_BP_C::LightOff' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightOn_NewTrack_0_7B3D4C2E4515ACBA20C80BAB518C2189) == 0x0005A0, "Member 'ASASTubeMinus02_BP_C::LightOn_NewTrack_0_7B3D4C2E4515ACBA20C80BAB518C2189' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightOn__Direction_7B3D4C2E4515ACBA20C80BAB518C2189) == 0x0005A4, "Member 'ASASTubeMinus02_BP_C::LightOn__Direction_7B3D4C2E4515ACBA20C80BAB518C2189' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightOn) == 0x0005A8, "Member 'ASASTubeMinus02_BP_C::LightOn' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, AnimationDurationSeconds) == 0x0005B0, "Member 'ASASTubeMinus02_BP_C::AnimationDurationSeconds' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, TriggeredForwardAKEvent) == 0x0005B8, "Member 'ASASTubeMinus02_BP_C::TriggeredForwardAKEvent' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, UntriggeredForwardAKEvent) == 0x0005C0, "Member 'ASASTubeMinus02_BP_C::UntriggeredForwardAKEvent' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, TriggeredBackwardAKEvent) == 0x0005C8, "Member 'ASASTubeMinus02_BP_C::TriggeredBackwardAKEvent' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, UntriggeredBackwardAKEvent) == 0x0005D0, "Member 'ASASTubeMinus02_BP_C::UntriggeredBackwardAKEvent' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ActivationDelay) == 0x0005D8, "Member 'ASASTubeMinus02_BP_C::ActivationDelay' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, DeActivationDelay) == 0x0005DC, "Member 'ASASTubeMinus02_BP_C::DeActivationDelay' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, AnimationCompletedForward) == 0x0005E0, "Member 'ASASTubeMinus02_BP_C::AnimationCompletedForward' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, AnimationCompletedBackward) == 0x0005F0, "Member 'ASASTubeMinus02_BP_C::AnimationCompletedBackward' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, bSoundPassthrough) == 0x000600, "Member 'ASASTubeMinus02_BP_C::bSoundPassthrough' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, bSoundConnector) == 0x000601, "Member 'ASASTubeMinus02_BP_C::bSoundConnector' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, SoundConnectorYawRotation) == 0x000604, "Member 'ASASTubeMinus02_BP_C::SoundConnectorYawRotation' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, SoundConnectorDimension) == 0x000608, "Member 'ASASTubeMinus02_BP_C::SoundConnectorDimension' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PlayerStart) == 0x000610, "Member 'ASASTubeMinus02_BP_C::PlayerStart' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, LightingChannels) == 0x000618, "Member 'ASASTubeMinus02_BP_C::LightingChannels' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, PlayerInTubeZone) == 0x000620, "Member 'ASASTubeMinus02_BP_C::PlayerInTubeZone' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, AreFrontLightsEnabled) == 0x000628, "Member 'ASASTubeMinus02_BP_C::AreFrontLightsEnabled' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, IsOpenedBackward_BP) == 0x000629, "Member 'ASASTubeMinus02_BP_C::IsOpenedBackward_BP' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, SASOwner) == 0x000630, "Member 'ASASTubeMinus02_BP_C::SASOwner' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, GreenLight) == 0x000638, "Member 'ASASTubeMinus02_BP_C::GreenLight' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, RedLight) == 0x000640, "Member 'ASASTubeMinus02_BP_C::RedLight' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, OnOpenedStageChanged) == 0x000648, "Member 'ASASTubeMinus02_BP_C::OnOpenedStageChanged' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ActivatedFogLightIntensity) == 0x000658, "Member 'ASASTubeMinus02_BP_C::ActivatedFogLightIntensity' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, DeactivatedFogLightIntensity) == 0x00065C, "Member 'ASASTubeMinus02_BP_C::DeactivatedFogLightIntensity' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ActivatedLightIntensity) == 0x000660, "Member 'ASASTubeMinus02_BP_C::ActivatedLightIntensity' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, DeactivatedLightIntensity) == 0x000664, "Member 'ASASTubeMinus02_BP_C::DeactivatedLightIntensity' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ForcedLightDisabled) == 0x000668, "Member 'ASASTubeMinus02_BP_C::ForcedLightDisabled' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, FogLightIntensity) == 0x00066C, "Member 'ASASTubeMinus02_BP_C::FogLightIntensity' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, IsOpenedForward_BP) == 0x000670, "Member 'ASASTubeMinus02_BP_C::IsOpenedForward_BP' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, bIsPlayingBackwardSequence) == 0x000671, "Member 'ASASTubeMinus02_BP_C::bIsPlayingBackwardSequence' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, bIsPlayingForwardSequence) == 0x000672, "Member 'ASASTubeMinus02_BP_C::bIsPlayingForwardSequence' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, bAreLightsOn) == 0x000673, "Member 'ASASTubeMinus02_BP_C::bAreLightsOn' has a wrong offset!");
static_assert(offsetof(ASASTubeMinus02_BP_C, ExtraOpeningDelay) == 0x000674, "Member 'ASASTubeMinus02_BP_C::ExtraOpeningDelay' has a wrong offset!");

}

