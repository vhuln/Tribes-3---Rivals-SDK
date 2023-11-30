#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DestructibleAsset_DamageModifier.GA_DestructibleAsset_DamageModifier_C
// (None)

class UClass* UGA_DestructibleAsset_DamageModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DestructibleAsset_DamageModifier_C");

	return Clss;
}


// GA_DestructibleAsset_DamageModifier_C GA_DestructibleAsset_DamageModifier.Default__GA_DestructibleAsset_DamageModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DestructibleAsset_DamageModifier_C* UGA_DestructibleAsset_DamageModifier_C::GetDefaultObj()
{
	static class UGA_DestructibleAsset_DamageModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DestructibleAsset_DamageModifier_C*>(UGA_DestructibleAsset_DamageModifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DestructibleAsset_DamageModifier.GA_DestructibleAsset_DamageModifier_C.ApplyDamageResistanceModifier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutPercentModifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutFlatModifier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutShieldModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleDamageContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableGet_OutPercentModifier_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableGet_OutPercentModifier_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableGet_OutPercentModifier_ImplicitCast_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSetRef_Target_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSetRef_Target_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSetRef_Target_ImplicitCast_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DestructibleAsset_DamageModifier_C::ApplyDamageResistanceModifier(float& OutPercentModifier, float& OutFlatModifier, float& OutShieldModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, float K2Node_VariableGet_OutPercentModifier_ImplicitCast_1, float K2Node_VariableGet_OutPercentModifier_ImplicitCast_2, double K2Node_VariableSetRef_Target_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast_1, double K2Node_VariableSetRef_Target_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DestructibleAsset_DamageModifier_C", "ApplyDamageResistanceModifier");

	Params::UGA_DestructibleAsset_DamageModifier_C_ApplyDamageResistanceModifier_Params Parms{};

	Parms.OutPercentModifier = OutPercentModifier;
	Parms.OutFlatModifier = OutFlatModifier;
	Parms.OutShieldModifier = OutShieldModifier;
	Parms.Damage = Damage;
	Parms.DamageContext = DamageContext;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableGet_OutPercentModifier_ImplicitCast = K2Node_VariableGet_OutPercentModifier_ImplicitCast;
	Parms.K2Node_VariableGet_OutPercentModifier_ImplicitCast_1 = K2Node_VariableGet_OutPercentModifier_ImplicitCast_1;
	Parms.K2Node_VariableGet_OutPercentModifier_ImplicitCast_2 = K2Node_VariableGet_OutPercentModifier_ImplicitCast_2;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast = K2Node_VariableSetRef_Target_ImplicitCast;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast_1 = K2Node_VariableSetRef_Target_ImplicitCast_1;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast_2 = K2Node_VariableSetRef_Target_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DestructibleAsset_DamageModifier.GA_DestructibleAsset_DamageModifier_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DestructibleAsset_DamageModifier_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DestructibleAsset_DamageModifier_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DestructibleAsset_DamageModifier.GA_DestructibleAsset_DamageModifier_C.EventApplyAbilityUpgrade_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UValGameplayAbility>Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_DestructibleAsset_DamageModifier_C::EventApplyAbilityUpgrade_1(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DestructibleAsset_DamageModifier_C", "EventApplyAbilityUpgrade_1");

	Params::UGA_DestructibleAsset_DamageModifier_C_EventApplyAbilityUpgrade_1_Params Parms{};

	Parms.Class = Class;
	Parms.Value = Value;
	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DestructibleAsset_DamageModifier.GA_DestructibleAsset_DamageModifier_C.ExecuteUbergraph_GA_DestructibleAsset_DamageModifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleAsset_C*     K2Node_DynamicCast_AsBP_Destructible_Asset                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UValGameplayAbility>K2Node_Event_Class                                               (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_DestructibleAsset_DamageModifier_C::ExecuteUbergraph_GA_DestructibleAsset_DamageModifier(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_DestructibleAsset_C* K2Node_DynamicCast_AsBP_Destructible_Asset, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DestructibleAsset_DamageModifier_C", "ExecuteUbergraph_GA_DestructibleAsset_DamageModifier");

	Params::UGA_DestructibleAsset_DamageModifier_C_ExecuteUbergraph_GA_DestructibleAsset_DamageModifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Asset = K2Node_DynamicCast_AsBP_Destructible_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Class = K2Node_Event_Class;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;

	UObject::ProcessEvent(Func, &Parms);

}

}


