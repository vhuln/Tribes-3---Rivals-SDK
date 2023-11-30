#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x280 (0x280 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText
struct UWBP_PlayerContextMenuOption_C_GetCurrentOptionText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	enum class EPlayerContextOptions             Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351E[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x50(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x68(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x80(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x98(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xC8(0x18)(None)
	class FText                                  Temp_text_Variable_8;                              // 0xE0(0x18)(None)
	class FText                                  Temp_text_Variable_9;                              // 0xF8(0x18)(None)
	class FText                                  Temp_text_Variable_10;                             // 0x110(0x18)(None)
	class FText                                  Temp_text_Variable_11;                             // 0x128(0x18)(None)
	class FText                                  Temp_text_Variable_12;                             // 0x140(0x18)(None)
	class FText                                  Temp_text_Variable_13;                             // 0x158(0x18)(None)
	class FText                                  Temp_text_Variable_14;                             // 0x170(0x18)(None)
	class FText                                  Temp_text_Variable_15;                             // 0x188(0x18)(None)
	class FText                                  Temp_text_Variable_16;                             // 0x1A0(0x18)(None)
	class FText                                  Temp_text_Variable_17;                             // 0x1B8(0x18)(None)
	class FText                                  Temp_text_Variable_18;                             // 0x1D0(0x18)(None)
	class FText                                  Temp_text_Variable_19;                             // 0x1E8(0x18)(None)
	class FText                                  Temp_text_Variable_20;                             // 0x200(0x18)(None)
	class FText                                  Temp_text_Variable_21;                             // 0x218(0x18)(None)
	class FText                                  Temp_text_Variable_22;                             // 0x230(0x18)(None)
	enum class EPlayerContextOptions             CallFunc_GetContextOption_ReturnValue;             // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3531[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetPlatformViewProfileText_Return_Value;  // 0x250(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x268(0x18)(None)
};

// 0x2 (0x2 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm
struct UWBP_PlayerContextMenuOption_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerContextOptions             CallFunc_GetContextOption_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation
struct UWBP_PlayerContextMenuOption_C_IsActiveForNavigation_Params
{
public:
	bool                                         Return_Value;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility
struct UWBP_PlayerContextMenuOption_C_Update_Callout_Visibility_Params
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
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct
struct UWBP_PlayerContextMenuOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed
struct UWBP_PlayerContextMenuOption_C_Handle_Input_State_Changed_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
struct UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature_Params
{
public:
	bool                                         IsGamepad;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.HandleActive
struct UWBP_PlayerContextMenuOption_C_HandleActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.HandleVisibility
struct UWBP_PlayerContextMenuOption_C_HandleVisibility_Params
{
public:
	bool                                         IsVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x73 (0x73 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption
struct UWBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isVisibility;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3600[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3604[0x4];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         CallFunc_GetGamepadConfirmButton_ReturnValue;      // 0x20(0x18)(HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetIconForGamepadButton_Icon;             // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   K2Node_CustomEvent_InputState;                     // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_IsGamepad;              // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3612[0x1];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetCurrentOptionText_ReturnValue;         // 0x58(0x18)(None)
	enum class EPlayerContextOptions             CallFunc_GetContextOption_ReturnValue;             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isActive;                             // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnContextOptionSelected__DelegateSignature
struct UWBP_PlayerContextMenuOption_C_OnContextOptionSelected__DelegateSignature_Params
{
public:
	enum class EPlayerContextOptions             Context_Option;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


