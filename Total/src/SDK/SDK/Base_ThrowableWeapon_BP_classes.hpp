#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Base_ThrowableWeapon_BP

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Base_ThrowableWeapon_BP.Base_ThrowableWeapon_BP_C
// 0x0000 (0x0C90 - 0x0C90)
class ABase_ThrowableWeapon_BP_C : public ARBThrowableWeapon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Base_ThrowableWeapon_BP_C">();
	}
	static class ABase_ThrowableWeapon_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABase_ThrowableWeapon_BP_C>();
	}
};
static_assert(alignof(ABase_ThrowableWeapon_BP_C) == 0x000010, "Wrong alignment on ABase_ThrowableWeapon_BP_C");
static_assert(sizeof(ABase_ThrowableWeapon_BP_C) == 0x000C90, "Wrong size on ABase_ThrowableWeapon_BP_C");

}

