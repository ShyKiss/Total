#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkList

#include "Basic.hpp"

#include "PerkList_classes.hpp"
#include "PerkList_parameters.hpp"


namespace SDK
{

// Function PerkList.PerkList_C.RefreshDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowGrid                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkList_C::RefreshDisplay(bool ShowGrid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "RefreshDisplay");

	Params::PerkList_C_RefreshDisplay Parms{};

	Parms.ShowGrid = ShowGrid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.HandleGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkList_C::HandleGamepadFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "HandleGamepadFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkList.PerkList_C.HandleNavigationBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanExitMenu                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkList_C::HandleNavigationBack(bool* CanExitMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "HandleNavigationBack");

	Params::PerkList_C_HandleNavigationBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanExitMenu != nullptr)
		*CanExitMenu = Parms.CanExitMenu;
}


// Function PerkList.PerkList_C.CycleCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Left                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkList_C::CycleCategory(bool Left)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "CycleCategory");

	Params::PerkList_C_CycleCategory Parms{};

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.GamepadNav_HandleGridNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPerkList_C::GamepadNav_HandleGridNavigation(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "GamepadNav_HandleGridNavigation");

	Params::PerkList_C_GamepadNav_HandleGridNavigation Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PerkList.PerkList_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UPerkList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnFocusReceived");

	Params::PerkList_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PerkList.PerkList_C.OnPerkReleasedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuUpgradeItemInfo             ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UPerkList_C::OnPerkReleasedEvent(const struct FMenuUpgradeItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkReleasedEvent");

	Params::PerkList_C_OnPerkReleasedEvent Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnPerkPressedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMenuUpgradeItemInfo             ItemInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UPerkList_C::OnPerkPressedEvent(const struct FMenuUpgradeItemInfo& ItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkPressedEvent");

	Params::PerkList_C_OnPerkPressedEvent Parms{};

	Parms.ItemInfo = std::move(ItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnPerkClickedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkUpgradeButton_C*             Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnPerkClickedEvent(class UPerkUpgradeButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkClickedEvent");

	Params::PerkList_C_OnPerkClickedEvent Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnPerkUnhoveredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkUpgradeButton_C*             Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnPerkUnhoveredEvent(class UPerkUpgradeButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkUnhoveredEvent");

	Params::PerkList_C_OnPerkUnhoveredEvent Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnPerkHoveredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkUpgradeButton_C*             Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnPerkHoveredEvent(class UPerkUpgradeButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkHoveredEvent");

	Params::PerkList_C_OnPerkHoveredEvent Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.RefreshGrid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkList_C::RefreshGrid()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "RefreshGrid");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkList.PerkList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsLoadout_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EPerkCategory                           InitialCategory                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::Init(bool bIsLoadout_0, EPerkCategory InitialCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "Init");

	Params::PerkList_C_Init Parms{};

	Parms.bIsLoadout_0 = bIsLoadout_0;
	Parms.InitialCategory = InitialCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkCategory                           WantedCategory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::Setup(EPerkCategory WantedCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "Setup");

	Params::PerkList_C_Setup Parms{};

	Parms.WantedCategory = WantedCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "PreConstruct");

	Params::PerkList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.Event_InputSourceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsGamepad                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkList_C::Event_InputSourceChanged(bool bIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "Event_InputSourceChanged");

	Params::PerkList_C_Event_InputSourceChanged Parms{};

	Parms.bIsGamepad = bIsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerkList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkList.PerkList_C.OnInitDone
// (BlueprintCallable, BlueprintEvent)

void UPerkList_C::OnInitDone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnInitDone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkList.PerkList_C.OnPerkCategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkCategory                           Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnPerkCategoryClicked(EPerkCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkCategoryClicked");

	Params::PerkList_C_OnPerkCategoryClicked Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnUpgradeBuyAnimationEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPerkUpgradeButton_C*             PerkUpgradeButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnUpgradeBuyAnimationEnded(class UPerkUpgradeButton_C* PerkUpgradeButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnUpgradeBuyAnimationEnded");

	Params::PerkList_C_OnUpgradeBuyAnimationEnded Parms{};

	Parms.PerkUpgradeButton = PerkUpgradeButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.ExecuteUbergraph_PerkList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::ExecuteUbergraph_PerkList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "ExecuteUbergraph_PerkList");

	Params::PerkList_C_ExecuteUbergraph_PerkList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnPageChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CategoryEntered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkList_C::OnPageChanged__DelegateSignature(bool CategoryEntered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPageChanged__DelegateSignature");

	Params::PerkList_C_OnPageChanged__DelegateSignature Parms{};

	Parms.CategoryEntered = CategoryEntered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnPerkCategoryChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkCategory                           NewCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnPerkCategoryChanged__DelegateSignature(EPerkCategory NewCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnPerkCategoryChanged__DelegateSignature");

	Params::PerkList_C_OnPerkCategoryChanged__DelegateSignature Parms{};

	Parms.NewCategory = NewCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnUpgradeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnUpgradeClicked__DelegateSignature(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnUpgradeClicked__DelegateSignature");

	Params::PerkList_C_OnUpgradeClicked__DelegateSignature Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnUpgradeUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnUpgradeUnhovered__DelegateSignature(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnUpgradeUnhovered__DelegateSignature");

	Params::PerkList_C_OnUpgradeUnhovered__DelegateSignature Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkList.PerkList_C.OnUpgradeHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkList_C::OnUpgradeHovered__DelegateSignature(class FName ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkList_C", "OnUpgradeHovered__DelegateSignature");

	Params::PerkList_C_OnUpgradeHovered__DelegateSignature Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}

