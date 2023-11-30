#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x658 - 0x648)
// BlueprintGeneratedClass AU_TrainingManual.AU_TrainingManual_C
class UAU_TrainingManual_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       AbilityDamageOutputModifier;                       // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_TrainingManual_C* GetDefaultObj();

	void ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, class UGA_Melee_Quick_C* K2Node_DynamicCast_AsGA_Melee_Quick, bool K2Node_DynamicCast_bSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, class UGA_Turret_Weapon_C* K2Node_DynamicCast_AsGA_Turret_Weapon, bool K2Node_DynamicCast_bSuccess_1, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_2, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess_3, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSetRef_Value_ImplicitCast);
	void EventActivateUpgrade(float Value);
	void ExecuteUbergraph_AU_TrainingManual(int32 EntryPoint, float K2Node_Event_Value, double K2Node_VariableSet_AbilityDamageOutputModifier_ImplicitCast);
};

}


