#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlyingObject

#include "Basic.hpp"

#include "FlyingObject_classes.hpp"
#include "FlyingObject_parameters.hpp"


namespace SDK
{

// Function FlyingObject.FlyingObject_C.SetFinalActorDestination
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AFlyingObject_C::SetFinalActorDestination(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "SetFinalActorDestination");

	Params::FlyingObject_C_SetFinalActorDestination Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlyingObject.FlyingObject_C.GetOriginalMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::GetOriginalMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "GetOriginalMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.ResetMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::ResetMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "ResetMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.SetAllMaterialsRed
// (Public, BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::SetAllMaterialsRed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "SetAllMaterialsRed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Shift                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Alt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AFlyingObject_C::CustomEvent_1(float Axis, bool Shift, bool Alt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "CustomEvent_1");

	Params::FlyingObject_C_CustomEvent_1 Parms{};

	Parms.Axis = Axis;
	Parms.Shift = Shift;
	Parms.Alt = Alt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlyingObject.FlyingObject_C.MoveObject
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBPawn*                          Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlyingObject_C::MoveObject(class ARBPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "MoveObject");

	Params::FlyingObject_C_MoveObject Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlyingObject.FlyingObject_C.Event_OnStartOperating
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPawn*                          Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlyingObject_C::Event_OnStartOperating(class ARBPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "Event_OnStartOperating");

	Params::FlyingObject_C_Event_OnStartOperating Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlyingObject.FlyingObject_C.Event_OnStopOperating
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPawn*                          Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlyingObject_C::Event_OnStopOperating(class ARBPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "Event_OnStopOperating");

	Params::FlyingObject_C_Event_OnStopOperating Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlyingObject.FlyingObject_C.UnBindMouseWheelEvent
// (BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::UnBindMouseWheelEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "UnBindMouseWheelEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.BindMouseWheelEvent
// (BlueprintCallable, BlueprintEvent)

void AFlyingObject_C::BindMouseWheelEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "BindMouseWheelEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlyingObject.FlyingObject_C.MulticastSetFinalDestination
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AFlyingObject_C::MulticastSetFinalDestination(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "MulticastSetFinalDestination");

	Params::FlyingObject_C_MulticastSetFinalDestination Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlyingObject.FlyingObject_C.ExecuteUbergraph_FlyingObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlyingObject_C::ExecuteUbergraph_FlyingObject(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlyingObject_C", "ExecuteUbergraph_FlyingObject");

	Params::FlyingObject_C_ExecuteUbergraph_FlyingObject Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
