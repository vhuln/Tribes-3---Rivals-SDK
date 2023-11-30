#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x44 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.GetLastVisibleSlot
struct UWBP_PartyModule_C_GetLastVisibleSlot_Params
{
public:
	class URHWidget*                             Return_Value;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class URHWidget*>                     CallFunc_Get_Navigation_Widgets_Return_Value;      // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_591[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59B[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Max_ReturnValue;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
struct UWBP_PartyModule_C_GetPrimaryFocus_Params
{
public:
	class UWBP_Social_Snapshot_C*                Primary_Focus;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
struct UWBP_PartyModule_C_FindPlayerCardByVoiceId_Params
{
public:
	class FString                                VoiceId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWBP_player_card_module_C*             PlayerCard;                                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_601[0x4];                                      // Fixing Size After Last Property  
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct RallyHereStart_RH_PartyMemberData> CallFunc_GetCachedDisplayedPartyMembers_ReturnValue; // 0x28(0x10)(ReferenceParm)
	struct CoreUObject_Guid                      CallFunc_GetRHPlayerUuid_ReturnValue;              // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct RallyHereStart_RH_PartyMemberData> CallFunc_Get_Other_Party_Members_Return_Value;     // 0x48(0x10)(ReferenceParm)
	struct RallyHereStart_RH_PartyMemberData     CallFunc_Array_Get_Item;                           // 0x58(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Guid                      CallFunc_GetRHPlayerUuid_ReturnValue_1;            // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_609[0x4];                                      // Fixing Size After Last Property  
	class FString                                CallFunc_GetVoiceIdByPlayerUuid_ReturnValue;       // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetVoiceIdByPlayerUuid_ReturnValue_1;     // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue_1;        // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60D[0x2];                                      // Fixing Size After Last Property  
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PartyModuleCardSlot_C*>    K2Node_MakeArray_Array;                            // 0xD0(0x10)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PartyModuleCardSlot_C*            CallFunc_Array_Get_Item_1;                         // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
struct UWBP_PartyModule_C_Get_Navigation_Widgets_Params
{
public:
	TArray<class URHWidget*>                     Return_Value;                                      // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class URHWidget*>                     K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0xB4 (0xB4 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
struct UWBP_PartyModule_C_Get_Other_Party_Members_Params
{
public:
	TArray<struct RallyHereStart_RH_PartyMemberData> Party_Members;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct RallyHereStart_RH_PartyMemberData> Return_Value;                                      // 0x10(0x10)(Parm, OutParm)
	struct CoreUObject_Guid                      LocalPlayerUuid;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct RallyHereStart_RH_PartyMemberData> New_Array;                                         // 0x30(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct RallyHereStart_RH_PartyMemberData     CallFunc_Array_Get_Item;                           // 0x48(0x30)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Guid                      CallFunc_GetRHPlayerUuid_ReturnValue;              // 0x7C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67E[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_688[0x3];                                      // Fixing Size After Last Property  
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Guid                      CallFunc_GetRHPlayerUuid_ReturnValue_1;            // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
struct UWBP_PartyModule_C_ApplyPartyData_Params
{
public:
	TArray<struct RallyHereStart_RH_PartyMemberData> PartyMembers;                                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
struct UWBP_PartyModule_C_VoiceParticipantAdded_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
struct UWBP_PartyModule_C_VoiceParticipantRemoved_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
struct UWBP_PartyModule_C_VoiceParticipantUpdated_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         IsTalking;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMuted;                                           // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CE[0x6];                                      // Fixing Size After Last Property  
	class FString                                ChannelName;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
struct UWBP_PartyModule_C_VoiceStateChange_Params
{
public:
	enum class ERHVoiceActivityAudioState        State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
struct UWBP_PartyModule_C_Handle_Player_Card_Clicked_Params
{
public:
	class UWBP_player_card_module_C*             Selected_Player_Card;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
struct UWBP_PartyModule_C_HandlePartyLeaveVisibilityChange_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1ED (0x1ED - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
struct UWBP_PartyModule_C_ExecuteUbergraph_WBP_PartyModule_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_742[0x3];                                      // Fixing Size After Last Property  
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_746[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_748[0x4];                                      // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RH_PartyMemberData> K2Node_Event_PartyMembers;                         // 0x20(0x10)(ConstParm, ReferenceParm)
	TArray<struct RallyHereStart_RH_PartyMemberData> CallFunc_Get_Other_Party_Members_Return_Value;     // 0x30(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74A[0x3];                                      // Fixing Size After Last Property  
	int32                                        Temp_int_Variable_1;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PartyModuleCardSlot_C*>    K2Node_MakeArray_Array;                            // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74D[0x4];                                      // Fixing Size After Last Property  
	class UWBP_PartyModuleCardSlot_C*            K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74F[0x3];                                      // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x6C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_752[0x4];                                      // Fixing Size After Last Property  
	class FString                                K2Node_CustomEvent_AccountId_2;                    // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_AccountId_1;                    // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UWBP_player_card_module_C*             CallFunc_FindPlayerCardByVoiceId_PlayerCard;       // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_player_card_module_C*             CallFunc_FindPlayerCardByVoiceId_PlayerCard_1;     // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_757[0x6];                                      // Fixing Size After Last Property  
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_AccountId;                      // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsTalking;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsMuted;                        // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75B[0x6];                                      // Fixing Size After Last Property  
	class FString                                K2Node_CustomEvent_ChannelName;                    // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x100(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_player_card_module_C*             CallFunc_FindPlayerCardByVoiceId_PlayerCard_2;     // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_763[0x7];                                      // Fixing Size After Last Property  
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x130(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERHVoiceActivityAudioState        Temp_byte_Variable;                                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_765[0x7];                                      // Fixing Size After Last Property  
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERHVoiceActivityAudioState        K2Node_CustomEvent_State;                          // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_76A[0x7];                                      // Fixing Size After Last Property  
	class URH_FriendSubsystem*                   CallFunc_GetFriendSubsystem_ReturnValue;           // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_RHFriendAndPlatformFriend*         CallFunc_GetOrCreateFriend_ReturnValue;            // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CallFunc_GetLocalPlayerInfo_ReturnValue;           // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_RHFriendAndPlatformFriend*         CallFunc_GetOrCreateFriend_ReturnValue_1;          // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x178(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x188(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_player_card_module_C*             K2Node_CustomEvent_Selected_Player_Card;           // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_779[0x4];                                      // Fixing Size After Last Property  
	class UWBP_PartyModuleCardSlot_C*            CallFunc_Array_Get_Item;                           // 0x1A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Visible;                        // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77C[0x3];                                      // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1B4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_77D[0x4];                                      // Fixing Size After Last Property  
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxPartyMembers_ReturnValue;           // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x1EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x1EB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Select_Default_1;                           // 0x1EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
struct UWBP_PartyModule_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
struct UWBP_PartyModule_C_OnPlayerCardSelected__DelegateSignature_Params
{
public:
	class UWBP_player_card_module_C*             Selected_Player_Card;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


