#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NumberRollMinus01_BP

#include "Basic.hpp"

#include "NumberRollMinus01_BP_classes.hpp"
#include "NumberRollMinus01_BP_parameters.hpp"


namespace SDK
{

// Function NumberRoll-01_BP.NumberRoll-01_BP_C.UpdateActualNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ActualNumber                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_TargetNumber                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewActualNumber                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANumberRollMinus01_BP_C::UpdateActualNumber(float ActualNumber, float Param_TargetNumber, float* NewActualNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "UpdateActualNumber");

	Params::NumberRollMinus01_BP_C_UpdateActualNumber Parms{};

	Parms.ActualNumber = ActualNumber;
	Parms.Param_TargetNumber = Param_TargetNumber;

	UObject::ProcessEvent(Func, &Parms);

	if (NewActualNumber != nullptr)
		*NewActualNumber = Parms.NewActualNumber;
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANumberRollMinus01_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANumberRollMinus01_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANumberRollMinus01_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "ReceiveTick");

	Params::NumberRollMinus01_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.PushNumberRoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TargetNumber                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANumberRollMinus01_BP_C::PushNumberRoll(int32 Param_TargetNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "PushNumberRoll");

	Params::NumberRollMinus01_BP_C_PushNumberRoll Parms{};

	Parms.Param_TargetNumber = Param_TargetNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetLit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANumberRollMinus01_BP_C::SetLit(bool Lit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "SetLit");

	Params::NumberRollMinus01_BP_C_SetLit Parms{};

	Parms.Lit = Lit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ChangeColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANumberRollMinus01_BP_C::SetColor(bool ChangeColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "SetColor");

	Params::NumberRollMinus01_BP_C_SetColor Parms{};

	Parms.ChangeColor = ChangeColor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NumberRoll-01_BP.NumberRoll-01_BP_C.ExecuteUbergraph_NumberRoll-01_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANumberRollMinus01_BP_C::ExecuteUbergraph_NumberRollMinus01_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NumberRoll-01_BP_C", "ExecuteUbergraph_NumberRoll-01_BP");

	Params::NumberRollMinus01_BP_C_ExecuteUbergraph_NumberRollMinus01_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
