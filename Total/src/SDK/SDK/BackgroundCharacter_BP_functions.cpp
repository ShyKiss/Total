#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BackgroundCharacter_BP

#include "Basic.hpp"

#include "BackgroundCharacter_BP_classes.hpp"
#include "BackgroundCharacter_BP_parameters.hpp"


namespace SDK
{

// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.OnWorldPopulateFinishedTimeSliced
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABackgroundCharacter_BP_C::OnWorldPopulateFinishedTimeSliced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "OnWorldPopulateFinishedTimeSliced");

	Params::BackgroundCharacter_BP_C_OnWorldPopulateFinishedTimeSliced Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.InitializeParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackgroundCharacter_BP_C::InitializeParameters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "InitializeParameters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.SetPrecomputedVisSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABackgroundCharacter_BP_C::SetPrecomputedVisSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "SetPrecomputedVisSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.GetFacePoseAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseAsset*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPoseAsset* ABackgroundCharacter_BP_C::GetFacePoseAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "GetFacePoseAsset");

	Params::BackgroundCharacter_BP_C_GetFacePoseAsset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.BuildAppearance
// (Public, BlueprintCallable, BlueprintEvent)

void ABackgroundCharacter_BP_C::BuildAppearance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "BuildAppearance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABackgroundCharacter_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.OnWorldFullyLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABackgroundCharacter_BP_C::OnWorldFullyLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "OnWorldFullyLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABackgroundCharacter_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.OnWorldPopulateFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABackgroundCharacter_BP_C::OnWorldPopulateFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "OnWorldPopulateFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackgroundCharacter_BP.BackgroundCharacter_BP_C.ExecuteUbergraph_BackgroundCharacter_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABackgroundCharacter_BP_C::ExecuteUbergraph_BackgroundCharacter_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackgroundCharacter_BP_C", "ExecuteUbergraph_BackgroundCharacter_BP");

	Params::BackgroundCharacter_BP_C_ExecuteUbergraph_BackgroundCharacter_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

