#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Denizen_Expression_State_Struct

#include "Basic.hpp"

#include "Denizen_Names_Enum_structs.hpp"


namespace SDK
{

// UserDefinedStruct Denizen_Expression_State_Struct.Denizen_Expression_State_Struct
// 0x0320 (0x0320 - 0x0000)
struct FDenizen_Expression_State_Struct final
{
public:
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Default_24_599E99054D8D9DA09BBFC2A0DD36563F;       // 0x0000(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Neutral_27_D9927C234FBC8BF014BFF69B84493DFD;       // 0x0050(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Happy_28_D214DFC94BD693ACA9C91AA0EEB5A690;         // 0x00A0(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Angry_49_E806BD9B4C8D4488650D9387ECD11D12;         // 0x00F0(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Offended_50_7F7E727C431BBA3E2F4C0D96F71E2EC0;      // 0x0140(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Tired_51_0CDD06A743ADF883D19F7783EB6A6CAB;         // 0x0190(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Sad_52_13CFC6DC474526A40E158D8128D195DA;           // 0x01E0(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Surprised_53_F914A45A4FC17BD7D77DD6B2DD053CB6;     // 0x0230(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Frown_61_93C7426840341CFE8D3A749D0FD90E5F;         // 0x0280(0x0050)(Edit, BlueprintVisible)
	TMap<EDenizen_Names_Enum, class UAnimSequence*> Question_63_5848D80249F6653E3A3387B12E1E42A6;      // 0x02D0(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FDenizen_Expression_State_Struct) == 0x000008, "Wrong alignment on FDenizen_Expression_State_Struct");
static_assert(sizeof(FDenizen_Expression_State_Struct) == 0x000320, "Wrong size on FDenizen_Expression_State_Struct");
static_assert(offsetof(FDenizen_Expression_State_Struct, Default_24_599E99054D8D9DA09BBFC2A0DD36563F) == 0x000000, "Member 'FDenizen_Expression_State_Struct::Default_24_599E99054D8D9DA09BBFC2A0DD36563F' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Neutral_27_D9927C234FBC8BF014BFF69B84493DFD) == 0x000050, "Member 'FDenizen_Expression_State_Struct::Neutral_27_D9927C234FBC8BF014BFF69B84493DFD' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Happy_28_D214DFC94BD693ACA9C91AA0EEB5A690) == 0x0000A0, "Member 'FDenizen_Expression_State_Struct::Happy_28_D214DFC94BD693ACA9C91AA0EEB5A690' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Angry_49_E806BD9B4C8D4488650D9387ECD11D12) == 0x0000F0, "Member 'FDenizen_Expression_State_Struct::Angry_49_E806BD9B4C8D4488650D9387ECD11D12' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Offended_50_7F7E727C431BBA3E2F4C0D96F71E2EC0) == 0x000140, "Member 'FDenizen_Expression_State_Struct::Offended_50_7F7E727C431BBA3E2F4C0D96F71E2EC0' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Tired_51_0CDD06A743ADF883D19F7783EB6A6CAB) == 0x000190, "Member 'FDenizen_Expression_State_Struct::Tired_51_0CDD06A743ADF883D19F7783EB6A6CAB' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Sad_52_13CFC6DC474526A40E158D8128D195DA) == 0x0001E0, "Member 'FDenizen_Expression_State_Struct::Sad_52_13CFC6DC474526A40E158D8128D195DA' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Surprised_53_F914A45A4FC17BD7D77DD6B2DD053CB6) == 0x000230, "Member 'FDenizen_Expression_State_Struct::Surprised_53_F914A45A4FC17BD7D77DD6B2DD053CB6' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Frown_61_93C7426840341CFE8D3A749D0FD90E5F) == 0x000280, "Member 'FDenizen_Expression_State_Struct::Frown_61_93C7426840341CFE8D3A749D0FD90E5F' has a wrong offset!");
static_assert(offsetof(FDenizen_Expression_State_Struct, Question_63_5848D80249F6653E3A3387B12E1E42A6) == 0x0002D0, "Member 'FDenizen_Expression_State_Struct::Question_63_5848D80249F6653E3A3387B12E1E42A6' has a wrong offset!");

}
