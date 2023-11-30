#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
// (None)

class UClass* UUIFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIFunctionLibrary_C");

	return Clss;
}


// UIFunctionLibrary_C UIFunctionLibrary.Default__UIFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIFunctionLibrary_C* UUIFunctionLibrary_C::GetDefaultObj()
{
	static class UUIFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIFunctionLibrary_C*>(UUIFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTimerTextFromSeconds
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinimumMinutesDigits                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// int32                              LocalSeconds                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalMinutes                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUIFunctionLibrary_C::GetTimerTextFromSeconds(double Time, int32 MinimumMinutesDigits, class UObject* __WorldContext, class FText* Text, int32 LocalSeconds, int32 LocalMinutes, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Max_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Max_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetTimerTextFromSeconds");

	Params::UUIFunctionLibrary_C_GetTimerTextFromSeconds_Params Parms{};

	Parms.Time = Time;
	Parms.MinimumMinutesDigits = MinimumMinutesDigits;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalSeconds = LocalSeconds;
	Parms.LocalMinutes = LocalMinutes;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCreditsId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValExperienceTrackAsset*    LocalRepTrack                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAccountRankId                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetCreditsId(class UObject* __WorldContext, int32* ItemId, class UValExperienceTrackAsset* LocalRepTrack, int32 LocalAccountRankId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetCreditsId");

	Params::UUIFunctionLibrary_C_GetCreditsId_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.LocalRepTrack = LocalRepTrack;
	Parms.LocalAccountRankId = LocalAccountRankId;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetAccountRankId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValExperienceTrackAsset*    LocalRepTrack                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAccountRankId                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetAccountRankId(class UObject* __WorldContext, int32* ItemId, class UValExperienceTrackAsset* LocalRepTrack, int32 LocalAccountRankId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetAccountRankId");

	Params::UUIFunctionLibrary_C_GetAccountRankId_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.LocalRepTrack = LocalRepTrack;
	Parms.LocalAccountRankId = LocalAccountRankId;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformIconByDisplayType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERHPlatformDisplayType  Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetPlatformIconByDisplayType(enum class ERHPlatformDisplayType Platform, class UObject* __WorldContext, class UTexture2D** Icon, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetPlatformIconByDisplayType");

	Params::UUIFunctionLibrary_C_GetPlatformIconByDisplayType_Params Parms{};

	Parms.Platform = Platform;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetInventoryItemCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URH_PlayerInventory*         PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ItemCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalItemCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereIntegration_RH_ItemInventory>CallFunc_GetCachedInventoryForItem_ReturnValue                   (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_ItemInventoryCallFunc_Array_Get_Item                                          (None)
// struct CoreUObject_DateTime        CallFunc_GetInventoryExpiration_DateTimeOut                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryExpiration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetInventoryItemCount(class URH_PlayerInventory* PlayerInventory, int32 ItemId, class UObject* __WorldContext, int32* ItemCount, int32 LocalItemCount, TArray<struct RallyHereIntegration_RH_ItemInventory>& CallFunc_GetCachedInventoryForItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue, const struct RallyHereIntegration_RH_ItemInventory& CallFunc_Array_Get_Item, const struct CoreUObject_DateTime& CallFunc_GetInventoryExpiration_DateTimeOut, bool CallFunc_GetInventoryExpiration_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetInventoryItemCount");

	Params::UUIFunctionLibrary_C_GetInventoryItemCount_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;
	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalItemCount = LocalItemCount;
	Parms.CallFunc_GetCachedInventoryForItem_ReturnValue = CallFunc_GetCachedInventoryForItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInventoryExpiration_DateTimeOut = CallFunc_GetInventoryExpiration_DateTimeOut;
	Parms.CallFunc_GetInventoryExpiration_ReturnValue = CallFunc_GetInventoryExpiration_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue = CallFunc_GreaterEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemCount != nullptr)
		*ItemCount = Parms.ItemCount;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCurrentlySelectedQueueId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class ARHLobbyHUD*                 LocalHud                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedQueueId_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedQueueId_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FString UUIFunctionLibrary_C::GetCurrentlySelectedQueueId(class UObject* __WorldContext, class ARHLobbyHUD* LocalHud, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetSelectedQueueId_ReturnValue, bool CallFunc_IsInParty_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetSelectedQueueId_ReturnValue_1, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetCurrentlySelectedQueueId");

	Params::UUIFunctionLibrary_C_GetCurrentlySelectedQueueId_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.LocalHud = LocalHud;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSelectedQueueId_ReturnValue = CallFunc_GetSelectedQueueId_ReturnValue;
	Parms.CallFunc_IsInParty_ReturnValue = CallFunc_IsInParty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSelectedQueueId_ReturnValue_1 = CallFunc_GetSelectedQueueId_ReturnValue_1;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetAccountXPId
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValExperienceTrackAsset*    LocalXpTrack                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAccountXPId                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetAccountXPId(class UObject* __WorldContext, int32* ItemId, class UValExperienceTrackAsset* LocalXpTrack, int32 LocalAccountXPId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetAccountXPId");

	Params::UUIFunctionLibrary_C_GetAccountXPId_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.LocalXpTrack = LocalXpTrack;
	Parms.LocalAccountXPId = LocalAccountXPId;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetLocalPlayerLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AccountXPId                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccountXPId_ItemId                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXPLevelByCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUIFunctionLibrary_C::GetLocalPlayerLevel(class UObject* __WorldContext, int32 AccountXPId, int32 CallFunc_GetAccountXPId_ItemId, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, int32 CallFunc_GetXPLevelByCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetLocalPlayerLevel");

	Params::UUIFunctionLibrary_C_GetLocalPlayerLevel_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.AccountXPId = AccountXPId;
	Parms.CallFunc_GetAccountXPId_ItemId = CallFunc_GetAccountXPId_ItemId;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.CallFunc_GetXPLevelByCount_ReturnValue = CallFunc_GetXPLevelByCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Local Count for Item Id
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                LocalHud                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              LocalCount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHS_PlayerInventory*        CallFunc_GetLocalPlayerInventory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::Get_Local_Count_for_Item_Id(int32 ItemId, class UObject* __WorldContext, int32* Count, class ARHHUDCommon* LocalHud, int32 LocalCount, class URHS_PlayerInventory* CallFunc_GetLocalPlayerInventory_ReturnValue, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInventoryItemCount_ItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "Get Local Count for Item Id");

	Params::UUIFunctionLibrary_C_Get_Local_Count_for_Item_Id_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalHud = LocalHud;
	Parms.LocalCount = LocalCount;
	Parms.CallFunc_GetLocalPlayerInventory_ReturnValue = CallFunc_GetLocalPlayerInventory_ReturnValue;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;

	UObject::ProcessEvent(Func, &Parms);

	if (Count != nullptr)
		*Count = Parms.Count;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetXPLevelByCount
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUIFunctionLibrary_C::GetXPLevelByCount(int32 Count, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetXPLevelByCount");

	Params::UUIFunctionLibrary_C_GetXPLevelByCount_Params Parms{};

	Parms.Count = Count;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPartyHighestCountForItemId
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              HighestCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                LocalHud                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              LocalHighestCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHS_PlayerInventory*        CallFunc_GetLocalPlayerInventory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_GetPartyMembers_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetPartyHighestCountForItemId(int32 ItemId, class UObject* __WorldContext, int32* HighestCount, class ARHHUDCommon* LocalHud, int32 LocalHighestCount, int32 Temp_int_Array_Index_Variable, class URHS_PlayerInventory* CallFunc_GetLocalPlayerInventory_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetPartyHighestCountForItemId");

	Params::UUIFunctionLibrary_C_GetPartyHighestCountForItemId_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalHud = LocalHud;
	Parms.LocalHighestCount = LocalHighestCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetLocalPlayerInventory_ReturnValue = CallFunc_GetLocalPlayerInventory_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HighestCount != nullptr)
		*HighestCount = Parms.HighestCount;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetQueueTeamSizeDetails
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxSize                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        TeamSizeText                                                     (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   TeamSizeIcon                                                     (Parm, OutParm, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetQueueTeamSizeDetails(int32 MaxSize, class UObject* __WorldContext, class FText* TeamSizeText, TSoftObjectPtr<class UTexture2D>* TeamSizeIcon, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetQueueTeamSizeDetails");

	Params::UUIFunctionLibrary_C_GetQueueTeamSizeDetails_Params Parms{};

	Parms.MaxSize = MaxSize;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TeamSizeText != nullptr)
		*TeamSizeText = Parms.TeamSizeText;

	if (TeamSizeIcon != nullptr)
		*TeamSizeIcon = Parms.TeamSizeIcon;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Security Level Name
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              SecurityLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        LocalText                                                        (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUIFunctionLibrary_C::Get_Security_Level_Name(uint8 SecurityLevel, class UObject* __WorldContext, class FText* Text, class FText LocalText, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "Get Security Level Name");

	Params::UUIFunctionLibrary_C_Get_Security_Level_Name_Params Parms{};

	Parms.SecurityLevel = SecurityLevel;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalText = LocalText;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMasteryInfoFromPlayerProperty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InPlayerProperty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TierIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (Parm, OutParm, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        OutText                                                          (Edit, BlueprintVisible)
// TSoftObjectPtr<class UTexture2D>   OutTexture                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetMasteryInfoFromPlayerProperty(uint8 InPlayerProperty, int32 TierIndex, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* Icon, class FText* Text, class FText OutText, TSoftObjectPtr<class UTexture2D> OutTexture, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetMasteryInfoFromPlayerProperty");

	Params::UUIFunctionLibrary_C_GetMasteryInfoFromPlayerProperty_Params Parms{};

	Parms.InPlayerProperty = InPlayerProperty;
	Parms.TierIndex = TierIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.OutText = OutText;
	Parms.OutTexture = OutTexture;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconFromPlayerProperty
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InPlayerProperty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  OutText                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetIconFromPlayerProperty(uint8 InPlayerProperty, class UObject* __WorldContext, class UTexture2D** OutText, uint8 Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetIconFromPlayerProperty");

	Params::UUIFunctionLibrary_C_GetIconFromPlayerProperty_Params Parms{};

	Parms.InPlayerProperty = InPlayerProperty;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextFromPlayerProperty
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              InProperty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUIFunctionLibrary_C::GetTextFromPlayerProperty(uint8 InProperty, class UObject* __WorldContext, class FText* OutText, uint8 Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetTextFromPlayerProperty");

	Params::UUIFunctionLibrary_C_GetTextFromPlayerProperty_Params Parms{};

	Parms.InProperty = InProperty;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Formatted Rarity Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        RarityText                                                       (Parm, OutParm)
// class FText                        LocalRarityText                                                  (Edit, BlueprintVisible)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::Get_Formatted_Rarity_Text(uint8 Rarity, class FText Text, class UObject* __WorldContext, class FText* RarityText, class FText LocalRarityText, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "Get Formatted Rarity Text");

	Params::UUIFunctionLibrary_C_Get_Formatted_Rarity_Text_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.Text = Text;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalRarityText = LocalRarityText;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RarityText != nullptr)
		*RarityText = Parms.RarityText;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Queue Image by Client Config
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   QueueDesc                                                        (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)

void UUIFunctionLibrary_C::Get_Queue_Image_by_Client_Config(class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>* QueueDesc, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "Get Queue Image by Client Config");

	Params::UUIFunctionLibrary_C_Get_Queue_Image_by_Client_Config_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (QueueDesc != nullptr)
		*QueueDesc = Parms.QueueDesc;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetQueueDescriptionByClientConfig
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        QueueDesc                                                        (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// class FText                        K2Node_Select_Default                                            (None)

void UUIFunctionLibrary_C::GetQueueDescriptionByClientConfig(class UObject* __WorldContext, class FText* QueueDesc, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetQueueDescriptionByClientConfig");

	Params::UUIFunctionLibrary_C_GetQueueDescriptionByClientConfig_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (QueueDesc != nullptr)
		*QueueDesc = Parms.QueueDesc;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetQueueNameByClientConfig
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        QueueName                                                        (Parm, OutParm)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetQueueNameByClientConfig(class UObject* __WorldContext, class FText* QueueName, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetQueueNameByClientConfig");

	Params::UUIFunctionLibrary_C_GetQueueNameByClientConfig_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QueueName != nullptr)
		*QueueName = Parms.QueueName;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SaveLocalAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHGameUserSettings*         K2Node_DynamicCast_AsRHGame_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::SaveLocalAction(class FName ActionName, class UObject* __WorldContext, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class URHGameUserSettings* K2Node_DynamicCast_AsRHGame_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "SaveLocalAction");

	Params::UUIFunctionLibrary_C_SaveLocalAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHGame_User_Settings = K2Node_DynamicCast_AsRHGame_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.IsLocalActionSaved
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ActionSaved                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHGameUserSettings*         K2Node_DynamicCast_AsRHGame_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalActionSaved_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::IsLocalActionSaved(class FName ActionName, class UObject* __WorldContext, bool* ActionSaved, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class URHGameUserSettings* K2Node_DynamicCast_AsRHGame_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalActionSaved_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "IsLocalActionSaved");

	Params::UUIFunctionLibrary_C_IsLocalActionSaved_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHGame_User_Settings = K2Node_DynamicCast_AsRHGame_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocalActionSaved_ReturnValue = CallFunc_IsLocalActionSaved_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionSaved != nullptr)
		*ActionSaved = Parms.ActionSaved;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSettingsDataFactory
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHSettingsDataFactory*      SettingsDataFactory                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHSettingsDataFactory*      CallFunc_GetSettingsDataFactory_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetSettingsDataFactory(class UObject* __WorldContext, class URHSettingsDataFactory** SettingsDataFactory, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHSettingsDataFactory* CallFunc_GetSettingsDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetSettingsDataFactory");

	Params::UUIFunctionLibrary_C_GetSettingsDataFactory_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetSettingsDataFactory_ReturnValue = CallFunc_GetSettingsDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SettingsDataFactory != nullptr)
		*SettingsDataFactory = Parms.SettingsDataFactory;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetHUDCommon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                HUD_Common                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                K2Node_DynamicCast_AsRHHUDCommon                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetHUDCommon(class UObject* __WorldContext, class ARHHUDCommon** HUD_Common, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class ARHHUDCommon* K2Node_DynamicCast_AsRHHUDCommon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetHUDCommon");

	Params::UUIFunctionLibrary_C_GetHUDCommon_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHHUDCommon = K2Node_DynamicCast_AsRHHUDCommon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (HUD_Common != nullptr)
		*HUD_Common = Parms.HUD_Common;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.AssignActionIcon
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::AssignActionIcon(class UImage* Image, class FName ActionName, bool MatchSize, class UObject* __WorldContext, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "AssignActionIcon");

	Params::UUIFunctionLibrary_C_AssignActionIcon_Params Parms{};

	Parms.Image = Image;
	Parms.ActionName = ActionName;
	Parms.MatchSize = MatchSize;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetInputTypeIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERH_INPUT_STATE         InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetInputTypeIcon(enum class ERH_INPUT_STATE InputType, class UObject* __WorldContext, class UTexture2D** Texture, uint8 Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetInputTypeIcon");

	Params::UUIFunctionLibrary_C_GetInputTypeIcon_Params Parms{};

	Parms.InputType = InputType;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ERHAPI_Platform         Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetPlatformIcon(enum class ERHAPI_Platform Platform, class UObject* __WorldContext, class UTexture2D** Icon, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetPlatformIcon");

	Params::UUIFunctionLibrary_C_GetPlatformIcon_Params Parms{};

	Parms.Platform = Platform;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFontByName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FontName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     FontInfo                                                         (Parm, OutParm, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct RallyHereStart_FontPaletteInfoCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetFontByName(class FName FontName, class UObject* __WorldContext, bool* HasFound, struct SlateCore_SlateFontInfo* FontInfo, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct RallyHereStart_FontPaletteInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetFontByName");

	Params::UUIFunctionLibrary_C_GetFontByName_Params Parms{};

	Parms.FontName = FontName;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFound != nullptr)
		*HasFound = Parms.HasFound;

	if (FontInfo != nullptr)
		*FontInfo = std::move(Parms.FontInfo);

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorByName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ColorName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_ColorPaletteInfoCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetColorByName(class FName ColorName, class UObject* __WorldContext, bool* HasFound, struct CoreUObject_LinearColor* Color, const struct RallyHereStart_ColorPaletteInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetColorByName");

	Params::UUIFunctionLibrary_C_GetColorByName_Params Parms{};

	Parms.ColorName = ColorName;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasFound != nullptr)
		*HasFound = Parms.HasFound;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetItemType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ItemType                                                         (Parm, OutParm)
// struct GameplayTags_GameplayTagContainerCallFunc_GetCollectionContainer_ReturnValue                      (ConstParm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetItemType(class UPlatformInventoryItem* InventoryItem, class UObject* __WorldContext, class FText* ItemType, const struct GameplayTags_GameplayTagContainer& CallFunc_GetCollectionContainer_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetItemType");

	Params::UUIFunctionLibrary_C_GetItemType_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCollectionContainer_ReturnValue = CallFunc_GetCollectionContainer_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.CallFunc_HasTag_ReturnValue_5 = CallFunc_HasTag_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemType != nullptr)
		*ItemType = Parms.ItemType;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct CoreUObject_Timespan        Timespan                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               Shorthand                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_8                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_9                           (None)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_10                          (None)
// class FText                        K2Node_Select_Default_5                                          (None)
// class FText                        K2Node_Select_Default_6                                          (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_7                                          (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FText                        CallFunc_TextTrimPrecedingAndTrailing_ReturnValue                (None)

void UUIFunctionLibrary_C::GetFormattedTimeSpan(struct CoreUObject_Timespan& Timespan, bool Shorthand, class UObject* __WorldContext, class FText* Text, bool Temp_bool_Variable, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Greater_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_2, bool Temp_bool_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, bool Temp_bool_Variable_2, class FText CallFunc_MakeLiteralText_ReturnValue_5, bool Temp_bool_Variable_3, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue_6, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText K2Node_Select_Default_1, class FText CallFunc_MakeLiteralText_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue_9, bool Temp_bool_Variable_6, class FText K2Node_Select_Default_2, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_7, class FText K2Node_Select_Default_3, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText K2Node_Select_Default_4, class FText CallFunc_MakeLiteralText_ReturnValue_10, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText K2Node_Select_Default_7, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetFormattedTimeSpan");

	Params::UUIFunctionLibrary_C_GetFormattedTimeSpan_Params Parms{};

	Parms.Timespan = Timespan;
	Parms.Shorthand = Shorthand;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_8 = CallFunc_MakeLiteralText_ReturnValue_8;
	Parms.CallFunc_MakeLiteralText_ReturnValue_9 = CallFunc_MakeLiteralText_ReturnValue_9;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_10 = CallFunc_MakeLiteralText_ReturnValue_10;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_TextTrimPrecedingAndTrailing_ReturnValue = CallFunc_TextTrimPrecedingAndTrailing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Return_Value                                                     (Parm, OutParm)
// bool                               CallFunc_IsPlatform_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetPlatformViewProfileText(class UObject* __WorldContext, class FText* Return_Value, bool CallFunc_IsPlatform_ReturnValue, bool CallFunc_IsPlatform_ReturnValue_1, bool CallFunc_IsPlatform_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetPlatformViewProfileText");

	Params::UUIFunctionLibrary_C_GetPlatformViewProfileText_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsPlatform_ReturnValue = CallFunc_IsPlatform_ReturnValue;
	Parms.CallFunc_IsPlatform_ReturnValue_1 = CallFunc_IsPlatform_ReturnValue_1;
	Parms.CallFunc_IsPlatform_ReturnValue_2 = CallFunc_IsPlatform_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetEnemyColor(class UObject* __WorldContext, struct CoreUObject_LinearColor* Return_Value, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetEnemyColor");

	Params::UUIFunctionLibrary_C_GetEnemyColor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetColorByName_HasFound = CallFunc_GetColorByName_HasFound;
	Parms.CallFunc_GetColorByName_Color = CallFunc_GetColorByName_Color;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetFriendlyColor(class UObject* __WorldContext, struct CoreUObject_LinearColor* Return_Value, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetFriendlyColor");

	Params::UUIFunctionLibrary_C_GetFriendlyColor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetColorByName_HasFound = CallFunc_GetColorByName_HasFound;
	Parms.CallFunc_GetColorByName_Color = CallFunc_GetColorByName_Color;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Seconds                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Minute_Digits                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowTenths                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Timer_Text                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_FromSeconds_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        Temp_text_Variable_1                                             (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_FromSeconds_Seconds_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::FormatSecondsToTimerText(double Seconds, int32 Minute_Digits, bool ShowTenths, class UObject* __WorldContext, class FText* Timer_Text, bool Temp_bool_Variable, const struct CoreUObject_Timespan& CallFunc_FromSeconds_ReturnValue, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, class FText Temp_text_Variable, int32 CallFunc_Divide_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText Temp_text_Variable_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue, float CallFunc_FromSeconds_Seconds_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "FormatSecondsToTimerText");

	Params::UUIFunctionLibrary_C_FormatSecondsToTimerText_Params Parms{};

	Parms.Seconds = Seconds;
	Parms.Minute_Digits = Minute_Digits;
	Parms.ShowTenths = ShowTenths;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_FromSeconds_ReturnValue = CallFunc_FromSeconds_ReturnValue;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_FromSeconds_Seconds_ImplicitCast = CallFunc_FromSeconds_Seconds_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Timer_Text != nullptr)
		*Timer_Text = Parms.Timer_Text;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      PlatformName                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetKeyName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct ButtonIconAssoc_ButtonIconAssocCallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EGamepadIcons           CallFunc_GetGamepadIconSet_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetIconForGamepadButton(const struct InputCore_Key& Button, class UObject* __WorldContext, class UTexture2D** Icon, const class FString& PlatformName, bool CallFunc_IsPlatformType_ReturnValue, class FName CallFunc_GetKeyName_ReturnValue, const struct ButtonIconAssoc_ButtonIconAssoc& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, enum class EGamepadIcons CallFunc_GetGamepadIconSet_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_3, bool CallFunc_EqualEqual_StriStri_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetIconForGamepadButton");

	Params::UUIFunctionLibrary_C_GetIconForGamepadButton_Params Parms{};

	Parms.Button = Button;
	Parms.__WorldContext = __WorldContext;
	Parms.PlatformName = PlatformName;
	Parms.CallFunc_IsPlatformType_ReturnValue = CallFunc_IsPlatformType_ReturnValue;
	Parms.CallFunc_GetKeyName_ReturnValue = CallFunc_GetKeyName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_GetGamepadIconSet_ReturnValue = CallFunc_GetGamepadIconSet_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_3 = CallFunc_EqualEqual_StriStri_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_4 = CallFunc_EqualEqual_StriStri_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_5 = CallFunc_EqualEqual_StriStri_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TeamNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Abbreviate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        TeamName                                                         (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUIFunctionLibrary_C::GetTeamName(int32 TeamNum, bool Abbreviate, class UObject* __WorldContext, class FText* TeamName, bool Temp_bool_Variable, bool K2Node_SwitchInteger_CmpSuccess, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetTeamName");

	Params::UUIFunctionLibrary_C_GetTeamName_Params Parms{};

	Parms.TeamNum = TeamNum;
	Parms.Abbreviate = Abbreviate;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TeamName != nullptr)
		*TeamName = Parms.TeamName;

}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TeamNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OwningPlayerNum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     Team_Color                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found_Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, struct CoreUObject_LinearColor>TeamColorMap                                                     (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, struct CoreUObject_LinearColor>K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct CoreUObject_LinearColor     CallFunc_GetEnemyColor_Return_Value                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetFriendlyColor_Return_Value                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIFunctionLibrary_C::GetTeamColor(int32 TeamNum, int32 OwningPlayerNum, class UObject* __WorldContext, struct CoreUObject_LinearColor* Team_Color, bool* Found_Color, TMap<int32, struct CoreUObject_LinearColor> TeamColorMap, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, TMap<int32, struct CoreUObject_LinearColor> K2Node_MakeVariable_MakeVariableOutput, const struct CoreUObject_LinearColor& CallFunc_GetEnemyColor_Return_Value, const struct CoreUObject_LinearColor& CallFunc_GetFriendlyColor_Return_Value, const struct CoreUObject_LinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIFunctionLibrary_C", "GetTeamColor");

	Params::UUIFunctionLibrary_C_GetTeamColor_Params Parms{};

	Parms.TeamNum = TeamNum;
	Parms.OwningPlayerNum = OwningPlayerNum;
	Parms.__WorldContext = __WorldContext;
	Parms.TeamColorMap = TeamColorMap;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetEnemyColor_Return_Value = CallFunc_GetEnemyColor_Return_Value;
	Parms.CallFunc_GetFriendlyColor_Return_Value = CallFunc_GetFriendlyColor_Return_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Team_Color != nullptr)
		*Team_Color = std::move(Parms.Team_Color);

	if (Found_Color != nullptr)
		*Found_Color = Parms.Found_Color;

}

}


