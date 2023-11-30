#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.DisplayPlayerLevelUp
struct UWBP_Toast2_C_DisplayPlayerLevelUp_Params
{
public:
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x8(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x58(0x18)(None)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)(None)
};

// 0x80 (0x80 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.DisplayAwardUnlock
struct UWBP_Toast2_C_DisplayAwardUnlock_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26A[0x7];                                      // Fixing Size After Last Property  
	TSoftObjectPtr<class UPlatformInventoryItem> CallFunc_GetInventoryItem_ReturnValue;             // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlatformInventoryItem*                K2Node_DynamicCast_AsPlatform_Inventory_Item;      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_272[0x7];                                      // Fixing Size After Last Property  
	class UIconInfo*                             CallFunc_GetItemIconInfo_ReturnValue;              // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemName_ReturnValue;                  // 0x50(0x18)(None)
	class FText                                  CallFunc_GetItemType_ItemType;                     // 0x68(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
struct UWBP_Toast2_C_DisplayItemUnlock_Params
{
public:
	class UIconInfo*                             CallFunc_GetItemIconInfo_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetItemName_ReturnValue;                  // 0x8(0x18)(None)
	class FText                                  CallFunc_GetItemType_ItemType;                     // 0x20(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
struct UWBP_Toast2_C_OnWaitingFinished_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
struct UWBP_Toast2_C_OnIntroFinished_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SafeDivide_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
struct UWBP_Toast2_C_SetRarityTint_Params
{
public:
	struct CoreUObject_LinearColor               RarityBase;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               RarityHighlight;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.PreConstruct
struct UWBP_Toast2_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
struct UWBP_Toast2_C_ExecuteUbergraph_WBP_Toast2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B2[0x3];                                      // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B7[0x3];                                      // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
struct UWBP_Toast2_C_OnRemoveToastNotification__DelegateSignature_Params
{
public:
	class URHWidget*                             ToastWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


