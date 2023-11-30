#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x610 - 0x600)
// BlueprintGeneratedClass GA_DestructibleAsset_DamageModifier.GA_DestructibleAsset_DamageModifier_C
class UGA_DestructibleAsset_DamageModifier_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_DestructibleAsset_C*               CachedDestructibleAsset;                           // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_DestructibleAsset_DamageModifier_C* GetDefaultObj();

	void ApplyDamageResistanceModifier(float& OutPercentModifier, float& OutFlatModifier, float& OutShieldModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, float K2Node_VariableGet_OutPercentModifier_ImplicitCast_1, float K2Node_VariableGet_OutPercentModifier_ImplicitCast_2, double K2Node_VariableSetRef_Target_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast_1, double K2Node_VariableSetRef_Target_ImplicitCast_2);
	void K2_ActivateAbility();
	void EventApplyAbilityUpgrade_1(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability);
	void ExecuteUbergraph_GA_DestructibleAsset_DamageModifier(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_DestructibleAsset_C* K2Node_DynamicCast_AsBP_Destructible_Asset, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability);
};

}


