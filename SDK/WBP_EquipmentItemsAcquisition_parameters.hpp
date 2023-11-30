#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9 - 0x0)
// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.OnWidgetAnimCompleted
struct UWBP_EquipmentItemsAcquisition_C_OnWidgetAnimCompleted_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.NavigateBack
struct UWBP_EquipmentItemsAcquisition_C_NavigateBack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveTopViewRoute_ReturnValue;           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NavigateBack_ReturnValue;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.SetAcquisitionDisplay
struct UWBP_EquipmentItemsAcquisition_C_SetAcquisitionDisplay_Params
{
public:
	class UObject*                               Acquisition;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               LocalAcquisitionManager;                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct Valhalla_InventoryItem>        LocalInventoryItems;                               // 0x10(0x10)(Edit, BlueprintVisible)
};

// 0x90 (0x90 - 0x0)
// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.Get Best Item Type Text
struct UWBP_EquipmentItemsAcquisition_C_Get_Best_Item_Type_Text_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2554[0x7];                                     // Fixing Size After Last Property  
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameplayText_Text;                     // 0x38(0x18)(None)
	bool                                         CallFunc_GetGameplayText_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255D[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetFirstGameplayTextByContainer_Text;     // 0x58(0x18)(None)
	bool                                         CallFunc_GetFirstGameplayTextByContainer_ReturnValue; // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_255F[0x6];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x78(0x18)(None)
};

// 0x160 (0x160 - 0x0)
// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.SetData
struct UWBP_EquipmentItemsAcquisition_C_SetData_Params
{
public:
	TArray<struct Valhalla_InventoryItem>        InventoryItems;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	double                                       InitialDelay;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Delay_Increment;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CallFunc_Array_Get_Item;                           // 0x28(0xC8)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25BB[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xFC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25BC[0x4];                                     // Fixing Size After Last Property  
	class UWBP_AcquisitionItem_C*                CallFunc_Create_ReturnValue;                       // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_Margin                      K2Node_MakeStruct_Margin;                          // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBoxSlot*                        K2Node_DynamicCast_AsScroll_Box_Slot;              // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C0[0x3];                                     // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25C3[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.ExecuteUbergraph_WBP_EquipmentItemsAcquisition
struct UWBP_EquipmentItemsAcquisition_C_ExecuteUbergraph_WBP_EquipmentItemsAcquisition_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NavigateBack_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2604[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValGameInstance*                      K2Node_DynamicCast_AsVal_Game_Instance;            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


