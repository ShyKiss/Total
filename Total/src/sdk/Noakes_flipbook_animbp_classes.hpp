#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Noakes_flipbook_animbp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass noakes_flipbook_animbp.noakes_flipbook_animbp_C
// 0x0810 (0x0AD0 - 0x02C0)
class UNoakes_flipbook_animbp_C final : public UAnimInstance
{
public:
	uint8                                         Pad_342E[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x02F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x0320(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0348(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0370(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0398(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x03C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x03E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x0410(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0438(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0460(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0488(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x0508(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0538(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x05B8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x05E8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0668(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x0698(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0718(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x0748(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x07C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x07F8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0878(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x08A8(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0928(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0958(0x0080)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x09D8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0A08(0x00B0)()
	bool                                          IsPurchasing;                                      // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBreakIdle;                                       // 0x0AB9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStoryProgress;                                   // 0x0ABA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNewCategory;                                     // 0x0ABB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCategoryUp;                                      // 0x0ABC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBusy;                                            // 0x0ABD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsShopping;                                        // 0x0ABE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsServingCustomer;                                 // 0x0ABF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTaskComplete;                                    // 0x0AC0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTaskAccept;                                      // 0x0AC1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsTaskRemove;                                      // 0x0AC2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsProgressDone;                                    // 0x0AC3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFirstTimeServing;                                // 0x0AC4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFirstTimeShopping;                               // 0x0AC5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNoticing;                                        // 0x0AC6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExitSudden;                                      // 0x0AC7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStanding;                                        // 0x0AC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasGainedXp;                                       // 0x0AC9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasGainedLevel;                                    // 0x0ACA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPurchaseA;                                       // 0x0ACB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_noakes_flipbook_animbp_AnimGraphNode_TransitionResult_1AE1321E442FC7D2D38571AE81B13EBC();
	void ExecuteUbergraph_noakes_flipbook_animbp(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"noakes_flipbook_animbp_C">();
	}
	static class UNoakes_flipbook_animbp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNoakes_flipbook_animbp_C>();
	}
};
static_assert(alignof(UNoakes_flipbook_animbp_C) == 0x000010, "Wrong alignment on UNoakes_flipbook_animbp_C");
static_assert(sizeof(UNoakes_flipbook_animbp_C) == 0x000AD0, "Wrong size on UNoakes_flipbook_animbp_C");
static_assert(offsetof(UNoakes_flipbook_animbp_C, UberGraphFrame) == 0x0002C0, "Member 'UNoakes_flipbook_animbp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_9) == 0x0002F8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_8) == 0x000320, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_7) == 0x000348, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_6) == 0x000370, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_5) == 0x000398, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_4) == 0x0003C0, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_3) == 0x0003E8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_2) == 0x000410, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult_1) == 0x000438, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_TransitionResult) == 0x000460, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_7) == 0x000488, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_7) == 0x000508, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_6) == 0x000538, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_6) == 0x0005B8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_5) == 0x0005E8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_5) == 0x000668, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_4) == 0x000698, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_4) == 0x000718, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_3) == 0x000748, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_3) == 0x0007C8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_2) == 0x0007F8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_2) == 0x000878, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer_1) == 0x0008A8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult_1) == 0x000928, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_SequencePlayer) == 0x000958, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateResult) == 0x0009D8, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, AnimGraphNode_StateMachine) == 0x000A08, "Member 'UNoakes_flipbook_animbp_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsPurchasing) == 0x000AB8, "Member 'UNoakes_flipbook_animbp_C::IsPurchasing' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsBreakIdle) == 0x000AB9, "Member 'UNoakes_flipbook_animbp_C::IsBreakIdle' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsStoryProgress) == 0x000ABA, "Member 'UNoakes_flipbook_animbp_C::IsStoryProgress' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsNewCategory) == 0x000ABB, "Member 'UNoakes_flipbook_animbp_C::IsNewCategory' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsCategoryUp) == 0x000ABC, "Member 'UNoakes_flipbook_animbp_C::IsCategoryUp' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsBusy) == 0x000ABD, "Member 'UNoakes_flipbook_animbp_C::IsBusy' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsShopping) == 0x000ABE, "Member 'UNoakes_flipbook_animbp_C::IsShopping' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsServingCustomer) == 0x000ABF, "Member 'UNoakes_flipbook_animbp_C::IsServingCustomer' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsTaskComplete) == 0x000AC0, "Member 'UNoakes_flipbook_animbp_C::IsTaskComplete' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsTaskAccept) == 0x000AC1, "Member 'UNoakes_flipbook_animbp_C::IsTaskAccept' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsTaskRemove) == 0x000AC2, "Member 'UNoakes_flipbook_animbp_C::IsTaskRemove' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsProgressDone) == 0x000AC3, "Member 'UNoakes_flipbook_animbp_C::IsProgressDone' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsFirstTimeServing) == 0x000AC4, "Member 'UNoakes_flipbook_animbp_C::IsFirstTimeServing' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsFirstTimeShopping) == 0x000AC5, "Member 'UNoakes_flipbook_animbp_C::IsFirstTimeShopping' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsNoticing) == 0x000AC6, "Member 'UNoakes_flipbook_animbp_C::IsNoticing' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsExitSudden) == 0x000AC7, "Member 'UNoakes_flipbook_animbp_C::IsExitSudden' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsStanding) == 0x000AC8, "Member 'UNoakes_flipbook_animbp_C::IsStanding' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, HasGainedXp) == 0x000AC9, "Member 'UNoakes_flipbook_animbp_C::HasGainedXp' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, HasGainedLevel) == 0x000ACA, "Member 'UNoakes_flipbook_animbp_C::HasGainedLevel' has a wrong offset!");
static_assert(offsetof(UNoakes_flipbook_animbp_C, IsPurchaseA) == 0x000ACB, "Member 'UNoakes_flipbook_animbp_C::IsPurchaseA' has a wrong offset!");

}
