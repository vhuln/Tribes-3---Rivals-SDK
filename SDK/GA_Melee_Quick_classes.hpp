#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x668 - 0x628)
// BlueprintGeneratedClass GA_Melee_Quick.GA_Melee_Quick_C
class UGA_Melee_Quick_C : public UValAbilitySwappable
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_GameplayAbilitySpecHandle InstantAbilityHandle;                              // 0x630(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CFB[0x4];                                      // Fixing Size After Last Property  
	class UClass*                                InstantAbilityClass;                               // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGA_Gun_Master_Instant_C*              InstantAbility;                                    // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGA_Gun_Master_C*                      GA_Gun;                                            // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedCharacter;                                   // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          OnePAnim;                                          // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle CachedEffectHandle;                                // 0x660(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Melee_Quick_C* GetDefaultObj();

	void CacheData(class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAbilitySpecHandleValid_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Melee_Quick(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue);
};

}


