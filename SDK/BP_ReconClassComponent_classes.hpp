#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xA4 - 0xA0)
// BlueprintGeneratedClass BP_ReconClassComponent.BP_ReconClassComponent_C
class UBP_ReconClassComponent_C : public UValReconClassComponent
{
public:
	float                                        DamageMod;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ReconClassComponent_C* GetDefaultObj();

	void ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class AValCharacter* LocalChar, const struct Engine_HitResult& CallFunc_EffectContextGetHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsActorBehindOtherActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValCharacter* CallFunc_GetValCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	void CalcPropertyModifiers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<float>& CallFunc_GetPassivePropertyModValues_OutValues, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_DamageMod_ImplicitCast);
};

}


