#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HudBarElement_Animated

#include "Basic.hpp"

#include "HudBarElement_Animated_classes.hpp"
#include "HudBarElement_Animated_parameters.hpp"


namespace SDK
{

// Function HudBarElement_Animated.HudBarElement_Animated_C.TweenCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHudBarElement_Animated_C::TweenCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "TweenCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.BleedoutCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHudBarElement_Animated_C::BleedoutCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "BleedoutCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.ExecuteUbergraph_HudBarElement_Animated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudBarElement_Animated_C::ExecuteUbergraph_HudBarElement_Animated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "ExecuteUbergraph_HudBarElement_Animated");

	Params::HudBarElement_Animated_C_ExecuteUbergraph_HudBarElement_Animated Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.StartTween
// (BlueprintCallable, BlueprintEvent)

void UHudBarElement_Animated_C::StartTween()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "StartTween");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudBarElement_Animated_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "Tick");

	Params::HudBarElement_Animated_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHudBarElement_Animated_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudBarElement_Animated_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "PreConstruct");

	Params::HudBarElement_Animated_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.Setup Tints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Tint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     BgdTint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     GlowTint                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudBarElement_Animated_C::Setup_Tints(const struct FLinearColor& Tint, const struct FLinearColor& BgdTint, const struct FLinearColor& GlowTint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "Setup Tints");

	Params::HudBarElement_Animated_C_Setup_Tints Parms{};

	Parms.Tint = std::move(Tint);
	Parms.BgdTint = std::move(BgdTint);
	Parms.GlowTint = std::move(GlowTint);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.SetupNewTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsStartBracket                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsFinishBracket                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudBarElement_Animated_C::SetupNewTween(float NewValue, bool IsStartBracket, bool IsFinishBracket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "SetupNewTween");

	Params::HudBarElement_Animated_C_SetupNewTween Parms{};

	Parms.NewValue = NewValue;
	Parms.IsStartBracket = IsStartBracket;
	Parms.IsFinishBracket = IsFinishBracket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.UpdateTween
// (Public, BlueprintCallable, BlueprintEvent)

void UHudBarElement_Animated_C::UpdateTween()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "UpdateTween");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.SetEntireBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Fill                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHudBarElement_Animated_C::SetEntireBar(bool Fill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "SetEntireBar");

	Params::HudBarElement_Animated_C_SetEntireBar Parms{};

	Parms.Fill = Fill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HudBarElement_Animated.HudBarElement_Animated_C.ForceValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHudBarElement_Animated_C::ForceValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HudBarElement_Animated_C", "ForceValue");

	Params::HudBarElement_Animated_C_ForceValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}
