#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BarStool_GhostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BarStool_GhostAnimBP.BarStool_GhostAnimBP_C
// 0x05E0 (0x08D0 - 0x02F0)
class UBarStool_GhostAnimBP_C final : public URBGhostAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02F8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0328(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0350(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0378(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x03A0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0420(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0450(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04D0(0x0030)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0500(0x00E8)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x05E8(0x00C8)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x06B0(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0730(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0760(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x07E0(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0810(0x00B0)()
	bool                                          IsExit;                                            // 0x08C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CBF[0x3];                                     // 0x08C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Yaw;                                               // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pitch;                                             // 0x08C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ManageLookAt();
	bool FinishGhost(EGhostFinishReason FinishReason, int32 GhostFinishCustomReason);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_EnteredIdle();
	void AnimNotify_LeftExit();
	void ExecuteUbergraph_BarStool_GhostAnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BarStool_GhostAnimBP_C">();
	}
	static class UBarStool_GhostAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBarStool_GhostAnimBP_C>();
	}
};
static_assert(alignof(UBarStool_GhostAnimBP_C) == 0x000010, "Wrong alignment on UBarStool_GhostAnimBP_C");
static_assert(sizeof(UBarStool_GhostAnimBP_C) == 0x0008D0, "Wrong size on UBarStool_GhostAnimBP_C");
static_assert(offsetof(UBarStool_GhostAnimBP_C, UberGraphFrame) == 0x0002F0, "Member 'UBarStool_GhostAnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_Root) == 0x0002F8, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000328, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000350, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_TransitionResult) == 0x000378, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x0003A0, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_StateResult_3) == 0x000420, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000450, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_StateResult_2) == 0x0004D0, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_BlendSpacePlayer) == 0x000500, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_ApplyAdditive) == 0x0005E8, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0006B0, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_StateResult_1) == 0x000730, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_SequencePlayer) == 0x000760, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_StateResult) == 0x0007E0, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, AnimGraphNode_StateMachine) == 0x000810, "Member 'UBarStool_GhostAnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, IsExit) == 0x0008C0, "Member 'UBarStool_GhostAnimBP_C::IsExit' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, Yaw) == 0x0008C4, "Member 'UBarStool_GhostAnimBP_C::Yaw' has a wrong offset!");
static_assert(offsetof(UBarStool_GhostAnimBP_C, Pitch) == 0x0008C8, "Member 'UBarStool_GhostAnimBP_C::Pitch' has a wrong offset!");

}
