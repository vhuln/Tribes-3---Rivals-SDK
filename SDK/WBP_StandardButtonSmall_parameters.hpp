#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetKeyPrompt
struct UWBP_StandardButtonSmall_C_SetKeyPrompt_Params
{
public:
	struct InputCore_Key                         Prompt;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetIconForGamepadButton_Icon;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.GetGamepadPromptKey
struct UWBP_StandardButtonSmall_C_GetGamepadPromptKey_Params
{
public:
	bool                                         HasValidKeyPrompt;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F7E[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         GamepadKey;                                        // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash)
	struct InputCore_Key                         NoneKey;                                           // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FA7[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadCancelButton_ReturnValue;       // 0x40(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FC3[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x60(0x18)(HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetHeight
struct UWBP_StandardButtonSmall_C_SetHeight_Params
{
public:
	double                                       NewHeight;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetDefaultDisplay
struct UWBP_StandardButtonSmall_C_SetDefaultDisplay_Params
{
public:
	bool                                         CallFunc_GetFontByName_HasFound;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20CC[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetWidth
struct UWBP_StandardButtonSmall_C_SetWidth_Params
{
public:
	double                                       InWidth;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetButtonText
struct UWBP_StandardButtonSmall_C_SetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.NavigateConfirm
struct UWBP_StandardButtonSmall_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.PreConstruct
struct UWBP_StandardButtonSmall_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.HandleInputStateChanged
struct UWBP_StandardButtonSmall_C_HandleInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
struct UWBP_StandardButtonSmall_C_BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
struct UWBP_StandardButtonSmall_C_BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_StandardButtonSmall_C_BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.ExecuteUbergraph_WBP_StandardButtonSmall
struct UWBP_StandardButtonSmall_C_ExecuteUbergraph_WBP_StandardButtonSmall_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   K2Node_CustomEvent_InputState;                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2568[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadPromptKey_HasValidKeyPrompt;    // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2591[0x2];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadPromptKey_GamepadKey;           // 0x20(0x18)(HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25A5[0x7];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_2;               // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25B8[0x7];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_1;               // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_Widget;                 // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonSmall_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonSmall_C_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonSmall_C_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


