#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x5D8 - 0x560)
// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
class UWBP_PartyModule_C : public URHPartyManagerWidgetBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_LeaveParty_C*                     LeaveParty;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*            SlotA;                                             // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*            SlotB;                                             // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*            SlotC;                                             // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PartyModuleCardSlot_C*            SlotD;                                             // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModuleHeader_C*                   WBP_ModuleHeader;                                  // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Snapshot_C*                WBP_Social_Snapshot;                               // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceActivityContainer_C*         WBP_VoiceActivityContainer;                        // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayerCardSelected;                              // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPlayerCardBackButton;                            // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPartyLeaveVisibilityChange;                      // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PartyModule_C* GetDefaultObj();

	void GetLastVisibleSlot(class URHWidget** Return_Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class URHWidget*>& CallFunc_Get_Navigation_Widgets_Return_Value, int32 CallFunc_Subtract_IntInt_ReturnValue, class URHWidget* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue);
	void GetPrimaryFocus(class UWBP_Social_Snapshot_C** Primary_Focus);
	void FindPlayerCardByVoiceId(const class FString& VoiceId, class UWBP_player_card_module_C** PlayerCard, int32 Temp_int_Array_Index_Variable, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetCachedDisplayedPartyMembers_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_Get_Other_Party_Members_Return_Value, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue_1, const class FString& CallFunc_GetVoiceIdByPlayerUuid_ReturnValue, const class FString& CallFunc_GetVoiceIdByPlayerUuid_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PartyModuleCardSlot_C*>& K2Node_MakeArray_Array, class UWBP_PartyModuleCardSlot_C* CallFunc_Array_Get_Item_1);
	void Get_Navigation_Widgets(TArray<class URHWidget*>* Return_Value, TArray<class URHWidget*>& K2Node_MakeArray_Array);
	void Get_Other_Party_Members(TArray<struct RallyHereStart_RH_PartyMemberData>& Party_Members, TArray<struct RallyHereStart_RH_PartyMemberData>* Return_Value, const struct CoreUObject_Guid& LocalPlayerUuid, const TArray<struct RallyHereStart_RH_PartyMemberData>& New_Array, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue);
	void ApplyPartyData(TArray<struct RallyHereStart_RH_PartyMemberData>& PartyMembers);
	void InitializeWidget();
	void VoiceParticipantAdded(const class FString& AccountId);
	void VoiceParticipantRemoved(const class FString& AccountId);
	void VoiceParticipantUpdated(const class FString& AccountId, bool IsTalking, bool IsMuted, const class FString& ChannelName);
	void VoiceStateChange(enum class ERHVoiceActivityAudioState State);
	void Handle_Player_Card_Clicked(class UWBP_player_card_module_C* Selected_Player_Card);
	void Handle_Player_Card_Back();
	void HandlePartyLeaveVisibilityChange(bool Visible);
	void ExecuteUbergraph_WBP_PartyModule(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct RallyHereStart_RH_PartyMemberData>& K2Node_Event_PartyMembers, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_Get_Other_Party_Members_Return_Value, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Variable_1, TArray<class UWBP_PartyModuleCardSlot_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PartyModuleCardSlot_C* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_AccountId_2, const class FString& K2Node_CustomEvent_AccountId_1, class UWBP_player_card_module_C* CallFunc_FindPlayerCardByVoiceId_PlayerCard, class UWBP_player_card_module_C* CallFunc_FindPlayerCardByVoiceId_PlayerCard_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_CustomEvent_AccountId, bool K2Node_CustomEvent_IsTalking, bool K2Node_CustomEvent_IsMuted, const class FString& K2Node_CustomEvent_ChannelName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_player_card_module_C* CallFunc_FindPlayerCardByVoiceId_PlayerCard_2, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ERHVoiceActivityAudioState Temp_byte_Variable, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ERHVoiceActivityAudioState K2Node_CustomEvent_State, class URH_FriendSubsystem* CallFunc_GetFriendSubsystem_ReturnValue, class URH_RHFriendAndPlatformFriend* CallFunc_GetOrCreateFriend_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URH_RHFriendAndPlatformFriend* CallFunc_GetOrCreateFriend_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWBP_player_card_module_C* K2Node_CustomEvent_Selected_Player_Card, int32 Temp_int_Array_Index_Variable, class UWBP_PartyModuleCardSlot_C* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Visible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, int32 CallFunc_GetMaxPartyMembers_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Select_Default_1);
	void OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible);
	void OnPlayerCardBackButton__DelegateSignature();
	void OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card);
};

}


