#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBGraffitisFeatureSwitchBase

#include "Basic.hpp"

#include "RBGraffitisFeatureSwitchBase_classes.hpp"
#include "RBGraffitisFeatureSwitchBase_parameters.hpp"


namespace SDK
{

// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.OnWorldPopulateFinishedTimeSliced
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ARBGraffitisFeatureSwitchBase_C::OnWorldPopulateFinishedTimeSliced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "OnWorldPopulateFinishedTimeSliced");

	Params::RBGraffitisFeatureSwitchBase_C_OnWorldPopulateFinishedTimeSliced Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.SetColorParameters
// (Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::SetColorParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "SetColorParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.ValidateFeatureSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::ValidateFeatureSwitch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "ValidateFeatureSwitch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.ApplyMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::ApplyMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "ApplyMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.SetVisualType
// (Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::SetVisualType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "SetVisualType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.OnWorldFullyLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::OnWorldFullyLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "OnWorldFullyLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.OnWorldPopulateFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARBGraffitisFeatureSwitchBase_C::OnWorldPopulateFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "OnWorldPopulateFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBGraffitisFeatureSwitchBase.RBGraffitisFeatureSwitchBase_C.ExecuteUbergraph_RBGraffitisFeatureSwitchBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBGraffitisFeatureSwitchBase_C::ExecuteUbergraph_RBGraffitisFeatureSwitchBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBGraffitisFeatureSwitchBase_C", "ExecuteUbergraph_RBGraffitisFeatureSwitchBase");

	Params::RBGraffitisFeatureSwitchBase_C_ExecuteUbergraph_RBGraffitisFeatureSwitchBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

