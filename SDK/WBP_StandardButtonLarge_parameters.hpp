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
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled
struct UWBP_StandardButtonLarge_C_SetDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType
struct UWBP_StandardButtonLarge_C_GetFontStyleNameByType_Params
{
public:
	class FName                                  FontName;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
struct UWBP_StandardButtonLarge_C_SetHeight_Params
{
public:
	double                                       InHeight;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
struct UWBP_StandardButtonLarge_C_GetGamepadPromptKey_Params
{
public:
	bool                                         HasValidKeyPrompt;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2509[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         GamepadKey;                                        // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash)
	struct InputCore_Key                         NoneKey;                                           // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetGamepadCancelButton_ReturnValue;       // 0x38(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2513[0x6];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x58(0x18)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
struct UWBP_StandardButtonLarge_C_Set_Key_Prompt_Params
{
public:
	struct InputCore_Key                         Prompt;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
struct UWBP_StandardButtonLarge_C_SetGamepadPromptForAction_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetGamepadButtonForAction_Button;         // 0x8(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadButtonForAction_ReturnValue;    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB9 (0xB9 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
struct UWBP_StandardButtonLarge_C_SetDefaultDisplay_Params
{
public:
	struct Slate_Anchors                         K2Node_MakeStruct_Anchors;                         // 0x0(0x20)(NoDestructor)
	class FName                                  CallFunc_GetFontStyleNameByType_FontName;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFontByName_HasFound;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257B[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo;                   // 0x30(0x58)(HasGetValueTypeHash)
	struct Slate_Anchors                         K2Node_MakeStruct_Anchors_1;                       // 0x88(0x20)(NoDestructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2588[0x7];                                     // Fixing Size After Last Property  
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
struct UWBP_StandardButtonLarge_C_SetWidth_Params
{
public:
	double                                       InWidth;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
struct UWBP_StandardButtonLarge_C_SetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
struct UWBP_StandardButtonLarge_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
struct UWBP_StandardButtonLarge_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
struct UWBP_StandardButtonLarge_C_HandleInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
struct UWBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   K2Node_CustomEvent_InputState;                     // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26CB[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadPromptKey_HasValidKeyPrompt;    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D9[0x3];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadPromptKey_GamepadKey;           // 0x20(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26E6[0x4];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_2;               // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_1;               // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_Widget;                 // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonLarge_C_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


