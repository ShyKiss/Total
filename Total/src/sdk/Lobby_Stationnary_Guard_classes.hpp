#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Stationnary_Guard

#include "Basic.hpp"

#include "Lobby_StationnaryCharacterBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lobby_Stationnary_Guard.Lobby_Stationnary_Guard_C
// 0x0000 (0x02C0 - 0x02C0)
class ALobby_Stationnary_Guard_C final : public ALobby_StationnaryCharacterBase_C
{
public:
	void GetFacePoseAsset(class UPoseAsset** PoseAsset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_Stationnary_Guard_C">();
	}
	static class ALobby_Stationnary_Guard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobby_Stationnary_Guard_C>();
	}
};
static_assert(alignof(ALobby_Stationnary_Guard_C) == 0x000008, "Wrong alignment on ALobby_Stationnary_Guard_C");
static_assert(sizeof(ALobby_Stationnary_Guard_C) == 0x0002C0, "Wrong size on ALobby_Stationnary_Guard_C");

}
