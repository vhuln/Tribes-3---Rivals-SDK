#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C
// (None)

class UClass* UUI_Tooltip_Equipment_Comparison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Tooltip_Equipment_Comparison_C");

	return Clss;
}


// UI_Tooltip_Equipment_Comparison_C UI_Tooltip_Equipment_Comparison.Default__UI_Tooltip_Equipment_Comparison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Tooltip_Equipment_Comparison_C* UUI_Tooltip_Equipment_Comparison_C::GetDefaultObj()
{
	static class UUI_Tooltip_Equipment_Comparison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Tooltip_Equipment_Comparison_C*>(UUI_Tooltip_Equipment_Comparison_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.SetSellPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ShopItemPrice      Price                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUI_Tooltip_Equipment_Comparison_C::SetSellPrice(const struct Valhalla_ShopItemPrice& Price)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "SetSellPrice");

	Params::UUI_Tooltip_Equipment_Comparison_C_SetSellPrice_Params Parms{};

	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateComparisonPlacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMenuPlacement          Placement                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Slate_Anchors               K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct Slate_Anchors               K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// struct CoreUObject_Vector2D        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Slate_Anchors               K2Node_Select_Default_1                                          (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Comparison_C::UpdateComparisonPlacement(enum class EMenuPlacement Placement, const struct CoreUObject_Vector2D& Temp_struct_Variable, bool Temp_bool_Variable, const struct CoreUObject_Vector2D& Temp_struct_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, const struct Slate_Anchors& K2Node_MakeStruct_Anchors, const struct Slate_Anchors& K2Node_MakeStruct_Anchors_1, const struct CoreUObject_Vector2D& K2Node_Select_Default, const struct Slate_Anchors& K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "UpdateComparisonPlacement");

	Params::UUI_Tooltip_Equipment_Comparison_C_UpdateComparisonPlacement_Params Parms{};

	Parms.Placement = Placement;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateFromAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Comparison_C::UpdateFromAsset(class UValItemAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "UpdateFromAsset");

	Params::UUI_Tooltip_Equipment_Comparison_C_UpdateFromAsset_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Comparison_C::UpdateDisplay(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "UpdateDisplay");

	Params::UUI_Tooltip_Equipment_Comparison_C_UpdateDisplay_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.CanCompare
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CanEquipSlotCompare                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerAllowedSlots                                                     (Edit, BlueprintVisible)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Comparison_C::CanCompare(const struct GameplayTags_GameplayTag& EquipSlot, bool* CanEquipSlotCompare, const struct GameplayTags_GameplayTagContainer& AllowedSlots, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "CanCompare");

	Params::UUI_Tooltip_Equipment_Comparison_C_CanCompare_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.AllowedSlots = AllowedSlots;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanEquipSlotCompare != nullptr)
		*CanEquipSlotCompare = Parms.CanEquipSlotCompare;

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Disallow_Unequip                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEquippedItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        LocalInventoryManager                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSlotIdByEquipSlot_SlotId                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSlotIdByEquipSlot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventorySlot      CallFunc_GetEquippedSlotAt_EquippedSlot                          (None)
// bool                               CallFunc_GetEquippedSlotAt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanCompare_CanEquipSlotCompare                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Comparison_C::UpdateItem(const struct Valhalla_InventoryItem& Item, bool Disallow_Unequip, bool IsEquippedItem, class AValInventoryManager* LocalInventoryManager, bool CallFunc_Not_PreBool_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_GetEquippedSlotAt_EquippedSlot, bool CallFunc_GetEquippedSlotAt_ReturnValue, bool CallFunc_CanCompare_CanEquipSlotCompare)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "UpdateItem");

	Params::UUI_Tooltip_Equipment_Comparison_C_UpdateItem_Params Parms{};

	Parms.Item = Item;
	Parms.Disallow_Unequip = Disallow_Unequip;
	Parms.IsEquippedItem = IsEquippedItem;
	Parms.LocalInventoryManager = LocalInventoryManager;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetSlotIdByEquipSlot_SlotId = CallFunc_GetSlotIdByEquipSlot_SlotId;
	Parms.CallFunc_GetSlotIdByEquipSlot_ReturnValue = CallFunc_GetSlotIdByEquipSlot_ReturnValue;
	Parms.CallFunc_GetEquippedSlotAt_EquippedSlot = CallFunc_GetEquippedSlotAt_EquippedSlot;
	Parms.CallFunc_GetEquippedSlotAt_ReturnValue = CallFunc_GetEquippedSlotAt_ReturnValue;
	Parms.CallFunc_CanCompare_CanEquipSlotCompare = CallFunc_CanCompare_CanEquipSlotCompare;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Tooltip_Equipment_Comparison_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C.ExecuteUbergraph_UI_Tooltip_Equipment_Comparison
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Comparison_C::ExecuteUbergraph_UI_Tooltip_Equipment_Comparison(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Comparison_C", "ExecuteUbergraph_UI_Tooltip_Equipment_Comparison");

	Params::UUI_Tooltip_Equipment_Comparison_C_ExecuteUbergraph_UI_Tooltip_Equipment_Comparison_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


