#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingFluorescentMinus02

#include "Basic.hpp"

#include "CeilingFluorescentLightBaseMinus01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingFluorescent-02.CeilingFluorescent-02_C
// 0x0000 (0x07C0 - 0x07C0)
class ACeilingFluorescentMinus02_C final : public ACeilingFluorescentLightBaseMinus01_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingFluorescent-02_C">();
	}
	static class ACeilingFluorescentMinus02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingFluorescentMinus02_C>();
	}
};
static_assert(alignof(ACeilingFluorescentMinus02_C) == 0x000010, "Wrong alignment on ACeilingFluorescentMinus02_C");
static_assert(sizeof(ACeilingFluorescentMinus02_C) == 0x0007C0, "Wrong size on ACeilingFluorescentMinus02_C");

}
