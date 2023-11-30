#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C
// (None)

class UClass* UUI_Tooltip_Equipment_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Tooltip_Equipment_Stats_C");

	return Clss;
}


// UI_Tooltip_Equipment_Stats_C UI_Tooltip_Equipment_Stats.Default__UI_Tooltip_Equipment_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Tooltip_Equipment_Stats_C* UUI_Tooltip_Equipment_Stats_C::GetDefaultObj()
{
	static class UUI_Tooltip_Equipment_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Tooltip_Equipment_Stats_C*>(UUI_Tooltip_Equipment_Stats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.UpdateItemFromAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Weapon_Stats_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::UpdateItemFromAsset(class UValItemAsset* ItemAsset, bool* Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Update_Weapon_Stats_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "UpdateItemFromAsset");

	Params::UUI_Tooltip_Equipment_Stats_C_UpdateItemFromAsset_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Update_Weapon_Stats_Value = CallFunc_Update_Weapon_Stats_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.OnPlayerDefaultAttributesClassAvailable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayAbilities_GameplayModifierInfo>Temp_struct_Variable                                             (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayModifierInfoCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::OnPlayerDefaultAttributesClassAvailable(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct GameplayAbilities_GameplayModifierInfo>& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct GameplayAbilities_GameplayModifierInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "OnPlayerDefaultAttributesClassAvailable");

	Params::UUI_Tooltip_Equipment_Stats_C_OnPlayerDefaultAttributesClassAvailable_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue = CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "PreConstruct");

	Params::UUI_Tooltip_Equipment_Stats_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.GetModifiers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayAbilities_GameplayModifierInfo>Modifiers                                                        (Parm, OutParm)
// class UClass*                      LocalAbilityClass                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayAbilities_GameplayModifierInfo>Temp_struct_Variable                                             (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsVal_Gameplay_Ability                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TMap<struct GameplayTags_GameplayTag, struct Valhalla_ValGameplayEffectContainer>Temp_struct_Variable_2                                           (None)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValGameplayEffectContainerCallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::GetModifiers(class UValItemAsset*& ItemAsset, TArray<struct GameplayAbilities_GameplayModifierInfo>* Modifiers, class UClass* LocalAbilityClass, TArray<struct GameplayAbilities_GameplayModifierInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsVal_Gameplay_Ability, bool K2Node_ClassDynamicCast_bSuccess, const struct GameplayTags_GameplayTag& Temp_struct_Variable_1, TMap<struct GameplayTags_GameplayTag, struct Valhalla_ValGameplayEffectContainer> Temp_struct_Variable_2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct Valhalla_ValGameplayEffectContainer& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "GetModifiers");

	Params::UUI_Tooltip_Equipment_Stats_C_GetModifiers_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.LocalAbilityClass = LocalAbilityClass;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsVal_Gameplay_Ability = K2Node_ClassDynamicCast_AsVal_Gameplay_Ability;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Modifiers != nullptr)
		*Modifiers = std::move(Parms.Modifiers);

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.Update Weapon Stats
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             LocalWidgets                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// TArray<struct GameplayAbilities_GameplayModifierInfo>LocalModifiers                                                   (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayAbilities_GameplayModifierInfo>CallFunc_GetModifiers_Modifiers                                  (ReferenceParm)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_City_Armory_Details_Stat_C*K2Node_DynamicCast_AsUI_City_Armory_Details_Stat                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UUI_Tooltip_Equipment_Stats_C::Update_Weapon_Stats(bool* Value, const TArray<class UWidget*>& LocalWidgets, const TArray<struct GameplayAbilities_GameplayModifierInfo>& LocalModifiers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct GameplayAbilities_GameplayModifierInfo>& CallFunc_GetModifiers_Modifiers, bool CallFunc_MatchesTag_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_City_Armory_Details_Stat_C* K2Node_DynamicCast_AsUI_City_Armory_Details_Stat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "Update Weapon Stats");

	Params::UUI_Tooltip_Equipment_Stats_C_Update_Weapon_Stats_Params Parms{};

	Parms.LocalWidgets = LocalWidgets;
	Parms.LocalModifiers = LocalModifiers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetModifiers_Modifiers = CallFunc_GetModifiers_Modifiers;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_City_Armory_Details_Stat = K2Node_DynamicCast_AsUI_City_Armory_Details_Stat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.UpdateEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Tooltip_Equipment_Stats_C::UpdateEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "UpdateEmpty");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.UpdateItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateItemFromAsset_Value                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::UpdateItem(const struct Valhalla_InventoryItem& InventoryItem, bool* Value, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_UpdateItemFromAsset_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "UpdateItem");

	Params::UUI_Tooltip_Equipment_Stats_C_UpdateItem_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_UpdateItemFromAsset_Value = CallFunc_UpdateItemFromAsset_Value;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC");

	Params::UUI_Tooltip_Equipment_Stats_C_OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.LoadPlayerDefaultAttributes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Tooltip_Equipment_Stats_C::LoadPlayerDefaultAttributes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "LoadPlayerDefaultAttributes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C.ExecuteUbergraph_UI_Tooltip_Equipment_Stats
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsGameplay_Effect                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Tooltip_Equipment_Stats_C::ExecuteUbergraph_UI_Tooltip_Equipment_Stats(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsGameplay_Effect, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Tooltip_Equipment_Stats_C", "ExecuteUbergraph_UI_Tooltip_Equipment_Stats");

	Params::UUI_Tooltip_Equipment_Stats_C_ExecuteUbergraph_UI_Tooltip_Equipment_Stats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsGameplay_Effect = K2Node_ClassDynamicCast_AsGameplay_Effect;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


