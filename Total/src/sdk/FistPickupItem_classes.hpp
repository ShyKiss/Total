#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FistPickupItem

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FistPickupItem.FistPickupItem_C
// 0x0000 (0x0A10 - 0x0A10)
class AFistPickupItem_C final : public ARBPickup
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FistPickupItem_C">();
	}
	static class AFistPickupItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFistPickupItem_C>();
	}
};
static_assert(alignof(AFistPickupItem_C) == 0x000010, "Wrong alignment on AFistPickupItem_C");
static_assert(sizeof(AFistPickupItem_C) == 0x000A10, "Wrong size on AFistPickupItem_C");

}
