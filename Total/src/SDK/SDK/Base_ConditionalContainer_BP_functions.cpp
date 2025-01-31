#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Base_ConditionalContainer_BP

#include "Basic.hpp"

#include "Base_ConditionalContainer_BP_classes.hpp"
#include "Base_ConditionalContainer_BP_parameters.hpp"


namespace SDK
{

// Function Base_ConditionalContainer_BP.Base_ConditionalContainer_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABase_ConditionalContainer_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Base_ConditionalContainer_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Base_ConditionalContainer_BP.Base_ConditionalContainer_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABase_ConditionalContainer_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Base_ConditionalContainer_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Base_ConditionalContainer_BP.Base_ConditionalContainer_BP_C.ExecuteUbergraph_Base_ConditionalContainer_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABase_ConditionalContainer_BP_C::ExecuteUbergraph_Base_ConditionalContainer_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Base_ConditionalContainer_BP_C", "ExecuteUbergraph_Base_ConditionalContainer_BP");

	Params::Base_ConditionalContainer_BP_C_ExecuteUbergraph_Base_ConditionalContainer_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

