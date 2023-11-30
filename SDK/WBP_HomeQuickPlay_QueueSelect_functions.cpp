#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C
// (None)

class UClass* UWBP_HomeQuickPlay_QueueSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HomeQuickPlay_QueueSelect_C");

	return Clss;
}


// WBP_HomeQuickPlay_QueueSelect_C WBP_HomeQuickPlay_QueueSelect.Default__WBP_HomeQuickPlay_QueueSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HomeQuickPlay_QueueSelect_C* UWBP_HomeQuickPlay_QueueSelect_C::GetDefaultObj()
{
	static class UWBP_HomeQuickPlay_QueueSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HomeQuickPlay_QueueSelect_C*>(UWBP_HomeQuickPlay_QueueSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.ValidateIsDefaultLoadout
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MeetsRequirements                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldVerify                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      DefaultEquipmetId                                                (Edit, BlueprintVisible)
// TArray<int32>                      EquippedSlotsToCheck                                             (Edit, BlueprintVisible)
// TArray<struct Valhalla_InventorySlot>LocalEquipment                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetCurrentlySelectedQueue_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct Valhalla_InventorySlot      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventorySlot>CallFunc_GetBackpackSlots_BackpackSlots                          (ReferenceParm)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventorySlot>CallFunc_GetEquippedSlots_EquippedSlots                          (ReferenceParm)

void UWBP_HomeQuickPlay_QueueSelect_C::ValidateIsDefaultLoadout(bool* MeetsRequirements, bool ShouldVerify, const TArray<int32>& DefaultEquipmetId, const TArray<int32>& EquippedSlotsToCheck, const TArray<struct Valhalla_InventorySlot>& LocalEquipment, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetCurrentlySelectedQueue_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_1, const struct Valhalla_InventorySlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct Valhalla_InventorySlot>& CallFunc_GetBackpackSlots_BackpackSlots, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, TArray<struct Valhalla_InventorySlot>& CallFunc_GetEquippedSlots_EquippedSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "ValidateIsDefaultLoadout");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_ValidateIsDefaultLoadout_Params Parms{};

	Parms.ShouldVerify = ShouldVerify;
	Parms.DefaultEquipmetId = DefaultEquipmetId;
	Parms.EquippedSlotsToCheck = EquippedSlotsToCheck;
	Parms.LocalEquipment = LocalEquipment;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedQueue_ReturnValue = CallFunc_GetCurrentlySelectedQueue_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetBackpackSlots_BackpackSlots = CallFunc_GetBackpackSlots_BackpackSlots;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_GetEquippedSlots_EquippedSlots = CallFunc_GetEquippedSlots_EquippedSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetsRequirements != nullptr)
		*MeetsRequirements = Parms.MeetsRequirements;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdateCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::UpdateCycle(bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdateCycle");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdateCycle_Params Parms{};

	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdateCycleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ResolvedNonUniformCycleInfoCycleInfo                                                        (Edit, BlueprintVisible)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_GetCurrentTime_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
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

void UWBP_HomeQuickPlay_QueueSelect_C::UpdateCycleTimer(const struct Valhalla_ResolvedNonUniformCycleInfo& CycleInfo, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, const struct CoreUObject_DateTime& CallFunc_GetCurrentTime_ReturnValue, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct CoreUObject_Timespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdateCycleTimer");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdateCycleTimer_Params Parms{};

	Parms.CycleInfo = CycleInfo;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_GetCurrentTime_ReturnValue = CallFunc_GetCurrentTime_ReturnValue;
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


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.IsQueueCycleLocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct Valhalla_ResolvedBucketSchedule>CallFunc_GetActiveQueues_ResolvedBuckets                         (None)
// TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo>CallFunc_GetActiveQueues_ResolvedCycles                          (None)
// bool                               CallFunc_GetActiveQueues_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ResolvedNonUniformCycleInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::IsQueueCycleLocked(bool* NewParam, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "IsQueueCycleLocked");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_IsQueueCycleLocked_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActiveQueues_ResolvedBuckets = CallFunc_GetActiveQueues_ResolvedBuckets;
	Parms.CallFunc_GetActiveQueues_ResolvedCycles = CallFunc_GetActiveQueues_ResolvedCycles;
	Parms.CallFunc_GetActiveQueues_ReturnValue = CallFunc_GetActiveQueues_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnNonUniformCycleChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CycleId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct Valhalla_ResolvedBucketSchedule>CallFunc_GetActiveQueues_ResolvedBuckets                         (None)
// TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo>CallFunc_GetActiveQueues_ResolvedCycles                          (None)
// bool                               CallFunc_GetActiveQueues_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ResolvedNonUniformCycleInfoCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnNonUniformCycleChanged(const class FString& CycleId, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, TMap<class FString, struct Valhalla_ResolvedBucketSchedule> CallFunc_GetActiveQueues_ResolvedBuckets, TMap<class FString, struct Valhalla_ResolvedNonUniformCycleInfo> CallFunc_GetActiveQueues_ResolvedCycles, bool CallFunc_GetActiveQueues_ReturnValue, const struct Valhalla_ResolvedNonUniformCycleInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnNonUniformCycleChanged");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnNonUniformCycleChanged_Params Parms{};

	Parms.CycleId = CycleId;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetActiveQueues_ResolvedBuckets = CallFunc_GetActiveQueues_ResolvedBuckets;
	Parms.CallFunc_GetActiveQueues_ResolvedCycles = CallFunc_GetActiveQueues_ResolvedCycles;
	Parms.CallFunc_GetActiveQueues_ReturnValue = CallFunc_GetActiveQueues_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.GetHighestPlayerLevel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HighestPartyMemberLevel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalHighestCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccountXPId_ItemId                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_GetPartyMembers_ReturnValue                             (ReferenceParm)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValExperienceManager*       CallFunc_GetExperienceManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValXpTable*                 CallFunc_GetXpTable_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::GetHighestPlayerLevel(int32* HighestPartyMemberLevel, int32 LocalHighestCount, int32 Temp_int_Loop_Counter_Variable, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetAccountXPId_ItemId, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, int32 Temp_int_Array_Index_Variable, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetPartyMembers_ReturnValue, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, int32 CallFunc_GetInventoryItemCount_ItemCount, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, class UValXpTable* CallFunc_GetXpTable_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetLevelAt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "GetHighestPlayerLevel");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_GetHighestPlayerLevel_Params Parms{};

	Parms.LocalHighestCount = LocalHighestCount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAccountXPId_ItemId = CallFunc_GetAccountXPId_ItemId;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetExperienceManager_ReturnValue = CallFunc_GetExperienceManager_ReturnValue;
	Parms.CallFunc_GetXpTable_ReturnValue = CallFunc_GetXpTable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLevelAt_ReturnValue = CallFunc_GetLevelAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (HighestPartyMemberLevel != nullptr)
		*HighestPartyMemberLevel = Parms.HighestPartyMemberLevel;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.Calculate Matchmaking Attributes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHMatchmakingAttributesAttributes                                                       (Parm, OutParm)
// TSet<class FString>                Matchmaking_Tag_Attributes                                       (Edit, BlueprintVisible)
// TMap<class FString, double>        Matchmaking_Double_Attributes                                    (Edit, BlueprintVisible)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHighestPlayerLevel_HighestPartyMemberLevel           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHMatchmakingAttributesK2Node_MakeStruct_RHMatchmakingAttributes                        (None)
// TMap<class FString, float>         K2Node_MakeStruct_DoubleAttributes_ImplicitCast                  (None)

void UWBP_HomeQuickPlay_QueueSelect_C::Calculate_Matchmaking_Attributes(struct RallyHereStart_RHMatchmakingAttributes* Attributes, TSet<class FString> Matchmaking_Tag_Attributes, TMap<class FString, double> Matchmaking_Double_Attributes, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, int32 CallFunc_GetHighestPlayerLevel_HighestPartyMemberLevel, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct RallyHereStart_RHMatchmakingAttributes& K2Node_MakeStruct_RHMatchmakingAttributes, TMap<class FString, float> K2Node_MakeStruct_DoubleAttributes_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "Calculate Matchmaking Attributes");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_Calculate_Matchmaking_Attributes_Params Parms{};

	Parms.Matchmaking_Tag_Attributes = Matchmaking_Tag_Attributes;
	Parms.Matchmaking_Double_Attributes = Matchmaking_Double_Attributes;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.CallFunc_GetHighestPlayerLevel_HighestPartyMemberLevel = CallFunc_GetHighestPlayerLevel_HighestPartyMemberLevel;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.K2Node_MakeStruct_RHMatchmakingAttributes = K2Node_MakeStruct_RHMatchmakingAttributes;
	Parms.K2Node_MakeStruct_DoubleAttributes_ImplicitCast = K2Node_MakeStruct_DoubleAttributes_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Attributes != nullptr)
		*Attributes = std::move(Parms.Attributes);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.RefreshFillTeamSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::RefreshFillTeamSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "RefreshFillTeamSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.Check Ready State Dirty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHPartyManager*             LocalPartyDataFactory                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentlySelectedQueueId_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::Check_Ready_State_Dirty(class URHPartyManager* LocalPartyDataFactory, const class FString& CallFunc_GetCurrentlySelectedQueueId_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_IsInParty_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "Check Ready State Dirty");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_Check_Ready_State_Dirty_Params Parms{};

	Parms.LocalPartyDataFactory = LocalPartyDataFactory;
	Parms.CallFunc_GetCurrentlySelectedQueueId_ReturnValue = CallFunc_GetCurrentlySelectedQueueId_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_IsInParty_ReturnValue = CallFunc_IsInParty_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.Find Best Fallback Queue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    QueueInfo                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    LocalCachedQInfo                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      LocalLastSelectedQueue                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               LocalQueueFound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalHighestMinimum                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalPlayerLevel                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              StandardQueueIds                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLastSelectedQueue_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLocalPlayerLevel_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URH_MatchmakingQueueInfo*>CallFunc_GetQueues_ReturnValue                                   (ReferenceParm)
// class URH_MatchmakingQueueInfo*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue_1                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::Find_Best_Fallback_Queue(class URH_MatchmakingQueueInfo** QueueInfo, class URH_MatchmakingQueueInfo* LocalCachedQInfo, const class FString& LocalLastSelectedQueue, bool LocalQueueFound, int32 LocalHighestMinimum, int32 LocalPlayerLevel, const TArray<class FString>& StandardQueueIds, int32 Temp_int_Array_Index_Variable, TArray<class FString>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_GetLastSelectedQueue_ReturnValue, int32 CallFunc_GetLocalPlayerLevel_ReturnValue, TArray<class URH_MatchmakingQueueInfo*>& CallFunc_GetQueues_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_Array_Get_Item, class URH_MatchmakingQueueInfo* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetQueueId_ReturnValue, const class FString& CallFunc_GetQueueId_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "Find Best Fallback Queue");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_Find_Best_Fallback_Queue_Params Parms{};

	Parms.LocalCachedQInfo = LocalCachedQInfo;
	Parms.LocalLastSelectedQueue = LocalLastSelectedQueue;
	Parms.LocalQueueFound = LocalQueueFound;
	Parms.LocalHighestMinimum = LocalHighestMinimum;
	Parms.LocalPlayerLevel = LocalPlayerLevel;
	Parms.StandardQueueIds = StandardQueueIds;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetLastSelectedQueue_ReturnValue = CallFunc_GetLastSelectedQueue_ReturnValue;
	Parms.CallFunc_GetLocalPlayerLevel_ReturnValue = CallFunc_GetLocalPlayerLevel_ReturnValue;
	Parms.CallFunc_GetQueues_ReturnValue = CallFunc_GetQueues_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_GetQueueId_ReturnValue_1 = CallFunc_GetQueueId_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (QueueInfo != nullptr)
		*QueueInfo = Parms.QueueInfo;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.CheckMeetsQueuePartyRequirement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MeetsRequirements                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentlySelectedQueueId_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPartyMemberCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::CheckMeetsQueuePartyRequirement(bool* MeetsRequirements, const class FString& CallFunc_GetCurrentlySelectedQueueId_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetPartyMemberCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsInParty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "CheckMeetsQueuePartyRequirement");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_CheckMeetsQueuePartyRequirement_Params Parms{};

	Parms.CallFunc_GetCurrentlySelectedQueueId_ReturnValue = CallFunc_GetCurrentlySelectedQueueId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPartyMemberCount_ReturnValue = CallFunc_GetPartyMemberCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsInParty_ReturnValue = CallFunc_IsInParty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetsRequirements != nullptr)
		*MeetsRequirements = Parms.MeetsRequirements;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.ValidateQueueRequirements
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PartySize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GearRequirements                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MaxConsumables                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EntryFee                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalCanQueue                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 LocalHighestRarity                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalMeetsConsumable                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMeetsQueuePartyRequirement_MeetsRequirements       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMeetsQueueCreditsRequirement_MeetsRequirements     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CallFunc_GetCurrentGearState_CurrentHighestRarity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::ValidateQueueRequirements(bool PartySize, bool GearRequirements, bool MaxConsumables, bool EntryFee, bool* Valid, bool LocalCanQueue, enum class ERarity LocalHighestRarity, bool LocalMeetsConsumable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_CheckMeetsQueuePartyRequirement_MeetsRequirements, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_CheckMeetsQueueCreditsRequirement_MeetsRequirements, bool CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements, enum class ERarity CallFunc_GetCurrentGearState_CurrentHighestRarity, bool CallFunc_BooleanOR_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "ValidateQueueRequirements");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_ValidateQueueRequirements_Params Parms{};

	Parms.PartySize = PartySize;
	Parms.GearRequirements = GearRequirements;
	Parms.MaxConsumables = MaxConsumables;
	Parms.EntryFee = EntryFee;
	Parms.LocalCanQueue = LocalCanQueue;
	Parms.LocalHighestRarity = LocalHighestRarity;
	Parms.LocalMeetsConsumable = LocalMeetsConsumable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_CheckMeetsQueuePartyRequirement_MeetsRequirements = CallFunc_CheckMeetsQueuePartyRequirement_MeetsRequirements;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_CheckMeetsQueueCreditsRequirement_MeetsRequirements = CallFunc_CheckMeetsQueueCreditsRequirement_MeetsRequirements;
	Parms.CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements = CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements = CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements;
	Parms.CallFunc_GetCurrentGearState_CurrentHighestRarity = CallFunc_GetCurrentGearState_CurrentHighestRarity;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdateQueueEligibilityInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::UpdateQueueEligibilityInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdateQueueEligibilityInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.CheckMeetsQueueCreditsRequirement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MeetsRequirements                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentlySelectedQueueId_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::CheckMeetsQueueCreditsRequirement(bool* MeetsRequirements, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, const class FString& CallFunc_GetCurrentlySelectedQueueId_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "CheckMeetsQueueCreditsRequirement");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_CheckMeetsQueueCreditsRequirement_Params Parms{};

	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.CallFunc_GetCurrentlySelectedQueueId_ReturnValue = CallFunc_GetCurrentlySelectedQueueId_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetsRequirements != nullptr)
		*MeetsRequirements = Parms.MeetsRequirements;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.CheckMeetsQueueGearRequirement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERarity                 CurrentGearRarity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MeetsRequirements                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExceedsRequirements                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentlySelectedQueueId_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_ByteByte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::CheckMeetsQueueGearRequirement(enum class ERarity CurrentGearRarity, bool* MeetsRequirements, bool ExceedsRequirements, const class FString& CallFunc_GetCurrentlySelectedQueueId_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_Less_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "CheckMeetsQueueGearRequirement");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_CheckMeetsQueueGearRequirement_Params Parms{};

	Parms.CurrentGearRarity = CurrentGearRarity;
	Parms.ExceedsRequirements = ExceedsRequirements;
	Parms.CallFunc_GetCurrentlySelectedQueueId_ReturnValue = CallFunc_GetCurrentlySelectedQueueId_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_Less_ByteByte_ReturnValue = CallFunc_Less_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetsRequirements != nullptr)
		*MeetsRequirements = Parms.MeetsRequirements;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.On Party Local Player Kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::On_Party_Local_Player_Kicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "On Party Local Player Kicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPartyInvitationAccepted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::OnPartyInvitationAccepted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPartyInvitationAccepted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnQueueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::OnQueueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnQueueChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPendingPartyMemberAccepted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsReady_IsReady                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnPendingPartyMemberAccepted(const struct RallyHereStart_RH_PartyMemberData& PartyMember, bool CallFunc_IsReady_IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPendingPartyMemberAccepted");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnPendingPartyMemberAccepted_Params Parms{};

	Parms.PartyMember = PartyMember;
	Parms.CallFunc_IsReady_IsReady = CallFunc_IsReady_IsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPartyLocalPlayerPromoted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::OnPartyLocalPlayerPromoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPartyLocalPlayerPromoted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdateMissionCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalCreditCost                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalCostFound                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentlySelectedQueueId_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default                                            (None)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::UpdateMissionCost(int32 LocalCreditCost, bool LocalCostFound, bool Temp_bool_Variable, const class FString& CallFunc_GetCurrentlySelectedQueueId_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdateMissionCost");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdateMissionCost_Params Parms{};

	Parms.LocalCreditCost = LocalCreditCost;
	Parms.LocalCostFound = LocalCostFound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentlySelectedQueueId_ReturnValue = CallFunc_GetCurrentlySelectedQueueId_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.GetCurrentGearState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MeetsDuplicateConsumableRequirements                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CurrentHighestRarity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 LocalItemRarity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CachedHighestRarity                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerWhitelistedItemTypes                                             (Edit, BlueprintVisible)
// class UValItemAsset*               LocalItemAsset                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ConsumableCountExceeded                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalID                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventorySlot>WhitelistedSlots                                                 (Edit, BlueprintVisible)
// TArray<struct Valhalla_InventorySlot>LocalEquipment                                                   (Edit, BlueprintVisible)
// int32                              MAX_INVENTORY_COUNT                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, int32>                 LocalInventoryCount                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CallFunc_GetMaxEquipmentRarity_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventorySlot>K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventorySlot      CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventorySlot      K2Node_MakeStruct_InventorySlot                                  (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventorySlot>CallFunc_GetBackpackSlots_BackpackSlots                          (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventorySlot>CallFunc_GetEquippedSlots_EquippedSlots                          (ReferenceParm)

void UWBP_HomeQuickPlay_QueueSelect_C::GetCurrentGearState(bool* MeetsDuplicateConsumableRequirements, enum class ERarity* CurrentHighestRarity, enum class ERarity LocalItemRarity, enum class ERarity CachedHighestRarity, const struct GameplayTags_GameplayTagContainer& WhitelistedItemTypes, class UValItemAsset* LocalItemAsset, bool ConsumableCountExceeded, int32 LocalCount, int32 LocalID, const TArray<struct Valhalla_InventorySlot>& WhitelistedSlots, const TArray<struct Valhalla_InventorySlot>& LocalEquipment, int32 MAX_INVENTORY_COUNT, TMap<int32, int32> LocalInventoryCount, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, enum class ERarity CallFunc_GetMaxEquipmentRarity_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<struct Valhalla_InventorySlot>& K2Node_MakeArray_Array, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, const struct Valhalla_InventorySlot& K2Node_MakeStruct_InventorySlot, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, TArray<struct Valhalla_InventorySlot>& CallFunc_GetBackpackSlots_BackpackSlots, bool CallFunc_Greater_IntInt_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_3, TArray<struct Valhalla_InventorySlot>& CallFunc_GetEquippedSlots_EquippedSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "GetCurrentGearState");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_GetCurrentGearState_Params Parms{};

	Parms.LocalItemRarity = LocalItemRarity;
	Parms.CachedHighestRarity = CachedHighestRarity;
	Parms.WhitelistedItemTypes = WhitelistedItemTypes;
	Parms.LocalItemAsset = LocalItemAsset;
	Parms.ConsumableCountExceeded = ConsumableCountExceeded;
	Parms.LocalCount = LocalCount;
	Parms.LocalID = LocalID;
	Parms.WhitelistedSlots = WhitelistedSlots;
	Parms.LocalEquipment = LocalEquipment;
	Parms.MAX_INVENTORY_COUNT = MAX_INVENTORY_COUNT;
	Parms.LocalInventoryCount = LocalInventoryCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetMaxEquipmentRarity_ReturnValue = CallFunc_GetMaxEquipmentRarity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.K2Node_MakeStruct_InventorySlot = K2Node_MakeStruct_InventorySlot;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetInventoryManager_ReturnValue_2 = CallFunc_GetInventoryManager_ReturnValue_2;
	Parms.CallFunc_GetBackpackSlots_BackpackSlots = CallFunc_GetBackpackSlots_BackpackSlots;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_3 = CallFunc_GetInventoryManager_ReturnValue_3;
	Parms.CallFunc_GetEquippedSlots_EquippedSlots = CallFunc_GetEquippedSlots_EquippedSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (MeetsDuplicateConsumableRequirements != nullptr)
		*MeetsDuplicateConsumableRequirements = Parms.MeetsDuplicateConsumableRequirements;

	if (CurrentHighestRarity != nullptr)
		*CurrentHighestRarity = Parms.CurrentHighestRarity;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.On Party Updated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::On_Party_Updated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "On Party Updated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdatePartyMemberReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsReady_IsReady                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::UpdatePartyMemberReady(bool CallFunc_IsReady_IsReady, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdatePartyMemberReady");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdatePartyMemberReady_Params Parms{};

	Parms.CallFunc_IsReady_IsReady = CallFunc_IsReady_IsReady;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPartyMemberDataUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HomeQuickPlay_QueueSelect_C::OnPartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPartyMemberDataUpdated");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnPartyMemberDataUpdated_Params Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BindPartyReadyEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHQueueDataFactory*         LocalQueueFactory                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             LocalPartyFactory                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::BindPartyReadyEvents(class URHQueueDataFactory* LocalQueueFactory, class URHPartyManager* LocalPartyFactory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BindPartyReadyEvents");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_BindPartyReadyEvents_Params Parms{};

	Parms.LocalQueueFactory = LocalQueueFactory;
	Parms.LocalPartyFactory = LocalPartyFactory;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPartyMemberReadyUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsReady                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnPartyMemberReadyUpdated(class URH_PlayerInfo* Sender, bool IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPartyMemberReadyUpdated");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnPartyMemberReadyUpdated_Params Parms{};

	Parms.Sender = Sender;
	Parms.IsReady = IsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.SetIsReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsReady                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::SetIsReady(bool bIsReady, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "SetIsReady");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_SetIsReady_Params Parms{};

	Parms.bIsReady = bIsReady;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsReady                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReady_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::IsReady(bool* IsReady, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "IsReady");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_IsReady_Params Parms{};

	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsReady_ReturnValue = CallFunc_IsReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsReady != nullptr)
		*IsReady = Parms.IsReady;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.IsPartyReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               PartyIsReady                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyReady_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::IsPartyReady(bool* PartyIsReady, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPartyReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "IsPartyReady");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_IsPartyReady_Params Parms{};

	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPartyReady_ReturnValue = CallFunc_IsPartyReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyIsReady != nullptr)
		*PartyIsReady = Parms.PartyIsReady;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdatePlayButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsReady                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPartyIsReady                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    QuickPlayState                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanControl                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQueueCycleLocked_NewParam                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQueueCycleLocked_NewParam_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQueueCycleLocked_NewParam_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReady_IsReady                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyReady_PartyIsReady                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanControl                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanQueue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        K2Node_Select_Default_3                                          (None)

