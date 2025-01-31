#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplineCable_BP

#include "Basic.hpp"

#include "SplineCable_BP_classes.hpp"
#include "SplineCable_BP_parameters.hpp"


namespace SDK
{

// Function SplineCable_BP.SplineCable_BP_C.SetupMeshCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASplineCable_BP_C::SetupMeshCollision(class UPrimitiveComponent* MeshComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineCable_BP_C", "SetupMeshCollision");

	Params::SplineCable_BP_C_SetupMeshCollision Parms{};

	Parms.MeshComponent = MeshComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SplineCable_BP.SplineCable_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASplineCable_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SplineCable_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

