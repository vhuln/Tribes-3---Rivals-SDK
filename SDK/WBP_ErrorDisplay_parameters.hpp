#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0x52 - 0x0)
// Function WBP_ErrorDisplay.WBP_ErrorDisplay_C.ExecuteUbergraph_WBP_ErrorDisplay
struct UWBP_ErrorDisplay_C_ExecuteUbergraph_WBP_ErrorDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C5[0x4];                                     // Fixing Size After Last Property  
	class UValGameInstance*                      CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveViewRoute_ReturnValue;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C7[0x6];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetDisconnectErrorCode_OutErrorCode;      // 0x18(0x18)(None)
	bool                                         CallFunc_GetDisconnectErrorCode_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D3[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetKickErrorCode_OutErrorCode;            // 0x38(0x18)(None)
	bool                                         CallFunc_GetKickErrorCode_ReturnValue;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveViewRoute_ReturnValue_1;            // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


