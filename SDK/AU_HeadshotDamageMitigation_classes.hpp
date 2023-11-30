#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x658 - 0x648)
// BlueprintGeneratedClass AU_HeadshotDamageMitigation.AU_HeadshotDamageMitigation_C
class UAU_HeadshotDamageMitigation_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       HeadshotDamageMitigation;                          // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_HeadshotDamageMitigation_C* GetDefaultObj();

	void ApplyLimbResistanceModifier(float& OutLimbDamageModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_FunctionEntry_OutLimbDamageModifier_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void EventActivateUpgrade(float Value);
	void ExecuteUbergraph_AU_HeadshotDamageMitigation(int32 EntryPoint, float K2Node_Event_Value, double K2Node_VariableSet_HeadshotDamageMitigation_ImplicitCast);
};

}


