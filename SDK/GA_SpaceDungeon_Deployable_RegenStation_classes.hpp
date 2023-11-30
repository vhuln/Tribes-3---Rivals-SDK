#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x880 - 0x7D0)
// BlueprintGeneratedClass GA_SpaceDungeon_Deployable_RegenStation.GA_SpaceDungeon_Deployable_RegenStation_C
class UGA_SpaceDungeon_Deployable_RegenStation_C : public UGA_Deployable_Buff_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x7D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         LingeringHeal;                                     // 0x7D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeploymentHeal;                                    // 0x7D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WardUpgrade;                                       // 0x7DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_396B[0x5];                                     // Fixing Size After Last Property  
	double                                       WardSize;                                          // 0x7E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ResupplyUpgrade;                                   // 0x7E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396D[0x3];                                     // Fixing Size After Last Property  
	int32                                        ResupplySize;                                      // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ReviveUpgrade;                                     // 0x7F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3971[0x7];                                     // Fixing Size After Last Property  
	class ABP_Deployed_Buff_Station_C*           Station;                                           // 0x7F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         UsedRevived;                                       // 0x800(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3975[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    StationLocation;                                   // 0x808(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThrowTime_0;                                       // 0x820(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                Async_Task_0;                                      // 0x828(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RangeModMultiplier;                                // 0x830(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ScalableFloat       CachedCooldown;                                    // 0x838(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       DurationModMultiplier;                             // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DamageMitigationMod;                               // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              MKII_InRangeCue;                                   // 0x870(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MKII_BonusEffect;                                  // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_SpaceDungeon_Deployable_RegenStation_C* GetDefaultObj();

	float GetAbilityRange(double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void CalcAbilityPropertyModifiers(double CooldownMod, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_FMax_ReturnValue, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_3, float CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2);
	void HasDeadTeammate(class ABP_ValChar_Master_C** Dead_Teammate, class AValPlayerController** Controller, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ATeamState* CallFunc_GetTeamStateFromObject_ReturnValue, TArray<class UObject*>& CallFunc_GetMembers_OutMembers, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Array_Get_Item, class AValPlayerState_Frontier* K2Node_DynamicCast_AsVal_Player_State_Frontier, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetViewTarget_ReturnValue, class APawn* CallFunc_GetCachedPawn_ReturnValue, int32 CallFunc_GetLivesRemaining_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_2, enum class EFrontierState CallFunc_GetFrontierState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SpawnDeployable(bool UsePreviewTransform, const struct CoreUObject_Transform& PreviewTransform, class AActor** Spawned, class AActor* CallFunc_SpawnDeployable_Spawned, bool CallFunc_Greater_DoubleDouble_ReturnValue, class ABP_Deployed_Buff_Station_C* K2Node_DynamicCast_AsBP_Deployed_Buff_Station, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void BeginPlay();
	void ExecuteUbergraph_GA_SpaceDungeon_Deployable_RegenStation(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item);
};

}


