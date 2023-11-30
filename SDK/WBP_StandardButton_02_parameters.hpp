#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x178 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetDefaultDisplay
struct UWBP_StandardButton_02_C_SetDefaultDisplay_Params
{
public:
	enum class E_ButtonFontStyle                 Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFontByName_HasFound;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36C4[0x6];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo;                   // 0x8(0x58)(HasGetValueTypeHash)
	bool                                         CallFunc_GetFontByName_HasFound_1;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CC[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo_1;                 // 0x68(0x58)(HasGetValueTypeHash)
	bool                                         CallFunc_GetFontByName_HasFound_2;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D0[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo_2;                 // 0xC8(0x58)(HasGetValueTypeHash)
	struct SlateCore_SlateFontInfo               K2Node_Select_Default;                             // 0x120(0x58)(HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetWidth
struct UWBP_StandardButton_02_C_SetWidth_Params
{
public:
	double                                       InWidth;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast; // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetButtonText
struct UWBP_StandardButton_02_C_SetButtonText_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.NavigateConfirm
struct UWBP_StandardButton_02_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.PreConstruct
struct UWBP_StandardButton_02_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.ExecuteUbergraph_WBP_StandardButton_02
struct UWBP_StandardButton_02_C_ExecuteUbergraph_WBP_StandardButton_02_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3768[0x3];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnUnhovered__DelegateSignature
struct UWBP_StandardButton_02_C_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnHovered__DelegateSignature
struct UWBP_StandardButton_02_C_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnClicked__DelegateSignature
struct UWBP_StandardButton_02_C_OnClicked__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


