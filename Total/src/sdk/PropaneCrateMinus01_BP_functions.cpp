#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropaneCrateMinus01_BP

#include "Basic.hpp"

#include "PropaneCrateMinus01_BP_classes.hpp"
#include "PropaneCrateMinus01_BP_parameters.hpp"


namespace SDK
{

// Function PropaneCrate-01_BP.PropaneCrate-01_BP_C.OnWorldPopulateFinishedTimeSliced
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool APropaneCrateMinus01_BP_C::OnWorldPopulateFinishedTimeSliced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropaneCrate-01_BP_C", "OnWorldPopulateFinishedTimeSliced");

	Params::PropaneCrateMinus01_BP_C_OnWorldPopulateFinishedTimeSliced Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PropaneCrate-01_BP.PropaneCrate-01_BP_C.OnWorldFullyLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APropaneCrateMinus01_BP_C::OnWorldFullyLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropaneCrate-01_BP_C", "OnWorldFullyLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PropaneCrate-01_BP.PropaneCrate-01_BP_C.OnWorldPopulateFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APropaneCrateMinus01_BP_C::OnWorldPopulateFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropaneCrate-01_BP_C", "OnWorldPopulateFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PropaneCrate-01_BP.PropaneCrate-01_BP_C.ExecuteUbergraph_PropaneCrate-01_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APropaneCrateMinus01_BP_C::ExecuteUbergraph_PropaneCrateMinus01_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PropaneCrate-01_BP_C", "ExecuteUbergraph_PropaneCrate-01_BP");

	Params::PropaneCrateMinus01_BP_C_ExecuteUbergraph_PropaneCrateMinus01_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
