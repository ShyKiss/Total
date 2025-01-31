#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgramTrialRewardWidget

#include "Basic.hpp"

#include "ProgramTrialRewardWidget_classes.hpp"
#include "ProgramTrialRewardWidget_parameters.hpp"


namespace SDK
{

// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.UpdateRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerCustomizationRarity              Rarity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramTrialRewardWidget_C::UpdateRarity(EPlayerCustomizationRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "UpdateRarity");

	Params::ProgramTrialRewardWidget_C_UpdateRarity Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.MergeWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardUIData                    RewardUIData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UProgramTrialRewardWidget_C::MergeWith(const struct FRewardUIData& RewardUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "MergeWith");

	Params::ProgramTrialRewardWidget_C_MergeWith Parms{};

	Parms.RewardUIData = std::move(RewardUIData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.CanMergeWith
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardUIData                    RewardUIData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    bCanMergeWith                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgramTrialRewardWidget_C::CanMergeWith(const struct FRewardUIData& RewardUIData, bool* bCanMergeWith)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "CanMergeWith");

	Params::ProgramTrialRewardWidget_C_CanMergeWith Parms{};

	Parms.RewardUIData = std::move(RewardUIData);

	UObject::ProcessEvent(Func, &Parms);

	if (bCanMergeWith != nullptr)
		*bCanMergeWith = Parms.bCanMergeWith;
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.InitFromRewardUIData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAcquired_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPerfect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRewardUIData                    RewardUIData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UProgramTrialRewardWidget_C::InitFromRewardUIData(bool bAcquired_0, bool bPerfect, const struct FRewardUIData& RewardUIData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "InitFromRewardUIData");

	Params::ProgramTrialRewardWidget_C_InitFromRewardUIData Parms{};

	Parms.bAcquired_0 = bAcquired_0;
	Parms.bPerfect = bPerfect;
	Parms.RewardUIData = std::move(RewardUIData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PlayNewRewardAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UProgramTrialRewardWidget_C::PlayNewRewardAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "PlayNewRewardAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAcquired_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bPerfect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Amount_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       IconTexture_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      IconColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             ForcedText_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UProgramTrialRewardWidget_C::Init(bool bAcquired_0, bool bPerfect, int32 Amount_0, class UTexture2D* IconTexture_0, const struct FSlateColor& IconColor, const class FText& ForcedText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "Init");

	Params::ProgramTrialRewardWidget_C_Init Parms{};

	Parms.bAcquired_0 = bAcquired_0;
	Parms.bPerfect = bPerfect;
	Parms.Amount_0 = Amount_0;
	Parms.IconTexture_0 = IconTexture_0;
	Parms.IconColor = std::move(IconColor);
	Parms.ForcedText_0 = std::move(ForcedText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UProgramTrialRewardWidget_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.OnLoaded_A87C4866469F6493BA837AA40651E406
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramTrialRewardWidget_C::OnLoaded_A87C4866469F6493BA837AA40651E406(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "OnLoaded_A87C4866469F6493BA837AA40651E406");

	Params::ProgramTrialRewardWidget_C_OnLoaded_A87C4866469F6493BA837AA40651E406 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgramTrialRewardWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgramTrialRewardWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "PreConstruct");

	Params::ProgramTrialRewardWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.LoadThumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        ThumbnailSoftRef                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UProgramTrialRewardWidget_C::LoadThumbnail(TSoftObjectPtr<class UTexture2D> ThumbnailSoftRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "LoadThumbnail");

	Params::ProgramTrialRewardWidget_C_LoadThumbnail Parms{};

	Parms.ThumbnailSoftRef = ThumbnailSoftRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgramTrialRewardWidget.ProgramTrialRewardWidget_C.ExecuteUbergraph_ProgramTrialRewardWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgramTrialRewardWidget_C::ExecuteUbergraph_ProgramTrialRewardWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgramTrialRewardWidget_C", "ExecuteUbergraph_ProgramTrialRewardWidget");

	Params::ProgramTrialRewardWidget_C_ExecuteUbergraph_ProgramTrialRewardWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

