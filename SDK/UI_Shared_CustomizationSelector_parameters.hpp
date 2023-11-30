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
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.NavigateConfirm
struct UUI_Shared_CustomizationSelector_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateSlotTypeDisplay
struct UUI_Shared_CustomizationSelector_C_UpdateSlotTypeDisplay_Params
{
public:
	bool                                         IsWeapon;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22B7[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValGameInstance*                      CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameplayText_Text;                     // 0x18(0x18)(None)
	bool                                         CallFunc_GetGameplayText_ReturnValue;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateWeaponSlotIcon
struct UUI_Shared_CustomizationSelector_C_UpdateWeaponSlotIcon_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22F6[0x3];                                     // Fixing Size After Last Property  
	class AValGameState*                         CallFunc_GetGameState_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValGameState_Lobby*                   K2Node_DynamicCast_AsVal_Game_State_Lobby;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_230E[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Valhalla_WeaponCosmeticConfig> CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs; // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2313[0x4];                                     // Fixing Size After Last Property  
	struct Valhalla_WeaponCosmeticConfig         CallFunc_Array_Get_Item;                           // 0x40(0x30)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_231B[0x6];                                     // Fixing Size After Last Property  
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateShowCTA
struct UUI_Shared_CustomizationSelector_C_UpdateShowCTA_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateDisplay
struct UUI_Shared_CustomizationSelector_C_UpdateDisplay_Params
{
public:
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_1;        // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue_2;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSlotIdByEquipSlot_SlotId;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSlotIdByEquipSlot_ReturnValue;         // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2384[0x3];                                     // Fixing Size After Last Property  
	struct Valhalla_InventorySlot                CallFunc_GetEquippedSlotAt_EquippedSlot;           // 0x20(0xD0)(None)
	bool                                         CallFunc_GetEquippedSlotAt_ReturnValue;            // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2386[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF8(0x18)(None)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2393[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x118(0x18)(None)
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2396[0x6];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x140(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x158(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateData
struct UUI_Shared_CustomizationSelector_C_UpdateData_Params
{
public:
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct Valhalla_InventoryItem>        CallFunc_GetCosmeticItemsForEquipSlot_InventoryItems; // 0x8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23B9[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x20(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.PreConstruct
struct UUI_Shared_CustomizationSelector_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.ExecuteUbergraph_UI_Shared_CustomizationSelector
struct UUI_Shared_CustomizationSelector_C_ExecuteUbergraph_UI_Shared_CustomizationSelector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2413[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.OnItemHovered__DelegateSignature
struct UUI_Shared_CustomizationSelector_C_OnItemHovered__DelegateSignature_Params
{
public:
	class UUI_Shared_CustomizationSelector_C*    Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.OnItemClicked__DelegateSignature
struct UUI_Shared_CustomizationSelector_C_OnItemClicked__DelegateSignature_Params
{
public:
	struct GameplayTags_GameplayTag              EquipSlot;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UUI_Shared_CustomizationSelector_C*    Widget;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


