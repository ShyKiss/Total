#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CellCustomizationCameraActor

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.GetFocusActorFromCategory
// 0x0068 (0x0068 - 0x0000)
struct CellCustomizationCameraActor_C_GetFocusActorFromCategory final
{
public:
	ECustomizationMenuCategory                    Category;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37BD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37BE[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayerState*                         CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBLobbyPlayerState*                    K2Node_DynamicCast_AsRB_Lobby_Player_State;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37BF[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayerCell*                          CallFunc_GetPlayerCell_ReturnValue;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ARBPlayerCellItem*>              CallFunc_GetLinkedCellItems_ReturnValue;           // 0x0040(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C0[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayerCellItem*                      CallFunc_Array_Get_Item;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CellCustomizationCameraActor_C_GetFocusActorFromCategory) == 0x000008, "Wrong alignment on CellCustomizationCameraActor_C_GetFocusActorFromCategory");
static_assert(sizeof(CellCustomizationCameraActor_C_GetFocusActorFromCategory) == 0x000068, "Wrong size on CellCustomizationCameraActor_C_GetFocusActorFromCategory");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, Category) == 0x000000, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::Category' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, Actor) == 0x000008, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::Actor' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, Temp_int_Array_Index_Variable) == 0x000010, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000020, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, K2Node_DynamicCast_AsRB_Lobby_Player_State) == 0x000028, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::K2Node_DynamicCast_AsRB_Lobby_Player_State' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_GetPlayerCell_ReturnValue) == 0x000038, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_GetPlayerCell_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_GetLinkedCellItems_ReturnValue) == 0x000040, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_GetLinkedCellItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_Array_Get_Item) == 0x000058, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_GetFocusActorFromCategory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000061, "Member 'CellCustomizationCameraActor_C_GetFocusActorFromCategory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Init
// 0x00C0 (0x00C0 - 0x0000)
struct CellCustomizationCameraActor_C_Init final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0030(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CellCustomizationCameraActor_C_Init) == 0x000010, "Wrong alignment on CellCustomizationCameraActor_C_Init");
static_assert(sizeof(CellCustomizationCameraActor_C_Init) == 0x0000C0, "Wrong size on CellCustomizationCameraActor_C_Init");
static_assert(offsetof(CellCustomizationCameraActor_C_Init, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'CellCustomizationCameraActor_C_Init::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Init, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000030, "Member 'CellCustomizationCameraActor_C_Init::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.DeactivateCamera
// 0x0008 (0x0008 - 0x0000)
struct CellCustomizationCameraActor_C_DeactivateCamera final
{
public:
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CellCustomizationCameraActor_C_DeactivateCamera) == 0x000008, "Wrong alignment on CellCustomizationCameraActor_C_DeactivateCamera");
static_assert(sizeof(CellCustomizationCameraActor_C_DeactivateCamera) == 0x000008, "Wrong size on CellCustomizationCameraActor_C_DeactivateCamera");
static_assert(offsetof(CellCustomizationCameraActor_C_DeactivateCamera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000000, "Member 'CellCustomizationCameraActor_C_DeactivateCamera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.Activate Camera
// 0x01B8 (0x01B8 - 0x0000)
struct CellCustomizationCameraActor_C_Activate_Camera final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable;                              // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetFocusActorFromCategory_Actor;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C2[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C3[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C4[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C5[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0070(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Select_Default;                             // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0130(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CellCustomizationCameraActor_C_Activate_Camera) == 0x000008, "Wrong alignment on CellCustomizationCameraActor_C_Activate_Camera");
static_assert(sizeof(CellCustomizationCameraActor_C_Activate_Camera) == 0x0001B8, "Wrong size on CellCustomizationCameraActor_C_Activate_Camera");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, Temp_bool_Variable) == 0x000000, "Member 'CellCustomizationCameraActor_C_Activate_Camera::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, Temp_struct_Variable) == 0x000004, "Member 'CellCustomizationCameraActor_C_Activate_Camera::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_GetFocusActorFromCategory_Actor) == 0x000010, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_GetFocusActorFromCategory_Actor' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000024, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000034, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000040, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000041, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_GetForwardVector_ReturnValue) == 0x000044, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_BooleanOR_ReturnValue) == 0x000050, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_FindLookAtRotation_ReturnValue) == 0x000054, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_BooleanOR_ReturnValue_1) == 0x000060, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_ComposeRotators_ReturnValue) == 0x000064, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000070, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_BreakTransform_Location) == 0x0000F8, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_BreakTransform_Rotation) == 0x000104, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_BreakTransform_Scale) == 0x000110, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, K2Node_Select_Default) == 0x00011C, "Member 'CellCustomizationCameraActor_C_Activate_Camera::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000128, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_Activate_Camera, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000130, "Member 'CellCustomizationCameraActor_C_Activate_Camera::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UpdateCameraTransforms
// 0x01F0 (0x01F0 - 0x0000)
struct CellCustomizationCameraActor_C_UpdateCameraTransforms final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C6[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Temp_struct_Variable;                              // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37C7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCellItemBase_C*                  K2Node_DynamicCast_AsPlayer_Cell_Item_Base;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C8[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetCameraFocusWorldLocation_WorldLocation; // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37C9[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Select_Default;                             // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0074(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_37CA[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCellItemBase_C*                  K2Node_DynamicCast_AsPlayer_Cell_Item_Base_1;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37CB[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0164(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x01EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CellCustomizationCameraActor_C_UpdateCameraTransforms) == 0x000008, "Wrong alignment on CellCustomizationCameraActor_C_UpdateCameraTransforms");
static_assert(sizeof(CellCustomizationCameraActor_C_UpdateCameraTransforms) == 0x0001F0, "Wrong size on CellCustomizationCameraActor_C_UpdateCameraTransforms");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, DeltaTime) == 0x000000, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::DeltaTime' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, Temp_bool_Variable) == 0x000004, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, Temp_struct_Variable) == 0x000008, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, K2Node_DynamicCast_AsPlayer_Cell_Item_Base) == 0x000018, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::K2Node_DynamicCast_AsPlayer_Cell_Item_Base' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_GetCameraFocusWorldLocation_WorldLocation) == 0x000024, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_GetCameraFocusWorldLocation_WorldLocation' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000031, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000032, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_BooleanOR_ReturnValue) == 0x000033, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_BreakTransform_Location) == 0x000034, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_BreakTransform_Rotation) == 0x000040, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_BreakTransform_Scale) == 0x00004C, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_BooleanOR_ReturnValue_1) == 0x000058, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, K2Node_Select_Default) == 0x00005C, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_VInterpTo_ReturnValue) == 0x000068, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000074, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, K2Node_DynamicCast_AsPlayer_Cell_Item_Base_1) == 0x000100, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::K2Node_DynamicCast_AsPlayer_Cell_Item_Base_1' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, K2Node_DynamicCast_bSuccess_1) == 0x000108, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_FInterpTo_ReturnValue) == 0x00010C, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_GetForwardVector_ReturnValue) == 0x000110, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00011C, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000128, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000134, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_FindLookAtRotation_ReturnValue) == 0x000140, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_ComposeRotators_ReturnValue) == 0x00014C, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_RInterpTo_ReturnValue) == 0x000158, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000164, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UpdateCameraTransforms, CallFunc_EqualEqual_RotatorRotator_ReturnValue) == 0x0001EC, "Member 'CellCustomizationCameraActor_C_UpdateCameraTransforms::CallFunc_EqualEqual_RotatorRotator_ReturnValue' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.FocusCameraTo
// 0x0010 (0x0010 - 0x0000)
struct CellCustomizationCameraActor_C_FocusCameraTo final
{
public:
	ECustomizationMenuCategory                    CustomizationCategory;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_37CC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetFocusActorFromCategory_Actor;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CellCustomizationCameraActor_C_FocusCameraTo) == 0x000008, "Wrong alignment on CellCustomizationCameraActor_C_FocusCameraTo");
