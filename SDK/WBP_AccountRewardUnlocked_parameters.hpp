#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.Get Best Item Type Text
struct UWBP_AccountRewardUnlocked_C_Get_Best_Item_Type_Text_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  OutText;                                           // 0x8(0x18)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34D7[0x7];                                     // Fixing Size After Last Property  
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValDataTableManager*                  CallFunc_GetDataTableManager_ReturnValue_1;        // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetGameplayText_Text;                     // 0x38(0x18)(None)
	bool                                         CallFunc_GetGameplayText_ReturnValue;              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FC[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetFirstGameplayTextByContainer_Text;     // 0x58(0x18)(None)
	bool                                         CallFunc_GetFirstGameplayTextByContainer_ReturnValue; // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3526[0x6];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x78(0x18)(None)
};

// 0x40 (0x40 - 0x0)
// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.SetData
struct UWBP_AccountRewardUnlocked_C_SetData_Params
{
public:
	class UValItemAsset*                         ItemAsset;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Get_Best_Item_Type_Text_OutText;          // 0x10(0x18)(None)
	bool                                         CallFunc_MatchesAnyTags_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35F4[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               CallFunc_GetColorFromRarity_ReturnValue;           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_AccountRewardUnlocked.WBP_AccountRewardUnlocked_C.ExecuteUbergraph_WBP_AccountRewardUnlocked
struct UWBP_AccountRewardUnlocked_C_ExecuteUbergraph_WBP_AccountRewardUnlocked_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36BC[0x4];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


