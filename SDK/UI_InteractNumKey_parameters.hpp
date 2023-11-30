#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function UI_InteractNumKey.UI_InteractNumKey_C.GetText
struct UUI_InteractNumKey_C_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x18(0x18)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function UI_InteractNumKey.UI_InteractNumKey_C.OnMouseEnter
struct UUI_InteractNumKey_C_OnMouseEnter_Params
{
public:
	struct SlateCore_Geometry                    MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct SlateCore_PointerEvent                MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB8 (0xB8 - 0x0)
// Function UI_InteractNumKey.UI_InteractNumKey_C.ExecuteUbergraph_UI_InteractNumKey
struct UUI_InteractNumKey_C_ExecuteUbergraph_UI_InteractNumKey_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_Geometry                    K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E7E[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_PointerEvent                K2Node_Event_MouseEvent;                           // 0x40(0x78)(ConstParm)
};

// 0x4 (0x4 - 0x0)
// Function UI_InteractNumKey.UI_InteractNumKey_C.OnPressed__DelegateSignature
struct UUI_InteractNumKey_C_OnPressed__DelegateSignature_Params
{
public:
	int32                                        InputDigit;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


