#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x66A - 0x648)
// BlueprintGeneratedClass GA_PassiveHitReaction_Dissector.GA_PassiveHitReaction_Dissector_C
class UGA_PassiveHitReaction_Dissector_C : public UGA_PassiveHitReaction_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DamageThreshold;                                   // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageAmount;                                      // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageThresholdPct;                                // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStalking;                                        // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlreadyStaggeredInStalkState;                      // 0x669(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_PassiveHitReaction_Dissector_C* GetDefaultObj();

	void OnDamaged(const struct Valhalla_DamageData& DamageData, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetBotHitReactionAnimationLength_ReturnValue, float CallFunc_GetLatchInterruptAnimationLength_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1);
	void K2_ActivateAbility();
	void StalkStateBegin();
	void StalkStateEnd();
	void LatchedStateEnd();
	void ExecuteUbergraph_GA_PassiveHitReaction_Dissector(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValAIFSMComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


