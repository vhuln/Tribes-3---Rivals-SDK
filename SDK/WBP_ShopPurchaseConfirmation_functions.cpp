#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C
// (None)

class UClass* UWBP_ShopPurchaseConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopPurchaseConfirmation_C");

	return Clss;
}


// WBP_ShopPurchaseConfirmation_C WBP_ShopPurchaseConfirmation.Default__WBP_ShopPurchaseConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopPurchaseConfirmation_C* UWBP_ShopPurchaseConfirmation_C::GetDefaultObj()
{
	static class UWBP_ShopPurchaseConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopPurchaseConfirmation_C*>(UWBP_ShopPurchaseConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.OnAppSettingsUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_ConfigSubsystem*         ConfigSubsystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::OnAppSettingsUpdate(class URH_ConfigSubsystem* ConfigSubsystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "OnAppSettingsUpdate");

	Params::UWBP_ShopPurchaseConfirmation_C_OnAppSettingsUpdate_Params Parms{};

	Parms.ConfigSubsystem = ConfigSubsystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateItemTypeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_ShopPurchaseConfirmation_C::UpdateItemTypeText(bool IsSuit, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateItemTypeText");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateItemTypeText_Params Parms{};

	Parms.IsSuit = IsSuit;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.BindAppSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::BindAppSettings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "BindAppSettings");

	Params::UWBP_ShopPurchaseConfirmation_C_BindAppSettings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateAllowRedirect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShopManager_Valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ShopPrice          CallFunc_GetShopPrice_ShopPrice                                  (NoDestructor)
// bool                               CallFunc_GetShopPrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::UpdateAllowRedirect(class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateAllowRedirect");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateAllowRedirect_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_GetAppSetting_Value = CallFunc_GetAppSetting_Value;
	Parms.CallFunc_GetAppSetting_ReturnValue = CallFunc_GetAppSetting_ReturnValue;
	Parms.CallFunc_GetShopManager_Valid = CallFunc_GetShopManager_Valid;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetShopPrice_ShopPrice = CallFunc_GetShopPrice_ShopPrice;
	Parms.CallFunc_GetShopPrice_ReturnValue = CallFunc_GetShopPrice_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.NavigateToTokenShop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveTopViewRoute_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_GetTopViewRouteWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopScene_C*            K2Node_DynamicCast_AsWBP_Shop_Scene                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::NavigateToTokenShop(bool CallFunc_AddViewRoute_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue, bool CallFunc_RemoveTopViewRoute_ReturnValue, class URHWidget* CallFunc_GetTopViewRouteWidget_ReturnValue, class UWBP_ShopScene_C* K2Node_DynamicCast_AsWBP_Shop_Scene, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "NavigateToTokenShop");

	Params::UWBP_ShopPurchaseConfirmation_C_NavigateToTokenShop_Params Parms{};

	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetViewManager_ReturnValue = CallFunc_GetViewManager_ReturnValue;
	Parms.CallFunc_RemoveTopViewRoute_ReturnValue = CallFunc_RemoveTopViewRoute_ReturnValue;
	Parms.CallFunc_GetTopViewRouteWidget_ReturnValue = CallFunc_GetTopViewRouteWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Shop_Scene = K2Node_DynamicCast_AsWBP_Shop_Scene;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.Update Affordability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ShopPrice          ShopPrice                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               CantAfford                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::Update_Affordability(const struct Valhalla_ShopPrice& ShopPrice, bool CantAfford, bool NewLocalVar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "Update Affordability");

	Params::UWBP_ShopPurchaseConfirmation_C_Update_Affordability_Params Parms{};

	Parms.ShopPrice = ShopPrice;
	Parms.CantAfford = CantAfford;
	Parms.NewLocalVar = NewLocalVar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.OnPurchaseResponse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Guid            InventoryId                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShopPurchaseResponse   Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::OnPurchaseResponse(struct CoreUObject_Guid& InventoryId, enum class EShopPurchaseResponse Response, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "OnPurchaseResponse");

	Params::UWBP_ShopPurchaseConfirmation_C_OnPurchaseResponse_Params Parms{};

	Parms.InventoryId = InventoryId;
	Parms.Response = Response;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.BindShopManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValShopManager*             ShopManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::BindShopManager(class AValShopManager* ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "BindShopManager");

	Params::UWBP_ShopPurchaseConfirmation_C_BindShopManager_Params Parms{};

	Parms.ShopManager = ShopManager;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.GetShopManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             ShopManager                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::GetShopManager(bool* Valid, class AValShopManager** ShopManager, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "GetShopManager");

	Params::UWBP_ShopPurchaseConfirmation_C_GetShopManager_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetShopManager_ReturnValue = CallFunc_GetShopManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (ShopManager != nullptr)
		*ShopManager = Parms.ShopManager;

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_ShopPurchaseConfirmation_C::UpdateText(bool CallFunc_IsValid_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateText");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromRarity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)

void UWBP_ShopPurchaseConfirmation_C::UpdateRarity(class FName CallFunc_MakeLiteralName_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateRarity");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateRarity_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetColorFromRarity_ReturnValue = CallFunc_GetColorFromRarity_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateSuitComponentText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDye                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        LocalInventoryManager                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SuitComponentEntry_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::UpdateSuitComponentText(bool Value, bool IsDye, class AValInventoryManager* LocalInventoryManager, int32 Temp_int_Array_Index_Variable, class UWBP_SuitComponentEntry_C* CallFunc_Create_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Array_Get_Item, class UVerticalBox* K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateSuitComponentText");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateSuitComponentText_Params Parms{};

	Parms.Value = Value;
	Parms.IsDye = IsDye;
	Parms.LocalInventoryManager = LocalInventoryManager;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.GetItemTypeText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)

void UWBP_ShopPurchaseConfirmation_C::GetItemTypeText(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "GetItemTypeText");

	Params::UWBP_ShopPurchaseConfirmation_C_GetItemTypeText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveTopViewRoute_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ShopPurchaseConfirmation_C::NavigateBack(bool CallFunc_RemoveTopViewRoute_ReturnValue, bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "NavigateBack");

	Params::UWBP_ShopPurchaseConfirmation_C_NavigateBack_Params Parms{};

	Parms.CallFunc_RemoveTopViewRoute_ReturnValue = CallFunc_RemoveTopViewRoute_ReturnValue;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.HandleBackButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::HandleBackButtonPressed(bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "HandleBackButtonPressed");

	Params::UWBP_ShopPurchaseConfirmation_C_HandleBackButtonPressed_Params Parms{};

	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      DisplayItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LocalIsSuit                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShopManager_Valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ShopPrice          CallFunc_GetShopPrice_ShopPrice                                  (NoDestructor)
// bool                               CallFunc_GetShopPrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::UpdateData(const struct Valhalla_InventoryItem& DisplayItem, bool LocalIsSuit, int32 Temp_int_Variable, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool CallFunc_MatchesTag_ReturnValue, int32 K2Node_Select_Default, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateData");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateData_Params Parms{};

	Parms.DisplayItem = DisplayItem;
	Parms.LocalIsSuit = LocalIsSuit;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetShopManager_Valid = CallFunc_GetShopManager_Valid;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetShopPrice_ShopPrice = CallFunc_GetShopPrice_ShopPrice;
	Parms.CallFunc_GetShopPrice_ReturnValue = CallFunc_GetShopPrice_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPurchaseConfirmation_C::UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "UpdateCamera");

	Params::UWBP_ShopPurchaseConfirmation_C_UpdateCamera_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.OnPurchaseTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::OnPurchaseTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "OnPurchaseTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.BndEvt__WBP_ShopPurchaseConfirmation_GetMoreTokens_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopPurchaseConfirmation_C::BndEvt__WBP_ShopPurchaseConfirmation_GetMoreTokens_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "BndEvt__WBP_ShopPurchaseConfirmation_GetMoreTokens_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPurchaseConfirmation.WBP_ShopPurchaseConfirmation_C.ExecuteUbergraph_WBP_ShopPurchaseConfirmation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShopManager_Valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShopManager_Valid_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_ShopPurchaseConfirmation_C::ExecuteUbergraph_WBP_ShopPurchaseConfirmation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GetShopManager_Valid_1, class AValShopManager* CallFunc_GetShopManager_ShopManager_1, TArray<class FName>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPurchaseConfirmation_C", "ExecuteUbergraph_WBP_ShopPurchaseConfirmation");

	Params::UWBP_ShopPurchaseConfirmation_C_ExecuteUbergraph_WBP_ShopPurchaseConfirmation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetShopManager_Valid = CallFunc_GetShopManager_Valid;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetShopManager_Valid_1 = CallFunc_GetShopManager_Valid_1;
	Parms.CallFunc_GetShopManager_ShopManager_1 = CallFunc_GetShopManager_ShopManager_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


