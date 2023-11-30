#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x6E0 - 0x600)
// BlueprintGeneratedClass GA_SpaceDungeon_Stealth.GA_SpaceDungeon_Stealth_C
class UGA_SpaceDungeon_Stealth_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedEffectHandle;                                // 0x608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedCharacter;                                   // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AbilityDuration;                                   // 0x618(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                CachedWaitTask;                                    // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        CachedListenAbilitiesTask;                         // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedMoveSpeedHandle;                             // 0x630(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedRegenHandle;                                 // 0x638(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedLeapHandle;                                  // 0x640(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTagContainer     DefaultSlotsToBind;                                // 0x648(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       BaseMovementSpeedIncrease;                         // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PercentTickRegenAmount;                            // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JumpMultiplier;                                    // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BreakFromMelee;                                    // 0x680(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BBE[0x7];                                     // Fixing Size After Last Property  
	class UValAT_GameplayTagAddedRemoved*        CachedListenRevealedTask;                          // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MoveSpeedModMultiplier;                            // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DurationModMultiplier;                             // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CooldownMod;                                       // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ScalableFloat       CachedBaseCooldown;                                // 0x6A8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        AttackBuffMagnitude;                               // 0x6D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttackBuffDuration;                                // 0x6D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultAbilityEndLockoutDuration;                  // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SpaceDungeon_Stealth_C* GetDefaultObj();

	float GetAbilityCastTime();
	float GetAbilityCooldownModifier();
	float GetAbilityDeployTime();
	float GetAbilityDuration(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast);
	TArray<TSubclassOf<class UGameplayEffect>> GetAbilityEffectsToApply();
	float GetAbilityProjectileSpeed(float Value);
	float GetAbilityRange();
	void CalcAbilityPropertyModifiers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1);
	void GetMovementSpeedIncrease(double* MovementSpeedIncrease, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void On_Revealed(const struct GameplayTags_GameplayTag& Tag);
	void BindToRevealed(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetDuration(double* Duration, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_A_ImplicitCast);
	void BindToAbilitiesActive(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnSync_B0E8D555492E61B820B90CB528CC2B9D();
	void OnFinish_9E3CEED647E30B0D5241D4B55E6ED4E9();
	void OnSync_BEAE6F01426F9065E9D5588B8635887E();
	void AddAbilityEffectToApply(TSubclassOf<class UGameplayEffect> Value);
	void SetAbilityCastTime(float Value);
	void SetAbilityDeployTime(float Value);
	void SetAbilityProjectileSpeed(float Value);
	void SetAbilityRange(float Value);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void OnTagAdded(const struct GameplayTags_GameplayTag& Tag);
	void SetAbilityDuration(float Value);
	void RepSetDuration(double Duration);
	void OnTagRemoved(const struct GameplayTags_GameplayTag& Tag);
	void BeginPlay();
	void ExecuteUbergraph_GA_SpaceDungeon_Stealth(int32 EntryPoint, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UGameplayEffect> K2Node_Event_Value_5, float K2Node_Event_Value_4, float K2Node_Event_Value_3, float K2Node_Event_Value_2, float K2Node_Event_Value_1, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, float K2Node_Event_Value, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_3, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_K2_HasAuthority_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, double K2Node_CustomEvent_Duration, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, double CallFunc_GetMovementSpeedIncrease_MovementSpeedIncrease, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, double CallFunc_GetMovementSpeedIncrease_MovementSpeedIncrease_1, float CallFunc_GetAbilityDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_2, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetAbilityDuration_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_2, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_4, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_3, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_5, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double K2Node_VariableSet_AbilityDuration_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_2, float CallFunc_SetDuration_Duration_ImplicitCast);
};

}


