#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TaskNotificationsWidget

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TaskNotificationsWidget.TaskNotificationsWidget_C
// 0x0008 (0x0270 - 0x0268)
class UTaskNotificationsWidget_C final : public URBTaskNotificationsWidget
{
public:
	class UTaskProgressionHudWidget_C*            TaskProgressionHudWidget;                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Event_ShowTaskProgress(const struct FRBTaskHudProgressDisplayDetails& Progress);
	void Event_HideTaskProgress();
	void Event_Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TaskNotificationsWidget_C">();
	}
	static class UTaskNotificationsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTaskNotificationsWidget_C>();
	}
};
static_assert(alignof(UTaskNotificationsWidget_C) == 0x000008, "Wrong alignment on UTaskNotificationsWidget_C");
static_assert(sizeof(UTaskNotificationsWidget_C) == 0x000270, "Wrong size on UTaskNotificationsWidget_C");
static_assert(offsetof(UTaskNotificationsWidget_C, TaskProgressionHudWidget) == 0x000268, "Member 'UTaskNotificationsWidget_C::TaskProgressionHudWidget' has a wrong offset!");

}
