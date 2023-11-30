#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x7F8 - 0x780)
// BlueprintGeneratedClass GA_Deployable_MotionSensor.GA_Deployable_MotionSensor_C
class UGA_Deployable_MotionSensor_C : public UGA_Deployable_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x780(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BaseSensorLifespan;                                // 0x788(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThrowTime;                                         // 0x78C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time_Between_Actions;                              // 0x790(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C90[0x4];                                     // Fixing Size After Last Property  
	class UAbilityTask_Repeat*                   Async_Task;                                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_MotionSensor_Deployed_C*           Sensor;                                            // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        SensorLifespanPerkModifier;                        // 0x7A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C99[0x4];                                     // Fixing Size After Last Property  
	double                                       RangeMod;                                          // 0x7B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                WaitTask;                                          // 0x7B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Base_Sensor_Range;                                 // 0x7C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ScalableFloat       CachedBaseCooldown;                                // 0x7C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       DurationMod;                                       // 0x7F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Deployable_MotionSensor_C* GetDefaultObj();

	void GetSensorRange(double* Range, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void CalcAbilityPropertyModifiers(double CooldownMod, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, float CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	void GetSensorLifespan(float* SensorLifespan, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_SensorLifespan_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void SpawnDeployable(bool UsePreviewTransform, const struct CoreUObject_Transform& PreviewTransform, class AActor** Spawned, double CallFunc_GetSensorRange_Range, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_GetSensorLifespan_SensorLifespan, float CallFunc_GetSensorLifespan_SensorLifespan_1, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetMuzzleFireLocation_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue, bool CallFunc_GetTeamFromObject_bHasATeam, int32 CallFunc_GetTeamFromObject_TeamId, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_MotionSensor_Deployed_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast);
	void OnFinish_C54AFBFA4AFADE121D7C04B191F586D9();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void BeginPlay();
	void ExecuteUbergraph_GA_Deployable_MotionSensor(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class AActor* CallFunc_SpawnDeployable_Spawned, bool CallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item);
};

}


