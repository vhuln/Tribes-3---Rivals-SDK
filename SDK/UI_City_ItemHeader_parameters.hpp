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
// Function UI_City_ItemHeader.UI_City_ItemHeader_C.UpdateIsEquipped
struct UUI_City_ItemHeader_C_UpdateIsEquipped_Params
{
public:
	bool                                         Equipped;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Check Dog Tag and Relation
struct UUI_City_ItemHeader_C_Check_Dog_Tag_and_Relation_Params
{
public:
	bool                                         IsDogTag;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFriendly;                                        // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Update Quantity Explicit
struct UUI_City_ItemHeader_C_Update_Quantity_Explicit_Params
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0[0x4];                                       // Fixing Size After Last Property  
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E1[0x7];                                       // Fixing Size After Last Property  
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x18(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x68(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x78(0x18)(None)
};

// 0x79 (0x79 - 0x0)
// Function UI_City_ItemHeader.UI_City_ItemHeader_C.GetBestGameplayText
struct UUI_City_ItemHeader_C_GetBestGameplayText_Params
{
public:
	class FText                                  OutText;                                           // 0x0(0x18)(Parm, OutParm)
	class UValGameInstance*                      CallFunc_GetGameInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EE[0x7];                                       // Fixing Size After Last Property  
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFirstGameplayTextByContainer_Text;     // 0x30(0x18)(None)
	bool                                         CallFunc_GetFirstGameplayTextByContainer_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0[0x7];                                       // Fixing Size After Last Property  
	class UValGameInstance*                      CallFunc_GetGameInstance_ReturnValue_1;            // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue_1;        // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameplayText_Text;                     // 0x60(0x18)(None)
	bool                                         CallFunc_GetGameplayText_ReturnValue;              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x118 (0x118 - 0x0)
// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Update Data from Equipment
struct UUI_City_ItemHeader_C_Update_Data_from_Equipment_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	enum class ERarity                           RarityOverride;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA[0x7];                                       // Fixing Size After Last Property  
	class FText                                  NameOverride;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct Valhalla_InventoryItem                InventoryItem;                                     // 0x28(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        UpgradeCount;                                      // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AccountLevel;                                      // 0xF4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Dog_Tag_and_Relation_isDogTag;      // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Dog_Tag_and_Relation_isFriendly;    // 0xFB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FE[0x1];                                       // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x100(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Update Icon
struct UUI_City_ItemHeader_C_Update_Icon_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


