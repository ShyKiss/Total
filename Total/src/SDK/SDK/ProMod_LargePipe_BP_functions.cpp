#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProMod_LargePipe_BP

#include "Basic.hpp"

#include "ProMod_LargePipe_BP_classes.hpp"
#include "ProMod_LargePipe_BP_parameters.hpp"


namespace SDK
{

// Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Colorize
// (Public, BlueprintCallable, BlueprintEvent)

void AProMod_LargePipe_BP_C::Colorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProMod_LargePipe_BP_C", "Colorize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Connector
// (Public, BlueprintCallable, BlueprintEvent)

void AProMod_LargePipe_BP_C::Connector()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProMod_LargePipe_BP_C", "Connector");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.Valve
// (Public, BlueprintCallable, BlueprintEvent)

void AProMod_LargePipe_BP_C::Valve()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProMod_LargePipe_BP_C", "Valve");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ApplyMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*               Material                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProMod_LargePipe_BP_C::ApplyMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProMod_LargePipe_BP_C", "ApplyMaterial");

	Params::ProMod_LargePipe_BP_C_ApplyMaterial Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProMod_LargePipe_BP.ProMod_LargePipe_BP_C.ExecuteUbergraph_ProMod_LargePipe_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProMod_LargePipe_BP_C::ExecuteUbergraph_ProMod_LargePipe_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProMod_LargePipe_BP_C", "ExecuteUbergraph_ProMod_LargePipe_BP");

	Params::ProMod_LargePipe_BP_C_ExecuteUbergraph_ProMod_LargePipe_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

