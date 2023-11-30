#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6A (0x692 - 0x628)
// BlueprintGeneratedClass GA_UsePack.GA_UsePack_C
class UGA_UsePack_C : public UValAbilitySwappable
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       CastTime;                                          // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                CastTimeDelayTask;                                 // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              GameplayCueTag;                                    // 0x640(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGameplayEffect>           GameplayEffectToAdd;                               // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              GameplayEffectDataTag;                             // 0x650(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Magnitude;                                         // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle UsingPackEffectHandle;                             // 0x660(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsScrub;                                           // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CDD[0x7];                                     // Fixing Size After Last Property  
	class AValPlayerState*                       PlayerState;                                       // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*     SwapTagDelayTask;                                  // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       InjectOutroTime;                                   // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                ApplyEffectTask;                                   // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedUsedPack;                                    // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRemoveFromBackpack;                               // 0x691(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_UsePack_C* GetDefaultObj();

	void IncrementPlayerStats(enum class EPlayerStats LocalPlayerStat, bool CallFunc_K2_HasAuthority_ReturnValue, bool Temp_bool_Variable, enum class EPlayerStats Temp_byte_Variable, enum class EPlayerStats Temp_byte_Variable_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class EPlayerStats K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AValGameMode* K2Node_DynamicCast_AsVal_Game_Mode, bool K2Node_DynamicCast_bSuccess, class UValStatsManager* CallFunc_GetStatsManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void RemovePackFromBackpack(bool CallFunc_K2_HasAuthority_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetCurrentAbilitySpecHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetSlotForEquippedAbility_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_RemoveEquipSlotQuantity_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void GetHealingAmount(double IncomingMagnitude, double* Value);
	bool TryInputLocal(enum class EValAbilityInputID InputID, bool K2Node_SwitchEnum_CmpSuccess);
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct GameplayAbilities_GameplayAbilitySpecHandle& K2Node_MakeStruct_GameplayAbilitySpecHandle);
	void Take_Cost();
	void ValidateCost(bool* HadCost);
	void OnFinish_74BA4CB04980CC5AF66E6ABA1F674AC0();
	void Added_B87AF82E47D4587EBE97548FB4FCAD90();
	void OnFinish_F7036B2041F728825DF0DCAFA0C7C99D();
	void K2_ActivateAbility();
	void UpdateAnimation();
	void EventApplyEffect();
	void ExecuteUbergraph_GA_UsePack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_Healing_Canister_1P_C* K2Node_DynamicCast_AsABP_Healing_Canister_1P, bool K2Node_DynamicCast_bSuccess, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_WaitDelay_Time_ImplicitCast, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast, float CallFunc_WaitDelay_Time_ImplicitCast_1);
};

}


