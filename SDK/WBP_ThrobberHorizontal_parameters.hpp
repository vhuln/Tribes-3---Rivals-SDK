#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.SetThrobberColor
struct UWBP_ThrobberHorizontal_C_SetThrobberColor_Params
{
public:
	struct SlateCore_SlateColor                  NewColor;                                          // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct
struct UWBP_ThrobberHorizontal_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal
struct UWBP_ThrobberHorizontal_C_ExecuteUbergraph_WBP_ThrobberHorizontal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347A[0x3];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


