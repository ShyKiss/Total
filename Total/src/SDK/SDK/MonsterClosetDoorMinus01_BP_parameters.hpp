#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MonsterClosetDoorMinus01_BP

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "AkAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "MonsterClosetDoorType_Enu_structs.hpp"


namespace SDK::Params
{

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.PlayOpenSound
// 0x0040 (0x0040 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_PlayOpenSound final
{
public:
	bool                                          Open;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0014(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x0024(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEventOnActor_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventOnActor_ReturnValue_1;           // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventOnActor_ReturnValue_2;           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound) == 0x000004, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_PlayOpenSound");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound) == 0x000040, "Wrong size on MonsterClosetDoorMinus01_BP_C_PlayOpenSound");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, Open) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::Open' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, Temp_delegate_Variable) == 0x000004, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, Temp_delegate_Variable_1) == 0x000014, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, Temp_delegate_Variable_2) == 0x000024, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, CallFunc_PostEventOnActor_ReturnValue) == 0x000034, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::CallFunc_PostEventOnActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, CallFunc_PostEventOnActor_ReturnValue_1) == 0x000038, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::CallFunc_PostEventOnActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_PlayOpenSound, CallFunc_PostEventOnActor_ReturnValue_2) == 0x00003C, "Member 'MonsterClosetDoorMinus01_BP_C_PlayOpenSound::CallFunc_PostEventOnActor_ReturnValue_2' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.BP_Tick
// 0x00A0 (0x00A0 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_BP_Tick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_BP_Tick) == 0x000004, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_BP_Tick");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_BP_Tick) == 0x0000A0, "Wrong size on MonsterClosetDoorMinus01_BP_C_BP_Tick");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_BP_Tick, DeltaTime) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_BP_Tick::DeltaTime' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_BP_Tick, ReturnValue) == 0x000004, "Member 'MonsterClosetDoorMinus01_BP_C_BP_Tick::ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_BP_Tick, CallFunc_IsDedicatedServer_ReturnValue) == 0x000005, "Member 'MonsterClosetDoorMinus01_BP_C_BP_Tick::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_BP_Tick, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000008, "Member 'MonsterClosetDoorMinus01_BP_C_BP_Tick::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_BP_Tick, CallFunc_MakeRotator_ReturnValue) == 0x00000C, "Member 'MonsterClosetDoorMinus01_BP_C_BP_Tick::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_BP_Tick, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000018, "Member 'MonsterClosetDoorMinus01_BP_C_BP_Tick::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Set Height
// 0x00E8 (0x00E8 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_Set_Height final
{
public:
	EMonsterClosetDoorType_Enu                    Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Temp_object_Variable_2;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMonsterClosetDoorType_Enu                    Temp_byte_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable;                              // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable_1;                            // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Temp_struct_Variable_2;                            // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Select_Default_1;                           // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0060(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_Set_Height) == 0x000008, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_Set_Height");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_Set_Height) == 0x0000E8, "Wrong size on MonsterClosetDoorMinus01_BP_C_Set_Height");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_byte_Variable) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_object_Variable) == 0x000008, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_object_Variable_1) == 0x000010, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_object_Variable_2) == 0x000018, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_byte_Variable_1) == 0x000020, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_struct_Variable) == 0x000024, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_struct_Variable_1) == 0x000030, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, Temp_struct_Variable_2) == 0x00003C, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, K2Node_Select_Default) == 0x000048, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, CallFunc_SetStaticMesh_ReturnValue) == 0x000050, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, K2Node_Select_Default_1) == 0x000054, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Set_Height, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000060, "Member 'MonsterClosetDoorMinus01_BP_C_Set_Height::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.OnTimelineUpdate
// 0x0138 (0x0138 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate final
{
public:
	float                                         Ratio;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x00B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate) == 0x000004, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate) == 0x000138, "Wrong size on MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, Ratio) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::Ratio' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_MakeRotator_ReturnValue) == 0x00000C, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_Lerp_ReturnValue_1) == 0x000018, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_MakeRotator_ReturnValue_1) == 0x00001C, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000028, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x0000B0, "Member 'MonsterClosetDoorMinus01_BP_C_OnTimelineUpdate::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_UserConstructionScript final
{
public:
	class USkeletalMesh*                          NewSkelMesh;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_UserConstructionScript) == 0x000008, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_UserConstructionScript");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_UserConstructionScript) == 0x000010, "Wrong size on MonsterClosetDoorMinus01_BP_C_UserConstructionScript");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_UserConstructionScript, NewSkelMesh) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_UserConstructionScript::NewSkelMesh' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_UserConstructionScript, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000008, "Member 'MonsterClosetDoorMinus01_BP_C_UserConstructionScript::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_OnPlayerInClosetChanged
// 0x0008 (0x0008 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged final
{
public:
	class ARBPlayer*                              OldPlayer;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged) == 0x000008, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged) == 0x000008, "Wrong size on MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged, OldPlayer) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_Event_OnPlayerInClosetChanged::OldPlayer' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_TriggerNPCSpawnAnnouncement
// 0x0001 (0x0001 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement final
{
public:
	ENPCType                                      NPCType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement) == 0x000001, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement) == 0x000001, "Wrong size on MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement, NPCType) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_Event_TriggerNPCSpawnAnnouncement::NPCType' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.SetWarningLightActive
// 0x0001 (0x0001 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_SetWarningLightActive final
{
public:
	bool                                          AlarmLightState;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_SetWarningLightActive) == 0x000001, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_SetWarningLightActive");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_SetWarningLightActive) == 0x000001, "Wrong size on MonsterClosetDoorMinus01_BP_C_SetWarningLightActive");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_SetWarningLightActive, AlarmLightState) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_SetWarningLightActive::AlarmLightState' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_SetNPCSpawnWarningActive
// 0x0001 (0x0001 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive final
{
public:
	bool                                          bWarningActive;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive) == 0x000001, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive) == 0x000001, "Wrong size on MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive, bWarningActive) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_Event_SetNPCSpawnWarningActive::bWarningActive' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.Event_ApplyOpenState
// 0x0001 (0x0001 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState final
{
public:
	bool                                          bOpen;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState) == 0x000001, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState) == 0x000001, "Wrong size on MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState, bOpen) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_Event_ApplyOpenState::bOpen' has a wrong offset!");

