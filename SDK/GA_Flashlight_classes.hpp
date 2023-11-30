#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x610 - 0x600)
// BlueprintGeneratedClass GA_Flashlight.GA_Flashlight_C
class UGA_Flashlight_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle Handle;                                            // 0x608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Flashlight_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void ValInputPressed(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo);
	void ExecuteUbergraph_GA_Flashlight(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& K2Node_Event_Handle, const struct GameplayAbilities_GameplayAbilityActorInfo& K2Node_Event_ActorInfo, const struct GameplayAbilities_GameplayAbilityActivationInfo& K2Node_Event_ActivationInfo);
};

}


