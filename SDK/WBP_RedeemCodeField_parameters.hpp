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
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.SetText
struct UWBP_RedeemCodeField_C_SetText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x30 (0x30 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.GetText
struct UWBP_RedeemCodeField_C_GetText_Params
{
public:
	class FText                                  NewParam;                                          // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.NavigateConfirm
struct UWBP_RedeemCodeField_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_RedeemCodeField_C_BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_RedeemCodeField_C_BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.ExecuteUbergraph_WBP_RedeemCodeField
struct UWBP_RedeemCodeField_C_ExecuteUbergraph_WBP_RedeemCodeField_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3540[0x4];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x8(0x18)(ConstParm)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3543[0x7];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_ComponentBoundEvent_Text_1;                 // 0x28(0x18)(ConstParm)
};

// 0x19 (0x19 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextCommitted__DelegateSignature
struct UWBP_RedeemCodeField_C_OnTextCommitted__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_RedeemCodeField.WBP_RedeemCodeField_C.OnTextChanged__DelegateSignature
struct UWBP_RedeemCodeField_C_OnTextChanged__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}


