#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingIndustrialLampMinus04

#include "Basic.hpp"

#include "CeilingBulbLightBaseMinus01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingIndustrialLamp-04.CeilingIndustrialLamp-04_C
// 0x0000 (0x07C0 - 0x07C0)
class ACeilingIndustrialLampMinus04_C final : public ACeilingBulbLightBaseMinus01_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingIndustrialLamp-04_C">();
	}
	static class ACeilingIndustrialLampMinus04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingIndustrialLampMinus04_C>();
	}
};
static_assert(alignof(ACeilingIndustrialLampMinus04_C) == 0x000010, "Wrong alignment on ACeilingIndustrialLampMinus04_C");
static_assert(sizeof(ACeilingIndustrialLampMinus04_C) == 0x0007C0, "Wrong size on ACeilingIndustrialLampMinus04_C");

}
