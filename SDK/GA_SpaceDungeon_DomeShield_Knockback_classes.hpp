#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x820 - 0x780)
// BlueprintGeneratedClass GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C
class UGA_SpaceDungeon_DomeShield_Knockback_C : public UGA_Deployable_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ADomeShield_Deployable_Dungeon_C*      CachedDomeShield;                                  // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Grant_Damage_Reduction;                            // 0x798(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2657[0x7];                                     // Fixing Size After Last Property  
	double                                       ShieldHealth;                                      // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BaseScale;                                         // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DamagesEnemiesByDefault;                           // 0x7B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2660[0x7];                                     // Fixing Size After Last Property  
	double                                       BaseDamageDealtToEnemies;                          // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BoostAlliesSpeed;                                  // 0x7C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KnockbackUpgrade;                                  // 0x7C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2671[0x6];                                     // Fixing Size After Last Property  
	double                                       KnockbackForce;                                    // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ApplyShieldDamage;                                 // 0x7D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ApplyRegenShields;                                 // 0x7D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2673[0x6];                                     // Fixing Size After Last Property  
	double                                       ShieldRegenMagnitude;                              // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       ScaleModMultiplier;                                // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScaleDurationMultiplier;                           // 0x7E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ScalableFloat       CachedCooldown;                                    // 0x7F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       DamageDealtMod;                                    // 0x818(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SpaceDungeon_DomeShield_Knockback_C* GetDefaultObj();

	void Get_Enemy_Damage_Dealt(bool* ShouldDamageEnemies, bool* DamageIsPercent, double* DamageDealt, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetShieldScale(double* Scale, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void CalcAbilityPropertyModifiers(double CooldownMod, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, int32 Temp_int_Array_Index_Variable_3, float CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_3, int32 CallFunc_Array_Length_ReturnValue_3, float CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2);
	void Calc_Ability_Modifiers(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast);
	float GetAbilityDuration(double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void OnDomeShieldDurationFinished();
	void OnDomeShieldDestroyed(class AActor* DestroyedActor);
	void SpawnDeployable(bool UsePreviewTransform, const struct CoreUObject_Transform& PreviewTransform, class AActor** Spawned, bool CallFunc_Get_Enemy_Damage_Dealt_ShouldDamageEnemies, bool CallFunc_Get_Enemy_Damage_Dealt_DamageIsPercent, double CallFunc_Get_Enemy_Damage_Dealt_DamageDealt, float CallFunc_GetAbilityDuration_ReturnValue, double CallFunc_GetShieldScale_Scale, const struct CoreUObject_Transform& CallFunc_GetTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_BreakTransform_Location, const struct CoreUObject_Rotator& CallFunc_BreakTransform_Rotation, const struct CoreUObject_Vector& CallFunc_BreakTransform_Scale, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADomeShield_Deployable_Dungeon_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_HasAuthority_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void BeginPlay();
	void SetAbilityDuration(float Value);
	void ExecuteUbergraph_GA_SpaceDungeon_DomeShield_Knockback(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, float K2Node_Event_Value, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item, double K2Node_VariableSet_Duration_ImplicitCast);
};

}


