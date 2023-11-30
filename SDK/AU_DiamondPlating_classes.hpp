#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x790 - 0x648)
// BlueprintGeneratedClass AU_DiamondPlating.AU_DiamondPlating_C
class UAU_DiamondPlating_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Valhalla_DamageData                   Damage_Data;                                       // 0x650(0x100)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       Current_Health;                                    // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Health_Threshold;                                  // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Current_Shield;                                    // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Shield_Threshold;                                  // 0x768(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle Active_Health_Regen;                               // 0x770(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle Active_Shield_Regen;                               // 0x778(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         Cached_Char;                                       // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    Regen_Wait;                                        // 0x788(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_DiamondPlating_C* GetDefaultObj();

	void StartRegenPassive(bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue_1, bool CallFunc_Array_IsEmpty_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, float CallFunc_SetDuration_Duration_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetDuration_Duration_ImplicitCast_1);
	void OnDamaged(const struct Valhalla_DamageData& DamageData, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 CallFunc_GetShieldsMax_ReturnValue, int32 CallFunc_GetShields_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EventActivateUpgrade(float Value);
	void EventUnapplyAbilityUpgrade();
	void ExecuteUbergraph_AU_DiamondPlating(int32 EntryPoint, float K2Node_Event_Value, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess);
};

}


