#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBStationnaryActor

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBStationnaryActor.RBStationnaryActor_C
// 0x0010 (0x0258 - 0x0248)
class ARBStationnaryActor_C : public AActor
{
public:
	class URBPropOptimizerComponent*              RBPropOptimizer;                                   // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBStationnaryActor_C">();
	}
	static class ARBStationnaryActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBStationnaryActor_C>();
	}
};
static_assert(alignof(ARBStationnaryActor_C) == 0x000008, "Wrong alignment on ARBStationnaryActor_C");
static_assert(sizeof(ARBStationnaryActor_C) == 0x000258, "Wrong size on ARBStationnaryActor_C");
static_assert(offsetof(ARBStationnaryActor_C, RBPropOptimizer) == 0x000248, "Member 'ARBStationnaryActor_C::RBPropOptimizer' has a wrong offset!");
static_assert(offsetof(ARBStationnaryActor_C, DefaultSceneRoot) == 0x000250, "Member 'ARBStationnaryActor_C::DefaultSceneRoot' has a wrong offset!");

}
