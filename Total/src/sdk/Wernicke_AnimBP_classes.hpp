#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wernicke_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Wernicke_AnimBP.Wernicke_AnimBP_C
// 0x0450 (0x0710 - 0x02C0)
class UWernicke_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_341E[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0370(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0398(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x0418(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x0448(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x04C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x04F8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0578(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x05A8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0628(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0658(0x00B0)()
	bool                                          IsObvserving;                                      // 0x0708(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_341F[0x3];                                     // 0x0709(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ObserveWaitTime;                                   // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void AnimNotify_ObserveStart();
	void AnimNotify_GoAway();
	void ExecuteUbergraph_Wernicke_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Wernicke_AnimBP_C">();
	}
	static class UWernicke_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWernicke_AnimBP_C>();
	}
};
static_assert(alignof(UWernicke_AnimBP_C) == 0x000010, "Wrong alignment on UWernicke_AnimBP_C");
static_assert(sizeof(UWernicke_AnimBP_C) == 0x000710, "Wrong size on UWernicke_AnimBP_C");
static_assert(offsetof(UWernicke_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UWernicke_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UWernicke_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_TransitionResult_3) == 0x0002F8, "Member 'UWernicke_AnimBP_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_TransitionResult_2) == 0x000320, "Member 'UWernicke_AnimBP_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_TransitionResult_1) == 0x000348, "Member 'UWernicke_AnimBP_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_TransitionResult) == 0x000370, "Member 'UWernicke_AnimBP_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_SequencePlayer_3) == 0x000398, "Member 'UWernicke_AnimBP_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_StateResult_3) == 0x000418, "Member 'UWernicke_AnimBP_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_SequencePlayer_2) == 0x000448, "Member 'UWernicke_AnimBP_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_StateResult_2) == 0x0004C8, "Member 'UWernicke_AnimBP_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_SequencePlayer_1) == 0x0004F8, "Member 'UWernicke_AnimBP_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_StateResult_1) == 0x000578, "Member 'UWernicke_AnimBP_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x0005A8, "Member 'UWernicke_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_StateResult) == 0x000628, "Member 'UWernicke_AnimBP_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, AnimGraphNode_StateMachine) == 0x000658, "Member 'UWernicke_AnimBP_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, IsObvserving) == 0x000708, "Member 'UWernicke_AnimBP_C::IsObvserving' has a wrong offset!");
static_assert(offsetof(UWernicke_AnimBP_C, ObserveWaitTime) == 0x00070C, "Member 'UWernicke_AnimBP_C::ObserveWaitTime' has a wrong offset!");

}
