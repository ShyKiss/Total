#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CountdownConfirmCancelPopup

#include "Basic.hpp"

#include "CountdownConfirmCancelPopup_classes.hpp"
#include "CountdownConfirmCancelPopup_parameters.hpp"


namespace SDK
{

// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.ExecuteUbergraph_CountdownConfirmCancelPopup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownConfirmCancelPopup_C::ExecuteUbergraph_CountdownConfirmCancelPopup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "ExecuteUbergraph_CountdownConfirmCancelPopup");

	Params::CountdownConfirmCancelPopup_C_ExecuteUbergraph_CountdownConfirmCancelPopup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownConfirmCancelPopup_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "Tick");

	Params::CountdownConfirmCancelPopup_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.StartCountdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownConfirmCancelPopup_C::StartCountdown(int32 Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "StartCountdown");

	Params::CountdownConfirmCancelPopup_C_StartCountdown Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.OnCountdownEnds
// (Public, BlueprintCallable, BlueprintEvent)

void UCountdownConfirmCancelPopup_C::OnCountdownEnds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "OnCountdownEnds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Update Countdown Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Countdown                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCountdownConfirmCancelPopup_C::Update_Countdown_Text(int32 Countdown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "Update Countdown Text");

	Params::CountdownConfirmCancelPopup_C_Update_Countdown_Text Parms{};

	Parms.Countdown = Countdown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCountdownConfirmCancelPopup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CountdownConfirmCancelPopup.CountdownConfirmCancelPopup_C.Event_InitializePopup
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             TitleText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             MainText                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             ConfirmText                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             CancelText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCountdownConfirmCancelPopup_C::Event_InitializePopup(const class FText& TitleText, const class FText& MainText, const class FText& ConfirmText, const class FText& CancelText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CountdownConfirmCancelPopup_C", "Event_InitializePopup");

	Params::CountdownConfirmCancelPopup_C_Event_InitializePopup Parms{};

	Parms.TitleText = std::move(TitleText);
	Parms.MainText = std::move(MainText);
	Parms.ConfirmText = std::move(ConfirmText);
	Parms.CancelText = std::move(CancelText);

	UObject::ProcessEvent(Func, &Parms);
}

}
