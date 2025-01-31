#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBFeatureSwitchActorBase

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBFeatureSwitchActorBase.RBFeatureSwitchActorBase_C
// 0x0008 (0x0238 - 0x0230)
class ARBFeatureSwitchActorBase_C : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBFeatureSwitchActorBase_C">();
	}
	static class ARBFeatureSwitchActorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBFeatureSwitchActorBase_C>();
	}
};
static_assert(alignof(ARBFeatureSwitchActorBase_C) == 0x000008, "Wrong alignment on ARBFeatureSwitchActorBase_C");
static_assert(sizeof(ARBFeatureSwitchActorBase_C) == 0x000238, "Wrong size on ARBFeatureSwitchActorBase_C");
static_assert(offsetof(ARBFeatureSwitchActorBase_C, DefaultSceneRoot) == 0x000230, "Member 'ARBFeatureSwitchActorBase_C::DefaultSceneRoot' has a wrong offset!");

}

