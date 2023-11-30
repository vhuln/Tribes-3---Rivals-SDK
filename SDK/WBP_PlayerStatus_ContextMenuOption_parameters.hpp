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
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.NavigateConfirm
struct UWBP_PlayerStatus_ContextMenuOption_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.IsActiveForNavigation
struct UWBP_PlayerStatus_ContextMenuOption_C_IsActiveForNavigation_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Update Callout Visibility
struct UWBP_PlayerStatus_ContextMenuOption_C_Update_Callout_Visibility_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.PreConstruct
struct UWBP_PlayerStatus_ContextMenuOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.SetActiveInMenu
struct UWBP_PlayerStatus_ContextMenuOption_C_SetActiveInMenu_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.Handle Input State Changed
struct UWBP_PlayerStatus_ContextMenuOption_C_Handle_Input_State_Changed_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
struct UWBP_PlayerStatus_ContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption
struct UWBP_PlayerStatus_ContextMenuOption_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3589[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerStatusOption               Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358B[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsActive;                       // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358D[0x6];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
	struct InputCore_Key                         CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x58(0x18)(HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetIconForGamepadButton_Icon;             // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   K2Node_CustomEvent_InputState;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsGamepad;              // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35AB[0x1];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C.OnContextOptionSelected__DelegateSignature
struct UWBP_PlayerStatus_ContextMenuOption_C_OnContextOptionSelected__DelegateSignature_Params
{
public:
	enum class EPlayerStatusOption               Context_Option;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


