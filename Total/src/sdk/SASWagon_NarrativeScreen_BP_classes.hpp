#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SASWagon_NarrativeScreen_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "NarrativeScreenBase_BP_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SASWagon_NarrativeScreen_BP.SASWagon_NarrativeScreen_BP_C
// 0x0080 (0x0470 - 0x03F0)
class ASASWagon_NarrativeScreen_BP_C final : public ANarrativeScreenBase_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SASWagon_NarrativeScreen_BP_C;      // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBSoundComponent*                      RBSoundMech;                                       // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SupportMinus01;                                    // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SupportPoleMinus01;                                // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_NewTrack_0_D59475BD491BEE89C2937EA223B7F6C9; // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_D59475BD491BEE89C2937EA223B7F6C9; // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31CA[0x3];                                     // 0x0415(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotateArmTimeline_NewTrack_0_8853498042BADDE8C69CA2BE2747C7CA; // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RotateArmTimeline__Direction_8853498042BADDE8C69CA2BE2747C7CA; // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31CB[0x3];                                     // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RotateArmTimeline;                                 // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDebugScreenDown;                                  // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31CC[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             TVDownPosition;                                    // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             TVUpPosition;                                      // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bTelevisionDown;                                   // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bShouldBeDown;                                     // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayingAnim;                                    // 0x045A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31CD[0x5];                                     // 0x045B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ARecessedLightMinus01_BP_C*             LinkedLight;                                       // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartingIntensity;                                 // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetTVDown(bool IsDown);
	void DebugScreenDown();
	void RotateArmTimeline__FinishedFunc();
	void RotateArmTimeline__UpdateFunc();
	void RotateArmTimeline__OpenTV__EventFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void UpdateTVRotation_Internal();
	void ExecuteUbergraph_SASWagon_NarrativeScreen_BP(int32 EntryPoint);
	void TVUpPosition__DelegateSignature();
	void TVDownPosition__DelegateSignature();
	void UserConstructionScript();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SASWagon_NarrativeScreen_BP_C">();
	}
	static class ASASWagon_NarrativeScreen_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASASWagon_NarrativeScreen_BP_C>();
	}
};
static_assert(alignof(ASASWagon_NarrativeScreen_BP_C) == 0x000008, "Wrong alignment on ASASWagon_NarrativeScreen_BP_C");
static_assert(sizeof(ASASWagon_NarrativeScreen_BP_C) == 0x000470, "Wrong size on ASASWagon_NarrativeScreen_BP_C");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, UberGraphFrame_SASWagon_NarrativeScreen_BP_C) == 0x0003F0, "Member 'ASASWagon_NarrativeScreen_BP_C::UberGraphFrame_SASWagon_NarrativeScreen_BP_C' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, RBSoundMech) == 0x0003F8, "Member 'ASASWagon_NarrativeScreen_BP_C::RBSoundMech' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, SupportMinus01) == 0x000400, "Member 'ASASWagon_NarrativeScreen_BP_C::SupportMinus01' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, SupportPoleMinus01) == 0x000408, "Member 'ASASWagon_NarrativeScreen_BP_C::SupportPoleMinus01' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, Timeline_2_NewTrack_0_D59475BD491BEE89C2937EA223B7F6C9) == 0x000410, "Member 'ASASWagon_NarrativeScreen_BP_C::Timeline_2_NewTrack_0_D59475BD491BEE89C2937EA223B7F6C9' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, Timeline_2__Direction_D59475BD491BEE89C2937EA223B7F6C9) == 0x000414, "Member 'ASASWagon_NarrativeScreen_BP_C::Timeline_2__Direction_D59475BD491BEE89C2937EA223B7F6C9' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, Timeline_2) == 0x000418, "Member 'ASASWagon_NarrativeScreen_BP_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, RotateArmTimeline_NewTrack_0_8853498042BADDE8C69CA2BE2747C7CA) == 0x000420, "Member 'ASASWagon_NarrativeScreen_BP_C::RotateArmTimeline_NewTrack_0_8853498042BADDE8C69CA2BE2747C7CA' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, RotateArmTimeline__Direction_8853498042BADDE8C69CA2BE2747C7CA) == 0x000424, "Member 'ASASWagon_NarrativeScreen_BP_C::RotateArmTimeline__Direction_8853498042BADDE8C69CA2BE2747C7CA' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, RotateArmTimeline) == 0x000428, "Member 'ASASWagon_NarrativeScreen_BP_C::RotateArmTimeline' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, bDebugScreenDown) == 0x000430, "Member 'ASASWagon_NarrativeScreen_BP_C::bDebugScreenDown' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, TVDownPosition) == 0x000438, "Member 'ASASWagon_NarrativeScreen_BP_C::TVDownPosition' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, TVUpPosition) == 0x000448, "Member 'ASASWagon_NarrativeScreen_BP_C::TVUpPosition' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, bTelevisionDown) == 0x000458, "Member 'ASASWagon_NarrativeScreen_BP_C::bTelevisionDown' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, bShouldBeDown) == 0x000459, "Member 'ASASWagon_NarrativeScreen_BP_C::bShouldBeDown' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, bIsPlayingAnim) == 0x00045A, "Member 'ASASWagon_NarrativeScreen_BP_C::bIsPlayingAnim' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, LinkedLight) == 0x000460, "Member 'ASASWagon_NarrativeScreen_BP_C::LinkedLight' has a wrong offset!");
static_assert(offsetof(ASASWagon_NarrativeScreen_BP_C, StartingIntensity) == 0x000468, "Member 'ASASWagon_NarrativeScreen_BP_C::StartingIntensity' has a wrong offset!");

}
