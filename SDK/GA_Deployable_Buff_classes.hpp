#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x7D0 - 0x780)
// BlueprintGeneratedClass GA_Deployable_Buff.GA_Deployable_Buff_C
class UGA_Deployable_Buff_C : public UGA_Deployable_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                ClassToSpawn;                                      // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DeployableGameplayEffect;                          // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              DeployableEffectTag;                               // 0x798(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DeployableEffectMagnitude;                         // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0x7A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              InRangeGameplayCueTag;                             // 0x7B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Lifetime;                                          // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                Async_Task;                                        // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ThrowTime;                                         // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Deployable_Buff_C* GetDefaultObj();

	void SpawnDeployable(bool UsePreviewTransform, const struct CoreUObject_Transform& PreviewTransform, class AActor** Spawned, bool CallFunc_K2_HasAuthority_ReturnValue, float CallFunc_GetAbilityDeployTime_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetMuzzleFireLocation_ReturnValue, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetAbilityRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ABP_Deployed_Actor_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Deployed_Buff_Station_C* K2Node_DynamicCast_AsBP_Deployed_Buff_Station, bool K2Node_DynamicCast_bSuccess, TArray<TSubclassOf<class UGameplayEffect>>& CallFunc_GetAbilityEffectsToApply_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void OnFinish_A8E6EBE3462CD186D644209270371D78();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Deployable_Buff(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_SpawnDeployable_Spawned, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_WaitDelay_Time_ImplicitCast);
};

}


