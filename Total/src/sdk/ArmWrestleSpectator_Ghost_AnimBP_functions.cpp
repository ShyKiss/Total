#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArmWrestleSpectator_Ghost_AnimBP

#include "Basic.hpp"

#include "ArmWrestleSpectator_Ghost_AnimBP_classes.hpp"
#include "ArmWrestleSpectator_Ghost_AnimBP_parameters.hpp"


namespace SDK
{

// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UArmWrestleSpectator_Ghost_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "AnimGraph");

	Params::ArmWrestleSpectator_Ghost_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.ManageLookAt
// (Public, BlueprintCallable, BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::ManageLookAt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "ManageLookAt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.FinishGhost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGhostFinishReason                      FinishReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GhostFinishCustomReason                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UArmWrestleSpectator_Ghost_AnimBP_C::FinishGhost(EGhostFinishReason FinishReason, int32 GhostFinishCustomReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "FinishGhost");

	Params::ArmWrestleSpectator_Ghost_AnimBP_C_FinishGhost Parms{};

	Parms.FinishReason = FinishReason;
	Parms.GhostFinishCustomReason = GhostFinishCustomReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP_AnimGraphNode_TransitionResult_4F51A7C94F42142CA814908C71A93227
// (BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP_AnimGraphNode_TransitionResult_4F51A7C94F42142CA814908C71A93227()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP_AnimGraphNode_TransitionResult_4F51A7C94F42142CA814908C71A93227");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP_AnimGraphNode_TransitionResult_309205454121CBD9A4949C97D4287D8B
// (BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP_AnimGraphNode_TransitionResult_309205454121CBD9A4949C97D4287D8B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP_AnimGraphNode_TransitionResult_309205454121CBD9A4949C97D4287D8B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.AnimNotify_Toto
// (BlueprintCallable, BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::AnimNotify_Toto()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "AnimNotify_Toto");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.AnimNotify_Exit
// (BlueprintCallable, BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::AnimNotify_Exit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "AnimNotify_Exit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.AnimNotify_Emote
// (BlueprintCallable, BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::AnimNotify_Emote()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "AnimNotify_Emote");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.AnimNotify_EnteredPounding
// (BlueprintCallable, BlueprintEvent)

void UArmWrestleSpectator_Ghost_AnimBP_C::AnimNotify_EnteredPounding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "AnimNotify_EnteredPounding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmWrestleSpectator_Ghost_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "BlueprintUpdateAnimation");

	Params::ArmWrestleSpectator_Ghost_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArmWrestleSpectator_Ghost_AnimBP.ArmWrestleSpectator_Ghost_AnimBP_C.ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmWrestleSpectator_Ghost_AnimBP_C::ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArmWrestleSpectator_Ghost_AnimBP_C", "ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP");

	Params::ArmWrestleSpectator_Ghost_AnimBP_C_ExecuteUbergraph_ArmWrestleSpectator_Ghost_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
