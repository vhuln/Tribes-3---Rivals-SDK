#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x178 (0x778 - 0x600)
// BlueprintGeneratedClass GA_SpaceDungeon_Wallhack_Continuous.GA_SpaceDungeon_Wallhack_Continuous_C
class UGA_SpaceDungeon_Wallhack_Continuous_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValGATA_ShapeTrace*                   CachedSphere;                                      // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScanTime;                                          // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Radius;                                            // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  OwningCharacter;                                   // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_ValChar_Master_C*>            DetectedChars;                                     // 0x630(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class ABP_ValChar_Master_C*, struct GameplayAbilities_ActiveGameplayEffectHandle> EffectHandles;                                     // 0x680(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         SendToTeammates;                                   // 0x6D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F3[0x7];                                     // Fixing Size After Last Property  
	class UAbilityTask_Repeat*                   Async_Task;                                        // 0x6D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     OneP_PS;                                           // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ThreeP_PS;                                         // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                OnePMesh;                                          // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ThreePMesh;                                        // 0x6F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Active_System;                                     // 0x700(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F5[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         Val_Character;                                     // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedWiseSoundHandle;                             // 0x710(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AntiHeal_Upgrade;                                  // 0x714(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DMG_Buff_Upgrade;                                  // 0x715(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_ChestsUpgrade;                                // 0x716(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Deployables_Upgrade;                          // 0x717(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reset_On_Kill_Upgrade;                             // 0x718(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Silence_Upgrade;                                   // 0x719(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Damage_Upgrade;                                    // 0x71A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43F8[0x5];                                     // Fixing Size After Last Property  
	double                                       Damage;                                            // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RolloutStepDelay;                                  // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RolloutSteps;                                      // 0x730(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43FA[0x4];                                     // Fixing Size After Last Property  
	double                                       RadiusModMultiplier;                               // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DurationModMultiplier;                             // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ScalableFloat       CachedBasedCooldown;                               // 0x748(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       TargetDamageDebuffMagnitude;                       // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SpaceDungeon_Wallhack_Continuous_C* GetDefaultObj();

	float GetAbilityCastTime();
	float GetAbilityCooldownModifier();
	float GetAbilityDeployTime();
	float GetAbilityDuration(double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	TArray<TSubclassOf<class UGameplayEffect>> GetAbilityEffectsToApply();
	float GetAbilityProjectileSpeed(float Value);
	float GetAbilityRange(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	void Play_Activate_SFX(bool CallFunc_IsDedicatedServer_ReturnValue);
	void CalcAbilityPropertyModifiers(double CooldownMod, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_3, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_3, int32 CallFunc_Array_Length_ReturnValue_3, float CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2);
	void RevealHits(double Range, class ABP_ValChar_Master_C* CachedCharacter, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_ValChar_Master_C*>& CallFunc_Set_ToArray_Result, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class ABP_ValChar_Master_C* CallFunc_Array_Get_Item, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_AddBeingRevealedEffectToTarget_EffectHandle, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AddAssetTag_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_AddEffectToTarget_EffectHandle, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_3, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_AddEffectToTarget_EffectHandle_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_4, bool CallFunc_Map_Contains_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_RevealTarget_EffectHandle, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1);
	void AddBeingRevealedEffectToTarget(class AActor* HitTarget, const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, bool AffectsTeam, struct GameplayAbilities_ActiveGameplayEffectHandle* EffectHandle, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_CloneSpecHandle_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue);
	void RevealTarget(class AActor* HitTarget, const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, bool AffectsTeam, struct GameplayAbilities_ActiveGameplayEffectHandle* EffectHandle, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue);
	void ResetOnKill(const struct Valhalla_DamageData& Data, class AActor* Target, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerBot_ReturnValue, bool CallFunc_IsBotControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void ScanFor(TArray<enum class EObjectTypeQuery>& ObjectTypes, class UClass* ActorClassFilter, TArray<class AActor*>& Temp_object_Variable, float CallFunc_GetAbilityRange_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue);
	void Handle_Non_Player_Hits(TArray<class AActor*>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_AddEffectToTarget_EffectHandle);
	void AddEffectToTarget(class AActor* HitTarget, const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, bool AffectsTeam, struct GameplayAbilities_ActiveGameplayEffectHandle* EffectHandle, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue);
	void UpdateTeamColor(class AActor* Instigator, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	void ApplyVFX(bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void HandleHits(TArray<class AActor*>& Hits, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	void OnFinished_3E710EEF4FF986E4039E3C82B8EC3207(int32 ActionNumber);
	void OnPerformAction_3E710EEF4FF986E4039E3C82B8EC3207(int32 ActionNumber);
	void SetAbilityDuration(float Value);
	void SetAbilityRange(float Value);
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void K2_ActivateAbility();
	void SetAbilityProjectileSpeed(float Value);
	void SetAbilityDeployTime(float Value);
	void SetAbilityCastTime(float Value);
	void BeginPlay();
	void AddAbilityEffectToApply(TSubclassOf<class UGameplayEffect> Value);
	void ExecuteUbergraph_GA_SpaceDungeon_Wallhack_Continuous(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, double CallFunc_Conv_IntToDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class ABP_ValChar_Master_C*>& CallFunc_Map_Keys_Keys, class ABP_ValChar_Master_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Variable, int32 K2Node_CustomEvent_ActionNumber, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_Event_Value_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Value_4, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, float K2Node_Event_Value_3, float K2Node_Event_Value_2, float K2Node_Event_Value_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetAbilityRange_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, TSubclassOf<class UGameplayEffect> K2Node_Event_Value, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array_1, class UAbilityTask_Repeat* CallFunc_RepeatAction_ReturnValue, int32 K2Node_CustomEvent_ActionNumber_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetAbilityRange_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetAbilityRange_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, float CallFunc_GetAbilityDuration_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double K2Node_VariableSet_Duration_ImplicitCast, double K2Node_VariableSet_Radius_ImplicitCast, float CallFunc_RepeatAction_TimeBetweenActions_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


