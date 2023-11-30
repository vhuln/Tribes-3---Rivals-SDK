#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C
// (None)

class UClass* UWBP_HomeQuickPlay_SingleButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HomeQuickPlay_SingleButton_C");

	return Clss;
}


// WBP_HomeQuickPlay_SingleButton_C WBP_HomeQuickPlay_SingleButton.Default__WBP_HomeQuickPlay_SingleButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HomeQuickPlay_SingleButton_C* UWBP_HomeQuickPlay_SingleButton_C::GetDefaultObj()
{
	static class UWBP_HomeQuickPlay_SingleButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HomeQuickPlay_SingleButton_C*>(UWBP_HomeQuickPlay_SingleButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnDevQueueSelectionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SelectionText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SelectionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnDevQueueSelectionChanged(class FText SelectionText, int32 SelectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnDevQueueSelectionChanged");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnDevQueueSelectionChanged_Params Parms{};

	Parms.SelectionText = SelectionText;
	Parms.SelectionIndex = SelectionIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ShouldShowDevSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_HomeQuickPlay_SingleButton_C::ShouldShowDevSelect(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "ShouldShowDevSelect");

	Params::UWBP_HomeQuickPlay_SingleButton_C_ShouldShowDevSelect_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateDevSelectMenuVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalShowDevSelect                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowDevSelect_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateDevSelectMenuVisibility(bool LocalShowDevSelect, double CallFunc_SelectFloat_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_ShouldShowDevSelect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateDevSelectMenuVisibility");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateDevSelectMenuVisibility_Params Parms{};

	Parms.LocalShowDevSelect = LocalShowDevSelect;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_ShouldShowDevSelect_ReturnValue = CallFunc_ShouldShowDevSelect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateDevQueueOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LocalPreferredQueueSelection                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              PrimaryQueueOption                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Values_Values                                       (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedOptionByIndex_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedOptionByIndex_Success_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URH_MatchmakingQueueInfo*>CallFunc_GetQueues_ReturnValue                                   (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQueueId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateDevQueueOptions(const class FString& LocalPreferredQueueSelection, int32 PrimaryQueueOption, int32 Index, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Values_Values, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Array_Get_Item, bool CallFunc_SetSelectedOptionByIndex_Success, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_SetSelectedOptionByIndex_Success_1, TArray<class URH_MatchmakingQueueInfo*>& CallFunc_GetQueues_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class URH_MatchmakingQueueInfo* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetQueueId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateDevQueueOptions");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateDevQueueOptions_Params Parms{};

	Parms.LocalPreferredQueueSelection = LocalPreferredQueueSelection;
	Parms.PrimaryQueueOption = PrimaryQueueOption;
	Parms.Index = Index;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SetSelectedOptionByIndex_Success = CallFunc_SetSelectedOptionByIndex_Success;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_SetSelectedOptionByIndex_Success_1 = CallFunc_SetSelectedOptionByIndex_Success_1;
	Parms.CallFunc_GetQueues_ReturnValue = CallFunc_GetQueues_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetQueueId_ReturnValue = CallFunc_GetQueueId_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateQueueTypeNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateQueueTypeNav(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateQueueTypeNav");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateQueueTypeNav_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnAppSettingsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_ConfigSubsystem*         ConfigSubsystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnAppSettingsUpdated(class URH_ConfigSubsystem* ConfigSubsystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnAppSettingsUpdated");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnAppSettingsUpdated_Params Parms{};

	Parms.ConfigSubsystem = ConfigSubsystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPlayerInventoryCacheUpdated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ItemIds                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_HomeQuickPlay_SingleButton_C::OnPlayerInventoryCacheUpdated(TArray<int32>& ItemIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPlayerInventoryCacheUpdated");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnPlayerInventoryCacheUpdated_Params Parms{};

	Parms.ItemIds = ItemIds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.Get Queue IDSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AppSetting                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FString UWBP_HomeQuickPlay_SingleButton_C::Get_Queue_IDSetting(const class FString& AppSetting, bool* Valid, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "Get Queue IDSetting");

	Params::UWBP_HomeQuickPlay_SingleButton_C_Get_Queue_IDSetting_Params Parms{};

	Parms.AppSetting = AppSetting;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAppSetting_Value = CallFunc_GetAppSetting_Value;
	Parms.CallFunc_GetAppSetting_ReturnValue = CallFunc_GetAppSetting_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	return Parms.ReturnValue;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_ConfigSubsystem*         LocalConfigSubsystem                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Queue_IDSetting_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Queue_IDSetting_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Get_Queue_IDSetting_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Queue_IDSetting_Valid_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value_1                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateSettings(class URH_ConfigSubsystem* LocalConfigSubsystem, const class FString& CallFunc_Get_Queue_IDSetting_ReturnValue, bool CallFunc_Get_Queue_IDSetting_Valid, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Get_Queue_IDSetting_ReturnValue_1, bool CallFunc_Get_Queue_IDSetting_Valid_1, const class FString& CallFunc_GetAppSetting_Value_1, bool CallFunc_GetAppSetting_ReturnValue_1, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateSettings");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateSettings_Params Parms{};

	Parms.LocalConfigSubsystem = LocalConfigSubsystem;
	Parms.CallFunc_Get_Queue_IDSetting_ReturnValue = CallFunc_Get_Queue_IDSetting_ReturnValue;
	Parms.CallFunc_Get_Queue_IDSetting_Valid = CallFunc_Get_Queue_IDSetting_Valid;
	Parms.CallFunc_GetAppSetting_Value = CallFunc_GetAppSetting_Value;
	Parms.CallFunc_GetAppSetting_ReturnValue = CallFunc_GetAppSetting_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Get_Queue_IDSetting_ReturnValue_1 = CallFunc_Get_Queue_IDSetting_ReturnValue_1;
	Parms.CallFunc_Get_Queue_IDSetting_Valid_1 = CallFunc_Get_Queue_IDSetting_Valid_1;
	Parms.CallFunc_GetAppSetting_Value_1 = CallFunc_GetAppSetting_Value_1;
	Parms.CallFunc_GetAppSetting_ReturnValue_1 = CallFunc_GetAppSetting_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsPartyFillFeatureEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::IsPartyFillFeatureEnabled(bool* Enabled, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "IsPartyFillFeatureEnabled");

	Params::UWBP_HomeQuickPlay_SingleButton_C_IsPartyFillFeatureEnabled_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_GetAppSetting_Value = CallFunc_GetAppSetting_Value;
	Parms.CallFunc_GetAppSetting_ReturnValue = CallFunc_GetAppSetting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.On Party Local Player Kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::On_Party_Local_Player_Kicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "On Party Local Player Kicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyInvitationAccepted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::OnPartyInvitationAccepted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPartyInvitationAccepted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnQueueChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::OnQueueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnQueueChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPendingPartyMemberAccepted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsReady_IsReady                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnPendingPartyMemberAccepted(const struct RallyHereStart_RH_PartyMemberData& PartyMember, bool CallFunc_IsReady_IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPendingPartyMemberAccepted");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnPendingPartyMemberAccepted_Params Parms{};

	Parms.PartyMember = PartyMember;
	Parms.CallFunc_IsReady_IsReady = CallFunc_IsReady_IsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyLocalPlayerPromoted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::OnPartyLocalPlayerPromoted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPartyLocalPlayerPromoted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateMissionCost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateDisplayEntryCost_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateMissionCost(class FText Temp_text_Variable, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, bool Temp_bool_Variable, int32 CallFunc_CalculateDisplayEntryCost_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateMissionCost");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateMissionCost_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_CalculateDisplayEntryCost_ReturnValue = CallFunc_CalculateDisplayEntryCost_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateSoloButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHPartyManager*             LocalPartyDataFactory                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateSoloButtonState(class URHPartyManager* LocalPartyDataFactory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateSoloButtonState");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateSoloButtonState_Params Parms{};

	Parms.LocalPartyDataFactory = LocalPartyDataFactory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.SetDefaultQueuePreference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedQueueId_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    CallFunc_GetQueueInfoById_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::SetDefaultQueuePreference(int32 LocalValue, const class FString& CallFunc_GetSelectedQueueId_ReturnValue, class URH_MatchmakingQueueInfo* CallFunc_GetQueueInfoById_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "SetDefaultQueuePreference");

	Params::UWBP_HomeQuickPlay_SingleButton_C_SetDefaultQueuePreference_Params Parms{};

	Parms.LocalValue = LocalValue;
	Parms.CallFunc_GetSelectedQueueId_ReturnValue = CallFunc_GetSelectedQueueId_ReturnValue;
	Parms.CallFunc_GetQueueInfoById_ReturnValue = CallFunc_GetQueueInfoById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnQueuePreferenceButtonSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyFillFeatureEnabled_Enabled                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Menu_C*           K2Node_DynamicCast_AsUI_Button_Menu                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnQueuePreferenceButtonSelected(int32 Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsPartyFillFeatureEnabled_Enabled, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_Button_Menu_C* K2Node_DynamicCast_AsUI_Button_Menu, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnQueuePreferenceButtonSelected");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnQueuePreferenceButtonSelected_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsPartyFillFeatureEnabled_Enabled = CallFunc_IsPartyFillFeatureEnabled_Enabled;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Button_Menu = K2Node_DynamicCast_AsUI_Button_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BindQueuePreferenceButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSquadsQueueSelected_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Button_Menu_C*           K2Node_DynamicCast_AsUI_Button_Menu                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::BindQueuePreferenceButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetSquadsQueueSelected_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_Button_Menu_C* K2Node_DynamicCast_AsUI_Button_Menu, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "BindQueuePreferenceButtons");

	Params::UWBP_HomeQuickPlay_SingleButton_C_BindQueuePreferenceButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSquadsQueueSelected_ReturnValue = CallFunc_GetSquadsQueueSelected_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Button_Menu = K2Node_DynamicCast_AsUI_Button_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetSoloQueuePreference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QueueForSolo                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::GetSoloQueuePreference(bool* QueueForSolo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "GetSoloQueuePreference");

	Params::UWBP_HomeQuickPlay_SingleButton_C_GetSoloQueuePreference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (QueueForSolo != nullptr)
		*QueueForSolo = Parms.QueueForSolo;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetSkillScore
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SkillScore                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalHighestCount                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReputationId                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Get_Local_Count_for_Item_Id_Count                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_GetPartyMembers_ReturnValue                             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::GetSkillScore(int32* SkillScore, int32 LocalHighestCount, int32 ReputationId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Get_Local_Count_for_Item_Id_Count, bool CallFunc_Greater_IntInt_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetPartyMembers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "GetSkillScore");

	Params::UWBP_HomeQuickPlay_SingleButton_C_GetSkillScore_Params Parms{};

	Parms.LocalHighestCount = LocalHighestCount;
	Parms.ReputationId = ReputationId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Get_Local_Count_for_Item_Id_Count = CallFunc_Get_Local_Count_for_Item_Id_Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillScore != nullptr)
		*SkillScore = Parms.SkillScore;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetBestQueue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      QueueId                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    LocalClientQueueInfo                                             (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPartyQueueId                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DesiresSolo                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalMaxLevel                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LocalBestQueueId                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              LocalMinLevel                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalHighestMin                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalCurrentLevel                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowDevSelect_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSelectedOption_Selection                             (None)
// int32                              CallFunc_GetSelectedOption_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSoloQueuePreference_QueueForSolo                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::GetBestQueue(class FString* QueueId, class URH_MatchmakingQueueInfo* LocalClientQueueInfo, int32 MaxPartyQueueId, bool DesiresSolo, int32 LocalMaxLevel, const class FString& LocalBestQueueId, int32 LocalMinLevel, int32 LocalHighestMin, int32 LocalCurrentLevel, bool CallFunc_ShouldShowDevSelect_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetSelectedOption_Selection, int32 CallFunc_GetSelectedOption_Index, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_GetSoloQueuePreference_QueueForSolo, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "GetBestQueue");

	Params::UWBP_HomeQuickPlay_SingleButton_C_GetBestQueue_Params Parms{};

	Parms.LocalClientQueueInfo = LocalClientQueueInfo;
	Parms.MaxPartyQueueId = MaxPartyQueueId;
	Parms.DesiresSolo = DesiresSolo;
	Parms.LocalMaxLevel = LocalMaxLevel;
	Parms.LocalBestQueueId = LocalBestQueueId;
	Parms.LocalMinLevel = LocalMinLevel;
	Parms.LocalHighestMin = LocalHighestMin;
	Parms.LocalCurrentLevel = LocalCurrentLevel;
	Parms.CallFunc_ShouldShowDevSelect_ReturnValue = CallFunc_ShouldShowDevSelect_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetSelectedOption_Selection = CallFunc_GetSelectedOption_Selection;
	Parms.CallFunc_GetSelectedOption_Index = CallFunc_GetSelectedOption_Index;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSoloQueuePreference_QueueForSolo = CallFunc_GetSoloQueuePreference_QueueForSolo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QueueId != nullptr)
		*QueueId = std::move(Parms.QueueId);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.Calculate Matchmaking Attributes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHMatchmakingAttributesAttributes                                                       (Parm, OutParm)
// TSet<class FString>                Local_Matchmaking_Tag_Attributes                                 (Edit, BlueprintVisible)
// TMap<class FString, double>        Local_Matchmaking_Double_Attributes                              (Edit, BlueprintVisible)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyFillFeatureEnabled_Enabled                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHMatchmakingAttributesK2Node_MakeStruct_RHMatchmakingAttributes                        (None)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSkillScore_SkillScore                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_Checked                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, float>         K2Node_MakeStruct_DoubleAttributes_ImplicitCast                  (None)

void UWBP_HomeQuickPlay_SingleButton_C::Calculate_Matchmaking_Attributes(struct RallyHereStart_RHMatchmakingAttributes* Attributes, TSet<class FString> Local_Matchmaking_Tag_Attributes, TMap<class FString, double> Local_Matchmaking_Double_Attributes, const class FString& Temp_string_Variable, bool CallFunc_IsPartyFillFeatureEnabled_Enabled, bool CallFunc_Not_PreBool_ReturnValue, const struct RallyHereStart_RHMatchmakingAttributes& K2Node_MakeStruct_RHMatchmakingAttributes, const class FString& Temp_string_Variable_1, int32 CallFunc_GetSkillScore_SkillScore, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsChecked_Checked, bool CallFunc_BooleanOR_ReturnValue, TMap<class FString, float> K2Node_MakeStruct_DoubleAttributes_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "Calculate Matchmaking Attributes");

	Params::UWBP_HomeQuickPlay_SingleButton_C_Calculate_Matchmaking_Attributes_Params Parms{};

	Parms.Local_Matchmaking_Tag_Attributes = Local_Matchmaking_Tag_Attributes;
	Parms.Local_Matchmaking_Double_Attributes = Local_Matchmaking_Double_Attributes;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_IsPartyFillFeatureEnabled_Enabled = CallFunc_IsPartyFillFeatureEnabled_Enabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_RHMatchmakingAttributes = K2Node_MakeStruct_RHMatchmakingAttributes;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_GetSkillScore_SkillScore = CallFunc_GetSkillScore_SkillScore;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_IsChecked_Checked = CallFunc_IsChecked_Checked;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_DoubleAttributes_ImplicitCast = K2Node_MakeStruct_DoubleAttributes_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Attributes != nullptr)
		*Attributes = std::move(Parms.Attributes);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.On Party Updated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInParty_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::On_Party_Updated(bool CallFunc_IsValid_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsInParty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "On Party Updated");

	Params::UWBP_HomeQuickPlay_SingleButton_C_On_Party_Updated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsInParty_ReturnValue = CallFunc_IsInParty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdatePartyMemberReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsReady_IsReady                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdatePartyMemberReady(bool CallFunc_IsReady_IsReady, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdatePartyMemberReady");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdatePartyMemberReady_Params Parms{};

	Parms.CallFunc_IsReady_IsReady = CallFunc_IsReady_IsReady;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyMemberDataUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HomeQuickPlay_SingleButton_C::OnPartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPartyMemberDataUpdated");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnPartyMemberDataUpdated_Params Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BindPartyReadyEvents
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

void UWBP_HomeQuickPlay_SingleButton_C::BindPartyReadyEvents(class URHQueueDataFactory* LocalQueueFactory, class URHPartyManager* LocalPartyFactory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "BindPartyReadyEvents");

	Params::UWBP_HomeQuickPlay_SingleButton_C_BindPartyReadyEvents_Params Parms{};

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


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyMemberReadyUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsReady                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnPartyMemberReadyUpdated(class UObject* Sender, bool IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPartyMemberReadyUpdated");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnPartyMemberReadyUpdated_Params Parms{};

	Parms.Sender = Sender;
	Parms.IsReady = IsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.SetIsReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsReady                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::SetIsReady(bool bIsReady, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "SetIsReady");

	Params::UWBP_HomeQuickPlay_SingleButton_C_SetIsReady_Params Parms{};

	Parms.bIsReady = bIsReady;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsReady                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReady_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::IsReady(bool* IsReady, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "IsReady");

	Params::UWBP_HomeQuickPlay_SingleButton_C_IsReady_Params Parms{};

	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsReady_ReturnValue = CallFunc_IsReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsReady != nullptr)
		*IsReady = Parms.IsReady;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsPartyReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               PartyIsReady                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyReady_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::IsPartyReady(bool* PartyIsReady, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPartyReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "IsPartyReady");

	Params::UWBP_HomeQuickPlay_SingleButton_C_IsPartyReady_Params Parms{};

	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPartyReady_ReturnValue = CallFunc_IsPartyReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PartyIsReady != nullptr)
		*PartyIsReady = Parms.PartyIsReady;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateButtonState
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
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyFillFeatureEnabled_Enabled                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyFillFeatureEnabled_Enabled_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsReady_IsReady                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPartyReady_PartyIsReady                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanControl                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanQueue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::UpdateButtonState(bool bIsReady, bool bPartyIsReady, enum class EQuickPlayQueueState QuickPlayState, bool bCanControl, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPartyFillFeatureEnabled_Enabled, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsPartyFillFeatureEnabled_Enabled_1, class FText K2Node_Select_Default, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue_2, bool Temp_bool_Variable_4, bool CallFunc_IsReady_IsReady, bool CallFunc_IsPartyReady_PartyIsReady, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, int32 CallFunc_SelectInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, bool CallFunc_GetQueuePermissions_CanControl, bool CallFunc_GetQueuePermissions_CanQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateButtonState");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateButtonState_Params Parms{};

	Parms.bIsReady = bIsReady;
	Parms.bPartyIsReady = bPartyIsReady;
	Parms.QuickPlayState = QuickPlayState;
	Parms.bCanControl = bCanControl;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsPartyFillFeatureEnabled_Enabled = CallFunc_IsPartyFillFeatureEnabled_Enabled;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsPartyFillFeatureEnabled_Enabled_1 = CallFunc_IsPartyFillFeatureEnabled_Enabled_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_IsReady_IsReady = CallFunc_IsReady_IsReady;
	Parms.CallFunc_IsPartyReady_PartyIsReady = CallFunc_IsPartyReady_PartyIsReady;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetQueuePermissions_CanControl = CallFunc_GetQueuePermissions_CanControl;
	Parms.CallFunc_GetQueuePermissions_CanQueue = CallFunc_GetQueuePermissions_CanQueue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.IsTrainingQueue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              QueueId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsTraining                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      TrainingQueueIds                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::IsTrainingQueue(int32 QueueId, bool* IsTraining, const TArray<int32>& TrainingQueueIds, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "IsTrainingQueue");

	Params::UWBP_HomeQuickPlay_SingleButton_C_IsTrainingQueue_Params Parms{};

	Parms.QueueId = QueueId;
	Parms.TrainingQueueIds = TrainingQueueIds;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTraining != nullptr)
		*IsTraining = Parms.IsTraining;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetQueuedTimeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_FormatSecondsToTimerText_Timer_Text                     (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_HomeQuickPlay_SingleButton_C::GetQueuedTimeText(class FText CallFunc_FormatSecondsToTimerText_Timer_Text, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "GetQueuedTimeText");

	Params::UWBP_HomeQuickPlay_SingleButton_C_GetQueuedTimeText_Params Parms{};

	Parms.CallFunc_FormatSecondsToTimerText_Timer_Text = CallFunc_FormatSecondsToTimerText_Timer_Text;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.UpdateQueueTimer
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

void UWBP_HomeQuickPlay_SingleButton_C::UpdateQueueTimer(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsPendingQueueUpdate_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_FormatSecondsToTimerText_Timer_Text, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "UpdateQueueTimer");

	Params::UWBP_HomeQuickPlay_SingleButton_C_UpdateQueueTimer_Params Parms{};

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


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.HandleQuickPlayStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQuickPlayQueueState    LocalQuickPlayState                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanControl                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::HandleQuickPlayStateUpdate(enum class EQuickPlayQueueState LocalQuickPlayState, bool bCanControl, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "HandleQuickPlayStateUpdate");

	Params::UWBP_HomeQuickPlay_SingleButton_C_HandleQuickPlayStateUpdate_Params Parms{};

	Parms.LocalQuickPlayState = LocalQuickPlayState;
	Parms.bCanControl = bCanControl;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ApplyKeyShortcutsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::ApplyKeyShortcutsEnabled(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "ApplyKeyShortcutsEnabled");

	Params::UWBP_HomeQuickPlay_SingleButton_C_ApplyKeyShortcutsEnabled_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.GetNavigationWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHWidget*>           Return_Value                                                     (Parm, OutParm, ContainsInstancedReference)
// TArray<class URHWidget*>           K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_HomeQuickPlay_SingleButton_C::GetNavigationWidgets(TArray<class URHWidget*>* Return_Value, TArray<class URHWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "GetNavigationWidgets");

	Params::UWBP_HomeQuickPlay_SingleButton_C_GetNavigationWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::HandleInputModeChanged(enum class ERH_INPUT_STATE InputMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "HandleInputModeChanged");

	Params::UWBP_HomeQuickPlay_SingleButton_C_HandleInputModeChanged_Params Parms{};

	Parms.InputMode = InputMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.SetupGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::SetupGamepadCallout(const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "SetupGamepadCallout");

	Params::UWBP_HomeQuickPlay_SingleButton_C_SetupGamepadCallout_Params Parms{};

	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature");

	Params::UWBP_HomeQuickPlay_SingleButton_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	Params::UWBP_HomeQuickPlay_SingleButton_C_BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "BndEvt__PlayBtnHitTarget_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnUpdateQuickPlayState
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EQuickPlayQueueState    QueueState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnUpdateQuickPlayState(enum class EQuickPlayQueueState QueueState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnUpdateQuickPlayState");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnUpdateQuickPlayState_Params Parms{};

	Parms.QueueState = QueueState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnSelectedQueueUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URH_MatchmakingQueueInfo*    CurrentSelectedQueue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnSelectedQueueUpdate(class URH_MatchmakingQueueInfo* CurrentSelectedQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnSelectedQueueUpdate");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnSelectedQueueUpdate_Params Parms{};

	Parms.CurrentSelectedQueue = CurrentSelectedQueue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnQueueStateUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ERH_MatchStatus         CurrentMatchStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnQueueStateUpdate(enum class ERH_MatchStatus CurrentMatchStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnQueueStateUpdate");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnQueueStateUpdate_Params Parms{};

	Parms.CurrentMatchStatus = CurrentMatchStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnUpdateQueueTimeElapsed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              TimeElapsed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnUpdateQueueTimeElapsed(float TimeElapsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnUpdateQueueTimeElapsed");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnUpdateQueueTimeElapsed_Params Parms{};

	Parms.TimeElapsed = TimeElapsed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.Pending Queue Update Timeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::Pending_Queue_Update_Timeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "Pending Queue Update Timeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.HandleCustomQueueUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::HandleCustomQueueUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "HandleCustomQueueUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ForceClickPlayButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::ForceClickPlayButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "ForceClickPlayButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.OnPartyMemberPromoted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              PlayerId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::OnPartyMemberPromoted(int64 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "OnPartyMemberPromoted");

	Params::UWBP_HomeQuickPlay_SingleButton_C_OnPartyMemberPromoted_Params Parms{};

	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.ExecuteUbergraph_WBP_HomeQuickPlay_SingleButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    K2Node_Event_QueueState                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingQueueInfo*    K2Node_Event_CurrentSelectedQueue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanControl                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanQueue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_MatchStatus         K2Node_Event_CurrentMatchStatus                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TimeElapsed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptLeaveMatch_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCustomMatch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBestQueue_QueueId                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedQueueId_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RHMatchmakingAttributesCallFunc_Calculate_Matchmaking_Attributes_Attributes             (None)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetSelectedMatchmakingAttributes_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              K2Node_CustomEvent_PlayerId                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptCancelQueue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSoloQueuePreference_QueueForSolo                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeQuickPlay_SingleButton_C::ExecuteUbergraph_WBP_HomeQuickPlay_SingleButton(int32 EntryPoint, enum class EQuickPlayQueueState K2Node_Event_QueueState, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, class URH_MatchmakingQueueInfo* K2Node_Event_CurrentSelectedQueue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue_1, bool CallFunc_GetQueuePermissions_CanControl, bool CallFunc_GetQueuePermissions_CanQueue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, enum class ERH_MatchStatus K2Node_Event_CurrentMatchStatus, float K2Node_Event_TimeElapsed, bool CallFunc_UIX_AttemptLeaveMatch_ReturnValue, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, bool CallFunc_AddViewRoute_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess_1, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue_1, bool CallFunc_IsInCustomMatch_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue, const class FString& CallFunc_GetBestQueue_QueueId, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetSelectedQueueId_ReturnValue, const struct RallyHereStart_RHMatchmakingAttributes& CallFunc_Calculate_Matchmaking_Attributes_Attributes, class UWidget* K2Node_ComponentBoundEvent_Widget, bool CallFunc_SetSelectedMatchmakingAttributes_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int64 K2Node_CustomEvent_PlayerId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, bool CallFunc_UIX_AttemptCancelQueue_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetSoloQueuePreference_QueueForSolo, double K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "ExecuteUbergraph_WBP_HomeQuickPlay_SingleButton");

	Params::UWBP_HomeQuickPlay_SingleButton_C_ExecuteUbergraph_WBP_HomeQuickPlay_SingleButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_QueueState = K2Node_Event_QueueState;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.K2Node_Event_CurrentSelectedQueue = K2Node_Event_CurrentSelectedQueue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue_1 = CallFunc_GetCurrentQuickPlayState_ReturnValue_1;
	Parms.CallFunc_GetQueuePermissions_CanControl = CallFunc_GetQueuePermissions_CanControl;
	Parms.CallFunc_GetQueuePermissions_CanQueue = CallFunc_GetQueuePermissions_CanQueue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_CurrentMatchStatus = K2Node_Event_CurrentMatchStatus;
	Parms.K2Node_Event_TimeElapsed = K2Node_Event_TimeElapsed;
	Parms.CallFunc_UIX_AttemptLeaveMatch_ReturnValue = CallFunc_UIX_AttemptLeaveMatch_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue_1 = CallFunc_GetQueueDataFactory_ReturnValue_1;
	Parms.CallFunc_IsInCustomMatch_ReturnValue = CallFunc_IsInCustomMatch_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue = CallFunc_UIX_AttemptJoinSelectedQueue_ReturnValue;
	Parms.CallFunc_GetBestQueue_QueueId = CallFunc_GetBestQueue_QueueId;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetSelectedQueueId_ReturnValue = CallFunc_SetSelectedQueueId_ReturnValue;
	Parms.CallFunc_Calculate_Matchmaking_Attributes_Attributes = CallFunc_Calculate_Matchmaking_Attributes_Attributes;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_SetSelectedMatchmakingAttributes_ReturnValue = CallFunc_SetSelectedMatchmakingAttributes_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_PlayerId = K2Node_CustomEvent_PlayerId;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_UIX_AttemptCancelQueue_ReturnValue = CallFunc_UIX_AttemptCancelQueue_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetSoloQueuePreference_QueueForSolo = CallFunc_GetSoloQueuePreference_QueueForSolo;
	Parms.K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast = K2Node_VariableSet_CurrentQueueTimeElapsed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeQuickPlay_SingleButton.WBP_HomeQuickPlay_SingleButton_C.TriggerStatusModeDisplayUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeQuickPlay_SingleButton_C::TriggerStatusModeDisplayUpdate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeQuickPlay_SingleButton_C", "TriggerStatusModeDisplayUpdate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


