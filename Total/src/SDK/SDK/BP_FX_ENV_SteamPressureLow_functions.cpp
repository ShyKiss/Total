#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_ENV_SteamPressureLow

#include "Basic.hpp"

#include "BP_FX_ENV_SteamPressureLow_classes.hpp"
#include "BP_FX_ENV_SteamPressureLow_parameters.hpp"


namespace SDK
{

// Function BP_FX_ENV_SteamPressureLow.BP_FX_ENV_SteamPressureLow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FX_ENV_SteamPressureLow_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_ENV_SteamPressureLow_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_ENV_SteamPressureLow.BP_FX_ENV_SteamPressureLow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FX_ENV_SteamPressureLow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_ENV_SteamPressureLow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_ENV_SteamPressureLow.BP_FX_ENV_SteamPressureLow_C.ExecuteUbergraph_BP_FX_ENV_SteamPressureLow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FX_ENV_SteamPressureLow_C::ExecuteUbergraph_BP_FX_ENV_SteamPressureLow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_ENV_SteamPressureLow_C", "ExecuteUbergraph_BP_FX_ENV_SteamPressureLow");

	Params::BP_FX_ENV_SteamPressureLow_C_ExecuteUbergraph_BP_FX_ENV_SteamPressureLow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

