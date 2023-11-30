#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x54 - 0x0)
// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
struct UWBP_ToastNotifcation_Entry_C_SetViewStyle_Params
{
public:
	enum class EToastCategory                    ToastCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D35[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_2;                    // 0x2C(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_3;                    // 0x40(0x14)(None)
};

// 0x50 (0x50 - 0x0)
// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
struct UWBP_ToastNotifcation_Entry_C_ExecuteUbergraph_WBP_ToastNotifcation_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D58[0x4];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
struct UWBP_ToastNotifcation_Entry_C_OnRemoveToastNotification__DelegateSignature_Params
{
public:
	class URHWidget*                             ToastWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


