#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C
// (None)

class UClass* UUI_Shared_PriceDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_PriceDisplay_C");

	return Clss;
}


// UI_Shared_PriceDisplay_C UI_Shared_PriceDisplay.Default__UI_Shared_PriceDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_PriceDisplay_C* UUI_Shared_PriceDisplay_C::GetDefaultObj()
{
	static class UUI_Shared_PriceDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_PriceDisplay_C*>(UUI_Shared_PriceDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Price                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Currency_Item_Id                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_Select_Default                                            (None)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_PriceDisplay_C::UpdateData(int32 Price, int32 Currency_Item_Id, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, const struct SlateCore_SlateColor& K2Node_Select_Default, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_PriceDisplay_C", "UpdateData");

	Params::UUI_Shared_PriceDisplay_C_UpdateData_Params Parms{};

	Parms.Price = Price;
	Parms.Currency_Item_Id = Currency_Item_Id;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_PriceDisplay_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_PriceDisplay_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_PriceDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_PriceDisplay_C", "PreConstruct");

	Params::UUI_Shared_PriceDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.OnInventoryCacheUpdated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      ItemIds                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_Shared_PriceDisplay_C::OnInventoryCacheUpdated(TArray<int32>& ItemIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_PriceDisplay_C", "OnInventoryCacheUpdated");

	Params::UUI_Shared_PriceDisplay_C_OnInventoryCacheUpdated_Params Parms{};

	Parms.ItemIds = ItemIds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_PriceDisplay_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_PriceDisplay_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_PriceDisplay.UI_Shared_PriceDisplay_C.ExecuteUbergraph_UI_Shared_PriceDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInventory*         CallFunc_GetPlayerInventory_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_ItemIds                                       (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_PriceDisplay_C::ExecuteUbergraph_UI_Shared_PriceDisplay(int32 EntryPoint, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TArray<int32>& K2Node_CustomEvent_ItemIds, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_PriceDisplay_C", "ExecuteUbergraph_UI_Shared_PriceDisplay");

	Params::UUI_Shared_PriceDisplay_C_ExecuteUbergraph_UI_Shared_PriceDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue_1 = CallFunc_GetLocalPlayerInfo_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerInventory_ReturnValue_1 = CallFunc_GetPlayerInventory_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_ItemIds = K2Node_CustomEvent_ItemIds;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


