#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EvaluationCorridorMinus01

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass EvaluationCorridor-01.EvaluationCorridor-01_C
// 0x01F8 (0x0450 - 0x0258)
class AEvaluationCorridorMinus01_C final : public ARBLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_0_NewTrack_0_85EF7D1146249D4BF2D36B95BE1ED3EB; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_85EF7D1146249D4BF2D36B95BE1ED3EB; // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CFD[0x3];                                     // 0x0265(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNarrativeScreenAnimationData          FallbackAnimation;                                 // 0x0270(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          HasPlayedScientistVO;                              // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CFE[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Group_Name;                                        // 0x028C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           New_Color;                                         // 0x0294(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CFF[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Other_Actor;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayPreDelay;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVOPriority                                   VOPriority;                                        // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D00[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDirectorVOs                           DirectorVOs;                                       // 0x02B8(0x0108)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFirstTutorialCompletion;                         // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasDecontaminated;                                // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D01[0x6];                                     // 0x03C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AEvalCorridorDoorDetectorMinus01_BP_C*  EvalCorridorDoorDetectorMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridorExit_BP_C*                 EvalCorridorExit_BP_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridor_NarrativeScreen_BP_C*     MasterEvalCorridorObjectiveTV_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridor_NarrativeScreen_BP_C*     EvalCorridor_NarrativeScreen_BP_4_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridor_NarrativeScreen_BP_C*     EvalCorridor_NarrativeScreen_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridor_NarrativeScreen_BP_C*     EvalCorridor_NarrativeScreen_BP_6_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScientist_BP_C*                        Scientist_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x03F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridor_TvChannel_BP_C*           EvalCorridor_TvChannel_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0400(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACeilingFluorescentMinus03_C*           UVLight_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0408(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACeilingFluorescentMinus03_C*           UVLight2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0410(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     UV_Light_PostProcessVolume_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASteamShowerMinus01_BP_C*               SteamShowerMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOrientedDecalActor_C*                  UVLightSplatterMinus01_INST_5_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvalCorridorEntrance_BP_C*             EvalCorridorEntrance_BP_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBEvalCorridor_BP_C*                   RBEvalCorridor_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0438(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEvaluationCorridorSlidingDoorMinus01_BP_C* EvaluationCorridorSlidingDoorMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0440(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBWaterVolume*                         RBWaterVolume_1_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty; // 0x0448(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__EvaluationCorridorMinus01_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void PlayEvalCorridorTVAnimation(const struct FNarrativeScreenAnimationData& AnimData);
	void BndEvt__EvaluationCorridorMinus01_RBPlayerTriggerVolume8_2_K2Node_ActorBoundEvent_1_OnPlayerTriggerVolumeActorEvent__DelegateSignature(class ARBPlayer* Player);
	void Decontamination(class APawn* Target);
	void TurnOnUVLight(bool Condition);
	void BndEvt__EvaluationCorridorMinus01_DecontaminationExitTrigger2_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void InitUvLight();
	void HandleEvalCorridorVO();
	void OnLocalPlayerEntered();
	void QueueEastermanVO(class UAkAudioEvent* AkEvent);
	void OnLocalPlayerExitedEvt();
	void OnLocalPlayerExited();
	void OnLocalPlayerEnteredEvt();
	void BindEvalutationCorridor();
	void OnWorldPopulateFinished();
	void CustomEvent_0(class ARBPlayer* Player);
	void TestEvalScientistVO();
	void ExecuteUbergraph_EvaluationCorridorMinus01(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EvaluationCorridor-01_C">();
	}
	static class AEvaluationCorridorMinus01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEvaluationCorridorMinus01_C>();
	}
};
static_assert(alignof(AEvaluationCorridorMinus01_C) == 0x000008, "Wrong alignment on AEvaluationCorridorMinus01_C");
static_assert(sizeof(AEvaluationCorridorMinus01_C) == 0x000450, "Wrong size on AEvaluationCorridorMinus01_C");
static_assert(offsetof(AEvaluationCorridorMinus01_C, UberGraphFrame) == 0x000258, "Member 'AEvaluationCorridorMinus01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, Timeline_0_NewTrack_0_85EF7D1146249D4BF2D36B95BE1ED3EB) == 0x000260, "Member 'AEvaluationCorridorMinus01_C::Timeline_0_NewTrack_0_85EF7D1146249D4BF2D36B95BE1ED3EB' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, Timeline_0__Direction_85EF7D1146249D4BF2D36B95BE1ED3EB) == 0x000264, "Member 'AEvaluationCorridorMinus01_C::Timeline_0__Direction_85EF7D1146249D4BF2D36B95BE1ED3EB' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, Timeline_0) == 0x000268, "Member 'AEvaluationCorridorMinus01_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, FallbackAnimation) == 0x000270, "Member 'AEvaluationCorridorMinus01_C::FallbackAnimation' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, HasPlayedScientistVO) == 0x000288, "Member 'AEvaluationCorridorMinus01_C::HasPlayedScientistVO' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, Group_Name) == 0x00028C, "Member 'AEvaluationCorridorMinus01_C::Group_Name' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, New_Color) == 0x000294, "Member 'AEvaluationCorridorMinus01_C::New_Color' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, Other_Actor) == 0x0002A8, "Member 'AEvaluationCorridorMinus01_C::Other_Actor' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, PlayPreDelay) == 0x0002B0, "Member 'AEvaluationCorridorMinus01_C::PlayPreDelay' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, VOPriority) == 0x0002B4, "Member 'AEvaluationCorridorMinus01_C::VOPriority' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, DirectorVOs) == 0x0002B8, "Member 'AEvaluationCorridorMinus01_C::DirectorVOs' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, IsFirstTutorialCompletion) == 0x0003C0, "Member 'AEvaluationCorridorMinus01_C::IsFirstTutorialCompletion' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, bHasDecontaminated) == 0x0003C1, "Member 'AEvaluationCorridorMinus01_C::bHasDecontaminated' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridorDoorDetectorMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003C8, "Member 'AEvaluationCorridorMinus01_C::EvalCorridorDoorDetectorMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridorExit_BP_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003D0, "Member 'AEvaluationCorridorMinus01_C::EvalCorridorExit_BP_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, MasterEvalCorridorObjectiveTV_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003D8, "Member 'AEvaluationCorridorMinus01_C::MasterEvalCorridorObjectiveTV_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridor_NarrativeScreen_BP_4_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003E0, "Member 'AEvaluationCorridorMinus01_C::EvalCorridor_NarrativeScreen_BP_4_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridor_NarrativeScreen_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003E8, "Member 'AEvaluationCorridorMinus01_C::EvalCorridor_NarrativeScreen_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridor_NarrativeScreen_BP_6_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003F0, "Member 'AEvaluationCorridorMinus01_C::EvalCorridor_NarrativeScreen_BP_6_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, Scientist_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x0003F8, "Member 'AEvaluationCorridorMinus01_C::Scientist_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridor_TvChannel_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000400, "Member 'AEvaluationCorridorMinus01_C::EvalCorridor_TvChannel_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, UVLight_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000408, "Member 'AEvaluationCorridorMinus01_C::UVLight_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, UVLight2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000410, "Member 'AEvaluationCorridorMinus01_C::UVLight2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, UV_Light_PostProcessVolume_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000418, "Member 'AEvaluationCorridorMinus01_C::UV_Light_PostProcessVolume_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, SteamShowerMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000420, "Member 'AEvaluationCorridorMinus01_C::SteamShowerMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, UVLightSplatterMinus01_INST_5_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000428, "Member 'AEvaluationCorridorMinus01_C::UVLightSplatterMinus01_INST_5_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvalCorridorEntrance_BP_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000430, "Member 'AEvaluationCorridorMinus01_C::EvalCorridorEntrance_BP_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, RBEvalCorridor_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000438, "Member 'AEvaluationCorridorMinus01_C::RBEvalCorridor_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, EvaluationCorridorSlidingDoorMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000440, "Member 'AEvaluationCorridorMinus01_C::EvaluationCorridorSlidingDoorMinus01_BP_2_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");
static_assert(offsetof(AEvaluationCorridorMinus01_C, RBWaterVolume_1_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty) == 0x000448, "Member 'AEvaluationCorridorMinus01_C::RBWaterVolume_1_ExecuteUbergraph_EvaluationCorridorMinus01_RefProperty' has a wrong offset!");

}
