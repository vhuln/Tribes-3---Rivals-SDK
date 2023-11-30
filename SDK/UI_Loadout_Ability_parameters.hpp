#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateEquipped
struct UUI_Loadout_Ability_C_UpdateEquipped_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.NavigateConfirm
struct UUI_Loadout_Ability_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NavigateConfirm_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateClassCompatible
struct UUI_Loadout_Ability_C_UpdateClassCompatible_Params
{
public:
	bool                                         Compatible;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalIsCompatible;                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35F8[0x4];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_InventoryManager;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemClassCompatible_ReturnValue;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateMastery
struct UUI_Loadout_Ability_C_UpdateMastery_Params
{
public:
	struct Valhalla_ValAbilityAffectingPassiveInfo LocalCurrentInfo;                                  // 0x0(0x30)(Edit, BlueprintVisible)
	TArray<struct Valhalla_ValAbilityAffectingPassiveInfo> LocalAbilityPassiveInfos;                          // 0x30(0x10)(Edit, BlueprintVisible)
	bool                                         LocalIsMastered;                                   // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_379C[0x3];                                     // Fixing Size After Last Property  
	int32                                        LocalHighestMasteryRequirement;                    // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37D6[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPlayerPropertyLevel_ReturnValue;       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FB[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_ValAbilityAffectingPassiveInfo CallFunc_Array_Get_Item;                           // 0x68(0x30)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3819[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3835[0x7];                                     // Fixing Size After Last Property  
	class AValGameState_Lobby*                   K2Node_DynamicCast_AsVal_Game_State_Lobby;         // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3854[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_ValAbilityAffectingPassiveInfo> CallFunc_GetPassivesAffectingAbilityByID_AffectingPassivesArray; // 0xC0(0x10)(ReferenceParm)
};

// 0x1B (0x1B - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnCallToActionRemoved
struct UUI_Loadout_Ability_C_OnCallToActionRemoved_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_398E[0x4];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         LocalItemAsset;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.SetCallToActionActive
struct UUI_Loadout_Ability_C_SetCallToActionActive_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A46[0x7];                                     // Fixing Size After Last Property  
	class AValGameState*                         CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValGameState_Lobby*                   K2Node_DynamicCast_AsVal_Game_State_Lobby;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A56[0x7];                                     // Fixing Size After Last Property  
	class AValCallToActionManager*               CallFunc_GetCallToActionManager_ReturnValue;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.Get_Button_ToolTipWidget
struct UUI_Loadout_Ability_C_Get_Button_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUI_Tooltip_Ability_C*                 CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateIconExplicit
struct UUI_Loadout_Ability_C_UpdateIconExplicit_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             SoftTexture;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x28(0x14)(None)
};

