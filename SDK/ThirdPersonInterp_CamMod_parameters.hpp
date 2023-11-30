#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1040 (0x1040 - 0x0)
// Function ThirdPersonInterp_CamMod.ThirdPersonInterp_CamMod_C.BlueprintModifyCamera
struct UThirdPersonInterp_CamMod_C_BlueprintModifyCamera_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ViewLocation;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   ViewRotation;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        FOV;                                               // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    NewViewLocation;                                   // 0x40(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   NewViewRotation;                                   // 0x58(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        NewFOV;                                            // 0x70(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D67[0x4];                                     // Fixing Size After Last Property  
	class AActor*                                CallFunc_GetViewTarget_ReturnValue;                // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         K2Node_DynamicCast_AsVal_Character;                // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D6A[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetThirdPersonCameraAlpha_ReturnValue;    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_MinimalViewInfo                CallFunc_GetCameraView_DesiredView;                // 0x90(0x7C0)(None)
	struct Engine_MinimalViewInfo                CallFunc_GetCameraView_DesiredView_1;              // 0x850(0x7C0)(None)
	struct CoreUObject_Vector                    CallFunc_VLerp_ReturnValue;                        // 0x1010(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_RLerp_ReturnValue;                        // 0x1028(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


