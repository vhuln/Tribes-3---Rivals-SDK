#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x52 (0x52 - 0x0)
// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.SetRandomRewardDisplay
struct UWBP_SeasonRewardIcon_C_SetRandomRewardDisplay_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             LocalTexture;                                      // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Map_Find_Value;                           // 0x28(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.UpdateData
struct UWBP_SeasonRewardIcon_C_UpdateData_Params
{
public:
	struct Valhalla_ExperienceLevelRewardItem    CachedReward;                                      // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x89 (0x89 - 0x0)
// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.UpdateItemAsset
struct UWBP_SeasonRewardIcon_C_UpdateItemAsset_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct GameplayTags_GameplayTag>      LocalTags;                                         // 0x8(0x10)(Edit, BlueprintVisible)
	TArray<struct GameplayTags_GameplayTag>      CallFunc_BreakGameplayTagContainer_GameplayTags;   // 0x18(0x10)(ReferenceParm)
	TArray<struct GameplayTags_GameplayTag>      K2Node_MakeArray_Array;                            // 0x28(0x10)(ConstParm, ReferenceParm)
	struct GameplayTags_GameplayTagContainer     CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x38(0x20)(None)
	TArray<struct GameplayTags_GameplayTag>      K2Node_MakeArray_Array_1;                          // 0x58(0x10)(ConstParm, ReferenceParm)
	struct GameplayTags_GameplayTagContainer     CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1; // 0x68(0x20)(None)
	bool                                         CallFunc_HasAnyTags_ReturnValue;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE
struct UWBP_SeasonRewardIcon_C_OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.LoadItemAssetAsync
struct UWBP_SeasonRewardIcon_C_LoadItemAssetAsync_Params
{
public:
	TSoftObjectPtr<class UObject>                Asset;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.ExecuteUbergraph_WBP_SeasonRewardIcon
struct UWBP_SeasonRewardIcon_C_ExecuteUbergraph_WBP_SeasonRewardIcon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A32[0x4];                                      // Fixing Size After Last Property  
	TSoftObjectPtr<class UObject>                K2Node_CustomEvent_Asset;                          // 0x8(0x28)(HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValItemAsset*                         K2Node_DynamicCast_AsVal_Item_Asset;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


