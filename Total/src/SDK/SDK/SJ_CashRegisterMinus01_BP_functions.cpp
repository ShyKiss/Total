#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SJ_CashRegisterMinus01_BP

#include "Basic.hpp"

#include "SJ_CashRegisterMinus01_BP_classes.hpp"
#include "SJ_CashRegisterMinus01_BP_parameters.hpp"


namespace SDK
{

// Function SJ_CashRegister-01_BP.SJ_CashRegister-01_BP_C.DrawerTimeline__FinishedFunc
// (BlueprintEvent)

void ASJ_CashRegisterMinus01_BP_C::DrawerTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SJ_CashRegister-01_BP_C", "DrawerTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SJ_CashRegister-01_BP.SJ_CashRegister-01_BP_C.DrawerTimeline__UpdateFunc
// (BlueprintEvent)

void ASJ_CashRegisterMinus01_BP_C::DrawerTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SJ_CashRegister-01_BP_C", "DrawerTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SJ_CashRegister-01_BP.SJ_CashRegister-01_BP_C.Event_OnTriggered
// (Event, Public, BlueprintEvent)

void ASJ_CashRegisterMinus01_BP_C::Event_OnTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SJ_CashRegister-01_BP_C", "Event_OnTriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SJ_CashRegister-01_BP.SJ_CashRegister-01_BP_C.Event_OnUntriggered
// (Event, Public, BlueprintEvent)

void ASJ_CashRegisterMinus01_BP_C::Event_OnUntriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SJ_CashRegister-01_BP_C", "Event_OnUntriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SJ_CashRegister-01_BP.SJ_CashRegister-01_BP_C.Event_OnResetStage
// (Event, Public, BlueprintEvent)

void ASJ_CashRegisterMinus01_BP_C::Event_OnResetStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SJ_CashRegister-01_BP_C", "Event_OnResetStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SJ_CashRegister-01_BP.SJ_CashRegister-01_BP_C.ExecuteUbergraph_SJ_CashRegister-01_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASJ_CashRegisterMinus01_BP_C::ExecuteUbergraph_SJ_CashRegisterMinus01_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SJ_CashRegister-01_BP_C", "ExecuteUbergraph_SJ_CashRegister-01_BP");

	Params::SJ_CashRegisterMinus01_BP_C_ExecuteUbergraph_SJ_CashRegisterMinus01_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