static_assert(sizeof(CellCustomizationCameraActor_C_FocusCameraTo) == 0x000010, "Wrong size on CellCustomizationCameraActor_C_FocusCameraTo");
static_assert(offsetof(CellCustomizationCameraActor_C_FocusCameraTo, CustomizationCategory) == 0x000000, "Member 'CellCustomizationCameraActor_C_FocusCameraTo::CustomizationCategory' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_FocusCameraTo, CallFunc_GetFocusActorFromCategory_Actor) == 0x000008, "Member 'CellCustomizationCameraActor_C_FocusCameraTo::CallFunc_GetFocusActorFromCategory_Actor' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.UserConstructionScript
// 0x0140 (0x0140 - 0x0000)
struct CellCustomizationCameraActor_C_UserConstructionScript final
{
public:
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0000(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0030(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x00B8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CellCustomizationCameraActor_C_UserConstructionScript) == 0x000010, "Wrong alignment on CellCustomizationCameraActor_C_UserConstructionScript");
static_assert(sizeof(CellCustomizationCameraActor_C_UserConstructionScript) == 0x000140, "Wrong size on CellCustomizationCameraActor_C_UserConstructionScript");
static_assert(offsetof(CellCustomizationCameraActor_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000000, "Member 'CellCustomizationCameraActor_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UserConstructionScript, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000030, "Member 'CellCustomizationCameraActor_C_UserConstructionScript::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_UserConstructionScript, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x0000B8, "Member 'CellCustomizationCameraActor_C_UserConstructionScript::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct CellCustomizationCameraActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CellCustomizationCameraActor_C_ReceiveTick) == 0x000004, "Wrong alignment on CellCustomizationCameraActor_C_ReceiveTick");
static_assert(sizeof(CellCustomizationCameraActor_C_ReceiveTick) == 0x000004, "Wrong size on CellCustomizationCameraActor_C_ReceiveTick");
static_assert(offsetof(CellCustomizationCameraActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'CellCustomizationCameraActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function CellCustomizationCameraActor.CellCustomizationCameraActor_C.ExecuteUbergraph_CellCustomizationCameraActor
// 0x0008 (0x0008 - 0x0000)
struct CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor) == 0x000004, "Wrong alignment on CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor");
static_assert(sizeof(CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor) == 0x000008, "Wrong size on CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor");
static_assert(offsetof(CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor, EntryPoint) == 0x000000, "Member 'CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'CellCustomizationCameraActor_C_ExecuteUbergraph_CellCustomizationCameraActor::K2Node_Event_DeltaSeconds' has a wrong offset!");

}