// Function MonsterClosetDoor-01_BP.MonsterClosetDoor-01_BP_C.ExecuteUbergraph_MonsterClosetDoor-01_BP
// 0x0088 (0x0088 - 0x0000)
struct MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEventGlobal_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_2;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0050(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	class ARBPlayer*                              K2Node_Event_oldPlayer;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ENPCType                                      K2Node_Event_npcType;                              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_AlarmLightState;                // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x006C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWarningActive;                       // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bOpen;                                // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP) == 0x000008, "Wrong alignment on MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP");
static_assert(sizeof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP) == 0x000088, "Wrong size on MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, EntryPoint) == 0x000000, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_delegate_Variable) == 0x000004, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, CallFunc_PostEventGlobal_ReturnValue) == 0x000014, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::CallFunc_PostEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_byte_Variable) == 0x000018, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_bool_Variable) == 0x000019, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_bool_Variable_1) == 0x00001A, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_bool_Variable_2) == 0x00001B, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_Select_Default) == 0x00001C, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_struct_Variable) == 0x000020, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_struct_Variable_1) == 0x000030, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_struct_Variable_2) == 0x000040, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, Temp_delegate_Variable_1) == 0x000050, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_Event_oldPlayer) == 0x000060, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_Event_oldPlayer' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_Event_npcType) == 0x000069, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_Event_npcType' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, CallFunc_IsValid_ReturnValue_1) == 0x00006A, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_CustomEvent_AlarmLightState) == 0x00006B, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_CustomEvent_AlarmLightState' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_Select_Default_1) == 0x00006C, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_Event_bWarningActive) == 0x00007C, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_Event_bWarningActive' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, CallFunc_IsDedicatedServer_ReturnValue) == 0x00007D, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, K2Node_Event_bOpen) == 0x00007E, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::K2Node_Event_bOpen' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x00007F, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP, CallFunc_PostAkEvent_ReturnValue) == 0x000080, "Member 'MonsterClosetDoorMinus01_BP_C_ExecuteUbergraph_MonsterClosetDoorMinus01_BP::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");

}

