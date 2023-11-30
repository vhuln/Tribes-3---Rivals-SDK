#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x650 - 0x648)
// BlueprintGeneratedClass DU_GenericCooldownPercent.DU_GenericCooldownPercent_C
class UDU_GenericCooldownPercent_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UDU_GenericCooldownPercent_C* GetDefaultObj();

	void EventApplyAbilityUpgrade(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability);
	void EventUnapplyAbilityUpgrade();
	void ExecuteUbergraph_DU_GenericCooldownPercent(int32 EntryPoint, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AddAbilityCooldownPercentageModifier_Value_ImplicitCast);
};

}


