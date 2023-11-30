#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PartyModule.WBP_PartyModule_C
// (None)

class UClass* UWBP_PartyModule_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartyModule_C");

	return Clss;
}


// WBP_PartyModule_C WBP_PartyModule.Default__WBP_PartyModule_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartyModule_C* UWBP_PartyModule_C::GetDefaultObj()
{
	static class UWBP_PartyModule_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartyModule_C*>(UWBP_PartyModule_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartyModule.WBP_PartyModule_C.GetLastVisibleSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   Return_Value                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHWidget*>           CallFunc_Get_Navigation_Widgets_Return_Value                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::GetLastVisibleSlot(class URHWidget** Return_Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class URHWidget*>& CallFunc_Get_Navigation_Widgets_Return_Value, int32 CallFunc_Subtract_IntInt_ReturnValue, class URHWidget* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "GetLastVisibleSlot");

	Params::UWBP_PartyModule_C_GetLastVisibleSlot_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Get_Navigation_Widgets_Return_Value = CallFunc_Get_Navigation_Widgets_Return_Value;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Social_Snapshot_C*      Primary_Focus                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::GetPrimaryFocus(class UWBP_Social_Snapshot_C** Primary_Focus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "GetPrimaryFocus");

	Params::UWBP_PartyModule_C_GetPrimaryFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Primary_Focus != nullptr)
		*Primary_Focus = Parms.Primary_Focus;

}


// Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      VoiceId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   PlayerCard                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_GetCachedDisplayedPartyMembers_ReturnValue              (ReferenceParm)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_Get_Other_Party_Members_Return_Value                    (ReferenceParm)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetVoiceIdByPlayerUuid_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetVoiceIdByPlayerUuid_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PartyModuleCardSlot_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_PartyModuleCardSlot_C*  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::FindPlayerCardByVoiceId(const class FString& VoiceId, class UWBP_player_card_module_C** PlayerCard, int32 Temp_int_Array_Index_Variable, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetCachedDisplayedPartyMembers_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_Get_Other_Party_Members_Return_Value, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue_1, const class FString& CallFunc_GetVoiceIdByPlayerUuid_ReturnValue, const class FString& CallFunc_GetVoiceIdByPlayerUuid_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_PartyModuleCardSlot_C*>& K2Node_MakeArray_Array, class UWBP_PartyModuleCardSlot_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "FindPlayerCardByVoiceId");

	Params::UWBP_PartyModule_C_FindPlayerCardByVoiceId_Params Parms{};

	Parms.VoiceId = VoiceId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_GetCachedDisplayedPartyMembers_ReturnValue = CallFunc_GetCachedDisplayedPartyMembers_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue = CallFunc_GetRHPlayerUuid_ReturnValue;
	Parms.CallFunc_Get_Other_Party_Members_Return_Value = CallFunc_Get_Other_Party_Members_Return_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue_1 = CallFunc_GetRHPlayerUuid_ReturnValue_1;
	Parms.CallFunc_GetVoiceIdByPlayerUuid_ReturnValue = CallFunc_GetVoiceIdByPlayerUuid_ReturnValue;
	Parms.CallFunc_GetVoiceIdByPlayerUuid_ReturnValue_1 = CallFunc_GetVoiceIdByPlayerUuid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerCard != nullptr)
		*PlayerCard = Parms.PlayerCard;

}


// Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHWidget*>           Return_Value                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class URHWidget*>           K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_PartyModule_C::Get_Navigation_Widgets(TArray<class URHWidget*>* Return_Value, TArray<class URHWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "Get Navigation Widgets");

	Params::UWBP_PartyModule_C_Get_Navigation_Widgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct RallyHereStart_RH_PartyMemberData>Party_Members                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct RallyHereStart_RH_PartyMemberData>Return_Value                                                     (Parm, OutParm)
