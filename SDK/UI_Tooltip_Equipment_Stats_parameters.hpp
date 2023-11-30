#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0xB - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.UpdateItemFromAsset
struct UUI_Tooltip_Equipment_Stats_C_UpdateItemFromAsset_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Update_Weapon_Stats_Value;                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x363 (0x363 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.OnPlayerDefaultAttributesClassAvailable
struct UUI_Tooltip_Equipment_Stats_C_OnPlayerDefaultAttributesClassAvailable_Params
{
public:
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D39[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D49[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct GameplayAbilities_GameplayModifierInfo> Temp_struct_Variable;                              // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayModifierInfo CallFunc_Array_Get_Item;                           // 0x28(0x338)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue; // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.PreConstruct
struct UUI_Tooltip_Equipment_Stats_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.GetModifiers
struct UUI_Tooltip_Equipment_Stats_C_GetModifiers_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	TArray<struct GameplayAbilities_GameplayModifierInfo> Modifiers;                                         // 0x8(0x10)(Parm, OutParm)
	class UClass*                                LocalAbilityClass;                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct GameplayAbilities_GameplayModifierInfo> Temp_struct_Variable;                              // 0x20(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F49[0x7];                                     // Fixing Size After Last Property  
	class UClass*                                K2Node_ClassDynamicCast_AsVal_Gameplay_Ability;    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F5F[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              Temp_struct_Variable_1;                            // 0x44(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F71[0x4];                                     // Fixing Size After Last Property  
	TMap<struct GameplayTags_GameplayTag, struct Valhalla_ValGameplayEffectContainer> Temp_struct_Variable_2;                            // 0x50(0x50)(None)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F8E[0x7];                                     // Fixing Size After Last Property  
	struct Valhalla_ValGameplayEffectContainer   CallFunc_Map_Find_Value;                           // 0xA8(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FA4[0x7];                                     // Fixing Size After Last Property  
	class UClass*                                CallFunc_Array_Get_Item;                           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.Update Weapon Stats
struct UUI_Tooltip_Equipment_Stats_C_Update_Weapon_Stats_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20ED[0x7];                                     // Fixing Size After Last Property  
	TArray<class UWidget*>                       LocalWidgets;                                      // 0x8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct GameplayAbilities_GameplayModifierInfo> LocalModifiers;                                    // 0x18(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_212E[0x4];                                     // Fixing Size After Last Property  
	TArray<struct GameplayAbilities_GameplayModifierInfo> CallFunc_GetModifiers_Modifiers;                   // 0x38(0x10)(ReferenceParm)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_213D[0x7];                                     // Fixing Size After Last Property  
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_214F[0x4];                                     // Fixing Size After Last Property  
	class UUI_City_Armory_Details_Stat_C*        K2Node_DynamicCast_AsUI_City_Armory_Details_Stat;  // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2170[0x5];                                     // Fixing Size After Last Property  
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x70(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0xE2 (0xE2 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.UpdateItem
struct UUI_Tooltip_Equipment_Stats_C_UpdateItem_Params
{
public:
	struct Valhalla_InventoryItem                InventoryItem;                                     // 0x0(0xC8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Value;                                             // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2235[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateItemFromAsset_Value;                // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC
struct UUI_Tooltip_Equipment_Stats_C_OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.ExecuteUbergraph_UI_Tooltip_Equipment_Stats
struct UUI_Tooltip_Equipment_Stats_C_ExecuteUbergraph_UI_Tooltip_Equipment_Stats_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23BC[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsGameplay_Effect;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


