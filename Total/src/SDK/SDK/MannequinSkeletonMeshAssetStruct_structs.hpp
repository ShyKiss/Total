#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MannequinSkeletonMeshAssetStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct MannequinSkeletonMeshAssetStruct.MannequinSkeletonMeshAssetStruct
// 0x0058 (0x0058 - 0x0000)
struct FMannequinSkeletonMeshAssetStruct final
{
public:
	class USkeletalMesh*                          SkeletalMesh_13_BD5281B64ADA269F0A5CA48453A8C78B;  // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class UMaterialInstance*>   Materials_11_C1E140E64BCA01DA84984D93459042E8;     // 0x0008(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FMannequinSkeletonMeshAssetStruct) == 0x000008, "Wrong alignment on FMannequinSkeletonMeshAssetStruct");
static_assert(sizeof(FMannequinSkeletonMeshAssetStruct) == 0x000058, "Wrong size on FMannequinSkeletonMeshAssetStruct");
static_assert(offsetof(FMannequinSkeletonMeshAssetStruct, SkeletalMesh_13_BD5281B64ADA269F0A5CA48453A8C78B) == 0x000000, "Member 'FMannequinSkeletonMeshAssetStruct::SkeletalMesh_13_BD5281B64ADA269F0A5CA48453A8C78B' has a wrong offset!");
static_assert(offsetof(FMannequinSkeletonMeshAssetStruct, Materials_11_C1E140E64BCA01DA84984D93459042E8) == 0x000008, "Member 'FMannequinSkeletonMeshAssetStruct::Materials_11_C1E140E64BCA01DA84984D93459042E8' has a wrong offset!");

}

