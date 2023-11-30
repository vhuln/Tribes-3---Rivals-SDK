#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xDF0 (0xDF0 - 0x0)
// Function TookDamage_CamMod.TookDamage_CamMod_C.BlueprintModifyPostProcess
struct UTookDamage_CamMod_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1943[0x8];                                     // Fixing Size After Last Property  
	struct Engine_PostProcessSettings            PostProcessSettings;                               // 0x10(0x6E0)(Parm, OutParm)
	struct CoreUObject_Vector4                   CallFunc_MakeVector4_ReturnValue;                  // 0x6F0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_PostProcessSettings            K2Node_MakeStruct_PostProcessSettings;             // 0x710(0x6E0)(None)
};

}
}


