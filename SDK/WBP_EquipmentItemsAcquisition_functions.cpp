#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C
// (None)

class UClass* UWBP_EquipmentItemsAcquisition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EquipmentItemsAcquisition_C");

	return Clss;
}


// WBP_EquipmentItemsAcquisition_C WBP_EquipmentItemsAcquisition.Default__WBP_EquipmentItemsAcquisition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EquipmentItemsAcquisition_C* UWBP_EquipmentItemsAcquisition_C::GetDefaultObj()
{
	static class UWBP_EquipmentItemsAcquisition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EquipmentItemsAcquisition_C*>(UWBP_EquipmentItemsAcquisition_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.OnWidgetAnimCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentItemsAcquisition_C::OnWidgetAnimCompleted(class UUserWidget* Widget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "OnWidgetAnimCompleted");

	Params::UWBP_EquipmentItemsAcquisition_C_OnWidgetAnimCompleted_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveTopViewRoute_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_EquipmentItemsAcquisition_C::NavigateBack(bool CallFunc_RemoveTopViewRoute_ReturnValue, bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "NavigateBack");

	Params::UWBP_EquipmentItemsAcquisition_C_NavigateBack_Params Parms{};

	Parms.CallFunc_RemoveTopViewRoute_ReturnValue = CallFunc_RemoveTopViewRoute_ReturnValue;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.SetAcquisitionDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Acquisition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     LocalAcquisitionManager                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventoryItem>LocalInventoryItems                                              (Edit, BlueprintVisible)

void UWBP_EquipmentItemsAcquisition_C::SetAcquisitionDisplay(class UObject* Acquisition, class UObject* LocalAcquisitionManager, const TArray<struct Valhalla_InventoryItem>& LocalInventoryItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "SetAcquisitionDisplay");

	Params::UWBP_EquipmentItemsAcquisition_C_SetAcquisitionDisplay_Params Parms{};

	Parms.Acquisition = Acquisition;
	Parms.LocalAcquisitionManager = LocalAcquisitionManager;
	Parms.LocalInventoryItems = LocalInventoryItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.Get Best Item Type Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        OutText                                                          (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFirstGameplayTextByContainer_Text                    (None)
// bool                               CallFunc_GetFirstGameplayTextByContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)

void UWBP_EquipmentItemsAcquisition_C::Get_Best_Item_Type_Text(class UValItemAsset* ItemAsset, class FText* OutText, bool CallFunc_IsValid_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue_1, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, class FText CallFunc_GetFirstGameplayTextByContainer_Text, bool CallFunc_GetFirstGameplayTextByContainer_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "Get Best Item Type Text");

	Params::UWBP_EquipmentItemsAcquisition_C_Get_Best_Item_Type_Text_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue_1 = CallFunc_GetDataTableManager_ReturnValue_1;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_GetFirstGameplayTextByContainer_Text = CallFunc_GetFirstGameplayTextByContainer_Text;
	Parms.CallFunc_GetFirstGameplayTextByContainer_ReturnValue = CallFunc_GetFirstGameplayTextByContainer_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.GetBestDisplayTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EquipmentItemsAcquisition_C::GetBestDisplayTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "GetBestDisplayTag");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.SetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Valhalla_InventoryItem>InventoryItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             InitialDelay                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Delay_Increment                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      CallFunc_Array_Get_Item                                          (None)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_AcquisitionItem_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentItemsAcquisition_C::SetData(TArray<struct Valhalla_InventoryItem>& InventoryItems, double InitialDelay, double Delay_Increment, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_InventoryItem& CallFunc_Array_Get_Item, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_AcquisitionItem_C* CallFunc_Create_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "SetData");

	Params::UWBP_EquipmentItemsAcquisition_C_SetData_Params Parms{};

	Parms.InventoryItems = InventoryItems;
	Parms.InitialDelay = InitialDelay;
	Parms.Delay_Increment = Delay_Increment;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.BndEvt__WBP_AccountRewardUnlocked_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_EquipmentItemsAcquisition_C::BndEvt__WBP_AccountRewardUnlocked_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "BndEvt__WBP_AccountRewardUnlocked_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EquipmentItemsAcquisition_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.OnContinueButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EquipmentItemsAcquisition_C::OnContinueButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "OnContinueButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EquipmentItemsAcquisition_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.ExecuteUbergraph_WBP_EquipmentItemsAcquisition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EquipmentItemsAcquisition_C::ExecuteUbergraph_WBP_EquipmentItemsAcquisition(int32 EntryPoint, bool CallFunc_NavigateBack_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "ExecuteUbergraph_WBP_EquipmentItemsAcquisition");

	Params::UWBP_EquipmentItemsAcquisition_C_ExecuteUbergraph_WBP_EquipmentItemsAcquisition_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EquipmentItemsAcquisition.WBP_EquipmentItemsAcquisition_C.OnAcquisitionDismissed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EquipmentItemsAcquisition_C::OnAcquisitionDismissed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EquipmentItemsAcquisition_C", "OnAcquisitionDismissed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


