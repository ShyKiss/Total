#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleMesh_Pickup_BP

#include "Basic.hpp"

#include "SimpleMesh_Pickup_BP_classes.hpp"
#include "SimpleMesh_Pickup_BP_parameters.hpp"


namespace SDK
{

// Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASimpleMesh_Pickup_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleMesh_Pickup_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.Event_OnContainerChanged
// (Event, Protected, BlueprintEvent)

void ASimpleMesh_Pickup_BP_C::Event_OnContainerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleMesh_Pickup_BP_C", "Event_OnContainerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C.ExecuteUbergraph_SimpleMesh_Pickup_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASimpleMesh_Pickup_BP_C::ExecuteUbergraph_SimpleMesh_Pickup_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SimpleMesh_Pickup_BP_C", "ExecuteUbergraph_SimpleMesh_Pickup_BP");

	Params::SimpleMesh_Pickup_BP_C_ExecuteUbergraph_SimpleMesh_Pickup_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
