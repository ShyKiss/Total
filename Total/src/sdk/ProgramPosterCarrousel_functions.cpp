#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgramPosterCarrousel

#include "Basic.hpp"

#include "ProgramPosterCarrousel_classes.hpp"
#include "ProgramPosterCarrousel_parameters.hpp"


namespace SDK
{

// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.UpdateScrollboxBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUsingGamePad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgramPosterCarrousel_C::UpdateScrollboxBehavior(bool IsUsingGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "UpdateScrollboxBehavior");

	Params::ProgramPosterCarrousel_C_UpdateScrollboxBehavior Parms{};

	Parms.IsUsingGamePad = IsUsingGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetRightCycleVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UProgramPosterCarrousel_C::GetRightCycleVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "GetRightCycleVisibility");

	Params::ProgramPosterCarrousel_C_GetRightCycleVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLeftCycleVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UProgramPosterCarrousel_C::GetLeftCycleVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "GetLeftCycleVisibility");

	Params::ProgramPosterCarrousel_C_GetLeftCycleVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetLastHoveredPoster
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgramPosterCarrouselEntry_C*   OutLastHoveredPoster                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::GetLastHoveredPoster(class UProgramPosterCarrouselEntry_C** OutLastHoveredPoster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "GetLastHoveredPoster");

	Params::ProgramPosterCarrousel_C_GetLastHoveredPoster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutLastHoveredPoster != nullptr)
		*OutLastHoveredPoster = Parms.OutLastHoveredPoster;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UProgramPosterCarrousel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "OnFocusReceived");

	Params::ProgramPosterCarrousel_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetCurrentlySelectedPoster
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgramPosterCarrouselEntry_C*   SelectedPoster                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::GetCurrentlySelectedPoster(class UProgramPosterCarrouselEntry_C** SelectedPoster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "GetCurrentlySelectedPoster");

	Params::ProgramPosterCarrousel_C_GetCurrentlySelectedPoster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedPoster != nullptr)
		*SelectedPoster = Parms.SelectedPoster;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleLeftCycle
// (Public, BlueprintCallable, BlueprintEvent)

void UProgramPosterCarrousel_C::HandleLeftCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "HandleLeftCycle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandleRightCycle
// (Public, BlueprintCallable, BlueprintEvent)

void UProgramPosterCarrousel_C::HandleRightCycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "HandleRightCycle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetFirstAvailablePoster
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgramPosterCarrouselEntry_C*   Poster                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::GetFirstAvailablePoster(class UProgramPosterCarrouselEntry_C** Poster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "GetFirstAvailablePoster");

	Params::ProgramPosterCarrousel_C_GetFirstAvailablePoster Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Poster != nullptr)
		*Poster = Parms.Poster;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.GetPosterForId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgramPosterCarrouselEntry_C*   Poster                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::GetPosterForId(class FName ProgramId, class UProgramPosterCarrouselEntry_C** Poster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "GetPosterForId");

	Params::ProgramPosterCarrousel_C_GetPosterForId Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);

	if (Poster != nullptr)
		*Poster = Parms.Poster;
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ClearDelegates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UProgramPosterCarrousel_C::ClearDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "ClearDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::HandlePosterUnhover(class FName ProgramId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "HandlePosterUnhover");

	Params::ProgramPosterCarrousel_C_HandlePosterUnhover Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::HandlePosterHover(class FName ProgramId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "HandlePosterHover");

	Params::ProgramPosterCarrousel_C_HandlePosterHover Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.HandlePosterClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::HandlePosterClick(class FName ProgramId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "HandlePosterClick");

	Params::ProgramPosterCarrousel_C_HandlePosterClick Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMatchOwner                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgramPosterCarrousel_C::Refresh(bool IsMatchOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "Refresh");

	Params::ProgramPosterCarrousel_C_Refresh Parms{};

	Parms.IsMatchOwner = IsMatchOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UProgramPosterCarrousel_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgramPosterCarrousel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "PreConstruct");

	Params::ProgramPosterCarrousel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgramPosterCarrousel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UProgramPosterCarrousel_C::BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "BndEvt__TrialPosterCarrousel_V2_LeftCycle_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UProgramPosterCarrousel_C::BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "BndEvt__TrialPosterCarrousel_V2_RightCycle_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.Event_InputSourceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsGamepad                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgramPosterCarrousel_C::Event_InputSourceChanged(bool bIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "Event_InputSourceChanged");

	Params::ProgramPosterCarrousel_C_Event_InputSourceChanged Parms{};

	Parms.bIsGamepad = bIsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.ExecuteUbergraph_ProgramPosterCarrousel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::ExecuteUbergraph_ProgramPosterCarrousel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "ExecuteUbergraph_ProgramPosterCarrousel");

	Params::ProgramPosterCarrousel_C_ExecuteUbergraph_ProgramPosterCarrousel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::OnPosterUnhovered__DelegateSignature(class FName ProgramId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "OnPosterUnhovered__DelegateSignature");

	Params::ProgramPosterCarrousel_C_OnPosterUnhovered__DelegateSignature Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::OnPosterHovered__DelegateSignature(class FName ProgramId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "OnPosterHovered__DelegateSignature");

	Params::ProgramPosterCarrousel_C_OnPosterHovered__DelegateSignature Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramPosterCarrousel.ProgramPosterCarrousel_C.OnPosterClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ProgramId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramPosterCarrousel_C::OnPosterClicked__DelegateSignature(class FName ProgramId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramPosterCarrousel_C", "OnPosterClicked__DelegateSignature");

	Params::ProgramPosterCarrousel_C_OnPosterClicked__DelegateSignature Parms{};

	Parms.ProgramId = ProgramId;

	UObject::ProcessEvent(Func, &Parms);
}

}
