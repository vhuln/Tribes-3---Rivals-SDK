#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C
// (None)

class UClass* UUI_Shared_CustomizationOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_CustomizationOption_C");

	return Clss;
}


// UI_Shared_CustomizationOption_C UI_Shared_CustomizationOption.Default__UI_Shared_CustomizationOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_CustomizationOption_C* UUI_Shared_CustomizationOption_C::GetDefaultObj()
{
	static class UUI_Shared_CustomizationOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_CustomizationOption_C*>(UUI_Shared_CustomizationOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_Shared_CustomizationOption_C::NavigateConfirm(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "NavigateConfirm");

	Params::UUI_Shared_CustomizationOption_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.UpdateIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::UpdateIsSelected(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "UpdateIsSelected");

	Params::UUI_Shared_CustomizationOption_C_UpdateIsSelected_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.GetIconTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (Parm, OutParm, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::GetIconTexture(TSoftObjectPtr<class UTexture2D>* Texture, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset_1, bool CallFunc_GetItemAssetById_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "GetIconTexture");

	Params::UUI_Shared_CustomizationOption_C_GetIconTexture_Params Parms{};

	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue_2 = CallFunc_GetInventoryManager_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset_1 = CallFunc_GetItemAssetById_ItemAsset_1;
	Parms.CallFunc_GetItemAssetById_ReturnValue_1 = CallFunc_GetItemAssetById_ReturnValue_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.IsEquipped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventorySlot      CallFunc_GetEquippedSlotAt_EquippedSlot                          (None)
// bool                               CallFunc_GetEquippedSlotAt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::IsEquipped(bool* Value, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_GetEquippedSlotAt_EquippedSlot, bool CallFunc_GetEquippedSlotAt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "IsEquipped");

	Params::UUI_Shared_CustomizationOption_C_IsEquipped_Params Parms{};

	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEquippedSlotAt_EquippedSlot = CallFunc_GetEquippedSlotAt_EquippedSlot;
	Parms.CallFunc_GetEquippedSlotAt_ReturnValue = CallFunc_GetEquippedSlotAt_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.IsWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::IsWeapon(bool* Value, bool CallFunc_MatchesTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "IsWeapon");

	Params::UUI_Shared_CustomizationOption_C_IsWeapon_Params Parms{};

	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.UpdateWeaponSlotIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::UpdateWeaponSlotIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "UpdateWeaponSlotIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.UpdateShowCTA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::UpdateShowCTA(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "UpdateShowCTA");

	Params::UUI_Shared_CustomizationOption_C_UpdateShowCTA_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UUI_Shared_CustomizationOption_C::UpdateName(class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "UpdateName");

	Params::UUI_Shared_CustomizationOption_C_UpdateName_Params Parms{};

	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsEquipped_Value                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::UpdateData(const struct GameplayTags_GameplayTag& EquipSlot, const struct Valhalla_InventoryItem& InventoryItem, bool CallFunc_IsEquipped_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "UpdateData");

	Params::UUI_Shared_CustomizationOption_C_UpdateData_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_IsEquipped_Value = CallFunc_IsEquipped_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetIconTexture_Texture                                  (HasGetValueTypeHash)
// bool                               CallFunc_IsWeapon_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::UpdateIcon(TSoftObjectPtr<class UTexture2D> CallFunc_GetIconTexture_Texture, bool CallFunc_IsWeapon_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "UpdateIcon");

	Params::UUI_Shared_CustomizationOption_C_UpdateIcon_Params Parms{};

	Parms.CallFunc_GetIconTexture_Texture = CallFunc_GetIconTexture_Texture;
	Parms.CallFunc_IsWeapon_Value = CallFunc_IsWeapon_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.ExecuteUbergraph_UI_Shared_CustomizationOption
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::ExecuteUbergraph_UI_Shared_CustomizationOption(int32 EntryPoint, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "ExecuteUbergraph_UI_Shared_CustomizationOption");

	Params::UUI_Shared_CustomizationOption_C_ExecuteUbergraph_UI_Shared_CustomizationOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.OnGamepadConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Shared_CustomizationOption_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::OnGamepadConfirm__DelegateSignature(class UUI_Shared_CustomizationOption_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "OnGamepadConfirm__DelegateSignature");

	Params::UUI_Shared_CustomizationOption_C_OnGamepadConfirm__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_CustomizationOption_C::OnItemUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "OnItemUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Shared_CustomizationOption_C::OnItemHovered__DelegateSignature(const struct GameplayTags_GameplayTag& EquipSlot, const struct Valhalla_InventoryItem& InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "OnItemHovered__DelegateSignature");

	Params::UUI_Shared_CustomizationOption_C_OnItemHovered__DelegateSignature_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.InventoryItem = InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Shared_CustomizationOption_C*OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_CustomizationOption_C::OnItemClicked__DelegateSignature(class UUI_Shared_CustomizationOption_C* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_CustomizationOption_C", "OnItemClicked__DelegateSignature");

	Params::UUI_Shared_CustomizationOption_C_OnItemClicked__DelegateSignature_Params Parms{};

	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


