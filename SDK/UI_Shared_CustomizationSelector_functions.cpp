#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C
// (None)

class UClass* UUI_Shared_CustomizationSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_CustomizationSelector_C");

	return Clss;
}


// UI_Shared_CustomizationSelector_C UI_Shared_CustomizationSelector.Default__UI_Shared_CustomizationSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_CustomizationSelector_C* UUI_Shared_CustomizationSelector_C::GetDefaultObj()
{
	static class UUI_Shared_CustomizationSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_CustomizationSelector_C*>(UUI_Shared_CustomizationSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_Shared_CustomizationSelector_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "NavigateConfirm");

	Params::UUI_Shared_CustomizationSelector_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateSlotTypeDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsWeapon                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::UpdateSlotTypeDisplay(bool IsWeapon, int32 CallFunc_SelectInt_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_MatchesTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "UpdateSlotTypeDisplay");

	Params::UUI_Shared_CustomizationSelector_C_UpdateSlotTypeDisplay_Params Parms{};

	Parms.IsWeapon = IsWeapon;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateWeaponSlotIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValGameState*               CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Lobby*         K2Node_DynamicCast_AsVal_Game_State_Lobby                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_WeaponCosmeticConfig>CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_WeaponCosmeticConfigCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               K2Node_DynamicCast_AsVal_Item_Asset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::UpdateWeaponSlotIcon(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class AValGameState* CallFunc_GetGameState_ReturnValue, class AValGameState_Lobby* K2Node_DynamicCast_AsVal_Game_State_Lobby, bool K2Node_DynamicCast_bSuccess, TArray<struct Valhalla_WeaponCosmeticConfig>& CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_WeaponCosmeticConfig& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "UpdateWeaponSlotIcon");

	Params::UUI_Shared_CustomizationSelector_C_UpdateWeaponSlotIcon_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Lobby = K2Node_DynamicCast_AsVal_Game_State_Lobby;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs = CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Item_Asset = K2Node_DynamicCast_AsVal_Item_Asset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateShowCTA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::UpdateShowCTA(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "UpdateShowCTA");

	Params::UUI_Shared_CustomizationSelector_C_UpdateShowCTA_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSlotIdByEquipSlot_SlotId                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSlotIdByEquipSlot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventorySlot      CallFunc_GetEquippedSlotAt_EquippedSlot                          (None)
// bool                               CallFunc_GetEquippedSlotAt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUI_Shared_CustomizationSelector_C::UpdateDisplay(class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_GetEquippedSlotAt_EquippedSlot, bool CallFunc_GetEquippedSlotAt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "UpdateDisplay");

	Params::UUI_Shared_CustomizationSelector_C_UpdateDisplay_Params Parms{};

	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue_2 = CallFunc_GetInventoryManager_ReturnValue_2;
	Parms.CallFunc_GetSlotIdByEquipSlot_SlotId = CallFunc_GetSlotIdByEquipSlot_SlotId;
	Parms.CallFunc_GetSlotIdByEquipSlot_ReturnValue = CallFunc_GetSlotIdByEquipSlot_ReturnValue;
	Parms.CallFunc_GetEquippedSlotAt_EquippedSlot = CallFunc_GetEquippedSlotAt_EquippedSlot;
	Parms.CallFunc_GetEquippedSlotAt_ReturnValue = CallFunc_GetEquippedSlotAt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.UpdateData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_InventoryItem>CallFunc_GetCosmeticItemsForEquipSlot_InventoryItems             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUI_Shared_CustomizationSelector_C::UpdateData(class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct Valhalla_InventoryItem>& CallFunc_GetCosmeticItemsForEquipSlot_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "UpdateData");

	Params::UUI_Shared_CustomizationSelector_C_UpdateData_Params Parms{};

	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetCosmeticItemsForEquipSlot_InventoryItems = CallFunc_GetCosmeticItemsForEquipSlot_InventoryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "PreConstruct");

	Params::UUI_Shared_CustomizationSelector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.EventItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationSelector_C::EventItemClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "EventItemClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.ExecuteUbergraph_UI_Shared_CustomizationSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::ExecuteUbergraph_UI_Shared_CustomizationSelector(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "ExecuteUbergraph_UI_Shared_CustomizationSelector");

	Params::UUI_Shared_CustomizationSelector_C_ExecuteUbergraph_UI_Shared_CustomizationSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Shared_CustomizationSelector_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::OnItemHovered__DelegateSignature(class UUI_Shared_CustomizationSelector_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "OnItemHovered__DelegateSignature");

	Params::UUI_Shared_CustomizationSelector_C_OnItemHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UUI_Shared_CustomizationSelector_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationSelector_C::OnItemClicked__DelegateSignature(const struct GameplayTags_GameplayTag& EquipSlot, class UUI_Shared_CustomizationSelector_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationSelector_C", "OnItemClicked__DelegateSignature");

	Params::UUI_Shared_CustomizationSelector_C_OnItemClicked__DelegateSignature_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


