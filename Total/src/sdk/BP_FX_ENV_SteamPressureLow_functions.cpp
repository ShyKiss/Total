#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_ENV_SteamPressureLow

#include "Basic.hpp"

#include "BP_FX_ENV_SteamPressureLow_classes.hpp"


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

}
