#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StaminaBar3

#include "Basic.hpp"

#include "StaminaBar3_classes.hpp"
#include "StaminaBar3_parameters.hpp"


namespace SDK
{

// Function StaminaBar3.StaminaBar3_C.ExecuteUbergraph_StaminaBar3
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::ExecuteUbergraph_StaminaBar3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "ExecuteUbergraph_StaminaBar3");

	Params::StaminaBar3_C_ExecuteUbergraph_StaminaBar3 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.OnMaxStaminaChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MaxStamina                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::OnMaxStaminaChanged(float MaxStamina)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "OnMaxStaminaChanged");

	Params::StaminaBar3_C_OnMaxStaminaChanged Parms{};

	Parms.MaxStamina = MaxStamina;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.OnStaminaChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewStamina                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExhausted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStaminaBar3_C::OnStaminaChanged(float NewStamina, bool bIsExhausted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "OnStaminaChanged");

	Params::StaminaBar3_C_OnStaminaChanged Parms{};

	Parms.NewStamina = NewStamina;
	Parms.bIsExhausted = bIsExhausted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStaminaBar3_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StaminaBar3.StaminaBar3_C.Event_OnWatchedPlayerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPlayer*                        OldPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBPlayer*                        NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::Event_OnWatchedPlayerChanged(class ARBPlayer* OldPlayer, class ARBPlayer* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "Event_OnWatchedPlayerChanged");

	Params::StaminaBar3_C_Event_OnWatchedPlayerChanged Parms{};

	Parms.OldPlayer = OldPlayer;
	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.Event_Hide
// (Event, Public, BlueprintEvent)

void UStaminaBar3_C::Event_Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "Event_Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StaminaBar3.StaminaBar3_C.Event_Show
// (Event, Public, BlueprintEvent)

void UStaminaBar3_C::Event_Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "Event_Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StaminaBar3.StaminaBar3_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStaminaBar3_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "PreConstruct");

	Params::StaminaBar3_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.HandleStaminaChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewStamina                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::HandleStaminaChanged(float NewStamina)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "HandleStaminaChanged");

	Params::StaminaBar3_C_HandleStaminaChanged Parms{};

	Parms.NewStamina = NewStamina;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.HandleMaxStaminaChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewMaxStamina                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::HandleMaxStaminaChanged(float NewMaxStamina)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "HandleMaxStaminaChanged");

	Params::StaminaBar3_C_HandleMaxStaminaChanged Parms{};

	Parms.NewMaxStamina = NewMaxStamina;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StaminaBar3.StaminaBar3_C.GetStaminaBoosterValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   StaminaBoosterValue                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::GetStaminaBoosterValue(float* StaminaBoosterValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "GetStaminaBoosterValue");

	Params::StaminaBar3_C_GetStaminaBoosterValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StaminaBoosterValue != nullptr)
		*StaminaBoosterValue = Parms.StaminaBoosterValue;
}


// Function StaminaBar3.StaminaBar3_C.GetMaxStamina
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARBPlayer*                        Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxStamina                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStaminaBar3_C::GetMaxStamina(class ARBPlayer* Player, float* MaxStamina)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "GetMaxStamina");

	Params::StaminaBar3_C_GetMaxStamina Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxStamina != nullptr)
		*MaxStamina = Parms.MaxStamina;
}


// Function StaminaBar3.StaminaBar3_C.ShouldShow
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UStaminaBar3_C::ShouldShow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StaminaBar3_C", "ShouldShow");

	Params::StaminaBar3_C_ShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
