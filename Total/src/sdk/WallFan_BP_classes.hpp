#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WallFan_BP

#include "Basic.hpp"

#include "RBAnimatedPropBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass wallFan_BP.wallFan_BP_C
// 0x0008 (0x0268 - 0x0260)
class AWallFan_BP_C final : public ARBAnimatedPropBase_C
{
public:
	class USkeletalMeshComponent*                 WallFanMinus01;                                    // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wallFan_BP_C">();
	}
	static class AWallFan_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWallFan_BP_C>();
	}
};
static_assert(alignof(AWallFan_BP_C) == 0x000008, "Wrong alignment on AWallFan_BP_C");
static_assert(sizeof(AWallFan_BP_C) == 0x000268, "Wrong size on AWallFan_BP_C");
static_assert(offsetof(AWallFan_BP_C, WallFanMinus01) == 0x000260, "Member 'AWallFan_BP_C::WallFanMinus01' has a wrong offset!");

}
