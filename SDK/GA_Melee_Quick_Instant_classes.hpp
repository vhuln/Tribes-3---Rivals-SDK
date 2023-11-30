#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x8B8 - 0x8B8)
// BlueprintGeneratedClass GA_Melee_Quick_Instant.GA_Melee_Quick_Instant_C
class UGA_Melee_Quick_Instant_C : public UGA_Gun_Master_Instant_C
{
public:

	static class UClass* StaticClass();
	static class UGA_Melee_Quick_Instant_C* GetDefaultObj();

	void ApplyMeleeDamage(const struct GameplayAbilities_GameplayEffectSpecHandle& SpecHandle, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct Engine_HitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue_1);
};

}


