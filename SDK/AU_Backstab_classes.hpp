#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x660 - 0x648)
// BlueprintGeneratedClass AU_Backstab.AU_Backstab_C
class UAU_Backstab_C : public UValAbilityUpgrade
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x648(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DamageBonus;                                       // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedChar;                                        // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAU_Backstab_C* GetDefaultObj();

	void ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, const struct Engine_HitResult& CallFunc_EffectContextGetHitResult_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, class UGA_Melee_Quick_C* K2Node_DynamicCast_AsGA_Melee_Quick, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_GetActorForwardVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, float K2Node_VariableGet_OutPercentModifier_ImplicitCast, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast);
	void EventActivateUpgrade(float Value);
	void ExecuteUbergraph_AU_Backstab(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_Value, double K2Node_VariableSet_DamageBonus_ImplicitCast);
};

}


