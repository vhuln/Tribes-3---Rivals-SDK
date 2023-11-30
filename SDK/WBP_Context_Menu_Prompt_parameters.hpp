#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xC0 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetKeyForAction
struct UWBP_Context_Menu_Prompt_C_GetKeyForAction_Params
{
public:
	bool                                         Is_Gamepad_Key;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_999[0x7];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         Action_Key;                                        // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash)
	class ARHHUDCommon*                          LocalHud;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct RallyHereStart_ContextAction          CallFunc_GetActionContext_Context;                 // 0x28(0x58)(None)
	class URHInputManager*                       CallFunc_GetInputManager_ReturnValue;              // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValInputManager*                      K2Node_DynamicCast_AsVal_Input_Manager;            // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9B1[0x6];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetButtonForInputAction_Button;           // 0x98(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetButtonForInputAction_ReturnValue;      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C5[0x7];                                      // Fixing Size After Last Property  
	class ARHHUDCommon*                          CallFunc_GetHUDCommon_HUD_Common;                  // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetActionContext
struct UWBP_Context_Menu_Prompt_C_GetActionContext_Params
{
public:
	struct RallyHereStart_ContextAction          Context;                                           // 0x0(0x58)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetActionName
struct UWBP_Context_Menu_Prompt_C_GetActionName_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetActionText
struct UWBP_Context_Menu_Prompt_C_GetActionText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A5D[0x7];                                      // Fixing Size After Last Property  
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0x70(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0xC0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD0(0x18)(None)
};

// 0x60 (0x60 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct
struct UWBP_Context_Menu_Prompt_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFontByName_HasFound;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A84[0x6];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnInputStateChanged
struct UWBP_Context_Menu_Prompt_C_OnInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateStandard
struct UWBP_Context_Menu_Prompt_C_EvaluateInputStateStandard_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateCycle
struct UWBP_Context_Menu_Prompt_C_EvaluateInputStateCycle_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateHold
struct UWBP_Context_Menu_Prompt_C_EvaluateInputStateHold_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateStandardButton
struct UWBP_Context_Menu_Prompt_C_PopulateStandardButton_Params
{
public:
	struct InputCore_Key                         KeyboardKey;                                       // 0x0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct InputCore_Key                         GamepadKey;                                        // 0x18(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetKeyForAction_Action_Key;               // 0x30(0x18)(HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetKeyForAction_Action_Key_1;             // 0x48(0x18)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetActionText_Text;                       // 0x60(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x78(0x18)(None)
	bool                                         CallFunc_Key_IsValid_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B28[0x7];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_Key_GetShortDisplayName_ReturnValue;      // 0x98(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0xB0(0x18)(None)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateCycleButton
struct UWBP_Context_Menu_Prompt_C_PopulateCycleButton_Params
{
public:
	class FName                                  CallFunc_GetActionName_Action;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActionName_Action_1;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetGamepadButtonForAction_Button;         // 0x60(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadButtonForAction_ReturnValue;    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B7B[0x7];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadButtonForAction_Button_1;       // 0x80(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadButtonForAction_ReturnValue_1;  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B80[0x7];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_GetActionText_Text;                       // 0xA0(0x18)(None)
};

// 0xE0 (0xE0 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateHoldButton
struct UWBP_Context_Menu_Prompt_C_PopulateHoldButton_Params
{
public:
	struct InputCore_Key                         KeyboardKey;                                       // 0x0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct InputCore_Key                         GamepadKey;                                        // 0x18(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  CallFunc_GetActionText_Text;                       // 0x30(0x18)(None)
	class FName                                  CallFunc_GetActionName_Action;                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x50(0x18)(None)
	struct InputCore_Key                         CallFunc_GetButtonForActionMapping_Button;         // 0x68(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetButtonForActionMapping_ReturnValue;    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BF2[0x3];                                      // Fixing Size After Last Property  
	class FName                                  CallFunc_GetActionName_Action_1;                   // 0x84(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BF5[0x4];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadButtonForAction_Button;         // 0x90(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadButtonForAction_ReturnValue;    // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsValid_ReturnValue;                  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BFC[0x6];                                      // Fixing Size After Last Property  
	class FText                                  CallFunc_Key_GetShortDisplayName_ReturnValue;      // 0xB0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0xC8(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate
struct UWBP_Context_Menu_Prompt_C_Populate_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnContextActionUpdated
struct UWBP_Context_Menu_Prompt_C_OnContextActionUpdated_Params
{
public:
	class UContextActionData*                    InData;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt
struct UWBP_Context_Menu_Prompt_C_ExecuteUbergraph_WBP_Context_Menu_Prompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C9C[0x4];                                      // Fixing Size After Last Property  
	class UContextActionData*                    K2Node_Event_InData;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


