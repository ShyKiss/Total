#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseFloor_BP

#include "Basic.hpp"

#include "MeshPopulate_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseFloor_BP.BaseFloor_BP_C
// 0x0000 (0x0430 - 0x0430)
class ABaseFloor_BP_C final : public AMeshPopulate_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseFloor_BP_C">();
	}
	static class ABaseFloor_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseFloor_BP_C>();
	}
};
static_assert(alignof(ABaseFloor_BP_C) == 0x000008, "Wrong alignment on ABaseFloor_BP_C");
static_assert(sizeof(ABaseFloor_BP_C) == 0x000430, "Wrong size on ABaseFloor_BP_C");

}
