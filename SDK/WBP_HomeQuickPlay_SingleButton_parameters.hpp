#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnDevQueueSelectionChanged
struct UWBP_HomeQuickPlay_SingleButton_C_OnDevQueueSelectionChanged_Params
{
public:
	class FText                                  SelectionText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        SelectionIndex;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ShouldShowDevSelect
struct UWBP_HomeQuickPlay_SingleButton_C_ShouldShowDevSelect_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateDevSelectMenuVisibility
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateDevSelectMenuVisibility_Params
{
public:
	bool                                         LocalShowDevSelect;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21DD[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  CallFunc_MakeVector2D_ReturnValue;                 // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowDevSelect_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE4 (0xE4 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateDevQueueOptions
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateDevQueueOptions_Params
{
public:
	class FString                                LocalPreferredQueueSelection;                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        PrimaryQueueOption;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2239[0x4];                                     // Fixing Size After Last Property  
	TArray<class FString>                        CallFunc_Map_Values_Values;                        // 0x28(0x10)(ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223B[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_223D[0x4];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_Map_Find_Value;                           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2245[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224A[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item;                           // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedOptionByIndex_Success;         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedOptionByIndex_Success_1;       // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2253[0x5];                                     // Fixing Size After Last Property  
	TArray<class URH_MatchmakingQueueInfo*>      CallFunc_GetQueues_ReturnValue;                    // 0xA8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2258[0x4];                                     // Fixing Size After Last Property  
	class URH_MatchmakingQueueInfo*              CallFunc_Array_Get_Item_1;                         // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_225E[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetQueueId_ReturnValue;                   // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsActive_ReturnValue;                     // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateQueueTypeNav
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateQueueTypeNav_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A6[0x6];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_1;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnAppSettingsUpdated
struct UWBP_HomeQuickPlay_SingleButton_C_OnAppSettingsUpdated_Params
{
public:
	class URH_ConfigSubsystem*                   ConfigSubsystem;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPlayerInventoryCacheUpdated
struct UWBP_HomeQuickPlay_SingleButton_C_OnPlayerInventoryCacheUpdated_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x51 (0x51 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.Get Queue IDSetting
struct UWBP_HomeQuickPlay_SingleButton_C_Get_Queue_IDSetting_Params
{
public:
	class FString                                AppSetting;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                         Valid;                                             // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22E0[0x7];                                     // Fixing Size After Last Property  
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_ConfigSubsystem*                   CallFunc_GetConfigSubsystem_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22E3[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetAppSetting_Value;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAppSetting_ReturnValue;                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateSettings
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateSettings_Params
{
public:
	class URH_ConfigSubsystem*                   LocalConfigSubsystem;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Get_Queue_IDSetting_ReturnValue;          // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Queue_IDSetting_Valid;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2340[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetAppSetting_Value;                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAppSetting_ReturnValue;                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2345[0x4];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_Get_Queue_IDSetting_ReturnValue_1;        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Get_Queue_IDSetting_Valid_1;              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2347[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetAppSetting_Value_1;                    // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAppSetting_ReturnValue_1;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2348[0x7];                                     // Fixing Size After Last Property  
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_234A[0x7];                                     // Fixing Size After Last Property  
	class URH_ConfigSubsystem*                   CallFunc_GetConfigSubsystem_ReturnValue;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C (0x2C - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsPartyFillFeatureEnabled
struct UWBP_HomeQuickPlay_SingleButton_C_IsPartyFillFeatureEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_237F[0x7];                                     // Fixing Size After Last Property  
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_ConfigSubsystem*                   CallFunc_GetConfigSubsystem_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetAppSetting_Value;                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAppSetting_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPendingPartyMemberAccepted
struct UWBP_HomeQuickPlay_SingleButton_C_OnPendingPartyMemberAccepted_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_IsReady_IsReady;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateMissionCost
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateMissionCost_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)(None)
	int32                                        CallFunc_Get_Local_Count_for_Item_Id_Count;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23CD[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_CalculateDisplayEntryCost_ReturnValue;    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23CF[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x28(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D3[0x7];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x48(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateSoloButtonState
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateSoloButtonState_Params
{
public:
	class URHPartyManager*                       LocalPartyDataFactory;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.SetDefaultQueuePreference
struct UWBP_HomeQuickPlay_SingleButton_C_SetDefaultQueuePreference_Params
{
public:
	int32                                        LocalValue;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23ED[0x4];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetSelectedQueueId_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class URH_MatchmakingQueueInfo*              CallFunc_GetQueueInfoById_ReturnValue;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62 (0x62 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnQueuePreferenceButtonSelected
struct UWBP_HomeQuickPlay_SingleButton_C_OnQueuePreferenceButtonSelected_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyFillFeatureEnabled_Enabled;        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242B[0x7];                                     // Fixing Size After Last Property  
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValGameUserSettings*                  K2Node_DynamicCast_AsVal_Game_User_Settings;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_242D[0x5];                                     // Fixing Size After Last Property  
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2430[0x4];                                     // Fixing Size After Last Property  
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2433[0x7];                                     // Fixing Size After Last Property  
	class UUI_Button_Menu_C*                     K2Node_DynamicCast_AsUI_Button_Menu;               // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BindQueuePreferenceButtons
struct UWBP_HomeQuickPlay_SingleButton_C_BindQueuePreferenceButtons_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2488[0x4];                                     // Fixing Size After Last Property  
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_248A[0x4];                                     // Fixing Size After Last Property  
	class UValGameUserSettings*                  K2Node_DynamicCast_AsVal_Game_User_Settings;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSquadsQueueSelected_ReturnValue;       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_249C[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24A8[0x3];                                     // Fixing Size After Last Property  
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24AD[0x4];                                     // Fixing Size After Last Property  
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24B0[0x7];                                     // Fixing Size After Last Property  
	class UUI_Button_Menu_C*                     K2Node_DynamicCast_AsUI_Button_Menu;               // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetSoloQueuePreference
struct UWBP_HomeQuickPlay_SingleButton_C_GetSoloQueuePreference_Params
{
public:
	bool                                         QueueForSolo;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetSkillScore
struct UWBP_HomeQuickPlay_SingleButton_C_GetSkillScore_Params
{
public:
	int32                                        SkillScore;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalHighestCount;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ReputationId;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Get_Local_Count_for_Item_Id_Count;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_250A[0x3];                                     // Fixing Size After Last Property  
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct RallyHereStart_RH_PartyMemberData> CallFunc_GetPartyMembers_ReturnValue;              // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2511[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_PartyMemberData     CallFunc_Array_Get_Item;                           // 0x40(0x30)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2516[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_251A[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetInventoryItemCount_ItemCount;          // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x92 (0x92 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetBestQueue
struct UWBP_HomeQuickPlay_SingleButton_C_GetBestQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class URH_MatchmakingQueueInfo*              LocalClientQueueInfo;                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPartyQueueId;                                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DesiresSolo;                                       // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2562[0x3];                                     // Fixing Size After Last Property  
	int32                                        LocalMaxLevel;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2564[0x4];                                     // Fixing Size After Last Property  
	class FString                                LocalBestQueueId;                                  // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                        LocalMinLevel;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalHighestMin;                                   // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalCurrentLevel;                                 // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowDevSelect_ReturnValue;          // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2579[0x2];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetSelectedOption_Selection;              // 0x48(0x18)(None)
	int32                                        CallFunc_GetSelectedOption_Index;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_257D[0x3];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_Map_Find_Value;                           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2587[0x6];                                     // Fixing Size After Last Property  
	class FString                                K2Node_Select_Default;                             // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSoloQueuePreference_QueueForSolo;      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B0 (0x3B0 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.Calculate Matchmaking Attributes
struct UWBP_HomeQuickPlay_SingleButton_C_Calculate_Matchmaking_Attributes_Params
{
public:
	struct RallyHereStart_RHMatchmakingAttributes Attributes;                                        // 0x0(0x140)(Parm, OutParm)
	TSet<class FString>                          Local_Matchmaking_Tag_Attributes;                  // 0x140(0x50)(Edit, BlueprintVisible)
	TMap<class FString, double>                  Local_Matchmaking_Double_Attributes;               // 0x190(0x50)(Edit, BlueprintVisible)
	class FString                                Temp_string_Variable;                              // 0x1E0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyFillFeatureEnabled_Enabled;        // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E2[0x6];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RHMatchmakingAttributes K2Node_MakeStruct_RHMatchmakingAttributes;         // 0x1F8(0x140)(None)
	class FString                                Temp_string_Variable_1;                            // 0x338(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSkillScore_SkillScore;                 // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E5[0x4];                                     // Fixing Size After Last Property  
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChecked_Checked;                        // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x359(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25F0[0x6];                                     // Fixing Size After Last Property  
	TMap<class FString, float>                   K2Node_MakeStruct_DoubleAttributes_ImplicitCast;   // 0x360(0x50)(None)
};

// 0x11 (0x11 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.On Party Updated
struct UWBP_HomeQuickPlay_SingleButton_C_On_Party_Updated_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2617[0x7];                                     // Fixing Size After Last Property  
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInParty_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdatePartyMemberReady
struct UWBP_HomeQuickPlay_SingleButton_C_UpdatePartyMemberReady_Params
{
public:
	bool                                         CallFunc_IsReady_IsReady;                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              CallFunc_GetCurrentQuickPlayState_ReturnValue;     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyMemberDataUpdated
struct UWBP_HomeQuickPlay_SingleButton_C_OnPartyMemberDataUpdated_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BindPartyReadyEvents
struct UWBP_HomeQuickPlay_SingleButton_C_BindPartyReadyEvents_Params
{
public:
	class URHQueueDataFactory*                   LocalQueueFactory;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHPartyManager*                       LocalPartyFactory;                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x70(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x90(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xA0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ARHLobbyHUD*                           K2Node_DynamicCast_AsRHLobby_HUD;                  // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26FC[0x7];                                     // Fixing Size After Last Property  
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHQueueDataFactory*                   CallFunc_GetQueueDataFactory_ReturnValue;          // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyMemberReadyUpdated
struct UWBP_HomeQuickPlay_SingleButton_C_OnPartyMemberReadyUpdated_Params
{
public:
	class UObject*                               Sender;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReady;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.SetIsReady
struct UWBP_HomeQuickPlay_SingleButton_C_SetIsReady_Params
{
public:
	bool                                         bIsReady;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2748[0x7];                                     // Fixing Size After Last Property  
	class ARHHUDCommon*                          CallFunc_GetHUDCommon_HUD_Common;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsReady
struct UWBP_HomeQuickPlay_SingleButton_C_IsReady_Params
{
public:
	bool                                         IsReady;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2775[0x7];                                     // Fixing Size After Last Property  
	class ARHHUDCommon*                          CallFunc_GetHUDCommon_HUD_Common;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsReady_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B (0x1B - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsPartyReady
struct UWBP_HomeQuickPlay_SingleButton_C_IsPartyReady_Params
{
public:
	bool                                         PartyIsReady;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_278B[0x7];                                     // Fixing Size After Last Property  
	class ARHHUDCommon*                          CallFunc_GetHUDCommon_HUD_Common;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyReady_ReturnValue;                 // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x100 (0x100 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateButtonState
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateButtonState_Params
{
public:
	bool                                         bIsReady;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPartyIsReady;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              QuickPlayState;                                    // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanControl;                                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27F7[0x3];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27FF[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2802[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable_3;                              // 0x60(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x78(0x18)(None)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x97(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyFillFeatureEnabled_Enabled;        // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyFillFeatureEnabled_Enabled_1;      // 0x9B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_280A[0x4];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0xA0(0x18)(None)
	bool                                         Temp_bool_Variable_3;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2815[0x4];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default_1;                           // 0xC0(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0xD8(0x18)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsReady_IsReady;                          // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyReady_PartyIsReady;                // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              CallFunc_GetCurrentQuickPlayState_ReturnValue;     // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_281C[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0xFD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetQueuePermissions_CanControl;           // 0xFE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetQueuePermissions_CanQueue;             // 0xFF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsTrainingQueue
struct UWBP_HomeQuickPlay_SingleButton_C_IsTrainingQueue_Params
{
public:
	int32                                        QueueId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTraining;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284B[0x3];                                     // Fixing Size After Last Property  
	TArray<int32>                                TrainingQueueIds;                                  // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_284F[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetQueuedTimeText
struct UWBP_HomeQuickPlay_SingleButton_C_GetQueuedTimeText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FText                                  CallFunc_FormatSecondsToTimerText_Timer_Text;      // 0x18(0x18)(None)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x30(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x80(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x90(0x18)(None)
};

// 0x2B (0x2B - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateQueueTimer
struct UWBP_HomeQuickPlay_SingleButton_C_UpdateQueueTimer_Params
{
public:
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPendingQueueUpdate_ReturnValue;         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_288B[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_288F[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_FormatSecondsToTimerText_Timer_Text;      // 0x10(0x18)(None)
	enum class EQuickPlayQueueState              CallFunc_GetCurrentQuickPlayState_ReturnValue;     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.HandleQuickPlayStateUpdate
struct UWBP_HomeQuickPlay_SingleButton_C_HandleQuickPlayStateUpdate_Params
{
public:
	enum class EQuickPlayQueueState              LocalQuickPlayState;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanControl;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              CallFunc_GetCurrentQuickPlayState_ReturnValue;     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7 (0x7 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ApplyKeyShortcutsEnabled
struct UWBP_HomeQuickPlay_SingleButton_C_ApplyKeyShortcutsEnabled_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetNavigationWidgets
struct UWBP_HomeQuickPlay_SingleButton_C_GetNavigationWidgets_Params
{
public:
	TArray<class URHWidget*>                     Return_Value;                                      // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class URHWidget*>                     K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.HandleInputModeChanged
struct UWBP_HomeQuickPlay_SingleButton_C_HandleInputModeChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputMode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.SetupGamepadCallout
struct UWBP_HomeQuickPlay_SingleButton_C_SetupGamepadCallout_Params
{
public:
	struct InputCore_Key                         CallFunc_GetGamepadButtonForAction_Button;         // 0x0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_GetGamepadButtonForAction_ReturnValue;    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_290F[0x7];                                     // Fixing Size After Last Property  
	class UTexture2D*                            CallFunc_GetIconForGamepadButton_Icon;             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
struct UWBP_HomeQuickPlay_SingleButton_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
struct UWBP_HomeQuickPlay_SingleButton_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnUpdateQuickPlayState
struct UWBP_HomeQuickPlay_SingleButton_C_OnUpdateQuickPlayState_Params
{
public:
	enum class EQuickPlayQueueState              QueueState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnSelectedQueueUpdate
struct UWBP_HomeQuickPlay_SingleButton_C_OnSelectedQueueUpdate_Params
{
public:
	class URH_MatchmakingQueueInfo*              CurrentSelectedQueue;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnQueueStateUpdate
struct UWBP_HomeQuickPlay_SingleButton_C_OnQueueStateUpdate_Params
{
public:
	enum class ERH_MatchStatus                   CurrentMatchStatus;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnUpdateQueueTimeElapsed
struct UWBP_HomeQuickPlay_SingleButton_C_OnUpdateQueueTimeElapsed_Params
{
public:
	float                                        TimeElapsed;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyMemberPromoted
struct UWBP_HomeQuickPlay_SingleButton_C_OnPartyMemberPromoted_Params
{
public:
	int64                                        PlayerId;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x260 (0x260 - 0x0)
// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ExecuteUbergraph_WBP_HomeQuickPlay_SingleButton
struct UWBP_HomeQuickPlay_SingleButton_C_ExecuteUbergraph_WBP_HomeQuickPlay_SingleButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              K2Node_Event_QueueState;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              CallFunc_GetCurrentQuickPlayState_ReturnValue;     // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A02[0x2];                                     // Fixing Size After Last Property  
	class URH_MatchmakingQueueInfo*              K2Node_Event_CurrentSelectedQueue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EQuickPlayQueueState              CallFunc_GetCurrentQuickPlayState_ReturnValue_1;   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetQueuePermissions_CanControl;           // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetQueuePermissions_CanQueue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_MatchStatus                   K2Node_Event_CurrentMatchStatus;                   // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_TimeElapsed;                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UIX_AttemptLeaveMatch_ReturnValue;        // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0F[0x3];                                     // Fixing Size After Last Property  
	class ARHLobbyHUD*                           K2Node_DynamicCast_AsRHLobby_HUD;                  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A14[0x7];                                     // Fixing Size After Last Property  
	class URHQueueDataFactory*                   CallFunc_GetQueueDataFactory_ReturnValue;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddViewRoute_ReturnValue;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A16[0x7];                                     // Fixing Size After Last Property  
	class ABP_BrightLobbyHUD_C*                  K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;          // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A19[0x7];                                     // Fixing Size After Last Property  
	class URHQueueDataFactory*                   CallFunc_GetQueueDataFactory_ReturnValue_1;        // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInCustomMatch_ReturnValue;              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A1C[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue; // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A23[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetBestQueue_QueueId;                     // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedQueueId_ReturnValue;           // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A27[0x6];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RHMatchmakingAttributes CallFunc_Calculate_Matchmaking_Attributes_Attributes; // 0x90(0x140)(None)
	class UWidget*                               K2Node_ComponentBoundEvent_Widget;                 // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetSelectedMatchmakingAttributes_ReturnValue; // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A2C[0x7];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_ComponentBoundEvent_Widget_1;               // 0x1E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1E8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        K2Node_CustomEvent_PlayerId;                       // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x200(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UIX_AttemptCancelQueue_ReturnValue;       // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A3C[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A45[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x22C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A47[0x4];                                     // Fixing Size After Last Property  
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_ConfigSubsystem*                   CallFunc_GetConfigSubsystem_ReturnValue;           // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSoloQueuePreference_QueueForSolo;      // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A4C[0x6];                                     // Fixing Size After Last Property  
	double                                       K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast; // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


