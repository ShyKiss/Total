#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskNotificationsWidget

#include "Basic.hpp"

#include "TaskNotificationsWidget_classes.hpp"
#include "TaskNotificationsWidget_parameters.hpp"


namespace SDK
{

// Function TaskNotificationsWidget.TaskNotificationsWidget_C.Event_ShowTaskProgress
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRBTaskHudProgressDisplayDetails Progress                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTaskNotificationsWidget_C::Event_ShowTaskProgress(const struct FRBTaskHudProgressDisplayDetails& Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskNotificationsWidget_C", "Event_ShowTaskProgress");

	Params::TaskNotificationsWidget_C_Event_ShowTaskProgress Parms{};

	Parms.Progress = std::move(Progress);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TaskNotificationsWidget.TaskNotificationsWidget_C.Event_HideTaskProgress
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTaskNotificationsWidget_C::Event_HideTaskProgress()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskNotificationsWidget_C", "Event_HideTaskProgress");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TaskNotificationsWidget.TaskNotificationsWidget_C.Event_Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTaskNotificationsWidget_C::Event_Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TaskNotificationsWidget_C", "Event_Reset");

	UObject::ProcessEvent(Func, nullptr);
}

}

