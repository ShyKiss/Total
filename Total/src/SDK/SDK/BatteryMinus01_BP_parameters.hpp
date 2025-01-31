#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BatteryMinus01_BP

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function Battery-01_BP.Battery-01_BP_C.PlayBurnedSFX
// 0x0048 (0x0048 - 0x0000)
struct BatteryMinus01_BP_C_PlayBurnedSFX final
{
public:
	class AActor*                                 SoundComponentOwner;                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      SoundComponent;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0010(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0020(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43[0x1];                                       // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BatteryMinus01_BP_C_PlayBurnedSFX) == 0x000008, "Wrong alignment on BatteryMinus01_BP_C_PlayBurnedSFX");
static_assert(sizeof(BatteryMinus01_BP_C_PlayBurnedSFX) == 0x000048, "Wrong size on BatteryMinus01_BP_C_PlayBurnedSFX");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, SoundComponentOwner) == 0x000000, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::SoundComponentOwner' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, SoundComponent) == 0x000008, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::SoundComponent' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, Temp_delegate_Variable) == 0x000010, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, Temp_struct_Variable) == 0x000020, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, CallFunc_GetAttachParentActor_ReturnValue) == 0x000030, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, CallFunc_IsValid_ReturnValue_1) == 0x000041, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, CallFunc_IsValid_ReturnValue_2) == 0x000042, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedSFX, CallFunc_PostAkEvent_ReturnValue) == 0x000044, "Member 'BatteryMinus01_BP_C_PlayBurnedSFX::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.PlayBurnedVFX
// 0x0001 (0x0001 - 0x0000)
struct BatteryMinus01_BP_C_PlayBurnedVFX final
{
public:
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BatteryMinus01_BP_C_PlayBurnedVFX) == 0x000001, "Wrong alignment on BatteryMinus01_BP_C_PlayBurnedVFX");
static_assert(sizeof(BatteryMinus01_BP_C_PlayBurnedVFX) == 0x000001, "Wrong size on BatteryMinus01_BP_C_PlayBurnedVFX");
static_assert(offsetof(BatteryMinus01_BP_C_PlayBurnedVFX, CallFunc_IsDedicatedServer_ReturnValue) == 0x000000, "Member 'BatteryMinus01_BP_C_PlayBurnedVFX::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.OnRep_bBurned
// 0x0001 (0x0001 - 0x0000)
struct BatteryMinus01_BP_C_OnRep_bBurned final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BatteryMinus01_BP_C_OnRep_bBurned) == 0x000001, "Wrong alignment on BatteryMinus01_BP_C_OnRep_bBurned");
static_assert(sizeof(BatteryMinus01_BP_C_OnRep_bBurned) == 0x000001, "Wrong size on BatteryMinus01_BP_C_OnRep_bBurned");
static_assert(offsetof(BatteryMinus01_BP_C_OnRep_bBurned, CallFunc_Not_PreBool_ReturnValue) == 0x000000, "Member 'BatteryMinus01_BP_C_OnRep_bBurned::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.SetBurned
// 0x0003 (0x0003 - 0x0000)
struct BatteryMinus01_BP_C_SetBurned final
{
public:
	bool                                          bNewBurnedState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BatteryMinus01_BP_C_SetBurned) == 0x000001, "Wrong alignment on BatteryMinus01_BP_C_SetBurned");
static_assert(sizeof(BatteryMinus01_BP_C_SetBurned) == 0x000003, "Wrong size on BatteryMinus01_BP_C_SetBurned");
static_assert(offsetof(BatteryMinus01_BP_C_SetBurned, bNewBurnedState) == 0x000000, "Member 'BatteryMinus01_BP_C_SetBurned::bNewBurnedState' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_SetBurned, CallFunc_HasAuthority_ReturnValue) == 0x000001, "Member 'BatteryMinus01_BP_C_SetBurned::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_SetBurned, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000002, "Member 'BatteryMinus01_BP_C_SetBurned::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemCancelledNotify
// 0x0008 (0x0008 - 0x0000)
struct BatteryMinus01_BP_C_OnConsumeItemCancelledNotify final
{
public:
	class ARBPawn*                                Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BatteryMinus01_BP_C_OnConsumeItemCancelledNotify) == 0x000008, "Wrong alignment on BatteryMinus01_BP_C_OnConsumeItemCancelledNotify");
