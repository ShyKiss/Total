#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyCell_NamePlate

#include "Basic.hpp"

#include "LobbyCell_NamePlate_classes.hpp"
#include "LobbyCell_NamePlate_parameters.hpp"


namespace SDK
{

// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.CreateDynMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyCell_NamePlate_C::CreateDynMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "CreateDynMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         PrintTexture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyCell_NamePlate_C::SetTexture(class UTexture* PrintTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "SetTexture");

	Params::LobbyCell_NamePlate_C_SetTexture Parms{};

	Parms.PrintTexture = PrintTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.UpdateNamePlate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ALobbyCell_NamePlate_C::UpdateNamePlate(const class FText& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "UpdateNamePlate");

	Params::LobbyCell_NamePlate_C_UpdateNamePlate Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyCell_NamePlate_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.RollTimeline__FinishedFunc
// (BlueprintEvent)

void ALobbyCell_NamePlate_C::RollTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "RollTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.RollTimeline__UpdateFunc
// (BlueprintEvent)

void ALobbyCell_NamePlate_C::RollTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "RollTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.RollTimeline__ChangeName__EventFunc
// (BlueprintEvent)

void ALobbyCell_NamePlate_C::RollTimeline__ChangeName__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "RollTimeline__ChangeName__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.Roll
// (BlueprintCallable, BlueprintEvent)

void ALobbyCell_NamePlate_C::Roll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "Roll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.Event_AssignToPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBLobbyPlayerState*              RBLobbyPlayerState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyCell_NamePlate_C::Event_AssignToPlayer(class ARBLobbyPlayerState* RBLobbyPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "Event_AssignToPlayer");

	Params::LobbyCell_NamePlate_C_Event_AssignToPlayer Parms{};

	Parms.RBLobbyPlayerState = RBLobbyPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.Event_UnassignedFromPlayer
// (Event, Public, BlueprintEvent)

void ALobbyCell_NamePlate_C::Event_UnassignedFromPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "Event_UnassignedFromPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.RedrawText
// (BlueprintCallable, BlueprintEvent)

void ALobbyCell_NamePlate_C::RedrawText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "RedrawText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.DrawRenderTarget
// (BlueprintCallable, BlueprintEvent)

void ALobbyCell_NamePlate_C::DrawRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "DrawRenderTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.DrawText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             PlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ALobbyCell_NamePlate_C::DrawText(const class FText& PlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "DrawText");

	Params::LobbyCell_NamePlate_C_DrawText Parms{};

	Parms.PlayerName = std::move(PlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyCell_NamePlate.LobbyCell_NamePlate_C.ExecuteUbergraph_LobbyCell_NamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobbyCell_NamePlate_C::ExecuteUbergraph_LobbyCell_NamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyCell_NamePlate_C", "ExecuteUbergraph_LobbyCell_NamePlate");

	Params::LobbyCell_NamePlate_C_ExecuteUbergraph_LobbyCell_NamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
