#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AU_SlotDamageMultiplier.AU_SlotDamageMultiplier_C
// (None)

class UClass* UAU_SlotDamageMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AU_SlotDamageMultiplier_C");

	return Clss;
}


// AU_SlotDamageMultiplier_C AU_SlotDamageMultiplier.Default__AU_SlotDamageMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAU_SlotDamageMultiplier_C* UAU_SlotDamageMultiplier_C::GetDefaultObj()
{
	static class UAU_SlotDamageMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAU_SlotDamageMultiplier_C*>(UAU_SlotDamageMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AU_SlotDamageMultiplier.AU_SlotDamageMultiplier_C.ApplyDamageOutputModifier
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutPercentModifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutFlatModifier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleDamageContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableGet_OutPercentModifier_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetListenSlot_ReturnValue                               (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSetRef_Target_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_SlotDamageMultiplier_C::ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetListenSlot_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_SlotDamageMultiplier_C", "ApplyDamageOutputModifier");

	Params::UAU_SlotDamageMultiplier_C_ApplyDamageOutputModifier_Params Parms{};

	Parms.OutPercentModifier = OutPercentModifier;
	Parms.OutFlatModifier = OutFlatModifier;
	Parms.Damage = Damage;
	Parms.DamageContext = DamageContext;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.K2Node_VariableGet_OutPercentModifier_ImplicitCast = K2Node_VariableGet_OutPercentModifier_ImplicitCast;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetListenSlot_ReturnValue = CallFunc_GetListenSlot_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast = K2Node_VariableSetRef_Target_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AU_SlotDamageMultiplier.AU_SlotDamageMultiplier_C.EventActivateUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_SlotDamageMultiplier_C::EventActivateUpgrade(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_SlotDamageMultiplier_C", "EventActivateUpgrade");

	Params::UAU_SlotDamageMultiplier_C_EventActivateUpgrade_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AU_SlotDamageMultiplier.AU_SlotDamageMultiplier_C.ExecuteUbergraph_AU_SlotDamageMultiplier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Multiplier_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_SlotDamageMultiplier_C::ExecuteUbergraph_AU_SlotDamageMultiplier(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Value, double K2Node_VariableSet_Multiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_SlotDamageMultiplier_C", "ExecuteUbergraph_AU_SlotDamageMultiplier");

	Params::UAU_SlotDamageMultiplier_C_ExecuteUbergraph_AU_SlotDamageMultiplier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_VariableSet_Multiplier_ImplicitCast = K2Node_VariableSet_Multiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


