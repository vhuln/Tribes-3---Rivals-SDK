#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x8D0 - 0x8B8)
// BlueprintGeneratedClass GA_Melee_Master_Instant.GA_Melee_Master_Instant_C
class UGA_Melee_Master_Instant_C : public UGA_Gun_Master_Instant_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x8B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle MeleeAttackEffectHandle;                           // 0x8C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DefaultMeleeOnSwingEffect;                         // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Melee_Master_Instant_C* GetDefaultObj();

	void CheckRemoveMovementDebuff(bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
	void OnTagRemoved_D51546124464A42A27D014A5B3B8B296(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_D51546124464A42A27D014A5B3B8B296(const struct GameplayTags_GameplayTag& Tag);
	void K2_ActivateAbility();
	void BeginPlay();
	void OnMeleeTagRemoved(const struct GameplayTags_GameplayTag& Tag);
	void ExecuteUbergraph_GA_Melee_Master_Instant(int32 EntryPoint, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue);
};

}


