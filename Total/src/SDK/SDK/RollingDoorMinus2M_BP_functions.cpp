#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RollingDoorMinus2M_BP

#include "Basic.hpp"

#include "RollingDoorMinus2M_BP_classes.hpp"
#include "RollingDoorMinus2M_BP_parameters.hpp"


namespace SDK
{

// Function RollingDoor-2M_BP.RollingDoor-2M_BP_C.GetMeshOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARollingDoorMinus2M_BP_C::GetMeshOffset(struct FVector* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RollingDoor-2M_BP_C", "GetMeshOffset");

	Params::RollingDoorMinus2M_BP_C_GetMeshOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}

}

