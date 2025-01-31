#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpdateEsopBatteryNotify

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UpdateEsopBatteryNotify.UpdateEsopBatteryNotify_C
// 0x0000 (0x0038 - 0x0038)
class UUpdateEsopBatteryNotify_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;
	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UpdateEsopBatteryNotify_C">();
	}
	static class UUpdateEsopBatteryNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpdateEsopBatteryNotify_C>();
	}
};
static_assert(alignof(UUpdateEsopBatteryNotify_C) == 0x000008, "Wrong alignment on UUpdateEsopBatteryNotify_C");
static_assert(sizeof(UUpdateEsopBatteryNotify_C) == 0x000038, "Wrong size on UUpdateEsopBatteryNotify_C");

}