static_assert(sizeof(BatteryMinus01_BP_C_OnConsumeItemCancelledNotify) == 0x000008, "Wrong size on BatteryMinus01_BP_C_OnConsumeItemCancelledNotify");
static_assert(offsetof(BatteryMinus01_BP_C_OnConsumeItemCancelledNotify, Pawn) == 0x000000, "Member 'BatteryMinus01_BP_C_OnConsumeItemCancelledNotify::Pawn' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.OnConsumeItemStartNotify
// 0x0008 (0x0008 - 0x0000)
struct BatteryMinus01_BP_C_OnConsumeItemStartNotify final
{
public:
	class ARBPawn*                                Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BatteryMinus01_BP_C_OnConsumeItemStartNotify) == 0x000008, "Wrong alignment on BatteryMinus01_BP_C_OnConsumeItemStartNotify");
static_assert(sizeof(BatteryMinus01_BP_C_OnConsumeItemStartNotify) == 0x000008, "Wrong size on BatteryMinus01_BP_C_OnConsumeItemStartNotify");
static_assert(offsetof(BatteryMinus01_BP_C_OnConsumeItemStartNotify, Pawn) == 0x000000, "Member 'BatteryMinus01_BP_C_OnConsumeItemStartNotify::Pawn' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.ExecuteUbergraph_Battery-01_BP
// 0x0038 (0x0038 - 0x0000)
struct BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPawn*                                K2Node_Event_pawn;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer_BP_C*                         K2Node_DynamicCast_AsRB_Player_BP;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsInFirstPerson_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPawn*                                K2Node_Event_pawn_1;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer_BP_C*                         K2Node_DynamicCast_AsRB_Player_BP_1;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP) == 0x000008, "Wrong alignment on BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP");
static_assert(sizeof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP) == 0x000038, "Wrong size on BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, EntryPoint) == 0x000000, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, K2Node_Event_pawn) == 0x000008, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::K2Node_Event_pawn' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, K2Node_DynamicCast_AsRB_Player_BP) == 0x000010, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::K2Node_DynamicCast_AsRB_Player_BP' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, CallFunc_BP_IsInFirstPerson_ReturnValue) == 0x000019, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::CallFunc_BP_IsInFirstPerson_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, K2Node_Event_pawn_1) == 0x000020, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::K2Node_Event_pawn_1' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, K2Node_DynamicCast_AsRB_Player_BP_1) == 0x000028, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::K2Node_DynamicCast_AsRB_Player_BP_1' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BatteryMinus01_BP_C_ExecuteUbergraph_BatteryMinus01_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function Battery-01_BP.Battery-01_BP_C.CanBeActivedInSpectra
// 0x0010 (0x0010 - 0x0000)
struct BatteryMinus01_BP_C_CanBeActivedInSpectra final
{
public:
	const class ARBSpectraSkill*                  SpectraOwner;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CanBeActivedInSpectra_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BatteryMinus01_BP_C_CanBeActivedInSpectra) == 0x000008, "Wrong alignment on BatteryMinus01_BP_C_CanBeActivedInSpectra");
static_assert(sizeof(BatteryMinus01_BP_C_CanBeActivedInSpectra) == 0x000010, "Wrong size on BatteryMinus01_BP_C_CanBeActivedInSpectra");
static_assert(offsetof(BatteryMinus01_BP_C_CanBeActivedInSpectra, SpectraOwner) == 0x000000, "Member 'BatteryMinus01_BP_C_CanBeActivedInSpectra::SpectraOwner' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_CanBeActivedInSpectra, ReturnValue) == 0x000008, "Member 'BatteryMinus01_BP_C_CanBeActivedInSpectra::ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_CanBeActivedInSpectra, CallFunc_CanBeActivedInSpectra_ReturnValue) == 0x000009, "Member 'BatteryMinus01_BP_C_CanBeActivedInSpectra::CallFunc_CanBeActivedInSpectra_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_CanBeActivedInSpectra, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'BatteryMinus01_BP_C_CanBeActivedInSpectra::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BatteryMinus01_BP_C_CanBeActivedInSpectra, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'BatteryMinus01_BP_C_CanBeActivedInSpectra::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

