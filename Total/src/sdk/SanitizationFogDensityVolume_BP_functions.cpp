#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SanitizationFogDensityVolume_BP

#include "Basic.hpp"

#include "SanitizationFogDensityVolume_BP_classes.hpp"
#include "SanitizationFogDensityVolume_BP_parameters.hpp"


namespace SDK
{

// Function SanitizationFogDensityVolume_BP.SanitizationFogDensityVolume_BP_C.ExecuteUbergraph_SanitizationFogDensityVolume_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASanitizationFogDensityVolume_BP_C::ExecuteUbergraph_SanitizationFogDensityVolume_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SanitizationFogDensityVolume_BP_C", "ExecuteUbergraph_SanitizationFogDensityVolume_BP");

	Params::SanitizationFogDensityVolume_BP_C_ExecuteUbergraph_SanitizationFogDensityVolume_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SanitizationFogDensityVolume_BP.SanitizationFogDensityVolume_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASanitizationFogDensityVolume_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SanitizationFogDensityVolume_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
