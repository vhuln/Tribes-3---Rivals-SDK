#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.OnDisplayName
struct UWBP_LocalPlayerNameplate_C_OnDisplayName_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F3E[0x7];                                     // Fixing Size After Last Property  
	class FString                                DisplayName;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F46[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
	class UWidget*                               K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.Show Party Member Status
struct UWBP_LocalPlayerNameplate_C_Show_Party_Member_Status_Params
{
public:
	bool                                         InParty;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.SetReady
struct UWBP_LocalPlayerNameplate_C_SetReady_Params
{
public:
	bool                                         IsLeader;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReady;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FAB[0x5];                                     // Fixing Size After Last Property  
	class UWidget*                               K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.SetMemberName
struct UWBP_LocalPlayerNameplate_C_SetMemberName_Params
{
public:
	bool                                         Local;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD0[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD5[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.Set Party Member Info
struct UWBP_LocalPlayerNameplate_C_Set_Party_Member_Info_Params
{
public:
	bool                                         Local;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InParty;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FF3[0x6];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_PartyMemberData     PartyMemberData;                                   // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  NewLocalVar;                                       // 0x38(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.UpdateLocalPlayerName
struct UWBP_LocalPlayerNameplate_C_UpdateLocalPlayerName_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Timespan                  CallFunc_MakeTimespan_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.PreConstruct
struct UWBP_LocalPlayerNameplate_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.ExecuteUbergraph_WBP_LocalPlayerNameplate
struct UWBP_LocalPlayerNameplate_C_ExecuteUbergraph_WBP_LocalPlayerNameplate_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


