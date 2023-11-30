#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x698 - 0x648)
// BlueprintGeneratedClass AU_HealthRegenOutOfCombat.AU_HealthRegenOutOfCombat_C
class UAU_HealthRegenOutOfCombat_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       HealthThresholdPercent;                            // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedChar;                                        // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    Regen_Timer_Handle;                                // 0x660(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle Active_Effect_Handle;                              // 0x668(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentHealth;                                     // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HealthThreshold;                                   // 0x674(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Regen_Delay;                                       // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    RegenTimerHandle;                                  // 0x680(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle ActiveEffectHandle;                                // 0x688(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    ThresholdCheckTimerHandle;                         // 0x690(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_HealthRegenOutOfCombat_C* GetDefaultObj();

	void Healed_Past_Threshold_Check(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, float K2Node_VariableSet_CurrentHealth_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_HealthThreshold_ImplicitCast);
	void StartRegenPassive(bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetDuration_Duration_ImplicitCast, float K2Node_VariableSet_HealthThreshold_ImplicitCast, float K2Node_VariableSet_CurrentHealth_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
	void EventActivateUpgrade(float Value);
	void EventUnapplyAbilityUpgrade();
	void OnDied(float TimeToRespawn, class AValCharacter* Pawn);
	void OnDamaged(const struct Valhalla_DamageData& DamageData);
	void ExecuteUbergraph_AU_HealthRegenOutOfCombat(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsAlive_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_Value, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_TimeToRespawn, class AValCharacter* K2Node_CustomEvent_Pawn, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_CurrentHealth_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, float K2Node_VariableSet_HealthThreshold_ImplicitCast, double K2Node_VariableSet_HealthThresholdPercent_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


