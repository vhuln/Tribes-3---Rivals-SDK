#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x650 - 0x648)
// BlueprintGeneratedClass AU_ExplosivesManual.AU_ExplosivesManual_C
class UAU_ExplosivesManual_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAU_ExplosivesManual_C* GetDefaultObj();

	void EventApplyAbilityUpgrade(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability);
	void EventUnapplyAbilityUpgrade();
	void ExecuteUbergraph_AU_ExplosivesManual(int32 EntryPoint, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability, class UGA_Grenade_New_C* K2Node_DynamicCast_AsGA_Grenade_New, bool K2Node_DynamicCast_bSuccess, class UGA_Grenade_New_C* K2Node_DynamicCast_AsGA_Grenade_New_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IValUpgradableAbility> CallFunc_SetAbilityRange_self_CastInput, TScriptInterface<class IValUpgradableAbility> CallFunc_SetAbilityRange_self_CastInput_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAbilityRange_Value_ImplicitCast);
};

}


