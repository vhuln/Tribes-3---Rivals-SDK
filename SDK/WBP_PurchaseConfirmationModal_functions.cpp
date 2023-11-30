#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C
// (None)

class UClass* UWBP_PurchaseConfirmationModal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PurchaseConfirmationModal_C");

	return Clss;
}


// WBP_PurchaseConfirmationModal_C WBP_PurchaseConfirmationModal.Default__WBP_PurchaseConfirmationModal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PurchaseConfirmationModal_C* UWBP_PurchaseConfirmationModal_C::GetDefaultObj()
{
	static class UWBP_PurchaseConfirmationModal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PurchaseConfirmationModal_C*>(UWBP_PurchaseConfirmationModal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.Add Shop Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ShopPanel_Base_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::Add_Shop_Widget(class UWBP_ShopPanel_Base_C* Widget, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "Add Shop Widget");

	Params::UWBP_PurchaseConfirmationModal_C_Add_Shop_Widget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.UpdateItemTypeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSuit                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_PurchaseConfirmationModal_C::UpdateItemTypeText(bool IsSuit, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "UpdateItemTypeText");

	Params::UWBP_PurchaseConfirmationModal_C_UpdateItemTypeText_Params Parms{};

	Parms.IsSuit = IsSuit;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.OnPurchaseResponse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Guid            InventoryId                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShopPurchaseResponse   Response                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::OnPurchaseResponse(struct CoreUObject_Guid& InventoryId, enum class EShopPurchaseResponse Response, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetEndTime_ReturnValue, bool CallFunc_NavigateBack_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NavigateBack_ReturnValue_1, bool CallFunc_NavigateBack_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "OnPurchaseResponse");

	Params::UWBP_PurchaseConfirmationModal_C_OnPurchaseResponse_Params Parms{};

	Parms.InventoryId = InventoryId;
	Parms.Response = Response;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NavigateBack_ReturnValue_1 = CallFunc_NavigateBack_ReturnValue_1;
	Parms.CallFunc_NavigateBack_ReturnValue_2 = CallFunc_NavigateBack_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.BindShopManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValShopManager*             ShopManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::BindShopManager(class AValShopManager* ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "BindShopManager");

	Params::UWBP_PurchaseConfirmationModal_C_BindShopManager_Params Parms{};

	Parms.ShopManager = ShopManager;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.GetShopManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             ShopManager                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::GetShopManager(bool* Valid, class AValShopManager** ShopManager, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValShopManager* CallFunc_GetShopManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "GetShopManager");

	Params::UWBP_PurchaseConfirmationModal_C_GetShopManager_Params Parms{};

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


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PurchaseConfirmationModal_C::UpdateText(bool CallFunc_IsValid_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "UpdateText");

	Params::UWBP_PurchaseConfirmationModal_C_UpdateText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.UpdateRarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromRarity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)

void UWBP_PurchaseConfirmationModal_C::UpdateRarity(class FName CallFunc_MakeLiteralName_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromRarity_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "UpdateRarity");

	Params::UWBP_PurchaseConfirmationModal_C_UpdateRarity_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetColorFromRarity_ReturnValue = CallFunc_GetColorFromRarity_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.GetItemTypeText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)

void UWBP_PurchaseConfirmationModal_C::GetItemTypeText(class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "GetItemTypeText");

	Params::UWBP_PurchaseConfirmationModal_C_GetItemTypeText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveTopViewRoute_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PurchaseConfirmationModal_C::NavigateBack(bool CallFunc_RemoveTopViewRoute_ReturnValue, bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "NavigateBack");

	Params::UWBP_PurchaseConfirmationModal_C_NavigateBack_Params Parms{};

	Parms.CallFunc_RemoveTopViewRoute_ReturnValue = CallFunc_RemoveTopViewRoute_ReturnValue;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.HandleBackButtonPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::HandleBackButtonPressed(bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "HandleBackButtonPressed");

	Params::UWBP_PurchaseConfirmationModal_C_HandleBackButtonPressed_Params Parms{};

	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      DisplayItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LocalIsSuit                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShopManager_Valid                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValShopManager*             CallFunc_GetShopManager_ShopManager                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ShopPrice          CallFunc_GetShopPrice_ShopPrice                                  (NoDestructor)
// bool                               CallFunc_GetShopPrice_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::UpdateData(const struct Valhalla_InventoryItem& DisplayItem, bool LocalIsSuit, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, const struct Valhalla_ShopPrice& CallFunc_GetShopPrice_ShopPrice, bool CallFunc_GetShopPrice_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "UpdateData");

	Params::UWBP_PurchaseConfirmationModal_C_UpdateData_Params Parms{};

	Parms.DisplayItem = DisplayItem;
	Parms.LocalIsSuit = LocalIsSuit;
	Parms.CallFunc_GetShopManager_Valid = CallFunc_GetShopManager_Valid;
	Parms.CallFunc_GetShopManager_ShopManager = CallFunc_GetShopManager_ShopManager;
	Parms.CallFunc_GetShopPrice_ShopPrice = CallFunc_GetShopPrice_ShopPrice;
	Parms.CallFunc_GetShopPrice_ReturnValue = CallFunc_GetShopPrice_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.UpdateCamera
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

void UWBP_PurchaseConfirmationModal_C::UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "UpdateCamera");

	Params::UWBP_PurchaseConfirmationModal_C_UpdateCamera_Params Parms{};

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


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "BndEvt__WBP_ShopPurchaseConfirmation_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.OnPurchaseTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::OnPurchaseTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "OnPurchaseTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.BndEvt__WBP_PurchaseConfirmationModal_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::BndEvt__WBP_PurchaseConfirmationModal_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "BndEvt__WBP_PurchaseConfirmationModal_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.OnSuccessAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PurchaseConfirmationModal_C::OnSuccessAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "OnSuccessAnimComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PurchaseConfirmationModal.WBP_PurchaseConfirmationModal_C.ExecuteUbergraph_WBP_PurchaseConfirmationModal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
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
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PurchaseConfirmationModal_C::ExecuteUbergraph_WBP_PurchaseConfirmationModal(int32 EntryPoint, TArray<class FName>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GetShopManager_Valid, class AValShopManager* CallFunc_GetShopManager_ShopManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_GetShopManager_Valid_1, class AValShopManager* CallFunc_GetShopManager_ShopManager_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PurchaseConfirmationModal_C", "ExecuteUbergraph_WBP_PurchaseConfirmationModal");

	Params::UWBP_PurchaseConfirmationModal_C_ExecuteUbergraph_WBP_PurchaseConfirmationModal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
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
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


