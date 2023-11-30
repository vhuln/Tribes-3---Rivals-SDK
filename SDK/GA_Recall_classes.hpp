#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x670 - 0x600)
// BlueprintGeneratedClass GA_Recall.GA_Recall_C
class UGA_Recall_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValCharacter*                         CachedChar;                                        // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ChannelingTime;                                    // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedActiveHandle;                                // 0x618(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_GameplayEffectContextHandle CachedEffectContext;                               // 0x620(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct CoreUObject_Vector                    SpawnLocation;                                     // 0x638(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedConfirmedHandle;                             // 0x650(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                WaitTask;                                          // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRecallComplete;                                  // 0x660(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, RepNotify, BlueprintCallable)

	static class UClass* StaticClass();
	static class UGA_Recall_C* GetDefaultObj();

	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, const struct GameplayTags_GameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMovingOnGround_ReturnValue);
	void EnableAI(class AAIController* CallFunc_GetAIController_ReturnValue, class AValAIController* K2Node_DynamicCast_AsVal_AIController, bool K2Node_DynamicCast_bSuccess);
	void DisableAI(class AAIController* CallFunc_GetAIController_ReturnValue, class AValAIController* K2Node_DynamicCast_AsVal_AIController, bool K2Node_DynamicCast_bSuccess);
	void DropFlag(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATopGameState_TopazCTF* K2Node_DynamicCast_AsTop_Game_State_Topaz_CTF, bool K2Node_DynamicCast_bSuccess, TMap<class AValCharacter*, class ATopPickup_Flag*> CallFunc_GetFlagHolders_ReturnValue, class ATopPickup_Flag* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnRep_OnRecallComplete();
	void OnDied(float TimeToRespawn, class AValCharacter* Pawn, bool CallFunc_IsAbilityActive_ReturnValue);
	void OnDamaged(const struct Valhalla_DamageData& DamageData, bool CallFunc_IsAbilityActive_ReturnValue);
	void BindCharacter(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess);
	void ToggleChanneling(bool Channeling, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void OnFinish_25FE8FE34E7189393E4C549E4B19C5CA();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void BeginChannelingPhase();
	void EndChannelingPhase();
	void Teleport();
	void ExecuteUbergraph_GA_Recall(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AValGameMode* K2Node_DynamicCast_AsVal_Game_Mode, bool K2Node_DynamicCast_bSuccess, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, class AActor* CallFunc_K2_FindPlayerStart_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct Engine_HitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, class ATopPlayerController* K2Node_DynamicCast_AsTop_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_WaitDelay_Time_ImplicitCast, float CallFunc_SetAbilityProgressActive_Value_ImplicitCast);
	void OnRecallComplete__DelegateSignature();
};

}


