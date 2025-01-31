#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TG_MiddleMinus01_Seq

#include "Basic.hpp"

#include "TG_MiddleMinus01_Seq_classes.hpp"
#include "TG_MiddleMinus01_Seq_parameters.hpp"


namespace SDK
{

// Function TG_Middle-01_Seq.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEmitter*                         SmokeCorridor400_PS                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void TG_MiddleMinus01_Seq::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AEmitter* SmokeCorridor400_PS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.SmokeCorridor400_PS = SmokeCorridor400_PS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TG_Middle-01_Seq.SequenceDirector_C.SmokeCorridor400_PS_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEmitter*                         SmokeCorridor400_PS                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void TG_MiddleMinus01_Seq::USequenceDirector_C::SmokeCorridor400_PS_Event_0(class AEmitter* SmokeCorridor400_PS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SmokeCorridor400_PS_Event_0");

	Params::SequenceDirector_C_SmokeCorridor400_PS_Event_0 Parms{};

	Parms.SmokeCorridor400_PS = SmokeCorridor400_PS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TG_Middle-01_Seq.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void TG_MiddleMinus01_Seq::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

