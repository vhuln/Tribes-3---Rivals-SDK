#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x600 - 0x600)
// BlueprintGeneratedClass GA_AmmoRarityPassive.GA_AmmoRarityPassive_C
class UGA_AmmoRarityPassive_C : public UValGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UGA_AmmoRarityPassive_C* GetDefaultObj();

	void ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, double PercentIncrease, enum class ERarity Temp_byte_Variable, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, double Temp_real_Variable, class UValGameplayAbility* K2Node_DynamicCast_AsVal_Gameplay_Ability, bool K2Node_DynamicCast_bSuccess, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetCurrentAbilitySpecHandle_ReturnValue, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double CallFunc_Add_DoubleDouble_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, const struct GameplayTags_GameplayTag& CallFunc_GetSlotForEquippedAbility_ReturnValue, enum class ERarity CallFunc_GetSlotAmmoRarity_ReturnValue, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSetRef_Value_ImplicitCast);
};

}


