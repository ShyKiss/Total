#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBSkeletalBodySetupFunctions

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBSkeletalBodySetupFunctions.RBSkeletalBodySetupFunctions_C
// 0x0000 (0x0028 - 0x0028)
class URBSkeletalBodySetupFunctions_C final : public UBlueprintFunctionLibrary
{
public:
	static void InitializeSkeletalBodySetup3(TArray<class USkeletalMeshComponent*>& Skelmeshes, class USkeletalMeshComponent* MainMesh, class UClass* FullBodyDefinition, class UClass* HeadOverride, class UClass* HairOverride, class UClass* UpperBodyOverride, class UClass* LowerBodyOverride, class UClass* LegsOverride, class UClass* ArmsOverride, bool bHasHair, class UObject* __WorldContext);
	static void ApplyDefinitionOverrides3(bool _bHasHair, TArray<class USkeletalMeshComponent*>& _SkelMeshes, class UClass* Head, class UClass* Hair, class UClass* Upper, class UClass* Lower, class UClass* Legs, class UClass* Arms, class UObject* __WorldContext);
	static void Apply_Full_Body_Definition_3(TArray<class USkeletalMeshComponent*>& Skelmeshes, class UClass* FullBodyDefinition, class UObject* __WorldContext);
	static void ApplyDefinitionOverrides2(bool _bHasHair, TArray<class USkeletalMeshComponent*>& _SkelMeshes, class URBDeadBodyConfig* Head, class URBDeadBodyConfig* Hair, class URBDeadBodyConfig* Upper, class URBDeadBodyConfig* Lower, class URBDeadBodyConfig* Legs, class URBDeadBodyConfig* Arms, class UObject* __WorldContext);
	static void ApplyBodyPart2(class USkeletalMeshComponent* SkelMesh, const struct FDeadBodyConfigPart& Definition, class UObject* __WorldContext);
	static void InitializeSkeletalBodySetup2(TArray<class USkeletalMeshComponent*>& Skelmeshes, class USkeletalMeshComponent* MainMesh, class URBDeadBodyConfig* FullBodyDefinition, class URBDeadBodyConfig* HeadOverride, class URBDeadBodyConfig* HairOverride, class URBDeadBodyConfig* UpperBodyOverride, class URBDeadBodyConfig* LowerBodyOverride, class URBDeadBodyConfig* LegsOverride, class URBDeadBodyConfig* ArmsOverride, bool bHasHair, class UObject* __WorldContext);
	static void ApplyFullBodyDefinition2(TArray<class USkeletalMeshComponent*>& Skelmeshes, class URBDeadBodyConfig* FullBodyDefinitionBase, class UObject* __WorldContext);
	static void ApplySkinTone(TArray<class USkeletalMeshComponent*>& Skelmeshes, class UObject* __WorldContext);
	static void GetSkelMeshBodyPart(const class FString& SearchString, TArray<class USkeletalMeshComponent*>& Skelmeshes, class UObject* __WorldContext, class USkeletalMeshComponent** SkelMeshComp);
	static void ClearMaterialOverrides(TArray<class USkeletalMeshComponent*>& Array, class UObject* __WorldContext);
	static void SetSafeMasterPose(TArray<class USkeletalMeshComponent*>& SkelMeshComps, class USkeletalMeshComponent* MasterSkelMeshComp, bool ForceUpdate, class UObject* __WorldContext);
	static void SetupCollisions(TArray<class USkeletalMeshComponent*>& SkelMeshComps, class UObject* __WorldContext);

	void ApplyAnimSequence(class USkeletalMeshComponent* MainMesh, const struct FSingleAnimationPlayData& AnimationData, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBSkeletalBodySetupFunctions_C">();
	}
	static class URBSkeletalBodySetupFunctions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URBSkeletalBodySetupFunctions_C>();
	}
};
static_assert(alignof(URBSkeletalBodySetupFunctions_C) == 0x000008, "Wrong alignment on URBSkeletalBodySetupFunctions_C");
static_assert(sizeof(URBSkeletalBodySetupFunctions_C) == 0x000028, "Wrong size on URBSkeletalBodySetupFunctions_C");

}
