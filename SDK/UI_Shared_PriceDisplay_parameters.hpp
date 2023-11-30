#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x81 - 0x0)
// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.UpdateData
struct UUI_Shared_PriceDisplay_C_UpdateData_Params
{
public:
	int32                                        Price;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Currency_Item_Id;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35D7[0x7];                                     // Fixing Size After Last Property  
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_Select_Default;                             // 0x38(0x14)(None)
	uint8                                        Pad_35FB[0x4];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3616[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetInventoryItemCount_ItemCount;          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3647[0x6];                                     // Fixing Size After Last Property  
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3665[0x7];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         CallFunc_GetItemAssetById_ItemAsset;               // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemAssetById_ReturnValue;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.PreConstruct
struct UUI_Shared_PriceDisplay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.OnInventoryCacheUpdated
struct UUI_Shared_PriceDisplay_C_OnInventoryCacheUpdated_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x69 (0x69 - 0x0)
// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.ExecuteUbergraph_UI_Shared_PriceDisplay
struct UUI_Shared_PriceDisplay_C_ExecuteUbergraph_UI_Shared_PriceDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E2[0x4];                                     // Fixing Size After Last Property  
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A20[0x5];                                     // Fixing Size After Last Property  
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue_1;         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue_1;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A6E[0x6];                                     // Fixing Size After Last Property  
	TArray<int32>                                K2Node_CustomEvent_ItemIds;                        // 0x58(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


