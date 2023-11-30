#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD3 (0x7D0 - 0x6FD)
// BlueprintGeneratedClass GA_SpaceDungeon_ProximityMine.GA_SpaceDungeon_ProximityMine_C
class UGA_SpaceDungeon_ProximityMine_C : public UGA_Grenade_New_C
{
public:
	uint8                                        Pad_39EC[0x3];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       ExplosionRange;                                    // 0x708(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ProximityRange;                                    // 0x710(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxMines;                                          // 0x718(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39EF[0x4];                                     // Fixing Size After Last Property  
	TSet<class ABP_Proximity_Mine_C*>            ActiveDeployables;                                 // 0x720(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         DisableUpgrade;                                    // 0x770(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F1[0x7];                                     // Fixing Size After Last Property  
	double                                       CachedLastActivationTime;                          // 0x778(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Disable_Delay;                                     // 0x780(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DisableCooldownRefund;                             // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AntiHealUpgrade;                                   // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SlowUpgrade;                                       // 0x791(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SilenceUpgrade;                                    // 0x792(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RevealUpgrade;                                     // 0x793(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F5[0x4];                                     // Fixing Size After Last Property  
	double                                       CooldownMod;                                       // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ScalableFloat       CachedBaseCooldown;                                // 0x7A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       AOEMod;                                            // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SpaceDungeon_ProximityMine_C* GetDefaultObj();

	void CalcAbilityPropertyModifiers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, int32 Temp_int_Loop_Counter_Variable_2, float CallFunc_Array_Get_Item_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast);
	float GetAbilityCastTime();
	float GetAbilityCooldownModifier();
	float GetAbilityDeployTime();
	float GetAbilityDuration();
	TArray<TSubclassOf<class UGameplayEffect>> GetAbilityEffectsToApply();
	float GetAbilityRange();
	void On_Deployable_Spawned(class AActor* Actor, class ABP_Proximity_Mine_C* K2Node_DynamicCast_AsBP_Proximity_Mine, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast);
	void ClearOldMines(const TArray<class ABP_Proximity_Mine_C*>& MinesToClear, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class ABP_Proximity_Mine_C*>& CallFunc_Set_ToArray_Result, class ABP_Proximity_Mine_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue);
	void OnSpawnedGrenade(class ABP_Projectile_Grenade_Master_C* SpawnedGrenade, class ABP_Projectile_ProximityMine_C* K2Node_DynamicCast_AsBP_Projectile_Proximity_Mine, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast);
	void K2_ActivateAbility();
	void SetAbilityRange(float Value);
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void SetAbilityCooldownModifier(float Value);
	void ValActivationFailed(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer& FailureReason);
	void ResetCooldown();
	void BeginPlay();
	void ExecuteUbergraph_GA_SpaceDungeon_ProximityMine(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Event_Value_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, TArray<class ABP_Proximity_Mine_C*>& CallFunc_Set_ToArray_Result, float K2Node_Event_Value, class ABP_Proximity_Mine_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& K2Node_Event_Handle, const struct GameplayTags_GameplayTagContainer& K2Node_Event_FailureReason, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_GetCooldownDuration_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item_1, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float K2Node_SetFieldsInStruct_Value_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_ApplyCooldownWithFlatAmount_Amount_ImplicitCast);
};

}


