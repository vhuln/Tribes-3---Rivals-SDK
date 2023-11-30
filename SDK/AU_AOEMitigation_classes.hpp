#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x658 - 0x648)
// BlueprintGeneratedClass AU_AOEMitigation.AU_AOEMitigation_C
class UAU_AOEMitigation_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Mitigation;                                        // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_AOEMitigation_C* GetDefaultObj();

	void ApplyDamageResistanceModifier(float& OutPercentModifier, float& OutFlatModifier, float& OutShieldModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, class UGA_MimicChest_C* K2Node_DynamicCast_AsGA_Mimic_Chest, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess_1, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, class UGA_Grenade_New_C* K2Node_DynamicCast_AsGA_Grenade_New, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void EventActivateUpgrade(float Value);
	void ExecuteUbergraph_AU_AOEMitigation(int32 EntryPoint, float K2Node_Event_Value, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


