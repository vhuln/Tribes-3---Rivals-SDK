#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C
// (None)

class UClass* UWBP_ShopView_RealMoney_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopView_RealMoney_C");

	return Clss;
}


// WBP_ShopView_RealMoney_C WBP_ShopView_RealMoney.Default__WBP_ShopView_RealMoney_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopView_RealMoney_C* UWBP_ShopView_RealMoney_C::GetDefaultObj()
{
	static class UWBP_ShopView_RealMoney_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopView_RealMoney_C*>(UWBP_ShopView_RealMoney_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.UpdateCamera
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

void UWBP_ShopView_RealMoney_C::UpdateCamera(int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "UpdateCamera");

	Params::UWBP_ShopView_RealMoney_C_UpdateCamera_Params Parms{};

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


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnCanCharacterOwnMoreComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHStoreItemHelper*          CallFunc_GetStoreItemHelper_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPendingPurchase_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::OnCanCharacterOwnMoreComplete(bool IsValid, class URHStoreItemHelper* CallFunc_GetStoreItemHelper_ReturnValue, bool CallFunc_HasPendingPurchase_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnCanCharacterOwnMoreComplete");

	Params::UWBP_ShopView_RealMoney_C_OnCanCharacterOwnMoreComplete_Params Parms{};

	Parms.IsValid = IsValid;
	Parms.CallFunc_GetStoreItemHelper_ReturnValue = CallFunc_GetStoreItemHelper_ReturnValue;
	Parms.CallFunc_HasPendingPurchase_ReturnValue = CallFunc_HasPendingPurchase_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.On Acquisition Received
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LootId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::On_Acquisition_Received(int32 LootId, class UWBP_ShopPanel_Base_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "On Acquisition Received");

	Params::UWBP_ShopView_RealMoney_C_On_Acquisition_Received_Params Parms{};

	Parms.LootId = LootId;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.Update Portal Purchase Complete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHStoreItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       K2Node_DynamicCast_AsWBP_Shop_Panel_Base                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_LootIdCallFunc_GetLootId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::Update_Portal_Purchase_Complete(class UWidget* Widget, class URHStoreItem* Item, class UWBP_ShopPanel_Base_C* K2Node_DynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct RallyHereIntegration_RH_LootId& CallFunc_GetLootId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "Update Portal Purchase Complete");

	Params::UWBP_ShopView_RealMoney_C_Update_Portal_Purchase_Complete_Params Parms{};

	Parms.Widget = Widget;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsWBP_Shop_Panel_Base = K2Node_DynamicCast_AsWBP_Shop_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetLootId_ReturnValue = CallFunc_GetLootId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnPortalPurchaseAcquisition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::OnPortalPurchaseAcquisition(int32& ID, bool CallFunc_Map_Remove_ReturnValue, class UWBP_ShopPanel_Base_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnPortalPurchaseAcquisition");

	Params::UWBP_ShopView_RealMoney_C_OnPortalPurchaseAcquisition_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnPortalPurchaseComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             NewLocalVar                                                      (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)

void UWBP_ShopView_RealMoney_C::OnPortalPurchaseComplete(class URHStoreItem* Item, const TArray<class UWidget*>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnPortalPurchaseComplete");

	Params::UWBP_ShopView_RealMoney_C_OnPortalPurchaseComplete_Params Parms{};

	Parms.Item = Item;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.ScrollTokensIntoView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopView_RealMoney_C::ScrollTokensIntoView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "ScrollTokensIntoView");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnPortalOfferSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                PortalOffer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::OnPortalOfferSelected(class URHStoreItem* PortalOffer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnPortalOfferSelected");

	Params::UWBP_ShopView_RealMoney_C_OnPortalOfferSelected_Params Parms{};

	Parms.PortalOffer = PortalOffer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnPortalStoreUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EStoreSectionTypes      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanNOR_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EStoreSectionTypes      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EStoreSectionTypes      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStoreLayout_ErrorCode                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHStoreSection*>     CallFunc_GetStoreLayout_ReturnValue                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHStoreSection*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUniformGridPanel*           K2Node_DynamicCast_AsUniform_Grid_Panel                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsWBP_Shop_Panel_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHStoreSectionItem*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ShopPanel_Base_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHStorePanelItem*           CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSortOrder_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereIntegration_RH_LootIdCallFunc_GetLootId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::OnPortalStoreUpdated(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPanelWidget* Temp_object_Variable, enum class EStoreSectionTypes Temp_byte_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanNOR_ReturnValue, class UPanelWidget* Temp_object_Variable_1, enum class EStoreSectionTypes Temp_byte_Variable_1, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable_2, enum class EStoreSectionTypes Temp_byte_Variable_2, int32 CallFunc_GetStoreLayout_ErrorCode, TArray<class URHStoreSection*>& CallFunc_GetStoreLayout_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class URHStoreSection* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UPanelWidget* K2Node_Select_Default, class UUniformGridPanel* K2Node_DynamicCast_AsUniform_Grid_Panel, bool K2Node_DynamicCast_bSuccess, class UClass* K2Node_Select_Default_1, class UClass* K2Node_ClassDynamicCast_AsWBP_Shop_Panel_Base, bool K2Node_ClassDynamicCast_bSuccess, class URHStoreSectionItem* CallFunc_Array_Get_Item_1, class UWBP_ShopPanel_Base_C* CallFunc_Create_ReturnValue, class URHStorePanelItem* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_GetSortOrder_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct RallyHereIntegration_RH_LootId& CallFunc_GetLootId_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UPanelWidget* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnPortalStoreUpdated");

	Params::UWBP_ShopView_RealMoney_C_OnPortalStoreUpdated_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_HasAnyChildren_ReturnValue_1 = CallFunc_HasAnyChildren_ReturnValue_1;
	Parms.CallFunc_BooleanNOR_ReturnValue = CallFunc_BooleanNOR_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetStoreLayout_ErrorCode = CallFunc_GetStoreLayout_ErrorCode;
	Parms.CallFunc_GetStoreLayout_ReturnValue = CallFunc_GetStoreLayout_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsUniform_Grid_Panel = K2Node_DynamicCast_AsUniform_Grid_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ClassDynamicCast_AsWBP_Shop_Panel_Base = K2Node_ClassDynamicCast_AsWBP_Shop_Panel_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetSortOrder_ReturnValue = CallFunc_GetSortOrder_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLootId_ReturnValue = CallFunc_GetLootId_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnVendorsReceived
// (HasOutParams, BlueprintEvent)
// Parameters:
// int32                              GroupId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      VendorIds                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ShopView_RealMoney_C::OnVendorsReceived(int32 GroupId, TArray<int32>& VendorIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnVendorsReceived");

	Params::UWBP_ShopView_RealMoney_C_OnVendorsReceived_Params Parms{};

	Parms.GroupId = GroupId;
	Parms.VendorIds = VendorIds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnPortalOffersReceived
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopView_RealMoney_C::OnPortalOffersReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnPortalOffersReceived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnPricePointsReveived
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopView_RealMoney_C::OnPricePointsReveived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnPricePointsReveived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopView_RealMoney_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopView_RealMoney.WBP_ShopView_RealMoney_C.ExecuteUbergraph_WBP_ShopView_RealMoney
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_GroupId                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_Event_VendorIds                                           (ConstParm, ReferenceParm)
// bool                               CallFunc_HasAllRequiredStoreInformation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHStoreItemHelper*          CallFunc_GetStoreItemHelper_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValStoreItemHelper*         K2Node_DynamicCast_AsVal_Store_Item_Helper                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllRequiredStoreInformation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopView_RealMoney_C::ExecuteUbergraph_WBP_ShopView_RealMoney(int32 EntryPoint, int32 K2Node_Event_GroupId, TArray<int32>& K2Node_Event_VendorIds, bool CallFunc_HasAllRequiredStoreInformation_ReturnValue, class URHStoreItemHelper* CallFunc_GetStoreItemHelper_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValStoreItemHelper* K2Node_DynamicCast_AsVal_Store_Item_Helper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAllRequiredStoreInformation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopView_RealMoney_C", "ExecuteUbergraph_WBP_ShopView_RealMoney");

	Params::UWBP_ShopView_RealMoney_C_ExecuteUbergraph_WBP_ShopView_RealMoney_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_GroupId = K2Node_Event_GroupId;
	Parms.K2Node_Event_VendorIds = K2Node_Event_VendorIds;
	Parms.CallFunc_HasAllRequiredStoreInformation_ReturnValue = CallFunc_HasAllRequiredStoreInformation_ReturnValue;
	Parms.CallFunc_GetStoreItemHelper_ReturnValue = CallFunc_GetStoreItemHelper_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsVal_Store_Item_Helper = K2Node_DynamicCast_AsVal_Store_Item_Helper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAllRequiredStoreInformation_ReturnValue_1 = CallFunc_HasAllRequiredStoreInformation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


