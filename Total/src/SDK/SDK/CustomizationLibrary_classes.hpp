#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizationLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CustomizationLibrary.CustomizationLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UCustomizationLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void UpdateSkinAlbedo(class USkeletalMeshComponent* Head, TArray<class USkeletalMeshComponent*>& OtherBodyParts, class UObject* __WorldContext);
	static void AssignCustomAnimBPOrSetMasterPose(class USkeletalMeshComponent*& Component, class USkeletalMesh* Mesh, bool MasterPoseFallback, class UObject* __WorldContext);
	static struct FEventReply HandleGamepadCharacterRotationInput(const struct FAnalogInputEvent& Analog_Input, class UObject* __WorldContext);

	void GetClosestMenuCharacter(const struct FVector& ActorLocation, class UObject* __WorldContext, class AMenuCharacter_C** MenuCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomizationLibrary_C">();
	}
	static class UCustomizationLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizationLibrary_C>();
	}
};
static_assert(alignof(UCustomizationLibrary_C) == 0x000008, "Wrong alignment on UCustomizationLibrary_C");
static_assert(sizeof(UCustomizationLibrary_C) == 0x000028, "Wrong size on UCustomizationLibrary_C");

}

