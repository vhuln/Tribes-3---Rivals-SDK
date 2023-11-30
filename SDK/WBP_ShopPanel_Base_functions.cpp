#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopPanel_Base.WBP_ShopPanel_Base_C
// (None)

class UClass* UWBP_ShopPanel_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopPanel_Base_C");

	return Clss;
}


// WBP_ShopPanel_Base_C WBP_ShopPanel_Base.Default__WBP_ShopPanel_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopPanel_Base_C* UWBP_ShopPanel_Base_C::GetDefaultObj()
{
	static class UWBP_ShopPanel_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopPanel_Base_C*>(UWBP_ShopPanel_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnCanOwnMoreUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsValid                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::OnCanOwnMoreUpdated(bool IsValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "OnCanOwnMoreUpdated");

	Params::UWBP_ShopPanel_Base_C_OnCanOwnMoreUpdated_Params Parms{};

	Parms.IsValid = IsValid;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateIconDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct UMG_WidgetTransform         K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void UWBP_ShopPanel_Base_C::UpdateIconDisplay(const struct UMG_WidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateIconDisplay");

	Params::UWBP_ShopPanel_Base_C_UpdateIconDisplay_Params Parms{};

	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::UpdateIsSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateIsSelected");

	Params::UWBP_ShopPanel_Base_C_UpdateIsSelected_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateConfirm_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ShopPanel_Base_C::NavigateConfirm(bool CallFunc_NavigateConfirm_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "NavigateConfirm");

	Params::UWBP_ShopPanel_Base_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_NavigateConfirm_ReturnValue = CallFunc_NavigateConfirm_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.CheckItemOwned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::CheckItemOwned(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "CheckItemOwned");

	Params::UWBP_ShopPanel_Base_C_CheckItemOwned_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdatePendingPortalPurchaseState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::UpdatePendingPortalPurchaseState(bool Value, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdatePendingPortalPurchaseState");

	Params::UWBP_ShopPanel_Base_C_UpdatePendingPortalPurchaseState_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateIsOwned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOwned                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_1                                   (None)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_Select_Default                                            (None)

void UWBP_ShopPanel_Base_C::UpdateIsOwned(bool IsOwned, bool Temp_bool_Variable, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_1, int32 CallFunc_SelectInt_ReturnValue, const struct SlateCore_SlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateIsOwned");

	Params::UWBP_ShopPanel_Base_C_UpdateIsOwned_Params Parms{};

	Parms.IsOwned = IsOwned;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateStoreItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                StoreItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsOwned                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UPlatformInventoryItem>CallFunc_GetInventoryItem_ReturnValue                            (UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlatformInventoryItem*      K2Node_DynamicCast_AsPlatform_Inventory_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class URHPortalOffer*              CallFunc_GetPortalOffer_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetIconInfoByName_Icon                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIconInfoByName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImageIconInfo*              K2Node_DynamicCast_AsImage_Icon_Info                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::UpdateStoreItem(class URHStoreItem* StoreItem, bool LocalIsOwned, TSoftObjectPtr<class UPlatformInventoryItem> CallFunc_GetInventoryItem_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UPlatformInventoryItem* K2Node_DynamicCast_AsPlatform_Inventory_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class URHPortalOffer* CallFunc_GetPortalOffer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UIconInfo* CallFunc_GetIconInfoByName_Icon, bool CallFunc_GetIconInfoByName_ReturnValue, class UImageIconInfo* K2Node_DynamicCast_AsImage_Icon_Info, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateStoreItem");

	Params::UWBP_ShopPanel_Base_C_UpdateStoreItem_Params Parms{};

	Parms.StoreItem = StoreItem;
	Parms.LocalIsOwned = LocalIsOwned;
	Parms.CallFunc_GetInventoryItem_ReturnValue = CallFunc_GetInventoryItem_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlatform_Inventory_Item = K2Node_DynamicCast_AsPlatform_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_GetPortalOffer_ReturnValue = CallFunc_GetPortalOffer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIconInfoByName_Icon = CallFunc_GetIconInfoByName_Icon;
	Parms.CallFunc_GetIconInfoByName_ReturnValue = CallFunc_GetIconInfoByName_ReturnValue;
	Parms.K2Node_DynamicCast_AsImage_Icon_Info = K2Node_DynamicCast_AsImage_Icon_Info;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::UpdateSize(float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateSize");

	Params::UWBP_ShopPanel_Base_C_UpdateSize_Params Parms{};

	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.Set Icon Texture From Soft Object Path
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_SoftObjectPath  ImagePath                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::Set_Icon_Texture_From_Soft_Object_Path(const struct CoreUObject_SoftObjectPath& ImagePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "Set Icon Texture From Soft Object Path");

	Params::UWBP_ShopPanel_Base_C_Set_Icon_Texture_From_Soft_Object_Path_Params Parms{};

	Parms.ImagePath = ImagePath;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::PreConstruct(bool IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "PreConstruct");

	Params::UWBP_ShopPanel_Base_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdatePrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ShopPrice          ShopPrice                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               LocalIsOwned                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::UpdatePrice(const struct Valhalla_ShopPrice& ShopPrice, bool LocalIsOwned, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdatePrice");

	Params::UWBP_ShopPanel_Base_C_UpdatePrice_Params Parms{};

	Parms.ShopPrice = ShopPrice;
	Parms.LocalIsOwned = LocalIsOwned;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ShopPanel_Base_C::UpdateName(class FText ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateName");

	Params::UWBP_ShopPanel_Base_C_UpdateName_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERarity                 Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::UpdateRarity(enum class ERarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateRarity");

	Params::UWBP_ShopPanel_Base_C_UpdateRarity_Params Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_ShopPanel_Base_C::UpdateData(const struct Valhalla_InventoryItem& Item, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "UpdateData");

	Params::UWBP_ShopPanel_Base_C_UpdateData_Params Parms{};

	Parms.Item = Item;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.Set Icon Texture From Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::Set_Icon_Texture_From_Material(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "Set Icon Texture From Material");

	Params::UWBP_ShopPanel_Base_C_Set_Icon_Texture_From_Material_Params Parms{};

	Parms.Material = Material;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_Base_C::BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_Base_C::BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_Base_C::BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "BndEvt__WBP_StorePanel_Base_Button_62_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_Base_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_Base_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_Base_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.ExecuteUbergraph_WBP_ShopPanel_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::ExecuteUbergraph_WBP_ShopPanel_Base(int32 EntryPoint, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "ExecuteUbergraph_WBP_ShopPanel_Base");

	Params::UWBP_ShopPanel_Base_C_ExecuteUbergraph_WBP_ShopPanel_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnPortalOfferSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                PortalOffer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::OnPortalOfferSelected__DelegateSignature(class URHStoreItem* PortalOffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "OnPortalOfferSelected__DelegateSignature");

	Params::UWBP_ShopPanel_Base_C_OnPortalOfferSelected__DelegateSignature_Params Parms{};

	Parms.PortalOffer = PortalOffer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnStoreItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHStoreItem*                StoreItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::OnStoreItemSelected__DelegateSignature(class URHStoreItem* StoreItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "OnStoreItemSelected__DelegateSignature");

	Params::UWBP_ShopPanel_Base_C_OnStoreItemSelected__DelegateSignature_Params Parms{};

	Parms.StoreItem = StoreItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_Base.WBP_ShopPanel_Base_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_ShopPanel_Base_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_Base_C::OnItemSelected__DelegateSignature(const struct Valhalla_InventoryItem& InventoryItem, class UWBP_ShopPanel_Base_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_Base_C", "OnItemSelected__DelegateSignature");

	Params::UWBP_ShopPanel_Base_C_OnItemSelected__DelegateSignature_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


