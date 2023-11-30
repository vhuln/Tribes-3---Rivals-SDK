#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x638 - 0x600)
// BlueprintGeneratedClass GA_Falling.GA_Falling_C
class UGA_Falling_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ValChar_Master_C*                  OwningCharacter;                                   // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValGameplayAbility*                   SwappedFromAbility;                                // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValGameplayAbility*                   SwappedToAbility;                                  // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       HolsterSpeed;                                      // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DrawSpeed;                                         // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle FallingEffectHandle;                               // 0x630(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Falling_C* GetDefaultObj();

	void ValApplyCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo);
	bool ValCheckCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo);
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags);
	void OnTagRemoved_8DB259794383D674375FCE80A0C8496E(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_8DB259794383D674375FCE80A0C8496E(const struct GameplayTags_GameplayTag& Tag);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void ExecuteUbergraph_GA_Falling(int32 EntryPoint, const struct GameplayTags_GameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