// 0x9 (0x9 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnPlayerPropertiesReady
struct UUI_Loadout_Ability_C_OnPlayerPropertiesReady_Params
{
public:
	class UObject*                               NewLocalVar;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckIsAbilityLocked_IsLocked;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x77 (0x77 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.Check Property Requirements
struct UUI_Loadout_Ability_C_Check_Property_Requirements_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         HasRequirements;                                   // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RequirementsMet;                                   // 0x9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BEA[0x6];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         LocalValEquipment;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalRequirementsMet;                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BED[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF9[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFD[0x4];                                     // Fixing Size After Last Property  
	TArray<enum class EPlayerProperty>           CallFunc_Map_Keys_Keys;                            // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C01[0x3];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct Valhalla_PlayerPropertyData>   CallFunc_GetPlayerPropertyLevels_OutData;          // 0x50(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C0E[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_PlayerPropertyData           CallFunc_Array_Get_Item;                           // 0x64(0x8)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Find_Value;                           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x76(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.GetInventoryManager
struct UUI_Loadout_Ability_C_GetInventoryManager_Params
{
public:
	class AValInventoryManager*                  InventoryManager;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateRequiredLevelText
struct UUI_Loadout_Ability_C_UpdateRequiredLevelText_Params
{
public:
	int32                                        NewLocalVar_0;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C5F[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x8(0x18)(None)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x78(0x10)(ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C6C[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.IsSelectorWidget
struct UUI_Loadout_Ability_C_IsSelectorWidget_Params
{
public:
	bool                                         IsSelector;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.Is Ability Locked
struct UUI_Loadout_Ability_C_Is_Ability_Locked_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLocked;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB1[0x7];                                     // Fixing Size After Last Property  
	class UValPlayerInventory*                   CallFunc_GetLocalPlayerInventory_ReturnValue;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInventoryOwned_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Owned_by_Default_IsOwnedByDefault;     // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Property_Requirements_HasRequirements; // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Check_Property_Requirements_RequirementsMet; // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x134 (0x134 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.Is Owned by Default
struct UUI_Loadout_Ability_C_Is_Owned_by_Default_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOwnedByDefault;                                  // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D50[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_AbilityConfig>        LocalConfigAbilities;                              // 0x10(0x10)(Edit, BlueprintVisible)
	class AValGameState_Lobby*                   LocalGameState;                                    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D5B[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue_1;                 // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D64[0x2];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D70[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_AbilityConfig>        CallFunc_GetLoadoutPassives_LoadoutPassives;       // 0x48(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D72[0x4];                                     // Fixing Size After Last Property  
	struct Valhalla_AbilityConfig                CallFunc_Array_Get_Item;                           // 0x60(0x30)(None)
	TArray<struct Valhalla_AbilityConfig>        CallFunc_GetLoadoutAbilities_LoadoutAbilities;     // 0x90(0x10)(ReferenceParm)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D79[0x7];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset;               // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D7C[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D87[0x5];                                     // Fixing Size After Last Property  
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValGameState_Lobby*                   K2Node_DynamicCast_AsVal_Game_State_Lobby;         // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D8F[0x7];                                     // Fixing Size After Last Property  
	struct Valhalla_AbilityConfig                CallFunc_Array_Get_Item_1;                         // 0xE0(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D93[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D96[0x7];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset_1;             // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x81 (0x81 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.CheckIsAbilityLocked
struct UUI_Loadout_Ability_C_CheckIsAbilityLocked_Params
{
public:
	bool                                         IsLocked;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalIsLocked;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E02[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E09[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_1;        // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_InventoryManager;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset_1;             // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue_1;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E0D[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_IsItemIdEquipped_SlotId;                  // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemIdEquipped_ReturnValue;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E14[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_2;        // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_3;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_4;        // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E19[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_IsItemIdEquipped_SlotId_1;                // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemIdEquipped_ReturnValue_1;           // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E20[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_InventoryManager_1;   // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_IsItemIdEquipped_SlotId_2;                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemIdEquipped_ReturnValue_2;           // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Is_Ability_Locked_IsLocked;               // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x7E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x7F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSelectorWidget_IsSelector;              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateRequiredLevel
struct UUI_Loadout_Ability_C_UpdateRequiredLevel_Params
{
public:
	int32                                        Level;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateEquippedItem
struct UUI_Loadout_Ability_C_UpdateEquippedItem_Params
{
public:
	bool                                         LocalUpdated;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E66[0x7];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_InventoryManager;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_InventoryManager_1;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventorySlot                CallFunc_GetEquippedSlotAt_EquippedSlot;           // 0x18(0xD0)(None)
	bool                                         CallFunc_GetEquippedSlotAt_ReturnValue;            // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E71[0x6];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateIsLocked
struct UUI_Loadout_Ability_C_UpdateIsLocked_Params
{
public:
	bool                                         IsLocked;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EB4[0x1];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_2;                    // 0x2C(0x14)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EBB[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_3;                    // 0x44(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_4;                    // 0x58(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_Select_Default;                             // 0x6C(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_Select_Default_1;                           // 0x80(0x14)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EC3[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_Select_Default_2;                           // 0x98(0x14)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnHovered
struct UUI_Loadout_Ability_C_OnHovered_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUMGSequencePlayMode              K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetBool_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE3[0x2];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnPressed
struct UUI_Loadout_Ability_C_OnPressed_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EF3[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Temp_struct_Variable;                              // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  Temp_struct_Variable_1;                            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  K2Node_Select_Default;                             // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetBool_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateSelected
struct UUI_Loadout_Ability_C_UpdateSelected_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F18[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x4(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_1;                    // 0x18(0x14)(None)
	bool                                         CallFunc_SetBool_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F20[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_Select_Default;                             // 0x30(0x14)(None)
};

// 0x40 (0x40 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnInitialized
struct UUI_Loadout_Ability_C_OnInitialized_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F46[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      K2Node_MakeStruct_Margin;                          // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct SlateCore_Margin                      K2Node_MakeStruct_Margin_1;                        // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F4A[0x4];                                     // Fixing Size After Last Property  
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_Margin                      K2Node_Select_Default;                             // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateKeybind
struct UUI_Loadout_Ability_C_UpdateKeybind_Params
{
public:
	class FName                                  Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateEnabled
struct UUI_Loadout_Ability_C_UpdateEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F82[0x6];                                     // Fixing Size After Last Property  
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateAbility
struct UUI_Loadout_Ability_C_UpdateAbility_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateClassCompatible_Compatible;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FCD[0x3];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x10(0x18)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x28(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_1;                    // 0x3C(0x14)(None)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FDC[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_Select_Default;                             // 0x54(0x14)(None)
};

// 0x10 (0x10 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateData
struct UUI_Loadout_Ability_C_UpdateData_Params
{
public:
	class UObject*                               Data;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CachedLocalEqui;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateSize
struct UUI_Loadout_Ability_C_UpdateSize_Params
{
public:
	struct SlateCore_Margin                      K2Node_MakeStruct_Margin;                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_Left_ImplicitCast;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnLoaded_82CE3A2D4C38DA0E11E4578824892B08
struct UUI_Loadout_Ability_C_OnLoaded_82CE3A2D4C38DA0E11E4578824892B08_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.PlayShowAnimWithDelay
struct UUI_Loadout_Ability_C_PlayShowAnimWithDelay_Params
{
public:
	double                                       Delay;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.PreConstruct
struct UUI_Loadout_Ability_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.UpdateAbilityFromSoftAsset
struct UUI_Loadout_Ability_C_UpdateAbilityFromSoftAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x9C (0x9C - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.ExecuteUbergraph_UI_Loadout_Ability
struct UUI_Loadout_Ability_C_ExecuteUbergraph_UI_Loadout_Ability_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C3[0x4];                                     // Fixing Size After Last Property  
	double                                       K2Node_CustomEvent_Delay;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C7[0x7];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40CB[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D4[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D8[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_Asset;                          // 0x70(0x28)(HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnItemHovered__DelegateSignature
struct UUI_Loadout_Ability_C_OnItemHovered__DelegateSignature_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnSelected__DelegateSignature
struct UUI_Loadout_Ability_C_OnSelected__DelegateSignature_Params
{
public:
	struct GameplayTags_GameplayTag              Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Loadout_Ability.UI_Loadout_Ability_C.OnClicked__DelegateSignature
struct UUI_Loadout_Ability_C_OnClicked__DelegateSignature_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


