#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3D8 - 0x3D0)
// BlueprintGeneratedClass BP_BattleRoyaleDamageInstigator.BP_BattleRoyaleDamageInstigator_C
class ABP_BattleRoyaleDamageInstigator_C : public AValAttributeActor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BattleRoyaleDamageInstigator_C* GetDefaultObj();

	void ApplyDamageToPawn(class AValCharacter* Pawn, double Damage, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}


