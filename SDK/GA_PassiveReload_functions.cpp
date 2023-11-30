#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_PassiveReload.GA_PassiveReload_C
// (None)

class UClass* UGA_PassiveReload_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_PassiveReload_C");

	return Clss;
}


// GA_PassiveReload_C GA_PassiveReload.Default__GA_PassiveReload_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_PassiveReload_C* UGA_PassiveReload_C::GetDefaultObj()
{
	static class UGA_PassiveReload_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_PassiveReload_C*>(UGA_PassiveReload_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_PassiveReload.GA_PassiveReload_C.ReloadUnequippedWeapons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CurrentSlot                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerWeaponSlotTags                                                   (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValAmmoData        CallFunc_GetAmmoForSlot_ReturnValue                              (NoDestructor)
// TArray<struct GameplayTags_GameplayTag>CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// struct GameplayTags_GameplayTag    CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveGameplayTag_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::ReloadUnequippedWeapons(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast_2, float CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast, float CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "ReloadUnequippedWeapons");

	Params::UGA_PassiveReload_C_ReloadUnequippedWeapons_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;
	Parms.WeaponSlotTags = WeaponSlotTags;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAmmoForSlot_ReturnValue = CallFunc_GetAmmoForSlot_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_RemoveGameplayTag_ReturnValue = CallFunc_RemoveGameplayTag_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;
	Parms.CallFunc_Round_A_ImplicitCast_2 = CallFunc_Round_A_ImplicitCast_2;
	Parms.CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast = CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast;
	Parms.CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast = CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.ReloadWeaponSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Equip_Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValAmmoData        CallFunc_GetAmmoForSlot_ReturnValue                              (NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::ReloadWeaponSlot(const struct GameplayTags_GameplayTag& Equip_Slot, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetAmmoForSlot_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast_2, float CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast, float CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "ReloadWeaponSlot");

	Params::UGA_PassiveReload_C_ReloadWeaponSlot_Params Parms{};

	Parms.Equip_Slot = Equip_Slot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetAmmoForSlot_ReturnValue = CallFunc_GetAmmoForSlot_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;
	Parms.CallFunc_Round_A_ImplicitCast_2 = CallFunc_Round_A_ImplicitCast_2;
	Parms.CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast = CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast;
	Parms.CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast = CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.ReloadWeaponSlot3
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CurrentSlot                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerWeaponSlotTags                                                   (Edit, BlueprintVisible)

void UGA_PassiveReload_C::ReloadWeaponSlot3(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "ReloadWeaponSlot3");

	Params::UGA_PassiveReload_C_ReloadWeaponSlot3_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;
	Parms.WeaponSlotTags = WeaponSlotTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.ReloadWeaponSlot2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CurrentSlot                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerWeaponSlotTags                                                   (Edit, BlueprintVisible)

void UGA_PassiveReload_C::ReloadWeaponSlot2(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "ReloadWeaponSlot2");

	Params::UGA_PassiveReload_C_ReloadWeaponSlot2_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;
	Parms.WeaponSlotTags = WeaponSlotTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.ReloadWeaponSlot1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CurrentSlot                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerWeaponSlotTags                                                   (Edit, BlueprintVisible)

void UGA_PassiveReload_C::ReloadWeaponSlot1(const struct GameplayTags_GameplayTag& CurrentSlot, const struct GameplayTags_GameplayTagContainer& WeaponSlotTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "ReloadWeaponSlot1");

	Params::UGA_PassiveReload_C_ReloadWeaponSlot1_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;
	Parms.WeaponSlotTags = WeaponSlotTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.SetupTimerForWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Equip_Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue_2                               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::SetupTimerForWeapon(const struct GameplayTags_GameplayTag& Equip_Slot, double Time, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue_2, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1, float CallFunc_K2_SetTimer_Time_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "SetupTimerForWeapon");

	Params::UGA_PassiveReload_C_SetupTimerForWeapon_Params Parms{};

	Parms.Equip_Slot = Equip_Slot;
	Parms.Time = Time;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = CallFunc_K2_SetTimer_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue_2 = CallFunc_K2_SetTimer_ReturnValue_2;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_1 = CallFunc_K2_SetTimer_Time_ImplicitCast_1;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_2 = CallFunc_K2_SetTimer_Time_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.Get Passive Reload Time Of Swapped Off Weapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeUntilPassiveReload                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::Get_Passive_Reload_Time_Of_Swapped_Off_Weapon(double* TimeUntilPassiveReload, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "Get Passive Reload Time Of Swapped Off Weapon");

	Params::UGA_PassiveReload_C_Get_Passive_Reload_Time_Of_Swapped_Off_Weapon_Params Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeUntilPassiveReload != nullptr)
		*TimeUntilPassiveReload = Parms.TimeUntilPassiveReload;

}


// Function GA_PassiveReload.GA_PassiveReload_C.OnWeaponSwapped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             LocalTime                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Passive_Reload_Time_Of_Swapped_Off_Weapon_TimeUntilPassiveReload(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Add_Value_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::OnWeaponSwapped(const struct GameplayTags_GameplayTag& EquipSlot, double LocalTime, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Get_Passive_Reload_Time_Of_Swapped_Off_Weapon_TimeUntilPassiveReload, double CallFunc_Map_Add_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "OnWeaponSwapped");

	Params::UGA_PassiveReload_C_OnWeaponSwapped_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.LocalTime = LocalTime;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_Get_Passive_Reload_Time_Of_Swapped_Off_Weapon_TimeUntilPassiveReload = CallFunc_Get_Passive_Reload_Time_Of_Swapped_Off_Weapon_TimeUntilPassiveReload;
	Parms.CallFunc_Map_Add_Value_ImplicitCast = CallFunc_Map_Add_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.OnTagRemoved_104FF3B64B5E8B395A79D99CE877B86B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::OnTagRemoved_104FF3B64B5E8B395A79D99CE877B86B(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "OnTagRemoved_104FF3B64B5E8B395A79D99CE877B86B");

	Params::UGA_PassiveReload_C_OnTagRemoved_104FF3B64B5E8B395A79D99CE877B86B_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.OnTagAdded_104FF3B64B5E8B395A79D99CE877B86B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::OnTagAdded_104FF3B64B5E8B395A79D99CE877B86B(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "OnTagAdded_104FF3B64B5E8B395A79D99CE877B86B");

	Params::UGA_PassiveReload_C_OnTagAdded_104FF3B64B5E8B395A79D99CE877B86B_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_PassiveReload.GA_PassiveReload_C.OnFinish_A91DFD08433A69F1CFA293A5AD2B234F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_PassiveReload_C::OnFinish_A91DFD08433A69F1CFA293A5AD2B234F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "OnFinish_A91DFD08433A69F1CFA293A5AD2B234F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PassiveReload.GA_PassiveReload_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_PassiveReload_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_PassiveReload.GA_PassiveReload_C.ExecuteUbergraph_GA_PassiveReload
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTaskOwnerInterface>CallFunc_TaskWaitDelay_TaskOwner_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameplayTask_WaitDelay*     CallFunc_TaskWaitDelay_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_1                                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayTags_GameplayTag>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct GameplayTags_GameplayTagContainerCallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_PassiveReload_C::ExecuteUbergraph_GA_PassiveReload(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, const struct GameplayTags_GameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_PassiveReload_C", "ExecuteUbergraph_GA_PassiveReload");

	Params::UGA_PassiveReload_C_ExecuteUbergraph_GA_PassiveReload_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_TaskWaitDelay_TaskOwner_CastInput = CallFunc_TaskWaitDelay_TaskOwner_CastInput;
	Parms.CallFunc_TaskWaitDelay_ReturnValue = CallFunc_TaskWaitDelay_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


