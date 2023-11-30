#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_AmmoRarityPassive.GA_AmmoRarityPassive_C
// (None)

class UClass* UGA_AmmoRarityPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_AmmoRarityPassive_C");

	return Clss;
}


// GA_AmmoRarityPassive_C GA_AmmoRarityPassive.Default__GA_AmmoRarityPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_AmmoRarityPassive_C* UGA_AmmoRarityPassive_C::GetDefaultObj()
{
	static class UGA_AmmoRarityPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_AmmoRarityPassive_C*>(UGA_AmmoRarityPassive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_AmmoRarityPassive.GA_AmmoRarityPassive_C.ApplyDamageOutputModifier
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutPercentModifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutFlatModifier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleDamageContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             PercentIncrease                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         K2Node_DynamicCast_AsVal_Gameplay_Ability                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetCurrentAbilitySpecHandle_ReturnValue                 (NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableGet_OutPercentModifier_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetSlotForEquippedAbility_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CallFunc_GetSlotAmmoRarity_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSetRef_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AmmoRarityPassive_C::ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, double PercentIncrease, enum class ERarity Temp_byte_Variable, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, double Temp_real_Variable, class UValGameplayAbility* K2Node_DynamicCast_AsVal_Gameplay_Ability, bool K2Node_DynamicCast_bSuccess, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetCurrentAbilitySpecHandle_ReturnValue, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double CallFunc_Add_DoubleDouble_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, const struct GameplayTags_GameplayTag& CallFunc_GetSlotForEquippedAbility_ReturnValue, enum class ERarity CallFunc_GetSlotAmmoRarity_ReturnValue, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSetRef_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_AmmoRarityPassive_C", "ApplyDamageOutputModifier");

	Params::UGA_AmmoRarityPassive_C_ApplyDamageOutputModifier_Params Parms{};

	Parms.OutPercentModifier = OutPercentModifier;
	Parms.OutFlatModifier = OutFlatModifier;
	Parms.Damage = Damage;
	Parms.DamageContext = DamageContext;
	Parms.PercentIncrease = PercentIncrease;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_DynamicCast_AsVal_Gameplay_Ability = K2Node_DynamicCast_AsVal_Gameplay_Ability;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentAbilitySpecHandle_ReturnValue = CallFunc_GetCurrentAbilitySpecHandle_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_VariableGet_OutPercentModifier_ImplicitCast = K2Node_VariableGet_OutPercentModifier_ImplicitCast;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSlotForEquippedAbility_ReturnValue = CallFunc_GetSlotForEquippedAbility_ReturnValue;
	Parms.CallFunc_GetSlotAmmoRarity_ReturnValue = CallFunc_GetSlotAmmoRarity_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSetRef_Value_ImplicitCast = K2Node_VariableSetRef_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


