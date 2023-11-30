#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C.On Vaulting State Changed
struct UBP_Defender_MainFSM_ClimbingState_C_On_Vaulting_State_Changed_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C.ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState
struct UBP_Defender_MainFSM_ClimbingState_C_ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2229[0x4];                                     // Fixing Size After Last Property  
	class AValCharacter*                         CallFunc_GetCharacter_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


