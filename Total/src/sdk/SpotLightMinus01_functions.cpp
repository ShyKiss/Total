#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpotLightMinus01

#include "Basic.hpp"

#include "SpotLightMinus01_classes.hpp"
#include "SpotLightMinus01_parameters.hpp"


namespace SDK
{

// Function SpotLight-01.SpotLight-01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpotLightMinus01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotLight-01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpotLight-01.SpotLight-01_C.ExecuteUbergraph_SpotLight-01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpotLightMinus01_C::ExecuteUbergraph_SpotLightMinus01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpotLight-01_C", "ExecuteUbergraph_SpotLight-01");

	Params::SpotLightMinus01_C_ExecuteUbergraph_SpotLightMinus01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
