#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizationCategories_V2

#include "Basic.hpp"

#include "CustomizationCategories_V2_classes.hpp"
#include "CustomizationCategories_V2_parameters.hpp"


namespace SDK
{

// Function CustomizationCategories_V2.CustomizationCategories_V2_C.UpdateNewStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomizationMenuCategory              Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::UpdateNewStatus(ECustomizationMenuCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "UpdateNewStatus");

	Params::CustomizationCategories_V2_C_UpdateNewStatus Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryCycled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationCategoryWidget_V2_C*CategoryButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::OnCategoryCycled(class UCustomizationCategoryWidget_V2_C* CategoryButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "OnCategoryCycled");

	Params::CustomizationCategories_V2_C_OnCategoryCycled Parms{};

	Parms.CategoryButton = CategoryButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.OnCategoryClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationCategoryWidget_V2_C*buttonClicked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::OnCategoryClicked(class UCustomizationCategoryWidget_V2_C* buttonClicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "OnCategoryClicked");

	Params::CustomizationCategories_V2_C_OnCategoryClicked Parms{};

	Parms.buttonClicked = buttonClicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetButtonFromCategory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECustomizationMenuCategory              Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCustomizationCategoryWidget_V2_C*Button                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::GetButtonFromCategory(ECustomizationMenuCategory Category, class UCustomizationCategoryWidget_V2_C** Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "GetButtonFromCategory");

	Params::CustomizationCategories_V2_C_GetButtonFromCategory Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);

	if (Button != nullptr)
		*Button = Parms.Button;
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.GetCurrentCategoryList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<ECustomizationMenuCategory>      CategoryList                                           (Parm, OutParm)

void UCustomizationCategories_V2_C::GetCurrentCategoryList(TArray<ECustomizationMenuCategory>* CategoryList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "GetCurrentCategoryList");

	Params::CustomizationCategories_V2_C_GetCurrentCategoryList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryList != nullptr)
		*CategoryList = std::move(Parms.CategoryList);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsTutorial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EMetaNPCType                            ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsCustomizingFemale                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationCategories_V2_C::Init(bool Param_IsTutorial, EMetaNPCType ShopType, bool Param_IsCustomizingFemale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "Init");

	Params::CustomizationCategories_V2_C_Init Parms{};

	Parms.Param_IsTutorial = Param_IsTutorial;
	Parms.ShopType = ShopType;
	Parms.Param_IsCustomizingFemale = Param_IsCustomizingFemale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.SelectCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCustomizationCategoryWidget_V2_C*buttonClicked                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::SelectCategory(class UCustomizationCategoryWidget_V2_C* buttonClicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "SelectCategory");

	Params::CustomizationCategories_V2_C_SelectCategory Parms{};

	Parms.buttonClicked = buttonClicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.CreateCategoryButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsTutorial                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationCategories_V2_C::CreateCategoryButtons(bool Param_IsTutorial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "CreateCategoryButtons");

	Params::CustomizationCategories_V2_C_CreateCategoryButtons Parms{};

	Parms.Param_IsTutorial = Param_IsTutorial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCustomizationCategories_V2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCustomizationCategories_V2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "PreConstruct");

	Params::CustomizationCategories_V2_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomizationCategories_V2_C::BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "BndEvt__CustomizationCategories_V2_CycleLeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCustomizationCategories_V2_C::BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "BndEvt__CustomizationCategories_V2_CycleRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.DisplayCategories
// (BlueprintCallable, BlueprintEvent)

void UCustomizationCategories_V2_C::DisplayCategories()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "DisplayCategories");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.ExecuteUbergraph_CustomizationCategories_V2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::ExecuteUbergraph_CustomizationCategories_V2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "ExecuteUbergraph_CustomizationCategories_V2");

	Params::CustomizationCategories_V2_C_ExecuteUbergraph_CustomizationCategories_V2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CustomizationCategories_V2.CustomizationCategories_V2_C.EventOnCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECustomizationMenuCategory              CustoCategory                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCustomizationCategories_V2_C::EventOnCategoryClicked__DelegateSignature(ECustomizationMenuCategory CustoCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomizationCategories_V2_C", "EventOnCategoryClicked__DelegateSignature");

	Params::CustomizationCategories_V2_C_EventOnCategoryClicked__DelegateSignature Parms{};

	Parms.CustoCategory = CustoCategory;

	UObject::ProcessEvent(Func, &Parms);
}

}
