#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBScareJumpBase

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function RBScareJumpBase.RBScareJumpBase_C.SetPreviewAssetsVisibility
// 0x0001 (0x0001 - 0x0000)
struct RBScareJumpBase_C_SetPreviewAssetsVisibility final
{
public:
	bool                                          Preview;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RBScareJumpBase_C_SetPreviewAssetsVisibility) == 0x000001, "Wrong alignment on RBScareJumpBase_C_SetPreviewAssetsVisibility");
static_assert(sizeof(RBScareJumpBase_C_SetPreviewAssetsVisibility) == 0x000001, "Wrong size on RBScareJumpBase_C_SetPreviewAssetsVisibility");
static_assert(offsetof(RBScareJumpBase_C_SetPreviewAssetsVisibility, Preview) == 0x000000, "Member 'RBScareJumpBase_C_SetPreviewAssetsVisibility::Preview' has a wrong offset!");

// Function RBScareJumpBase.RBScareJumpBase_C.BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature final
{
public:
	class URBImpactTriggerableComponent*          Component;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature) == 0x000008, "Wrong alignment on RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature");
static_assert(sizeof(RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature) == 0x000008, "Wrong size on RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature");
static_assert(offsetof(RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature, Component) == 0x000000, "Member 'RBScareJumpBase_C_BndEvt__RBScareJumpBase_RBImpactTriggerable_K2Node_ComponentBoundEvent_0_ImpactTriggerableEvent__DelegateSignature::Component' has a wrong offset!");

// Function RBScareJumpBase.RBScareJumpBase_C.ExecuteUbergraph_RBScareJumpBase
// 0x00D8 (0x00D8 - 0x0000)
struct RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_1;                            // 0x0028(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x003C(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x0050(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_2;                            // 0x0060(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_3;                          // 0x0074(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_3;                            // 0x0088(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue_1;                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable_4;                            // 0x00A0(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue_2;                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_4;                          // 0x00B4(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostAkEvent_ReturnValue_3;                // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue_4;                // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBImpactTriggerableComponent*          K2Node_ComponentBoundEvent_component;              // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase) == 0x000008, "Wrong alignment on RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase");
static_assert(sizeof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase) == 0x0000D8, "Wrong size on RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, EntryPoint) == 0x000000, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_struct_Variable) == 0x000008, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_delegate_Variable) == 0x000018, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_struct_Variable_1) == 0x000028, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_delegate_Variable_1) == 0x00003C, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_IsValid_ReturnValue_1) == 0x00004C, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_IsValid_ReturnValue_2) == 0x00004D, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_IsValid_ReturnValue_3) == 0x00004E, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x00004F, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_delegate_Variable_2) == 0x000050, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_struct_Variable_2) == 0x000060, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_PostAkEvent_ReturnValue) == 0x000070, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_delegate_Variable_3) == 0x000074, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_delegate_Variable_3' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_struct_Variable_3) == 0x000088, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_PostAkEvent_ReturnValue_1) == 0x000098, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_PostAkEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_IsValid_ReturnValue_4) == 0x00009C, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_struct_Variable_4) == 0x0000A0, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_struct_Variable_4' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_PostAkEvent_ReturnValue_2) == 0x0000B0, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_PostAkEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, Temp_delegate_Variable_4) == 0x0000B4, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::Temp_delegate_Variable_4' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_PostAkEvent_ReturnValue_3) == 0x0000C4, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_PostAkEvent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, CallFunc_PostAkEvent_ReturnValue_4) == 0x0000C8, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::CallFunc_PostAkEvent_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase, K2Node_ComponentBoundEvent_component) == 0x0000D0, "Member 'RBScareJumpBase_C_ExecuteUbergraph_RBScareJumpBase::K2Node_ComponentBoundEvent_component' has a wrong offset!");

}

