#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MHS_Persistent

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MHS_Persistent.MHS_Persistent_C
// 0x0000 (0x0248 - 0x0248)
class AMHS_Persistent_C final : public ARBLevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MHS_Persistent_C">();
	}
	static class AMHS_Persistent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMHS_Persistent_C>();
	}
};
static_assert(alignof(AMHS_Persistent_C) == 0x000008, "Wrong alignment on AMHS_Persistent_C");
static_assert(sizeof(AMHS_Persistent_C) == 0x000248, "Wrong size on AMHS_Persistent_C");

}

