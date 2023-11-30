#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPlayerInventoryChanged
struct UWBP_QueueSelect_QueueButton_C_OnPlayerInventoryChanged_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x101 (0x101 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Get Current Queue Id
struct UWBP_QueueSelect_QueueButton_C_Get_Current_Queue_Id_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetQueueId_ReturnValue;                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets;          // 0x20(0x50)(None)
	TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles;           // 0x70(0x50)(None)
	bool                                         CallFunc_GetActiveQueues_ReturnValue;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A06[0x7];                                     // Fixing Size After Last Property  
	struct Valhalla_ResolvedNonUniformCycleInfo  CallFunc_Map_Find_Value;                           // 0xC8(0x38)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.UpdateCycleTimer
struct UWBP_QueueSelect_QueueButton_C_UpdateCycleTimer_Params
{
public:
	struct Valhalla_ResolvedNonUniformCycleInfo  CycleInfo;                                         // 0x0(0x38)(Edit, BlueprintVisible)
	class FString                                CallFunc_GetQueueId_ReturnValue;                   // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class URH_MatchmakingQueueInfo*              CallFunc_GetQueueInfoById_ReturnValue;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_DateTime                  CallFunc_GetCurrentTime_ReturnValue;               // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C9B[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetQueueId_ReturnValue_1;                 // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CB1[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets;          // 0x78(0x50)(None)
	TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles;           // 0xC8(0x50)(None)
	bool                                         CallFunc_GetActiveQueues_ReturnValue;              // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CCD[0x7];                                     // Fixing Size After Last Property  
	struct Valhalla_ResolvedNonUniformCycleInfo  CallFunc_Map_Find_Value;                           // 0x120(0x38)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CE9[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Timespan                  CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Days;                       // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Hours;                      // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Minutes;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Seconds;                    // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakTimespan_Milliseconds;               // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D28[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x180(0x18)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3D[0x4];                                     // Fixing Size After Last Property  
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x1A0(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x1F0(0x18)(None)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0x208(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x258(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x268(0x18)(None)
};

// 0x120 (0x120 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnNonUniformCycleUpdated
struct UWBP_QueueSelect_QueueButton_C_OnNonUniformCycleUpdated_Params
{
public:
	class FString                                CycleId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB7[0x6];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    CallFunc_K2_SetTimer_ReturnValue;                  // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets;          // 0x20(0x50)(None)
	TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles;           // 0x70(0x50)(None)
	bool                                         CallFunc_GetActiveQueues_ReturnValue;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF8[0x6];                                     // Fixing Size After Last Property  
	struct Valhalla_ResolvedNonUniformCycleInfo  CallFunc_Map_Find_Value;                           // 0xC8(0x38)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_302A[0x6];                                     // Fixing Size After Last Property  
	class URH_MatchmakingQueueInfo*              CallFunc_GetQueueInfoById_ReturnValue;             // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_308A[0x3];                                     // Fixing Size After Last Property  
	class URH_MatchmakingQueueInfo*              CallFunc_GetQueueInfoById_ReturnValue_1;           // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.IsBoundToQueue
struct UWBP_QueueSelect_QueueButton_C_IsBoundToQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsBound;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BC[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetQueueId_ReturnValue;                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.CheckPartyReady
struct UWBP_QueueSelect_QueueButton_C_CheckPartyReady_Params
{
public:
	class ARHLobbyHUD*                           K2Node_DynamicCast_AsRHLobby_HUD;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_332E[0x7];                                     // Fixing Size After Last Property  
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPartyReady_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPartyMemberDataUpdated
struct UWBP_QueueSelect_QueueButton_C_OnPartyMemberDataUpdated_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x9 (0x9 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPartyMemberReadyUpdated
struct UWBP_QueueSelect_QueueButton_C_OnPartyMemberReadyUpdated_Params
{
public:
	class UObject*                               Sender;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReady;                                           // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.BindPartyReadyEvents
struct UWBP_QueueSelect_QueueButton_C_BindPartyReadyEvents_Params
{
public:
	class UObject*                               LocalPartyFactory;                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GetDebugTooltipText
struct UWBP_QueueSelect_QueueButton_C_GetDebugTooltipText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_GetQueueId_ReturnValue;                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x40(0x18)(None)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x50)(HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0xA8(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0xF8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x108(0x18)(None)
};

// 0x9 (0x9 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnAppSettingsUpdated
struct UWBP_QueueSelect_QueueButton_C_OnAppSettingsUpdated_Params
{
public:
	class URH_ConfigSubsystem*                   ConfigSubsystem;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GetHighestPartyMemberLevel
struct UWBP_QueueSelect_QueueButton_C_GetHighestPartyMemberLevel_Params
{
public:
	int32                                        HighestPartyMemberLevel;                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalHighestLevel;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A37[0x4];                                     // Fixing Size After Last Property  
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValExperienceManager*                 CallFunc_GetExperienceManager_ReturnValue;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValXpTable*                           CallFunc_GetXpTable_ReturnValue;                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct RallyHereStart_RH_PartyMemberData> CallFunc_GetPartyMembers_ReturnValue;              // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A7E[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_PartyMemberData     CallFunc_Array_Get_Item;                           // 0x58(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A90[0x4];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AA7[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetInventoryItemCount_ItemCount;          // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AD6[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetLevelAt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7A (0x7A - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.AreQueueRestrictionsEnabled
struct UWBP_QueueSelect_QueueButton_C_AreQueueRestrictionsEnabled_Params
{
public:
	bool                                         RestrictionsEnabled;                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C28[0x7];                                     // Fixing Size After Last Property  
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>           CallFunc_GetAppSettings_ReturnValue;               // 0x18(0x50)(ConstParm)
	class FString                                CallFunc_Map_Find_Value;                           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnExperienceManager
struct UWBP_QueueSelect_QueueButton_C_OnExperienceManager_Params
{
public:
	class AValExperienceManager*                 ExperienceManager;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D7B[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D99[0x4];                                     // Fixing Size After Last Property  
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DAA[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Update Info from Client Queue Info
struct UWBP_QueueSelect_QueueButton_C_Update_Info_from_Client_Queue_Info_Params
{
public:
	class URH_MatchmakingQueueInfo*              QueueInfo;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UValClientQueueAsset*                  K2Node_DynamicCast_AsVal_Client_Queue_Asset;       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A0 (0x4A0 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.UpdateInfoFromValQueueAsset
struct UWBP_QueueSelect_QueueButton_C_UpdateInfoFromValQueueAsset_Params
{
public:
	class UValClientQueueAsset*                  ValClientQueueData;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESecurityLevel                    Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F53[0x6];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0xA0(0x18)(None)
	int32                                        CallFunc_GetNumSides_ReturnValue;                  // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxPlayersPerSide_ReturnValue;         // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F67[0x7];                                     // Fixing Size After Last Property  
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0xD0(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x120(0x10)(ReferenceParm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F7C[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x138(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F87[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x158(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3F98[0x2];                                     // Fixing Size After Last Property  
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x174(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               CallFunc_GetColorFromRarity_ReturnValue;           // 0x17C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x18C(0x14)(None)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x1A0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x1B8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x1D0(0x18)(None)
	bool                                         CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled; // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_2;                // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBA[0x1];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetMaxRequiredLevel_ReturnValue;          // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBD[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetMinRequiredLevel_ReturnValue;          // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxRequiredLevel_ReturnValue_1;        // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_2;            // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_1;            // 0x210(0x50)(HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_2;            // 0x260(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array_1;                          // 0x2B0(0x10)(ReferenceParm)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array_2;                          // 0x2C0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2D0(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x2E8(0x18)(None)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_3;            // 0x300(0x50)(HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_4;            // 0x350(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array_3;                          // 0x3A0(0x10)(ReferenceParm)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData_5;            // 0x3B0(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x400(0x18)(None)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array_4;                          // 0x418(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_4;                     // 0x428(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x440(0x18)(None)
	int32                                        CallFunc_GetMaxRequiredLevel_ReturnValue_2;        // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMinRequiredLevel_ReturnValue_1;        // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x462(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x463(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4002[0x4];                                     // Fixing Size After Last Property  
	class FText                                  Temp_text_Variable_6;                              // 0x468(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_400A[0x7];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default_2;                           // 0x488(0x18)(None)
};

// 0x16A (0x16A - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.DetermineQueueEligibility
struct UWBP_QueueSelect_QueueButton_C_DetermineQueueEligibility_Params
{
public:
	class UValClientQueueAsset*                  ValClientQueueAsset;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldDisable;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E5[0x3];                                     // Fixing Size After Last Property  
	int32                                        CurrentPlayerLevel;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets;          // 0x10(0x50)(None)
	TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles;           // 0x60(0x50)(None)
	bool                                         CallFunc_GetActiveQueues_ReturnValue;              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40EC[0x6];                                     // Fixing Size After Last Property  
	struct Valhalla_ResolvedNonUniformCycleInfo  CallFunc_Map_Find_Value;                           // 0xB8(0x38)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40F5[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40FD[0x6];                                     // Fixing Size After Last Property  
	class UValClientQueueAsset*                  K2Node_DynamicCast_AsVal_Client_Queue_Asset;       // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4103[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetQueueId_ReturnValue;                   // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CallFunc_MakeLiteralGameplayTag_ReturnValue;       // 0x120(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled; // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410A[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Get_Local_Count_for_Item_Id_Count;        // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxRequiredLevel_ReturnValue;          // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4114[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetMinRequiredLevel_ReturnValue;          // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQueueActive_ReturnValue;                // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x13E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x13F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412D[0x1];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetPartyMemberCount_ReturnValue;          // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x14D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4138[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Get_Local_Count_for_Item_Id_Count_1;      // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_413E[0x3];                                     // Fixing Size After Last Property  
	class UValXpTable*                           CallFunc_GetXpTable_ReturnValue;                   // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414E[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetLevelAt_ReturnValue;                   // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x169(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Set Is Disabled
struct UWBP_QueueSelect_QueueButton_C_Set_Is_Disabled_Params
{
public:
	bool                                         IsDisabled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41B0[0x6];                                     // Fixing Size After Last Property  
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x18(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_1;                    // 0x2C(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_2;                    // 0x40(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor_3;                    // 0x54(0x14)(None)
	struct SlateCore_SlateColor                  K2Node_Select_Default;                             // 0x68(0x14)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41C2[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  K2Node_Select_Default_1;                           // 0x80(0x14)(None)
	uint8                                        Pad_41C3[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              CallFunc_GetEffectMaterial_ReturnValue;            // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41C5[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.NavigateConfirm
struct UWBP_QueueSelect_QueueButton_C_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.SetButtonActive
struct UWBP_QueueSelect_QueueButton_C_SetButtonActive_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.PlayShowAnimationWithDelay
struct UWBP_QueueSelect_QueueButton_C_PlayShowAnimationWithDelay_Params
{
public:
	float                                        Delay;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x124 (0x124 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.ExecuteUbergraph_WBP_QueueSelect_QueueButton
struct UWBP_QueueSelect_QueueButton_C_ExecuteUbergraph_WBP_QueueSelect_QueueButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsActive;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4285[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue;      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimationCurrentTime_ReturnValue_1;    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Delay;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4291[0x4];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4296[0x7];                                     // Fixing Size After Last Property  
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4299[0x7];                                     // Fixing Size After Last Property  
	class AValExperienceManager*                 CallFunc_GetExperienceManager_ReturnValue;         // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42A0[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42A2[0x4];                                     // Fixing Size After Last Property  
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue_1;                  // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42A7[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42AB[0x2];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42B0[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x94(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42B3[0x4];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_Get_Current_Queue_Id_QueueId;             // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_BrightLobbyHUD_C*                  K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;          // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42B7[0x7];                                     // Fixing Size After Last Property  
	class URHQueueDataFactory*                   CallFunc_GetQueueDataFactory_ReturnValue;          // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xD8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_ConfigSubsystem*                   CallFunc_GetConfigSubsystem_ReturnValue;           // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42BD[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x104(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x114(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
struct UWBP_QueueSelect_QueueButton_C_OnQueueBtnUnhovered__DelegateSignature_Params
{
public:
	class UWidget*                               UnhoverWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnQueueBtnHovered__DelegateSignature
struct UWBP_QueueSelect_QueueButton_C_OnQueueBtnHovered__DelegateSignature_Params
{
public:
	class UWidget*                               HoveredWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnQueueBtnClicked__DelegateSignature
struct UWBP_QueueSelect_QueueButton_C_OnQueueBtnClicked__DelegateSignature_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWBP_QueueSelect_QueueButton_C*        QueueButton;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


