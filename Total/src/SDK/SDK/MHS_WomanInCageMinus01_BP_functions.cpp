#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MHS_WomanInCageMinus01_BP

#include "Basic.hpp"

#include "MHS_WomanInCageMinus01_BP_classes.hpp"
#include "MHS_WomanInCageMinus01_BP_parameters.hpp"


namespace SDK
{

// Function MHS_WomanInCage-01_BP.MHS_WomanInCage-01_BP_C.SetVoice
// (Public, BlueprintCallable, BlueprintEvent)

void AMHS_WomanInCageMinus01_BP_C::SetVoice()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MHS_WomanInCage-01_BP_C", "SetVoice");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MHS_WomanInCage-01_BP.MHS_WomanInCage-01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMHS_WomanInCageMinus01_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MHS_WomanInCage-01_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MHS_WomanInCage-01_BP.MHS_WomanInCage-01_BP_C.SetMasterPose
// (BlueprintCallable, BlueprintEvent)

void AMHS_WomanInCageMinus01_BP_C::SetMasterPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MHS_WomanInCage-01_BP_C", "SetMasterPose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MHS_WomanInCage-01_BP.MHS_WomanInCage-01_BP_C.ExecuteUbergraph_MHS_WomanInCage-01_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMHS_WomanInCageMinus01_BP_C::ExecuteUbergraph_MHS_WomanInCageMinus01_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MHS_WomanInCage-01_BP_C", "ExecuteUbergraph_MHS_WomanInCage-01_BP");

	Params::MHS_WomanInCageMinus01_BP_C_ExecuteUbergraph_MHS_WomanInCageMinus01_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

