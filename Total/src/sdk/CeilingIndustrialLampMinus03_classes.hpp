#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingIndustrialLampMinus03

#include "Basic.hpp"

#include "CeilingBulbLightBaseMinus01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingIndustrialLamp-03.CeilingIndustrialLamp-03_C
// 0x0000 (0x07C0 - 0x07C0)
class ACeilingIndustrialLampMinus03_C final : public ACeilingBulbLightBaseMinus01_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingIndustrialLamp-03_C">();
	}
	static class ACeilingIndustrialLampMinus03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingIndustrialLampMinus03_C>();
	}
};
static_assert(alignof(ACeilingIndustrialLampMinus03_C) == 0x000010, "Wrong alignment on ACeilingIndustrialLampMinus03_C");
static_assert(sizeof(ACeilingIndustrialLampMinus03_C) == 0x0007C0, "Wrong size on ACeilingIndustrialLampMinus03_C");

}
