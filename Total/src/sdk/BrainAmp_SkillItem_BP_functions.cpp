#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BrainAmp_SkillItem_BP

#include "Basic.hpp"

#include "BrainAmp_SkillItem_BP_classes.hpp"
#include "BrainAmp_SkillItem_BP_parameters.hpp"


namespace SDK
{

// Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.ExecuteUbergraph_BrainAmp_SkillItem_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABrainAmp_SkillItem_BP_C::ExecuteUbergraph_BrainAmp_SkillItem_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrainAmp_SkillItem_BP_C", "ExecuteUbergraph_BrainAmp_SkillItem_BP");

	Params::BrainAmp_SkillItem_BP_C_ExecuteUbergraph_BrainAmp_SkillItem_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnDeployed
// (Event, Public, BlueprintEvent)

void ABrainAmp_SkillItem_BP_C::Event_OnDeployed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrainAmp_SkillItem_BP_C", "Event_OnDeployed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BrainAmp_SkillItem_BP.BrainAmp_SkillItem_BP_C.Event_OnActivate
// (Event, Public, BlueprintEvent)

void ABrainAmp_SkillItem_BP_C::Event_OnActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BrainAmp_SkillItem_BP_C", "Event_OnActivate");

	UObject::ProcessEvent(Func, nullptr);
}

}
