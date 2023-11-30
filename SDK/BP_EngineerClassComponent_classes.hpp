#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass BP_EngineerClassComponent.BP_EngineerClassComponent_C
class UBP_EngineerClassComponent_C : public UValEngineerClassComponent
{
public:
	float                                        Chance;                                            // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RegenAmount;                                       // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_EngineerClassComponent_C* GetDefaultObj();

	void ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class AValCharacter* LocalChar, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AValCharacter* CallFunc_GetValCharacter_ReturnValue);
	void CalcPropertyModifiers(const TArray<float>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<float>& CallFunc_GetPassivePropertyModValues_OutValues, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetPassivePropertyModValues_OutValues_1);
};

}


