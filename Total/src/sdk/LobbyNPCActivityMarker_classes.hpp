#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyNPCActivityMarker

#include "Basic.hpp"

#include "SleeperActivityMarker_Base_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LobbyNPCActivityMarker.LobbyNPCActivityMarker_C
// 0x0000 (0x0298 - 0x0298)
class ALobbyNPCActivityMarker_C final : public ASleeperActivityMarker_Base_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyNPCActivityMarker_C">();
	}
	static class ALobbyNPCActivityMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyNPCActivityMarker_C>();
	}
};
static_assert(alignof(ALobbyNPCActivityMarker_C) == 0x000008, "Wrong alignment on ALobbyNPCActivityMarker_C");
static_assert(sizeof(ALobbyNPCActivityMarker_C) == 0x000298, "Wrong size on ALobbyNPCActivityMarker_C");

}
