#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LockPick_Skm_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.ExecuteUbergraph_LockPick_Skm_AnimBP
// 0x0050 (0x0050 - 0x0000)
struct LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class ARBPickup* Item, class ARBPlayer* Player)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPickup*                              K2Node_CustomEvent_item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              K2Node_CustomEvent_player;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPickup*                              K2Node_DynamicCast_AsRB_Pickup;                    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer*                              CallFunc_BP_GetPlayerOwner_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP) == 0x000008, "Wrong alignment on LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP");
static_assert(sizeof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP) == 0x000050, "Wrong size on LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, EntryPoint) == 0x000000, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, K2Node_Event_DeltaTimeX) == 0x000018, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, CallFunc_IsValid_ReturnValue) == 0x00001C, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000020, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, K2Node_CustomEvent_item) == 0x000028, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::K2Node_CustomEvent_item' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, K2Node_CustomEvent_player) == 0x000030, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::K2Node_CustomEvent_player' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, K2Node_DynamicCast_AsRB_Pickup) == 0x000038, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::K2Node_DynamicCast_AsRB_Pickup' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP, CallFunc_BP_GetPlayerOwner_ReturnValue) == 0x000048, "Member 'LockPick_Skm_AnimBP_C_ExecuteUbergraph_LockPick_Skm_AnimBP::CallFunc_BP_GetPlayerOwner_ReturnValue' has a wrong offset!");

// Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.OnPlayerOwnerChanged
// 0x0010 (0x0010 - 0x0000)
struct LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged final
{
public:
	class ARBPickup*                              Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged) == 0x000008, "Wrong alignment on LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged");
static_assert(sizeof(LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged) == 0x000010, "Wrong size on LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged");
static_assert(offsetof(LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged, Item) == 0x000000, "Member 'LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged::Item' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged, Player) == 0x000008, "Member 'LockPick_Skm_AnimBP_C_OnPlayerOwnerChanged::Player' has a wrong offset!");

// Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'LockPick_Skm_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.UpdatePlayerAnimInstance
// 0x0028 (0x0028 - 0x0000)
struct LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance final
{
public:
	class ARBPlayer*                              PlayerOwner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBAnimInstancePlayer*                  K2Node_DynamicCast_AsRB_Anim_Instance_Player;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance) == 0x000008, "Wrong alignment on LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance");
static_assert(sizeof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance) == 0x000028, "Wrong size on LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance");
static_assert(offsetof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance, PlayerOwner) == 0x000000, "Member 'LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance::PlayerOwner' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance, CallFunc_GetAnimInstance_ReturnValue) == 0x000010, "Member 'LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance, K2Node_DynamicCast_AsRB_Anim_Instance_Player) == 0x000018, "Member 'LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance::K2Node_DynamicCast_AsRB_Anim_Instance_Player' has a wrong offset!");
static_assert(offsetof(LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'LockPick_Skm_AnimBP_C_UpdatePlayerAnimInstance::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LockPick_Skm_AnimBP.LockPick_Skm_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct LockPick_Skm_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(LockPick_Skm_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on LockPick_Skm_AnimBP_C_AnimGraph");
static_assert(sizeof(LockPick_Skm_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on LockPick_Skm_AnimBP_C_AnimGraph");
static_assert(offsetof(LockPick_Skm_AnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'LockPick_Skm_AnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

}