// struct CoreUObject_Guid            LocalPlayerUuid                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>New_Array                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::Get_Other_Party_Members(TArray<struct RallyHereStart_RH_PartyMemberData>& Party_Members, TArray<struct RallyHereStart_RH_PartyMemberData>* Return_Value, const struct CoreUObject_Guid& LocalPlayerUuid, const TArray<struct RallyHereStart_RH_PartyMemberData>& New_Array, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "Get Other Party Members");

	Params::UWBP_PartyModule_C_Get_Other_Party_Members_Params Parms{};

	Parms.Party_Members = Party_Members;
	Parms.LocalPlayerUuid = LocalPlayerUuid;
	Parms.New_Array = New_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue = CallFunc_GetRHPlayerUuid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue_1 = CallFunc_GetRHPlayerUuid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct RallyHereStart_RH_PartyMemberData>PartyMembers                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PartyModule_C::ApplyPartyData(TArray<struct RallyHereStart_RH_PartyMemberData>& PartyMembers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "ApplyPartyData");

	Params::UWBP_PartyModule_C_ApplyPartyData_Params Parms{};

	Parms.PartyMembers = PartyMembers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModule_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AccountId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceParticipantAdded(const class FString& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "VoiceParticipantAdded");

	Params::UWBP_PartyModule_C_VoiceParticipantAdded_Params Parms{};

	Parms.AccountId = AccountId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AccountId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceParticipantRemoved(const class FString& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "VoiceParticipantRemoved");

	Params::UWBP_PartyModule_C_VoiceParticipantRemoved_Params Parms{};

	Parms.AccountId = AccountId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AccountId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMuted                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ChannelName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceParticipantUpdated(const class FString& AccountId, bool IsTalking, bool IsMuted, const class FString& ChannelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "VoiceParticipantUpdated");

	Params::UWBP_PartyModule_C_VoiceParticipantUpdated_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.IsTalking = IsTalking;
	Parms.IsMuted = IsMuted;
	Parms.ChannelName = ChannelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHVoiceActivityAudioStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::VoiceStateChange(enum class ERHVoiceActivityAudioState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "VoiceStateChange");

	Params::UWBP_PartyModule_C_VoiceStateChange_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   Selected_Player_Card                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::Handle_Player_Card_Clicked(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "Handle Player Card Clicked");

	Params::UWBP_PartyModule_C_Handle_Player_Card_Clicked_Params Parms{};

	Parms.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModule_C::Handle_Player_Card_Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "Handle Player Card Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::HandlePartyLeaveVisibilityChange(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "HandlePartyLeaveVisibilityChange");

	Params::UWBP_PartyModule_C_HandlePartyLeaveVisibilityChange_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>K2Node_Event_PartyMembers                                        (ConstParm, ReferenceParm)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_Get_Other_Party_Members_Return_Value                    (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_PartyModuleCardSlot_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PartyModuleCardSlot_C*  K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AccountId_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AccountId_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   CallFunc_FindPlayerCardByVoiceId_PlayerCard                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   CallFunc_FindPlayerCardByVoiceId_PlayerCard_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AccountId                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsTalking                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsMuted                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ChannelName                                   (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   CallFunc_FindPlayerCardByVoiceId_PlayerCard_2                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHVoiceActivityAudioStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHVoiceActivityAudioStateK2Node_CustomEvent_State                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_FriendSubsystem*         CallFunc_GetFriendSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_RHFriendAndPlatformFriend*CallFunc_GetOrCreateFriend_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_RHFriendAndPlatformFriend*CallFunc_GetOrCreateFriend_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_CustomEvent_Selected_Player_Card                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PartyModuleCardSlot_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxPartyMembers_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::ExecuteUbergraph_WBP_PartyModule(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct RallyHereStart_RH_PartyMemberData>& K2Node_Event_PartyMembers, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_Get_Other_Party_Members_Return_Value, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Variable_1, TArray<class UWBP_PartyModuleCardSlot_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PartyModuleCardSlot_C* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& K2Node_CustomEvent_AccountId_2, const class FString& K2Node_CustomEvent_AccountId_1, class UWBP_player_card_module_C* CallFunc_FindPlayerCardByVoiceId_PlayerCard, class UWBP_player_card_module_C* CallFunc_FindPlayerCardByVoiceId_PlayerCard_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_CustomEvent_AccountId, bool K2Node_CustomEvent_IsTalking, bool K2Node_CustomEvent_IsMuted, const class FString& K2Node_CustomEvent_ChannelName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_player_card_module_C* CallFunc_FindPlayerCardByVoiceId_PlayerCard_2, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ERHVoiceActivityAudioState Temp_byte_Variable, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ERHVoiceActivityAudioState K2Node_CustomEvent_State, class URH_FriendSubsystem* CallFunc_GetFriendSubsystem_ReturnValue, class URH_RHFriendAndPlatformFriend* CallFunc_GetOrCreateFriend_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URH_RHFriendAndPlatformFriend* CallFunc_GetOrCreateFriend_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UWBP_player_card_module_C* K2Node_CustomEvent_Selected_Player_Card, int32 Temp_int_Array_Index_Variable, class UWBP_PartyModuleCardSlot_C* CallFunc_Array_Get_Item, bool K2Node_CustomEvent_Visible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, int32 CallFunc_GetMaxPartyMembers_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "ExecuteUbergraph_WBP_PartyModule");

	Params::UWBP_PartyModule_C_ExecuteUbergraph_WBP_PartyModule_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_Event_PartyMembers = K2Node_Event_PartyMembers;
	Parms.CallFunc_Get_Other_Party_Members_Return_Value = CallFunc_Get_Other_Party_Members_Return_Value;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_AccountId_2 = K2Node_CustomEvent_AccountId_2;
	Parms.K2Node_CustomEvent_AccountId_1 = K2Node_CustomEvent_AccountId_1;
	Parms.CallFunc_FindPlayerCardByVoiceId_PlayerCard = CallFunc_FindPlayerCardByVoiceId_PlayerCard;
	Parms.CallFunc_FindPlayerCardByVoiceId_PlayerCard_1 = CallFunc_FindPlayerCardByVoiceId_PlayerCard_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_AccountId = K2Node_CustomEvent_AccountId;
	Parms.K2Node_CustomEvent_IsTalking = K2Node_CustomEvent_IsTalking;
	Parms.K2Node_CustomEvent_IsMuted = K2Node_CustomEvent_IsMuted;
	Parms.K2Node_CustomEvent_ChannelName = K2Node_CustomEvent_ChannelName;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_FindPlayerCardByVoiceId_PlayerCard_2 = CallFunc_FindPlayerCardByVoiceId_PlayerCard_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.CallFunc_GetFriendSubsystem_ReturnValue = CallFunc_GetFriendSubsystem_ReturnValue;
	Parms.CallFunc_GetOrCreateFriend_ReturnValue = CallFunc_GetOrCreateFriend_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_GetOrCreateFriend_ReturnValue_1 = CallFunc_GetOrCreateFriend_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Selected_Player_Card = K2Node_CustomEvent_Selected_Player_Card;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_GetMaxPartyMembers_ReturnValue = CallFunc_GetMaxPartyMembers_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::OnPartyLeaveVisibilityChange__DelegateSignature(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "OnPartyLeaveVisibilityChange__DelegateSignature");

	Params::UWBP_PartyModule_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PartyModule_C::OnPlayerCardBackButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "OnPlayerCardBackButton__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   Selected_Player_Card                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartyModule_C::OnPlayerCardSelected__DelegateSignature(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyModule_C", "OnPlayerCardSelected__DelegateSignature");

	Params::UWBP_PartyModule_C_OnPlayerCardSelected__DelegateSignature_Params Parms{};

	Parms.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(Func, &Parms);

}

}


