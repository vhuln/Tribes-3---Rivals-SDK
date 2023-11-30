#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BattleRoyaleDamageInstigator.BP_BattleRoyaleDamageInstigator_C
// (Actor)

class UClass* ABP_BattleRoyaleDamageInstigator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BattleRoyaleDamageInstigator_C");

	return Clss;
}


// BP_BattleRoyaleDamageInstigator_C BP_BattleRoyaleDamageInstigator.Default__BP_BattleRoyaleDamageInstigator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BattleRoyaleDamageInstigator_C* ABP_BattleRoyaleDamageInstigator_C::GetDefaultObj()
{
	static class ABP_BattleRoyaleDamageInstigator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BattleRoyaleDamageInstigator_C*>(ABP_BattleRoyaleDamageInstigator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BattleRoyaleDamageInstigator.BP_BattleRoyaleDamageInstigator_C.ApplyDamageToPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BattleRoyaleDamageInstigator_C::ApplyDamageToPawn(class AValCharacter* Pawn, double Damage, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BattleRoyaleDamageInstigator_C", "ApplyDamageToPawn");

	Params::ABP_BattleRoyaleDamageInstigator_C_ApplyDamageToPawn_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.Damage = Damage;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


