#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xE08 (0xE08 - 0x0)
// Function PhaseShift_CamMod.PhaseShift_CamMod_C.BlueprintModifyPostProcess
struct UPhaseShift_CamMod_C_BlueprintModifyPostProcess_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostProcessBlendWeight;                            // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9B[0x8];                                     // Fixing Size After Last Property  
	struct Engine_PostProcessSettings            PostProcessSettings;                               // 0x10(0x6E0)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D9D[0x7];                                     // Fixing Size After Last Property  
	struct Engine_WeightedBlendables             K2Node_MakeStruct_WeightedBlendables;              // 0x6F8(0x10)(None)
	uint8                                        Pad_1DA1[0x8];                                     // Fixing Size After Last Property  
	struct Engine_PostProcessSettings            K2Node_MakeStruct_PostProcessSettings;             // 0x710(0x6E0)(None)
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface;           // 0xDF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xDF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB5[0x7];                                     // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xE00(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


