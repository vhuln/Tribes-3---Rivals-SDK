#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x618 (0x618 - 0x0)
// Function UI_City_Match_Summary_Stat_Item.UI_City_Match_Summary_Stat_Item_C.Update Data
struct UUI_City_Match_Summary_Stat_Item_C_Update_Data_Params
{
public:
	class FText                                  StatType;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        StatValue;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Credits;                                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGameStatType                     GameStatType;                                      // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33B6[0xF];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush;                      // 0x30(0xD0)(None)
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush_1;                    // 0x100(0xD0)(None)
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush_2;                    // 0x1D0(0xD0)(None)
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush_3;                    // 0x2A0(0xD0)(None)
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush_4;                    // 0x370(0xD0)(None)
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush_5;                    // 0x440(0xD0)(None)
	struct SlateCore_SlateBrush                  K2Node_MakeStruct_SlateBrush_6;                    // 0x510(0xD0)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C2[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x5E8(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x600(0x18)(None)
};

}
}


