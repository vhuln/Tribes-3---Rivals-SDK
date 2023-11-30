#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnGetPlayerLevelResponse
struct UWBP_PlayerInfoDisplay_C_OnGetPlayerLevelResponse_Params
{
public:
	int32                                        InstanceCount;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_162E[0x3];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
};

// 0x3D (0x3D - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerInventoryCacheUpdated
struct UWBP_PlayerInfoDisplay_C_OnPlayerInventoryCacheUpdated_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHProgression*                        CallFunc_GetPlayerXpProgression_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct RallyHereIntegration_RH_ItemId        CallFunc_GetItemId_ReturnValue;                    // 0x28(0x14)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetFriend
struct UWBP_PlayerInfoDisplay_C_SetFriend_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetLastKnownDisplayName_ReturnValue;      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Guid                      CallFunc_GetRHPlayerUuid_ReturnValue;              // 0x20(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfoSubsystem*               CallFunc_GetPlayerInfoSubsystem_ReturnValue;       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetPlayerInfo_ReturnValue;                // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x26 (0x26 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.On Get Player Account Loadout Settings
struct UWBP_PlayerInfoDisplay_C_On_Get_Player_Account_Loadout_Settings_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerLoadout*                     Loadouts;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1831[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEquippedItemInSlot_ReturnValue;        // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UnbindDelegates
struct UWBP_PlayerInfoDisplay_C_UnbindDelegates_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.BindDelegates
struct UWBP_PlayerInfoDisplay_C_BindDelegates_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHProgression*                        CallFunc_GetPlayerXpProgression_ReturnValue;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1986[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerInventory*                   CallFunc_GetPlayerInventory_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6D (0x6D - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetRHPlayerInfo
struct UWBP_PlayerInfoDisplay_C_SetRHPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Timespan                  CallFunc_MakeTimespan_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Timespan                  CallFunc_MakeTimespan_ReturnValue_1;               // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHLoadoutDataFactory*                 CallFunc_GetRHLoadoutDataFactory_ReturnValue;      // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ACE[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x5C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERHAPI_Platform                   CallFunc_GetLoggedInPlatformId_ReturnValue;        // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
struct UWBP_PlayerInfoDisplay_C_SetPlayerNameFont_Params
{
public:
	struct SlateCore_SlateFontInfo               Font;                                              // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
struct UWBP_PlayerInfoDisplay_C_SetPlayerNameColor_Params
{
public:
	struct SlateCore_SlateColor                  Color;                                             // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x5 (0x5 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
struct UWBP_PlayerInfoDisplay_C_TogglePartyLeaderIcon_Params
{
public:
	bool                                         ShowLeaderIcon;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
struct UWBP_PlayerInfoDisplay_C_SetVoiceActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
struct UWBP_PlayerInfoDisplay_C_SetVoiceTalking_Params
{
public:
	bool                                         Talking;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
struct UWBP_PlayerInfoDisplay_C_SetVoiceMuted_Params
{
public:
	bool                                         Muted;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnGetPlatform
struct UWBP_PlayerInfoDisplay_C_OnGetPlatform_Params
{
public:
	enum class ERHPlatformDisplayType            PlatformType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ResetDisplay
struct UWBP_PlayerInfoDisplay_C_ResetDisplay_Params
{
public:
	class URHLoadoutDataFactory*                 CallFunc_GetRHLoadoutDataFactory_ReturnValue;      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPlatformInventoryItem*                CallFunc_GetDefaultItemForLoadoutSlotType_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHAvatar*                             K2Node_DynamicCast_AsRHAvatar;                     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C96[0x7];                                     // Fixing Size After Last Property  
	class UIconInfo*                             CallFunc_GetLargeAvatarInfo_ReturnValue;           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnGetDisplayName
struct UWBP_PlayerInfoDisplay_C_OnGetDisplayName_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D24[0x7];                                     // Fixing Size After Last Property  
	class FString                                DisplayName;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerAvatarLoaded
struct UWBP_PlayerInfoDisplay_C_OnPlayerAvatarLoaded_Params
{
public:
	struct RallyHereStart_RHEquippedLoadoutItemWrapper ItemWrapper;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class URHAvatar*                             K2Node_DynamicCast_AsRHAvatar;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB8[0x7];                                     // Fixing Size After Last Property  
	class UIconInfo*                             CallFunc_GetLargeAvatarInfo_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xA5 (0xA5 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.Get Status Color
struct UWBP_PlayerInfoDisplay_C_Get_Status_Color_Params
{
public:
	enum class ERHPlayerOnlineStatus             Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F78[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  StatusColor;                                       // 0x4(0x14)(Parm, OutParm)
	enum class ERHPlayerOnlineStatus             Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F88[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Temp_name_Variable;                                // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_6;                              // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_7;                              // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_8;                              // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_9;                              // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_10;                             // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x74(0x14)(None)
	class FName                                  K2Node_Select_Default;                             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct ColorEntry_ColorEntry                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x90(0x14)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
struct UWBP_PlayerInfoDisplay_C_UpdateStatus_Params
{
public:
	enum class ERHPlayerOnlineStatus             PlayerOnlineStatus;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2166[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_6;                              // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_7;                              // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_8;                              // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_9;                              // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_10;                             // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERHPlayerOnlineStatus             Temp_byte_Variable;                                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B0[0x3];                                     // Fixing Size After Last Property  
	class FName                                  K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct ColorEntry_ColorEntry                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x70(0x14)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERHPlayerOnlineStatus             CallFunc_GetFriendOnlineStatus_ReturnValue;        // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21CA[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  CallFunc_Get_Status_Color_StatusColor;             // 0x88(0x14)(None)
	uint8                                        Pad_21D6[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetStatusMessage_ReturnValue;             // 0xA0(0x18)(None)
};

// 0x3 (0x3 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
struct UWBP_PlayerInfoDisplay_C_SetVoiceState_Params
{
public:
	bool                                         ShouldShow;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTalking;                                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMuted;                                           // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
struct UWBP_PlayerInfoDisplay_C_ToggleStatusDisplay_Params
{
public:
	bool                                         ShowStatus;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
struct UWBP_PlayerInfoDisplay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnPlayerPresenceUpdated
struct UWBP_PlayerInfoDisplay_C_OnPlayerPresenceUpdated_Params
{
public:
	class URH_PlayerPresence*                    PlayerPresence;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
struct UWBP_PlayerInfoDisplay_C_ExecuteUbergraph_WBP_PlayerInfoDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2560[0x3];                                     // Fixing Size After Last Property  
	class UOverlaySlot*                          CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerPresence*                    K2Node_Event_PlayerPresence;                       // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


