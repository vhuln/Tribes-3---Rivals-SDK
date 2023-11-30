#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x8D0 - 0x8B8)
// BlueprintGeneratedClass GA_SD_EMP_Rifle_Instant.GA_SD_EMP_Rifle_Instant_C
class UGA_SD_EMP_Rifle_Instant_C : public UGA_Gun_Master_Instant_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x8B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       BaseStunDuration;                                  // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ChargeStunMod;                                     // 0x8C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SD_EMP_Rifle_Instant_C* GetDefaultObj();

	void ApplyBotStun(const struct GameplayAbilities_GameplayAbilityTargetDataHandle& InputTargetData, class UValAbilitySystemComponent* LocalTargetASC, class AValCharacter* LocalOwningCharacter, bool Temp_bool_Variable, double Temp_real_Variable, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct Engine_HitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, bool CallFunc_TargetDataHasHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCybrid_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, double K2Node_Select_Default, double CallFunc_SafeDivide_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, double CallFunc_GetTimeOfLastShot_LastShotTime, double CallFunc_FMax_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetTimeRange_MinTime, float CallFunc_GetTimeRange_MaxTime, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsTargetDataValidForSpawn_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double K2Node_Select_Option_1_ImplicitCast, double CallFunc_FMax_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetDuration_Duration_ImplicitCast, float CallFunc_SetDuration_Duration_ImplicitCast_1);
	void HandleTargetData(const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_SD_EMP_Rifle_Instant(int32 EntryPoint, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& K2Node_Event_TargetData);
};

}


