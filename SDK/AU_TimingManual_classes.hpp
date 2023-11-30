#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x660 - 0x648)
// BlueprintGeneratedClass AU_TimingManual.AU_TimingManual_C
class UAU_TimingManual_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValGameplayAbility*                   CachedUpgradableAbility;                           // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CachedUpgradeMagnitude;                            // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_TimingManual_C* GetDefaultObj();

	void EventApplyAbilityUpgrade(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability);
	void EventUnapplyAbilityUpgrade();
	void ExecuteUbergraph_AU_TimingManual(int32 EntryPoint, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability, TScriptInterface<class IValUpgradableAbility> K2Node_DynamicCast_AsVal_Upgradable_Ability, bool K2Node_DynamicCast_bSuccess, const struct GameplayTags_GameplayTagContainer& CallFunc_GetAbilityTags_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue, bool CallFunc_HasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IValUpgradableAbility> K2Node_DynamicCast_AsVal_Upgradable_Ability_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_VariableSet_CachedUpgradeMagnitude_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAbilityDuration_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetAbilityDuration_Value_ImplicitCast_1);
};

}


