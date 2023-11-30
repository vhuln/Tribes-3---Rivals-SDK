#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
struct UWBP_ControllerPrompt_C_SetButtonPrompt_Params
{
public:
	struct InputCore_Key                         Button;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
struct UWBP_ControllerPrompt_C_SetPromptFromButton_Params
{
public:
	struct InputCore_Key                         Button;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetIconForGamepadButton_Icon;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
struct UWBP_ControllerPrompt_C_UpdateFromSetValues_Params
{
public:
	struct InputCore_Key                         Temp_struct_Variable;                              // 0x0(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_338[0x7];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadCancelButton_ReturnValue;       // 0x20(0x18)(HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetGamepadButtonForAction_Button;         // 0x38(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadButtonForAction_ReturnValue;    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C[0x7];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x58(0x18)(HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_Select_Default;                             // 0x70(0x18)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
struct UWBP_ControllerPrompt_C_SetInputAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
struct UWBP_ControllerPrompt_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
struct UWBP_ControllerPrompt_C_ExecuteUbergraph_WBP_ControllerPrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


