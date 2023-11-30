#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x678 - 0x600)
// BlueprintGeneratedClass GA_PassivePerk_HealthRegen.GA_PassivePerk_HealthRegen_C
class UGA_PassivePerk_HealthRegen_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValCharacter*                         CachedCharacter;                                   // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    DamageTimer;                                       // 0x610(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle ActiveEffectHandle;                                // 0x618(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HealthRegenActive;                                 // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3883[0x7];                                     // Fixing Size After Last Property  
	double                                       HealthPercentThreshold;                            // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HealthRestored;                                    // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RegenDelayAfterDamage;                             // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UGameplayEffect>         HealthRegenEffect;                                 // 0x640(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                HealthRegenEffectClass;                            // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RestoreToThreshold;                                // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_PassivePerk_HealthRegen_C* GetDefaultObj();

	void On_Respawned_Finished();
	void RemoveRegenEffect(bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
	void OnDamageTimerEnded(float CallFunc_GetHealthPercent_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
	void OnDamaged(const struct Valhalla_DamageData& DamageData, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealthPercent_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void OnHealthPercentChanged(float Value, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void OnLoaded_C2249C934F840EE344D165B2687DBE99(TSubclassOf<class UObject> Loaded);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void ExecuteUbergraph_GA_PassivePerk_HealthRegen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsGameplay_Effect, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGameplay_Effect_1, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_IsValidClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


