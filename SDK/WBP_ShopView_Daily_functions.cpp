#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopView_Daily.WBP_ShopView_Daily_C
// (None)

class UClass* UWBP_ShopView_Daily_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopView_Daily_C");

	return Clss;
}


// WBP_ShopView_Daily_C WBP_ShopView_Daily.Default__WBP_ShopView_Daily_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopView_Daily_C* UWBP_ShopView_Daily_C::GetDefaultObj()
{
	static class UWBP_ShopView_Daily_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopView_Daily_C*>(UWBP_ShopView_Daily_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnAppSettingsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_ConfigSubsystem*         ConfigSubsystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnAppSettingsUpdated(class URH_ConfigSubsystem* ConfigSubsystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnAppSettingsUpdated");

	Params::UWBP_ShopView_Daily_C_OnAppSettingsUpdated_Params Parms{};

	Parms.ConfigSubsystem = ConfigSubsystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateAllowRedirect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::UpdateAllowRedirect(class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateAllowRedirect");

	Params::UWBP_ShopView_Daily_C_UpdateAllowRedirect_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_GetAppSetting_Value = CallFunc_GetAppSetting_Value;
	Parms.CallFunc_GetAppSetting_ReturnValue = CallFunc_GetAppSetting_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BindAppSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::BindAppSettings(class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BindAppSettings");

	Params::UWBP_ShopView_Daily_C_BindAppSettings_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.IsDisplayingLoadingState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ShopView_Daily_C::IsDisplayingLoadingState(class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "IsDisplayingLoadingState");

	Params::UWBP_ShopView_Daily_C_IsDisplayingLoadingState_Params Parms{};

	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ShopPanel_Base_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::UpdateSelection(class UWBP_ShopPanel_Base_C* Button, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateSelection");

	Params::UWBP_ShopView_Daily_C_UpdateSelection_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.Set Default Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniformGridPanel*           LocalGrid                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisplayingLoadingState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       K2Node_DynamicCast_AsWBP_Shop_Panel_Base                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridPanel*           K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::Set_Default_Focus(class UUniformGridPanel* LocalGrid, bool CallFunc_IsDisplayingLoadingState_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ShopPanel_Base_C* K2Node_DynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_DynamicCast_bSuccess, class UPanelWidget* CallFunc_GetParent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UUniformGridPanel* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "Set Default Focus");

	Params::UWBP_ShopView_Daily_C_Set_Default_Focus_Params Parms{};

	Parms.LocalGrid = LocalGrid;
	Parms.CallFunc_IsDisplayingLoadingState_ReturnValue = CallFunc_IsDisplayingLoadingState_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Shop_Panel_Base = K2Node_DynamicCast_AsWBP_Shop_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CameraTag                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_Map_Find_Value_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisplayingLoadingState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::UpdateCamera(class FName CameraTag, class FName Temp_name_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class FName Temp_name_Variable_1, class ACameraActor* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, class ACameraActor* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsDisplayingLoadingState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateCamera");

	Params::UWBP_ShopView_Daily_C_UpdateCamera_Params Parms{};

	Parms.CameraTag = CameraTag;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsDisplayingLoadingState_ReturnValue = CallFunc_IsDisplayingLoadingState_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisplayingLoadingState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventoryItem>CallFunc_GetWeaponSkins_WeaponSkins                              (ReferenceParm)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventoryItem>CallFunc_GetSuitSkins_SuitSkins                                  (ReferenceParm)

void UWBP_ShopView_Daily_C::UpdateView(int32 Index, bool CallFunc_IsDisplayingLoadingState_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ShopManager, TArray<struct Valhalla_InventoryItem>& CallFunc_GetWeaponSkins_WeaponSkins, class AValShopManager* CallFunc_GetShopManager_ShopManager_1, TArray<struct Valhalla_InventoryItem>& CallFunc_GetSuitSkins_SuitSkins)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateView");

	Params::UWBP_ShopView_Daily_C_UpdateView_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_IsDisplayingLoadingState_ReturnValue = CallFunc_IsDisplayingLoadingState_ReturnValue;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetWeaponSkins_WeaponSkins = CallFunc_GetWeaponSkins_WeaponSkins;
	Parms.CallFunc_GetShopManager_ShopManager_1 = CallFunc_GetShopManager_ShopManager_1;
	Parms.CallFunc_GetSuitSkins_SuitSkins = CallFunc_GetSuitSkins_SuitSkins;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.Update Affordability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ShopPrice          ShopPrice                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CantAfford                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValPlayerInventory*         CallFunc_GetLocalPlayerInventory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::Update_Affordability(const struct Valhalla_ShopPrice& ShopPrice, bool CantAfford, class UValPlayerInventory* CallFunc_GetLocalPlayerInventory_ReturnValue, int32 CallFunc_GetInventoryCount_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "Update Affordability");

	Params::UWBP_ShopView_Daily_C_Update_Affordability_Params Parms{};

	Parms.ShopPrice = ShopPrice;
	Parms.CantAfford = CantAfford;
	Parms.CallFunc_GetLocalPlayerInventory_ReturnValue = CallFunc_GetLocalPlayerInventory_ReturnValue;
	Parms.CallFunc_GetInventoryCount_ReturnValue = CallFunc_GetInventoryCount_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_ShopView_Daily_C::UpdateText(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateText");

	Params::UWBP_ShopView_Daily_C_UpdateText_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.Update Purchase Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LocalIsSuit                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ShopPrice          CallFunc_GetShopPrice_ShopPrice                                  (NoDestructor)
// bool                               CallFunc_GetShopPrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::Update_Purchase_Data(const struct Valhalla_InventoryItem& Item, bool LocalIsSuit, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 K2Node_Select_Default, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "Update Purchase Data");

	Params::UWBP_ShopView_Daily_C_Update_Purchase_Data_Params Parms{};

	Parms.Item = Item;
	Parms.LocalIsSuit = LocalIsSuit;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetShopPrice_ShopPrice = CallFunc_GetShopPrice_ShopPrice;
	Parms.CallFunc_GetShopPrice_ReturnValue = CallFunc_GetShopPrice_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnWidgetGamepadHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bHovered                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnWidgetGamepadHovered(class URHWidget* Widget, bool bHovered, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnWidgetGamepadHovered");

	Params::UWBP_ShopView_Daily_C_OnWidgetGamepadHovered_Params Parms{};

	Parms.Widget = Widget;
	Parms.bHovered = bHovered;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.Register Skins Grid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focus                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHWidget*>           NavWidgets                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GridWidth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::Register_Skins_Grid(bool Focus, TArray<class URHWidget*>& NavWidgets, int32 FocusGroup, int32 GridWidth, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class URHWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class URHWidget* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "Register Skins Grid");

	Params::UWBP_ShopView_Daily_C_Register_Skins_Grid_Params Parms{};

	Parms.Focus = Focus;
	Parms.NavWidgets = NavWidgets;
	Parms.FocusGroup = FocusGroup;
	Parms.GridWidth = GridWidth;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.PushPurchaseConfirmScene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      DisplayItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsSuit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_GetTopViewRouteWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PurchaseConfirmationModal_C*K2Node_DynamicCast_AsWBP_Purchase_Confirmation_Modal             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::PushPurchaseConfirmScene(const struct Valhalla_InventoryItem& DisplayItem, bool IsSuit, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, bool CallFunc_AddViewRoute_ReturnValue, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHWidget* CallFunc_GetTopViewRouteWidget_ReturnValue, class UWBP_PurchaseConfirmationModal_C* K2Node_DynamicCast_AsWBP_Purchase_Confirmation_Modal, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "PushPurchaseConfirmScene");

	Params::UWBP_ShopView_Daily_C_PushPurchaseConfirmScene_Params Parms{};

	Parms.DisplayItem = DisplayItem;
	Parms.IsSuit = IsSuit;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTopViewRouteWidget_ReturnValue = CallFunc_GetTopViewRouteWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Purchase_Confirmation_Modal = K2Node_DynamicCast_AsWBP_Purchase_Confirmation_Modal;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateArmoryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      SkinItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController_City*   K2Node_DynamicCast_AsVal_Player_Controller_City                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValPreviewManager*          CallFunc_GetPreviewManager_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::UpdateArmoryItem(const struct Valhalla_InventoryItem& SkinItem, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateArmoryItem");

	Params::UWBP_ShopView_Daily_C_UpdateArmoryItem_Params Parms{};

	Parms.SkinItem = SkinItem;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_Controller_City = K2Node_DynamicCast_AsVal_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPreviewManager_ReturnValue = CallFunc_GetPreviewManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnItemWrapSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      ShopItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ShopView_Daily_C::OnItemWrapSelected(const struct Valhalla_InventoryItem& ShopItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnItemWrapSelected");

	Params::UWBP_ShopView_Daily_C_OnItemWrapSelected_Params Parms{};

	Parms.ShopItem = ShopItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.StartShopRefreshUpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::StartShopRefreshUpdateTimer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "StartShopRefreshUpdateTimer");

	Params::UWBP_ShopView_Daily_C_StartShopRefreshUpdateTimer_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.Update Shop Refresh Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSecondsToShopRefresh_Seconds                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::Update_Shop_Refresh_Text(int32 CallFunc_GetSecondsToShopRefresh_Seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "Update Shop Refresh Text");

	Params::UWBP_ShopView_Daily_C_Update_Shop_Refresh_Text_Params Parms{};

	Parms.CallFunc_GetSecondsToShopRefresh_Seconds = CallFunc_GetSecondsToShopRefresh_Seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.GetSecondsToShopRefresh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seconds                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValPlayerInventory*         CallFunc_GetLocalPlayerInventory_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryTimeRemaining_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::GetSecondsToShopRefresh(int32* Seconds, class UValPlayerInventory* CallFunc_GetLocalPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInventoryTimeRemaining_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "GetSecondsToShopRefresh");

	Params::UWBP_ShopView_Daily_C_GetSecondsToShopRefresh_Params Parms{};

	Parms.CallFunc_GetLocalPlayerInventory_ReturnValue = CallFunc_GetLocalPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryTimeRemaining_ReturnValue = CallFunc_GetInventoryTimeRemaining_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Seconds != nullptr)
		*Seconds = Parms.Seconds;

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.ShowStoreOffers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::ShowStoreOffers(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "ShowStoreOffers");

	Params::UWBP_ShopView_Daily_C_ShowStoreOffers_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.UpdateArmorySkin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      SkinItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController_City*   K2Node_DynamicCast_AsVal_Player_Controller_City                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValPreviewManager*          CallFunc_GetPreviewManager_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::UpdateArmorySkin(const struct Valhalla_InventoryItem& SkinItem, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "UpdateArmorySkin");

	Params::UWBP_ShopView_Daily_C_UpdateArmorySkin_Params Parms{};

	Parms.SkinItem = SkinItem;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_Controller_City = K2Node_DynamicCast_AsVal_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPreviewManager_ReturnValue = CallFunc_GetPreviewManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnItemSkinsUpdated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Valhalla_InventoryItem>Items                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      CallFunc_Array_Get_Item                                          (None)
// class UWBP_ShopPanel_Base_C*       CallFunc_GetItemWidgetAt_Widget                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ShopPrice          CallFunc_GetShopPrice_ShopPrice                                  (NoDestructor)
// bool                               CallFunc_GetShopPrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnItemSkinsUpdated(TArray<struct Valhalla_InventoryItem>& Items, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct Valhalla_InventoryItem& CallFunc_Array_Get_Item, class UWBP_ShopPanel_Base_C* CallFunc_GetItemWidgetAt_Widget, bool CallFunc_IsValid_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnItemSkinsUpdated");

	Params::UWBP_ShopView_Daily_C_OnItemSkinsUpdated_Params Parms{};

	Parms.Items = Items;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemWidgetAt_Widget = CallFunc_GetItemWidgetAt_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetShopPrice_ShopPrice = CallFunc_GetShopPrice_ShopPrice;
	Parms.CallFunc_GetShopPrice_ReturnValue = CallFunc_GetShopPrice_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnSuitSkinsUpdated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Valhalla_InventoryItem>Items                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      CallFunc_Array_Get_Item                                          (None)
// class UWBP_ShopPanel_Base_C*       CallFunc_GetSuitWidgetAt_Widget                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ShopPrice          CallFunc_GetShopPrice_ShopPrice                                  (NoDestructor)
// bool                               CallFunc_GetShopPrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnSuitSkinsUpdated(TArray<struct Valhalla_InventoryItem>& Items, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_InventoryItem& CallFunc_Array_Get_Item, class UWBP_ShopPanel_Base_C* CallFunc_GetSuitWidgetAt_Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnSuitSkinsUpdated");

	Params::UWBP_ShopView_Daily_C_OnSuitSkinsUpdated_Params Parms{};

	Parms.Items = Items;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetSuitWidgetAt_Widget = CallFunc_GetSuitWidgetAt_Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetShopPrice_ShopPrice = CallFunc_GetShopPrice_ShopPrice;
	Parms.CallFunc_GetShopPrice_ReturnValue = CallFunc_GetShopPrice_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      ShopItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_ShopPanel_Base_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnItemSelected(const struct Valhalla_InventoryItem& ShopItem, class UWBP_ShopPanel_Base_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnItemSelected");

	Params::UWBP_ShopView_Daily_C_OnItemSelected_Params Parms{};

	Parms.ShopItem = ShopItem;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnSuitSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      ShopItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_ShopPanel_Base_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnSuitSelected(const struct Valhalla_InventoryItem& ShopItem, class UWBP_ShopPanel_Base_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnSuitSelected");

	Params::UWBP_ShopView_Daily_C_OnSuitSelected_Params Parms{};

	Parms.ShopItem = ShopItem;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.CacheItemWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             NewLocalVar_0                                                    (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       K2Node_DynamicCast_AsWBP_Shop_Panel_Base                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::CacheItemWidgets(const TArray<class UWidget*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWBP_ShopPanel_Base_C* K2Node_DynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "CacheItemWidgets");

	Params::UWBP_ShopView_Daily_C_CacheItemWidgets_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWBP_Shop_Panel_Base = K2Node_DynamicCast_AsWBP_Shop_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.CacheSuitWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             NewLocalVar                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       K2Node_DynamicCast_AsWBP_Shop_Panel_Base                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::CacheSuitWidgets(const TArray<class UWidget*>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ShopPanel_Base_C* K2Node_DynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "CacheSuitWidgets");

	Params::UWBP_ShopView_Daily_C_CacheSuitWidgets_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Shop_Panel_Base = K2Node_DynamicCast_AsWBP_Shop_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.GetShopManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AValShopManager*             ShopManager                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::GetShopManager(class AValShopManager** ShopManager, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "GetShopManager");

	Params::UWBP_ShopView_Daily_C_GetShopManager_Params Parms{};

	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetShopManager_ReturnValue = CallFunc_GetShopManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShopManager != nullptr)
		*ShopManager = Parms.ShopManager;

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.GetItemWidgetAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::GetItemWidgetAt(int32 Index, class UWBP_ShopPanel_Base_C** Widget, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "GetItemWidgetAt");

	Params::UWBP_ShopView_Daily_C_GetItemWidgetAt_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.GetSuitWidgetAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::GetSuitWidgetAt(int32 Index, class UWBP_ShopPanel_Base_C** Widget, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "GetSuitWidgetAt");

	Params::UWBP_ShopView_Daily_C_GetSuitWidgetAt_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BindShopManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValShopManager*             ShopManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventoryItem>CallFunc_GetWeaponSkins_WeaponSkins                              (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventoryItem>CallFunc_GetSuitSkins_SuitSkins                                  (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::BindShopManager(class AValShopManager* ShopManager, bool CallFunc_IsValid_ReturnValue, TArray<struct Valhalla_InventoryItem>& CallFunc_GetWeaponSkins_WeaponSkins, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct Valhalla_InventoryItem>& CallFunc_GetSuitSkins_SuitSkins, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BindShopManager");

	Params::UWBP_ShopView_Daily_C_BindShopManager_Params Parms{};

	Parms.ShopManager = ShopManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeaponSkins_WeaponSkins = CallFunc_GetWeaponSkins_WeaponSkins;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSuitSkins_SuitSkins = CallFunc_GetSuitSkins_SuitSkins;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BindItemWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::BindItemWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BindItemWidgets");

	Params::UWBP_ShopView_Daily_C_BindItemWidgets_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BindSuitWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::BindSuitWidgets(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_ShopPanel_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BindSuitWidgets");

	Params::UWBP_ShopView_Daily_C_BindSuitWidgets_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BindPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::BindPlayer(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BindPlayer");

	Params::UWBP_ShopView_Daily_C_BindPlayer_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetShopManager_ReturnValue = CallFunc_GetShopManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.OnInitialized
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetSecondsToShopRefresh_Seconds                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::OnInitialized(int32 CallFunc_GetSecondsToShopRefresh_Seconds, int32 CallFunc_Divide_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "OnInitialized");

	Params::UWBP_ShopView_Daily_C_OnInitialized_Params Parms{};

	Parms.CallFunc_GetSecondsToShopRefresh_Seconds = CallFunc_GetSecondsToShopRefresh_Seconds;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.ForceRefreshSuitSkins
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopView_Daily_C::ForceRefreshSuitSkins()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "ForceRefreshSuitSkins");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::FocusGroupNavigateDownFailure(int32 FocusGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "FocusGroupNavigateDownFailure");

	Params::UWBP_ShopView_Daily_C_FocusGroupNavigateDownFailure_Params Parms{};

	Parms.FocusGroup = FocusGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::FocusGroupNavigateUpFailure(int32 FocusGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "FocusGroupNavigateUpFailure");

	Params::UWBP_ShopView_Daily_C_FocusGroupNavigateUpFailure_Params Parms{};

	Parms.FocusGroup = FocusGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BndEvt__WBP_ShopView_Daily_PurchaseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopView_Daily_C::BndEvt__WBP_ShopView_Daily_PurchaseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BndEvt__WBP_ShopView_Daily_PurchaseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.BndEvt__WBP_ShopView_Daily_GetMoreTokens_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopView_Daily_C::BndEvt__WBP_ShopView_Daily_GetMoreTokens_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "BndEvt__WBP_ShopView_Daily_GetMoreTokens_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.ExecuteUbergraph_WBP_ShopView_Daily
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FocusGroup_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FocusGroup                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_Daily_C::ExecuteUbergraph_WBP_ShopView_Daily(int32 EntryPoint, int32 K2Node_Event_FocusGroup_1, int32 K2Node_Event_FocusGroup, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "ExecuteUbergraph_WBP_ShopView_Daily");

	Params::UWBP_ShopView_Daily_C_ExecuteUbergraph_WBP_ShopView_Daily_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FocusGroup_1 = K2Node_Event_FocusGroup_1;
	Parms.K2Node_Event_FocusGroup = K2Node_Event_FocusGroup;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.RequestNavigateToTokens__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopView_Daily_C::RequestNavigateToTokens__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "RequestNavigateToTokens__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_Daily.WBP_ShopView_Daily_C.RequestRenderRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopView_Daily_C::RequestRenderRefresh__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_Daily_C", "RequestRenderRefresh__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


