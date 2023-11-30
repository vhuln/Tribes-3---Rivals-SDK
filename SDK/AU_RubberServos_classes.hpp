#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x658 - 0x648)
// BlueprintGeneratedClass AU_RubberServos.AU_RubberServos_C
class UAU_RubberServos_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle ActiveGE;                                          // 0x650(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_RubberServos_C* GetDefaultObj();

	void K2_ActivateAbility();
	void EventUnapplyAbilityUpgrade();
	void ExecuteUbergraph_AU_RubberServos(int32 EntryPoint, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
};

}


