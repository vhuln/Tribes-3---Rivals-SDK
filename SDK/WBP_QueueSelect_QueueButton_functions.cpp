#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C
// (None)

class UClass* UWBP_QueueSelect_QueueButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QueueSelect_QueueButton_C");

	return Clss;
}


// WBP_QueueSelect_QueueButton_C WBP_QueueSelect_QueueButton.Default__WBP_QueueSelect_QueueButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QueueSelect_QueueButton_C* UWBP_QueueSelect_QueueButton_C::GetDefaultObj()
{
	static class UWBP_QueueSelect_QueueButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QueueSelect_QueueButton_C*>(UWBP_QueueSelect_QueueButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPlayerInventoryChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ItemIds                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_QueueSelect_QueueButton_C::OnPlayerInventoryChanged(TArray<int32>& ItemIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnPlayerInventoryChanged");

	Params::UWBP_QueueSelect_QueueButton_C_OnPlayerInventoryChanged_Params Parms{};

	Parms.ItemIds = ItemIds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Get Current Queue Id
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      QueueId                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, struct Valhalla_ResolvedBucketSchedule>CallFunc_GetActiveQueues_ResolvedBuckets                         (None)
// TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo>CallFunc_GetActiveQueues_ResolvedCycles                          (None)
// bool                               CallFunc_GetActiveQueues_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ResolvedNonUniformCycleInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::Get_Current_Queue_Id(class FString* QueueId, const class FString& CallFunc_GetQueueId_ReturnValue, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "Get Current Queue Id");

	Params::UWBP_QueueSelect_QueueButton_C_Get_Current_Queue_Id_Params Parms{};

	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_GetActiveQueues_ResolvedBuckets = CallFunc_GetActiveQueues_ResolvedBuckets;
	Parms.CallFunc_GetActiveQueues_ResolvedCycles = CallFunc_GetActiveQueues_ResolvedCycles;
	Parms.CallFunc_GetActiveQueues_ReturnValue = CallFunc_GetActiveQueues_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QueueId != nullptr)
		*QueueId = std::move(Parms.QueueId);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.UpdateCycleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ResolvedNonUniformCycleInfoCycleInfo                                                        (Edit, BlueprintVisible)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_GetCurrentTime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue_1                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct Valhalla_ResolvedBucketSchedule>CallFunc_GetActiveQueues_ResolvedBuckets                         (None)
// TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo>CallFunc_GetActiveQueues_ResolvedCycles                          (None)
// bool                               CallFunc_GetActiveQueues_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ResolvedNonUniformCycleInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_Subtract_DateTimeDateTime_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_QueueSelect_QueueButton_C::UpdateCycleTimer(const struct Valhalla_ResolvedNonUniformCycleInfo& CycleInfo, const class FString& CallFunc_GetQueueId_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, const struct CoreUObject_DateTime& CallFunc_GetCurrentTime_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetQueueId_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct CoreUObject_Timespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "UpdateCycleTimer");

	Params::UWBP_QueueSelect_QueueButton_C_UpdateCycleTimer_Params Parms{};

	Parms.CycleInfo = CycleInfo;
	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_GetCurrentTime_ReturnValue = CallFunc_GetCurrentTime_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQueueId_ReturnValue_1 = CallFunc_GetQueueId_ReturnValue_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetActiveQueues_ResolvedBuckets = CallFunc_GetActiveQueues_ResolvedBuckets;
	Parms.CallFunc_GetActiveQueues_ResolvedCycles = CallFunc_GetActiveQueues_ResolvedCycles;
	Parms.CallFunc_GetActiveQueues_ReturnValue = CallFunc_GetActiveQueues_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Subtract_DateTimeDateTime_ReturnValue = CallFunc_Subtract_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnNonUniformCycleUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CycleId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct Valhalla_ResolvedBucketSchedule>CallFunc_GetActiveQueues_ResolvedBuckets                         (None)
// TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo>CallFunc_GetActiveQueues_ResolvedCycles                          (None)
// bool                               CallFunc_GetActiveQueues_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ResolvedNonUniformCycleInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnNonUniformCycleUpdated(const class FString& CycleId, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnNonUniformCycleUpdated");

	Params::UWBP_QueueSelect_QueueButton_C_OnNonUniformCycleUpdated_Params Parms{};

	Parms.CycleId = CycleId;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetActiveQueues_ResolvedBuckets = CallFunc_GetActiveQueues_ResolvedBuckets;
	Parms.CallFunc_GetActiveQueues_ResolvedCycles = CallFunc_GetActiveQueues_ResolvedCycles;
	Parms.CallFunc_GetActiveQueues_ReturnValue = CallFunc_GetActiveQueues_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue_1 = CallFunc_GetQueueInfoById_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.IsBoundToQueue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      QueueId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsBound                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::IsBoundToQueue(const class FString& QueueId, bool* IsBound, const class FString& CallFunc_GetQueueId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "IsBoundToQueue");

	Params::UWBP_QueueSelect_QueueButton_C_IsBoundToQueue_Params Parms{};

	Parms.QueueId = QueueId;
	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsBound != nullptr)
		*IsBound = Parms.IsBound;

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.CheckPartyReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyReady_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::CheckPartyReady(class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsPartyReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "CheckPartyReady");

	Params::UWBP_QueueSelect_QueueButton_C_CheckPartyReady_Params Parms{};

	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsPartyReady_ReturnValue = CallFunc_IsPartyReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPartyMemberDataUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QueueSelect_QueueButton_C::OnPartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnPartyMemberDataUpdated");

	Params::UWBP_QueueSelect_QueueButton_C_OnPartyMemberDataUpdated_Params Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPartyMemberReadyUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsReady                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnPartyMemberReadyUpdated(class UObject* Sender, bool IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnPartyMemberReadyUpdated");

	Params::UWBP_QueueSelect_QueueButton_C_OnPartyMemberReadyUpdated_Params Parms{};

	Parms.Sender = Sender;
	Parms.IsReady = IsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.BindPartyReadyEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LocalPartyFactory                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::BindPartyReadyEvents(class UObject* LocalPartyFactory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "BindPartyReadyEvents");

	Params::UWBP_QueueSelect_QueueButton_C_BindPartyReadyEvents_Params Parms{};

	Parms.LocalPartyFactory = LocalPartyFactory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GetDebugTooltipText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_QueueSelect_QueueButton_C::GetDebugTooltipText(const class FString& CallFunc_GetQueueId_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "GetDebugTooltipText");

	Params::UWBP_QueueSelect_QueueButton_C_GetDebugTooltipText_Params Parms{};

	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnAppSettingsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_ConfigSubsystem*         ConfigSubsystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnAppSettingsUpdated(class URH_ConfigSubsystem* ConfigSubsystem, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnAppSettingsUpdated");

	Params::UWBP_QueueSelect_QueueButton_C_OnAppSettingsUpdated_Params Parms{};

	Parms.ConfigSubsystem = ConfigSubsystem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GetHighestPartyMemberLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              HighestPartyMemberLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalHighestLevel                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValExperienceManager*       CallFunc_GetExperienceManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValXpTable*                 CallFunc_GetXpTable_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_GetPartyMembers_ReturnValue                             (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::GetHighestPartyMemberLevel(int32* HighestPartyMemberLevel, int32 LocalHighestLevel, int32 Temp_int_Array_Index_Variable, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, class UValXpTable* CallFunc_GetXpTable_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetPartyMembers_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetLevelAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "GetHighestPartyMemberLevel");

	Params::UWBP_QueueSelect_QueueButton_C_GetHighestPartyMemberLevel_Params Parms{};

	Parms.LocalHighestLevel = LocalHighestLevel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetExperienceManager_ReturnValue = CallFunc_GetExperienceManager_ReturnValue;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_GetXpTable_ReturnValue = CallFunc_GetXpTable_ReturnValue;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLevelAt_ReturnValue = CallFunc_GetLevelAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HighestPartyMemberLevel != nullptr)
		*HighestPartyMemberLevel = Parms.HighestPartyMemberLevel;

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.AreQueueRestrictionsEnabled
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               RestrictionsEnabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, class FString> CallFunc_GetAppSettings_ReturnValue                              (ConstParm)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::AreQueueRestrictionsEnabled(bool* RestrictionsEnabled, const class FString& Temp_string_Variable, TMap<class FString, class FString> CallFunc_GetAppSettings_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "AreQueueRestrictionsEnabled");

	Params::UWBP_QueueSelect_QueueButton_C_AreQueueRestrictionsEnabled_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetAppSettings_ReturnValue = CallFunc_GetAppSettings_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RestrictionsEnabled != nullptr)
		*RestrictionsEnabled = Parms.RestrictionsEnabled;

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnExperienceManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValExperienceManager*       ExperienceManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnExperienceManager(class AValExperienceManager* ExperienceManager, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnExperienceManager");

	Params::UWBP_QueueSelect_QueueButton_C_OnExperienceManager_Params Parms{};

	Parms.ExperienceManager = ExperienceManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnPlayerDataChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::OnPlayerDataChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnPlayerDataChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Update Info from Client Queue Info
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    QueueInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::Update_Info_from_Client_Queue_Info(class URH_MatchmakingQueueInfo*& QueueInfo, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "Update Info from Client Queue Info");

	Params::UWBP_QueueSelect_QueueButton_C_Update_Info_from_Client_Queue_Info_Params Parms{};

	Parms.QueueInfo = QueueInfo;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.UpdateInfoFromValQueueAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValClientQueueAsset*        ValClientQueueData                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESecurityLevel          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// int32                              CallFunc_GetNumSides_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxPlayersPerSide_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromRarity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// bool                               CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxRequiredLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinRequiredLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxRequiredLevel_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_3                                         (ReferenceParm)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// int32                              CallFunc_GetMaxRequiredLevel_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinRequiredLevel_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_6                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)

void UWBP_QueueSelect_QueueButton_C::UpdateInfoFromValQueueAsset(class UValClientQueueAsset* ValClientQueueData, enum class ESecurityLevel Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class FText Temp_text_Variable, class FText CallFunc_TextToUpper_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, int32 CallFunc_GetNumSides_ReturnValue, int32 CallFunc_GetMaxPlayersPerSide_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetEmptyText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue_2, bool CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled, bool CallFunc_TextIsEmpty_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_GetMaxRequiredLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetMinRequiredLevel_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_GetMaxRequiredLevel_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_3, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue_3, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, class FText K2Node_Select_Default_1, int32 CallFunc_GetMaxRequiredLevel_ReturnValue_2, int32 CallFunc_GetMinRequiredLevel_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable_6, bool Temp_bool_Variable_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "UpdateInfoFromValQueueAsset");

	Params::UWBP_QueueSelect_QueueButton_C_UpdateInfoFromValQueueAsset_Params Parms{};

	Parms.ValClientQueueData = ValClientQueueData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_GetNumSides_ReturnValue = CallFunc_GetNumSides_ReturnValue;
	Parms.CallFunc_GetMaxPlayersPerSide_ReturnValue = CallFunc_GetMaxPlayersPerSide_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetColorFromRarity_ReturnValue = CallFunc_GetColorFromRarity_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled = CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled;
	Parms.CallFunc_TextIsEmpty_ReturnValue_2 = CallFunc_TextIsEmpty_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetMaxRequiredLevel_ReturnValue = CallFunc_GetMaxRequiredLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMinRequiredLevel_ReturnValue = CallFunc_GetMinRequiredLevel_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetMaxRequiredLevel_ReturnValue_1 = CallFunc_GetMaxRequiredLevel_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetMaxRequiredLevel_ReturnValue_2 = CallFunc_GetMaxRequiredLevel_ReturnValue_2;
	Parms.CallFunc_GetMinRequiredLevel_ReturnValue_1 = CallFunc_GetMinRequiredLevel_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.DetermineQueueEligibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValClientQueueAsset*        ValClientQueueAsset                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldDisable                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentPlayerLevel                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct Valhalla_ResolvedBucketSchedule>CallFunc_GetActiveQueues_ResolvedBuckets                         (None)
// TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo>CallFunc_GetActiveQueues_ResolvedCycles                          (None)
// bool                               CallFunc_GetActiveQueues_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ResolvedNonUniformCycleInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxRequiredLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinRequiredLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQueueActive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPartyMemberCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValXpTable*                 CallFunc_GetXpTable_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::DetermineQueueEligibility(class UValClientQueueAsset* ValClientQueueAsset, bool bShouldDisable, int32 CurrentPlayerLevel, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetQueueId_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, int32 CallFunc_GetMaxRequiredLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetMinRequiredLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsQueueActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetPartyMemberCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Get_Local_Count_for_Item_Id_Count_1, bool CallFunc_Greater_IntInt_ReturnValue_4, class UValXpTable* CallFunc_GetXpTable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_GetLevelAt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "DetermineQueueEligibility");

	Params::UWBP_QueueSelect_QueueButton_C_DetermineQueueEligibility_Params Parms{};

	Parms.ValClientQueueAsset = ValClientQueueAsset;
	Parms.bShouldDisable = bShouldDisable;
	Parms.CurrentPlayerLevel = CurrentPlayerLevel;
	Parms.CallFunc_GetActiveQueues_ResolvedBuckets = CallFunc_GetActiveQueues_ResolvedBuckets;
	Parms.CallFunc_GetActiveQueues_ResolvedCycles = CallFunc_GetActiveQueues_ResolvedCycles;
	Parms.CallFunc_GetActiveQueues_ReturnValue = CallFunc_GetActiveQueues_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled = CallFunc_AreQueueRestrictionsEnabled_RestrictionsEnabled;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.CallFunc_GetMaxRequiredLevel_ReturnValue = CallFunc_GetMaxRequiredLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetMinRequiredLevel_ReturnValue = CallFunc_GetMinRequiredLevel_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsQueueActive_ReturnValue = CallFunc_IsQueueActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPartyMemberCount_ReturnValue = CallFunc_GetPartyMemberCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count_1 = CallFunc_Get_Local_Count_for_Item_Id_Count_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_4 = CallFunc_Greater_IntInt_ReturnValue_4;
	Parms.CallFunc_GetXpTable_ReturnValue = CallFunc_GetXpTable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetLevelAt_ReturnValue = CallFunc_GetLevelAt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Set Is Disabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_1                                   (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_2                                   (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_3                                   (None)
// struct SlateCore_SlateColor        K2Node_Select_Default                                            (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_Select_Default_1                                          (None)
// class UMaterialInstanceDynamic*    CallFunc_GetEffectMaterial_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::Set_Is_Disabled(bool IsDisabled, bool Temp_bool_Variable, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_1, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_2, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_3, const struct SlateCore_SlateColor& K2Node_Select_Default, bool Temp_bool_Variable_1, const struct SlateCore_SlateColor& K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "Set Is Disabled");

	Params::UWBP_QueueSelect_QueueButton_C_Set_Is_Disabled_Params Parms{};

	Parms.IsDisabled = IsDisabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetEffectMaterial_ReturnValue = CallFunc_GetEffectMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_QueueSelect_QueueButton_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "NavigateConfirm");

	Params::UWBP_QueueSelect_QueueButton_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::OnButtonHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnButtonHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::OnButtonUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnButtonUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.SetButtonActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::SetButtonActive(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "SetButtonActive");

	Params::UWBP_QueueSelect_QueueButton_C_SetButtonActive_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "BndEvt__WBP_QueueSelect_QueueButton_HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.PlayShowAnimationWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::PlayShowAnimationWithDelay(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "PlayShowAnimationWithDelay");

	Params::UWBP_QueueSelect_QueueButton_C_PlayShowAnimationWithDelay_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelect_QueueButton_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.ExecuteUbergraph_WBP_QueueSelect_QueueButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsActive                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValExperienceManager*       CallFunc_GetExperienceManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Current_Queue_Id_QueueId                            (ZeroConstructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::ExecuteUbergraph_WBP_QueueSelect_QueueButton(int32 EntryPoint, bool K2Node_CustomEvent_bIsActive, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerController* CallFunc_GetPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Get_Current_Queue_Id_QueueId, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "ExecuteUbergraph_WBP_QueueSelect_QueueButton");

	Params::UWBP_QueueSelect_QueueButton_C_ExecuteUbergraph_WBP_QueueSelect_QueueButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bIsActive = K2Node_CustomEvent_bIsActive;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetExperienceManager_ReturnValue = CallFunc_GetExperienceManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayer_ReturnValue_1 = CallFunc_GetPlayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Get_Current_Queue_Id_QueueId = CallFunc_Get_Current_Queue_Id_QueueId;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnQueueBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     UnhoverWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnQueueBtnUnhovered__DelegateSignature(class UWidget* UnhoverWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnQueueBtnUnhovered__DelegateSignature");

	Params::UWBP_QueueSelect_QueueButton_C_OnQueueBtnUnhovered__DelegateSignature_Params Parms{};

	Parms.UnhoverWidget = UnhoverWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnQueueBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     HoveredWidget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnQueueBtnHovered__DelegateSignature(class UWidget* HoveredWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnQueueBtnHovered__DelegateSignature");

	Params::UWBP_QueueSelect_QueueButton_C_OnQueueBtnHovered__DelegateSignature_Params Parms{};

	Parms.HoveredWidget = HoveredWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelect_QueueButton.WBP_QueueSelect_QueueButton_C.OnQueueBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      QueueId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWBP_QueueSelect_QueueButton_C*QueueButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelect_QueueButton_C::OnQueueBtnClicked__DelegateSignature(const class FString& QueueId, class UWBP_QueueSelect_QueueButton_C* QueueButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelect_QueueButton_C", "OnQueueBtnClicked__DelegateSignature");

	Params::UWBP_QueueSelect_QueueButton_C_OnQueueBtnClicked__DelegateSignature_Params Parms{};

	Parms.QueueId = QueueId;
	Parms.QueueButton = QueueButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