void UWBP_HomeQuickPlay_QueueSelect_C::UpdatePlayButtonState(bool bIsReady, bool bPartyIsReady, enum class EQuickPlayQueueState QuickPlayState, bool bCanControl, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsQueueCycleLocked_NewParam, bool CallFunc_IsQueueCycleLocked_NewParam_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsQueueCycleLocked_NewParam_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, bool Temp_bool_Variable_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, bool Temp_bool_Variable_3, bool CallFunc_IsReady_IsReady, bool CallFunc_IsPartyReady_PartyIsReady, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_SelectInt_ReturnValue_1, bool CallFunc_GetQueuePermissions_CanControl, bool CallFunc_GetQueuePermissions_CanQueue, class FText Temp_text_Variable_5, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdatePlayButtonState");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdatePlayButtonState_Params Parms{};

	Parms.bIsReady = bIsReady;
	Parms.bPartyIsReady = bPartyIsReady;
	Parms.QuickPlayState = QuickPlayState;
	Parms.bCanControl = bCanControl;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsQueueCycleLocked_NewParam = CallFunc_IsQueueCycleLocked_NewParam;
	Parms.CallFunc_IsQueueCycleLocked_NewParam_1 = CallFunc_IsQueueCycleLocked_NewParam_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsQueueCycleLocked_NewParam_2 = CallFunc_IsQueueCycleLocked_NewParam_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_IsReady_IsReady = CallFunc_IsReady_IsReady;
	Parms.CallFunc_IsPartyReady_PartyIsReady = CallFunc_IsPartyReady_PartyIsReady;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_GetQueuePermissions_CanControl = CallFunc_GetQueuePermissions_CanControl;
	Parms.CallFunc_GetQueuePermissions_CanQueue = CallFunc_GetQueuePermissions_CanQueue;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.GetQueuedTimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_FormatSecondsToTimerText_Timer_Text                     (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_HomeQuickPlay_QueueSelect_C::GetQueuedTimeText(class FText CallFunc_FormatSecondsToTimerText_Timer_Text, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "GetQueuedTimeText");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_GetQueuedTimeText_Params Parms{};

	Parms.CallFunc_FormatSecondsToTimerText_Timer_Text = CallFunc_FormatSecondsToTimerText_Timer_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdateQueueTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingQueueUpdate_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatSecondsToTimerText_Timer_Text                     (None)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::UpdateQueueTimer(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsPendingQueueUpdate_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_FormatSecondsToTimerText_Timer_Text, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdateQueueTimer");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdateQueueTimer_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsPendingQueueUpdate_ReturnValue = CallFunc_IsPendingQueueUpdate_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_FormatSecondsToTimerText_Timer_Text = CallFunc_FormatSecondsToTimerText_Timer_Text;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.UpdateQueueSelectDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    LocalQueueInfo                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        LocalQueueAsset                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LocalCreditCost                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalQueueFound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetQueueTeamSizeDetails_TeamSizeText                    (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetQueueTeamSizeDetails_TeamSizeIcon                    (HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Security_Level_Name_Text                            (None)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentlySelectedQueueId_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_Find_Best_Fallback_Queue_QueueInfo                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedQueueId_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::UpdateQueueSelectDisplay(class URH_MatchmakingQueueInfo* LocalQueueInfo, class UValClientQueueAsset* LocalQueueAsset, int32 LocalCreditCost, bool LocalQueueFound, class FText CallFunc_GetQueueTeamSizeDetails_TeamSizeText, TSoftObjectPtr<class UTexture2D> CallFunc_GetQueueTeamSizeDetails_TeamSizeIcon, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Get_Security_Level_Name_Text, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const class FString& CallFunc_GetCurrentlySelectedQueueId_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_Find_Best_Fallback_Queue_QueueInfo, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, const class FString& CallFunc_GetQueueId_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetSelectedQueueId_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "UpdateQueueSelectDisplay");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_UpdateQueueSelectDisplay_Params Parms{};

	Parms.LocalQueueInfo = LocalQueueInfo;
	Parms.LocalQueueAsset = LocalQueueAsset;
	Parms.LocalCreditCost = LocalCreditCost;
	Parms.LocalQueueFound = LocalQueueFound;
	Parms.CallFunc_GetQueueTeamSizeDetails_TeamSizeText = CallFunc_GetQueueTeamSizeDetails_TeamSizeText;
	Parms.CallFunc_GetQueueTeamSizeDetails_TeamSizeIcon = CallFunc_GetQueueTeamSizeDetails_TeamSizeIcon;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Security_Level_Name_Text = CallFunc_Get_Security_Level_Name_Text;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedQueueId_ReturnValue = CallFunc_GetCurrentlySelectedQueueId_ReturnValue;
	Parms.CallFunc_Find_Best_Fallback_Queue_QueueInfo = CallFunc_Find_Best_Fallback_Queue_QueueInfo;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset_1 = K2Node_DynamicCast_AsVal_Client_Queue_Asset_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetSelectedQueueId_ReturnValue = CallFunc_SetSelectedQueueId_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.HandleQuickPlayStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQuickPlayQueueState    LocalQuickPlayState                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanControl                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetCurrentlySelectedQueue_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::HandleQuickPlayStateUpdate(enum class EQuickPlayQueueState LocalQuickPlayState, bool bCanControl, class URH_MatchmakingQueueInfo* CallFunc_GetCurrentlySelectedQueue_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "HandleQuickPlayStateUpdate");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_HandleQuickPlayStateUpdate_Params Parms{};

	Parms.LocalQuickPlayState = LocalQuickPlayState;
	Parms.bCanControl = bCanControl;
	Parms.CallFunc_GetCurrentlySelectedQueue_ReturnValue = CallFunc_GetCurrentlySelectedQueue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.ApplyKeyShortcutsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::ApplyKeyShortcutsEnabled(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "ApplyKeyShortcutsEnabled");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_ApplyKeyShortcutsEnabled_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentInputState_ReturnValue_1 = CallFunc_GetCurrentInputState_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.GetNavigationWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHWidget*>           Return_Value                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class URHWidget*>           K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_HomeQuickPlay_QueueSelect_C::GetNavigationWidgets(TArray<class URHWidget*>* Return_Value, TArray<class URHWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "GetNavigationWidgets");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_GetNavigationWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::HandleInputModeChanged(enum class ERH_INPUT_STATE InputMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "HandleInputModeChanged");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_HandleInputModeChanged_Params Parms{};

	Parms.InputMode = InputMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.SetupGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button_1                      (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::SetupGamepadCallout(const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button_1, bool CallFunc_GetGamepadButtonForAction_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "SetupGamepadCallout");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_SetupGamepadCallout_Params Parms{};

	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetGamepadButtonForAction_Button_1 = CallFunc_GetGamepadButtonForAction_Button_1;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue_1 = CallFunc_GetGamepadButtonForAction_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnUpdateQuickPlayState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQuickPlayQueueState    QueueState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnUpdateQuickPlayState(enum class EQuickPlayQueueState QueueState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnUpdateQuickPlayState");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnUpdateQuickPlayState_Params Parms{};

	Parms.QueueState = QueueState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnSelectedQueueUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    CurrentSelectedQueue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnSelectedQueueUpdate(class URH_MatchmakingQueueInfo* CurrentSelectedQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnSelectedQueueUpdate");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnSelectedQueueUpdate_Params Parms{};

	Parms.CurrentSelectedQueue = CurrentSelectedQueue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnQueueStateUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ERH_MatchStatus         CurrentMatchStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnQueueStateUpdate(enum class ERH_MatchStatus CurrentMatchStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnQueueStateUpdate");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnQueueStateUpdate_Params Parms{};

	Parms.CurrentMatchStatus = CurrentMatchStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.HandleTriggerStatusModeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::HandleTriggerStatusModeEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "HandleTriggerStatusModeEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnUpdateQueueTimeElapsed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeElapsed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnUpdateQueueTimeElapsed(float TimeElapsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnUpdateQueueTimeElapsed");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnUpdateQueueTimeElapsed_Params Parms{};

	Parms.TimeElapsed = TimeElapsed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.Pending Queue Update Timeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::Pending_Queue_Update_Timeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "Pending Queue Update Timeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.HandleCustomQueueUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::HandleCustomQueueUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "HandleCustomQueueUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.ForceClickPlayButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::ForceClickPlayButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "ForceClickPlayButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPartyMemberPromoted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnPartyMemberPromoted(int64 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPartyMemberPromoted");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnPartyMemberPromoted_Params Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__WBP_HomeQuickPlay_QueueSelect_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__WBP_HomeQuickPlay_QueueSelect_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__WBP_HomeQuickPlay_QueueSelect_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_BndEvt__WBP_HomeQuickPlay_QueueSelect_ChangeQueueButtonHitTarget_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnBackfillSessionSearch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_SessionBrowserSearchResultSearchResult                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HomeQuickPlay_QueueSelect_C::OnBackfillSessionSearch(bool bSuccess, struct RallyHereIntegration_RH_SessionBrowserSearchResult& SearchResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnBackfillSessionSearch");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnBackfillSessionSearch_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.SearchResult = SearchResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnBackfillSessionJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_JoinedSession*           SessionData                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnBackfillSessionJoined(bool bSuccess, class URH_JoinedSession* SessionData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnBackfillSessionJoined");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnBackfillSessionJoined_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.SessionData = SessionData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.BndEvt__WBP_HomeQuickPlay_SingleButton_BackfillButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::BndEvt__WBP_HomeQuickPlay_SingleButton_BackfillButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "BndEvt__WBP_HomeQuickPlay_SingleButton_BackfillButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.ExecuteUbergraph_WBP_HomeQuickPlay_QueueSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptCancelQueue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanControl                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanQueue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    K2Node_Event_QueueState                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    K2Node_Event_CurrentSelectedQueue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_MatchStatus         K2Node_Event_CurrentMatchStatus                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TimeElapsed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptLeaveMatch_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCustomMatch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanControl_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanQueue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CallFunc_GetCurrentGearState_CurrentHighestRarity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValRHLobbyHUD*              K2Node_DynamicCast_AsVal_RHLobby_HUD                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetCurrentlySelectedQueue_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValClientQueueAsset*        K2Node_DynamicCast_AsVal_Client_Queue_Asset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHMatchmakingAttributesCallFunc_Calculate_Matchmaking_Attributes_Attributes             (None)
// bool                               CallFunc_SetSelectedMatchmakingAttributes_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_SessionBrowserSearchParamsK2Node_MakeStruct_RH_SessionBrowserSearchParams                  (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_SessionBrowserSearchResultK2Node_CustomEvent_SearchResult                                  (ConstParm)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSessionSubsystem*CallFunc_GetSessionSubsystem_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRH_SessionOwnerInterface>CallFunc_GetJoinDetailDefaults_SessionOwner_CastInput            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequestCallFunc_GetJoinDetailDefaults_ReturnValue                       (None)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_JoinedSession*           K2Node_CustomEvent_SessionData                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequestK2Node_SetFieldsInStruct_StructOut                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetNetworkFailureSessionIds_ReturnValue                 (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_SessionBrowserCache*     CallFunc_GetSessionSearchCache_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHWidget*>           K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// class URH_SessionView*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereAPI_RHAPI_Session  CallFunc_GetSessionData_ReturnValue                              (ConstParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPreferredRegionId_OutRegionId                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPreferredRegionId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_SessionView*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereAPI_RHAPI_Session  CallFunc_GetSessionData_ReturnValue_1                            (ConstParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRH_SessionOwnerInterface>CallFunc_BLUEPRINT_JoinByIdEx_SessionOwner_CastInput             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::ExecuteUbergraph_WBP_HomeQuickPlay_QueueSelect(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_UIX_AttemptCancelQueue_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget_4, class UWidget* K2Node_ComponentBoundEvent_Widget_3, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_GetQueuePermissions_CanControl, bool CallFunc_GetQueuePermissions_CanQueue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, enum class EQuickPlayQueueState K2Node_Event_QueueState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class URH_MatchmakingQueueInfo* K2Node_Event_CurrentSelectedQueue, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue_1, enum class ERH_MatchStatus K2Node_Event_CurrentMatchStatus, bool CallFunc_NotEqual_ByteByte_ReturnValue, float K2Node_Event_TimeElapsed, bool CallFunc_UIX_AttemptLeaveMatch_ReturnValue, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, bool CallFunc_AddViewRoute_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess_1, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsInCustomMatch_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int64 K2Node_CustomEvent_PlayerId, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetQueuePermissions_CanControl_1, bool CallFunc_GetQueuePermissions_CanQueue_1, bool CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements, enum class ERarity CallFunc_GetCurrentGearState_CurrentHighestRarity, bool CallFunc_Add_View_Route_ViewChanged, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValRHLobbyHUD* K2Node_DynamicCast_AsVal_RHLobby_HUD, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetCurrentlySelectedQueue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValClientQueueAsset* K2Node_DynamicCast_AsVal_Client_Queue_Asset, bool K2Node_DynamicCast_bSuccess_4, const struct RallyHereStart_RHMatchmakingAttributes& CallFunc_Calculate_Matchmaking_Attributes_Attributes, bool CallFunc_SetSelectedMatchmakingAttributes_ReturnValue, const struct RallyHereIntegration_RH_SessionBrowserSearchParams& K2Node_MakeStruct_RH_SessionBrowserSearchParams, bool CallFunc_IsEmpty_ReturnValue, bool K2Node_CustomEvent_bSuccess_1, const struct RallyHereIntegration_RH_SessionBrowserSearchResult& K2Node_CustomEvent_SearchResult, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class URH_LocalPlayerSessionSubsystem* CallFunc_GetSessionSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IRH_SessionOwnerInterface> CallFunc_GetJoinDetailDefaults_SessionOwner_CastInput, const struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest& CallFunc_GetJoinDetailDefaults_ReturnValue, bool K2Node_CustomEvent_bSuccess, class URH_JoinedSession* K2Node_CustomEvent_SessionData, const struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest& K2Node_SetFieldsInStruct_StructOut, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess_5, TArray<class FString>& CallFunc_GetNetworkFailureSessionIds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class URH_SessionBrowserCache* CallFunc_GetSessionSearchCache_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TArray<class URHWidget*>& K2Node_MakeArray_Array, class URH_SessionView* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct RallyHereAPI_RHAPI_Session& CallFunc_GetSessionData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPreferredRegionId_OutRegionId, bool CallFunc_GetPreferredRegionId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, class URH_SessionView* CallFunc_Array_Get_Item_1, const struct RallyHereAPI_RHAPI_Session& CallFunc_GetSessionData_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, TScriptInterface<class IRH_SessionOwnerInterface> CallFunc_BLUEPRINT_JoinByIdEx_SessionOwner_CastInput, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, double K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "ExecuteUbergraph_WBP_HomeQuickPlay_QueueSelect");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_ExecuteUbergraph_WBP_HomeQuickPlay_QueueSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_UIX_AttemptCancelQueue_ReturnValue = CallFunc_UIX_AttemptCancelQueue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_GetQueuePermissions_CanControl = CallFunc_GetQueuePermissions_CanControl;
	Parms.CallFunc_GetQueuePermissions_CanQueue = CallFunc_GetQueuePermissions_CanQueue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.K2Node_Event_QueueState = K2Node_Event_QueueState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Event_CurrentSelectedQueue = K2Node_Event_CurrentSelectedQueue;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue_1 = CallFunc_GetCurrentQuickPlayState_ReturnValue_1;
	Parms.K2Node_Event_CurrentMatchStatus = K2Node_Event_CurrentMatchStatus;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_TimeElapsed = K2Node_Event_TimeElapsed;
	Parms.CallFunc_UIX_AttemptLeaveMatch_ReturnValue = CallFunc_UIX_AttemptLeaveMatch_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue_1 = CallFunc_GetQueueDataFactory_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsInCustomMatch_ReturnValue = CallFunc_IsInCustomMatch_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetQueuePermissions_CanControl_1 = CallFunc_GetQueuePermissions_CanControl_1;
	Parms.CallFunc_GetQueuePermissions_CanQueue_1 = CallFunc_GetQueuePermissions_CanQueue_1;
	Parms.CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue = CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1 = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements = CallFunc_GetCurrentGearState_MeetsDuplicateConsumableRequirements;
	Parms.CallFunc_GetCurrentGearState_CurrentHighestRarity = CallFunc_GetCurrentGearState_CurrentHighestRarity;
	Parms.CallFunc_Add_View_Route_ViewChanged = CallFunc_Add_View_Route_ViewChanged;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue_2 = CallFunc_GetCurrentQuickPlayState_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue_1 = CallFunc_GetActiveWidget_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue_2 = CallFunc_GetActiveWidget_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsVal_RHLobby_HUD = K2Node_DynamicCast_AsVal_RHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedQueue_ReturnValue = CallFunc_GetCurrentlySelectedQueue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Client_Queue_Asset = K2Node_DynamicCast_AsVal_Client_Queue_Asset;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Calculate_Matchmaking_Attributes_Attributes = CallFunc_Calculate_Matchmaking_Attributes_Attributes;
	Parms.CallFunc_SetSelectedMatchmakingAttributes_ReturnValue = CallFunc_SetSelectedMatchmakingAttributes_ReturnValue;
	Parms.K2Node_MakeStruct_RH_SessionBrowserSearchParams = K2Node_MakeStruct_RH_SessionBrowserSearchParams;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_CustomEvent_bSuccess_1 = K2Node_CustomEvent_bSuccess_1;
	Parms.K2Node_CustomEvent_SearchResult = K2Node_CustomEvent_SearchResult;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetSessionSubsystem_ReturnValue = CallFunc_GetSessionSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetJoinDetailDefaults_SessionOwner_CastInput = CallFunc_GetJoinDetailDefaults_SessionOwner_CastInput;
	Parms.CallFunc_GetJoinDetailDefaults_ReturnValue = CallFunc_GetJoinDetailDefaults_ReturnValue;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_SessionData = K2Node_CustomEvent_SessionData;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetNetworkFailureSessionIds_ReturnValue = CallFunc_GetNetworkFailureSessionIds_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetSessionSearchCache_ReturnValue = CallFunc_GetSessionSearchCache_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetSessionData_ReturnValue = CallFunc_GetSessionData_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPreferredRegionId_OutRegionId = CallFunc_GetPreferredRegionId_OutRegionId;
	Parms.CallFunc_GetPreferredRegionId_ReturnValue = CallFunc_GetPreferredRegionId_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements = CallFunc_CheckMeetsQueueGearRequirement_MeetsRequirements;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetSessionData_ReturnValue_1 = CallFunc_GetSessionData_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_BLUEPRINT_JoinByIdEx_SessionOwner_CastInput = CallFunc_BLUEPRINT_JoinByIdEx_SessionOwner_CastInput;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast = K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnPlayNavInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::OnPlayNavInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnPlayNavInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.OnQueueInfoSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    QueueInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_QueueSelect_C::OnQueueInfoSet__DelegateSignature(class URH_MatchmakingQueueInfo* QueueInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "OnQueueInfoSet__DelegateSignature");

	Params::UWBP_HomeQuickPlay_QueueSelect_C_OnQueueInfoSet__DelegateSignature_Params Parms{};

	Parms.QueueInfo = QueueInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_QueueSelect.WBP_HomeQuickPlay_QueueSelect_C.TriggerStatusModeDisplayUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_QueueSelect_C::TriggerStatusModeDisplayUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_QueueSelect_C", "TriggerStatusModeDisplayUpdate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


