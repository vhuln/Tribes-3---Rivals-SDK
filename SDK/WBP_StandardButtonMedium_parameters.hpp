#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey
struct UWBP_StandardButtonMedium_C_GetGamepadPromptKey_Params
{
public:
	bool                                         HasValidKeyPrompt;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31E5[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         GamepadKey;                                        // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash)
	struct InputCore_Key                         NoneKey;                                           // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct InputCore_Key                         CallFunc_GetGamepadCancelButton_ReturnValue;       // 0x38(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3229[0x6];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x58(0x18)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt
struct UWBP_StandardButtonMedium_C_SetKeyPrompt_Params
{
public:
	struct InputCore_Key                         GamepadButton;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xA9 (0xA9 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay
struct UWBP_StandardButtonMedium_C_SetDefaultDisplay_Params
{
public:
	struct Slate_Anchors                         K2Node_MakeStruct_Anchors;                         // 0x0(0x20)(NoDestructor)
	bool                                         CallFunc_GetFontByName_HasFound;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C6[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo;                   // 0x28(0x58)(HasGetValueTypeHash)
	struct Slate_Anchors                         K2Node_MakeStruct_Anchors_1;                       // 0x80(0x20)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth
struct UWBP_StandardButtonMedium_C_SetWidth_Params
{
public:
	double                                       InWidth;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText
struct UWBP_StandardButtonMedium_C_SetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm
struct UWBP_StandardButtonMedium_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct
struct UWBP_StandardButtonMedium_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged
struct UWBP_StandardButtonMedium_C_HandleInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
struct UWBP_StandardButtonMedium_C_BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
struct UWBP_StandardButtonMedium_C_BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWBP_StandardButtonMedium_C_BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium
struct UWBP_StandardButtonMedium_C_ExecuteUbergraph_WBP_StandardButtonMedium_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   K2Node_CustomEvent_InputState;                     // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A63[0x1];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadPromptKey_HasValidKeyPrompt;    // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A66[0x2];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadPromptKey_GamepadKey;           // 0x20(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_1;  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A76[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadPromptKey_GamepadKey_1;         // 0x40(0x18)(HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_2;  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A8D[0x5];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadPromptKey_GamepadKey_2;         // 0x60(0x18)(HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A96[0x6];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_2;               // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_1;               // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_ComponentBoundEvent_Widget;                 // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButtonMedium_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature
struct UWBP_StandardButtonMedium_C_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature
struct UWBP_StandardButtonMedium_C_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


