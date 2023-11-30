#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.SetSellPrice
struct UUI_Tooltip_Equipment_Comparison_C_SetSellPrice_Params
{
public:
	struct Valhalla_ShopItemPrice                Price;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateComparisonPlacement
struct UUI_Tooltip_Equipment_Comparison_C_UpdateComparisonPlacement_Params
{
public:
	enum class EMenuPlacement                    Placement;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0B[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0D[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Temp_struct_Variable_1;                            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E11[0x6];                                      // Fixing Size After Last Property  
	struct Slate_Anchors                         K2Node_MakeStruct_Anchors;                         // 0x38(0x20)(NoDestructor)
	struct Slate_Anchors                         K2Node_MakeStruct_Anchors_1;                       // 0x58(0x20)(NoDestructor)
	struct CoreUObject_Vector2D                  K2Node_Select_Default;                             // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Slate_Anchors                         K2Node_Select_Default_1;                           // 0x88(0x20)(NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateFromAsset
struct UUI_Tooltip_Equipment_Comparison_C_UpdateFromAsset_Params
{
public:
	class UValItemAsset*                         Asset;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateDisplay
struct UUI_Tooltip_Equipment_Comparison_C_UpdateDisplay_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.CanCompare
struct UUI_Tooltip_Equipment_Comparison_C_CanCompare_Params
{
public:
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         CanEquipSlotCompare;                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E43[0x7];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     AllowedSlots;                                      // 0x10(0x20)(Edit, BlueprintVisible)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesAnyTags_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D2 (0x1D2 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateItem
struct UUI_Tooltip_Equipment_Comparison_C_UpdateItem_Params
{
public:
	struct Valhalla_InventoryItem                Item;                                              // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Disallow_Unequip;                                  // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquippedItem;                                    // 0xC9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E60[0x6];                                      // Fixing Size After Last Property  
	class AValInventoryManager*                  LocalInventoryManager;                             // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E64[0x7];                                      // Fixing Size After Last Property  
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E69[0x6];                                      // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSlotIdByEquipSlot_SlotId;              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSlotIdByEquipSlot_ReturnValue;         // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E6D[0x3];                                      // Fixing Size After Last Property  
	struct Valhalla_InventorySlot                CallFunc_GetEquippedSlotAt_EquippedSlot;           // 0x100(0xD0)(None)
	bool                                         CallFunc_GetEquippedSlotAt_ReturnValue;            // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanCompare_CanEquipSlotCompare;           // 0x1D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.ExecuteUbergraph_UI_Tooltip_Equipment_Comparison
struct UUI_Tooltip_Equipment_Comparison_C_ExecuteUbergraph_UI_Tooltip_Equipment_Comparison_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


