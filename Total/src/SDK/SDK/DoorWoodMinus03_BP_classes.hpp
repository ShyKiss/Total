#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorWoodMinus03_BP

#include "Basic.hpp"

#include "Destructible_DoorBase_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DoorWood-03_BP.DoorWood-03_BP_C
// 0x0000 (0x1120 - 0x1120)
class ADoorWoodMinus03_BP_C final : public ADestructible_DoorBase_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DoorWood-03_BP_C">();
	}
	static class ADoorWoodMinus03_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADoorWoodMinus03_BP_C>();
	}
};
static_assert(alignof(ADoorWoodMinus03_BP_C) == 0x000010, "Wrong alignment on ADoorWoodMinus03_BP_C");
static_assert(sizeof(ADoorWoodMinus03_BP_C) == 0x001120, "Wrong size on ADoorWoodMinus03_BP_C");

}

