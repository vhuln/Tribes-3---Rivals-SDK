#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x660 - 0x648)
// BlueprintGeneratedClass AU_SelfDamageMitigation.AU_SelfDamageMitigation_C
class UAU_SelfDamageMitigation_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Mitigation;                                        // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CachedCharacter;                                   // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_SelfDamageMitigation_C* GetDefaultObj();

	void ApplyDamageResistanceModifier(float& OutPercentModifier, float& OutFlatModifier, float& OutShieldModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, class UValGameplayAbility* K2Node_DynamicCast_AsVal_Gameplay_Ability, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void EventActivateUpgrade(float Value);
	void ExecuteUbergraph_AU_SelfDamageMitigation(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, float K2Node_Event_Value, double K2Node_VariableSet_Mitigation_ImplicitCast);
};

}


