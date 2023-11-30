#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x2ED4 - 0x2DE8)
// BlueprintGeneratedClass BP_CharPlayer_Defender.BP_CharPlayer_Defender_C
class ABP_CharPlayer_Defender_C : public ABP_CharPlayer_Test_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2DE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Bot_LowHealth_A;                                // 0x2DF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValAIFSMComponent*                    AIFSMComp;                                         // 0x2DF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValAISightComponent*                  AISightComp;                                       // 0x2E00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                MainFSMStateName;                                  // 0x2E08(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                SubFSMStateName;                                   // 0x2E18(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UNiagaraComponent*                     AlertedPS;                                         // 0x2E28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     InvestigatePS;                                     // 0x2E30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class FString>             DebugTextMap;                                      // 0x2E38(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDrawFrustumComponent*                 DebugFrustumComp;                                  // 0x2E88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PerceptionDebugActor_C*            DebugPerceptionActor;                              // 0x2E90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValBotWaveConfig*                     AlarmConfig;                                       // 0x2E98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AlarmTriggered;                                    // 0x2EA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInSpawnIntro;                                    // 0x2EA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FBB[0x6];                                     // Fixing Size After Last Property  
	double                                       SpawnIntroShowSkeletonTiming;                      // 0x2EA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    SpawnIntroShowSkeletonTimerHandle;                 // 0x2EB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlaySpawnAnimation;                               // 0x2EB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPlaySpawnVFX;                                     // 0x2EB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FC5[0x6];                                     // Fixing Size After Last Property  
	double                                       SpawnIntroDuration;                                // 0x2EC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValAT_GameplayTagAddedRemoved*        ListenForCharmTask;                                // 0x2EC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        BotDamageSFX;                                      // 0x2ED0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharPlayer_Defender_C* GetDefaultObj();

	void HandleTeamChangeForAI(int32 OldTeam, int32 NewTeam, bool bRestartThreatSystem, bool Temp_bool_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool CallFunc_IsCybridTeamID_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_IsCybridTeamID_ReturnValue_1, class FName Temp_name_Variable_3, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, class FName K2Node_Select_Default_1, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnAIFSM_FindCover_Start();
	void OnAIFSM_FindCover_End();
	void DestroyCompsOnServer(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnAIFSM_AmbushState_End();
	void OnAIFSM_AmbushState_Start();
	void PlaySpawnVFX(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void PlaySpawnAnimation(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasSpawnAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_PlayBotSpawnAnimation_duration_ImplicitCast);
	void OnAIFSM_SpawnIntroState_ShowSkeleton(bool CallFunc_K2_IsValidTimerHandle_ReturnValue);
	void OnAIFSM_SpawnIntroState_Update(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ConditionalTriggerAlarm(class UObject* PreviousTarget, class UObject* NewTarget, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SpawnAtNearestBotSpawner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void OnAIFSM_SpawnIntroState_End();
	void OnAIFSM_SpawnIntroState_Start();
	void StartAIFSM(bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFlag_ReturnValue, bool CallFunc_HasFlag_ReturnValue_1);
	void ToggleDebugDrawPerception(bool bOn, const struct CoreUObject_Transform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetMaxRange_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_K2_AttachToActor_ReturnValue, class ABP_PerceptionDebugActor_C* CallFunc_FinishSpawningActor_ReturnValue, double CallFunc_InitializePerception_VisionRange_ImplicitCast);
	void OnAIFSM_NonCombatState_End();
	void OnAIFSM_NonCombatState_Start(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void DeactivateCombatEmissive();
	void ActivateCombatEmissive(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnStateChanged(class UValAIFSM* FSM);
	void OnAIFSM_CombatState_End(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnAIFSM_CombatState_Start(bool CallFunc_IsAlive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnAIFSM_FoundPlayerState_End();
	void OnAIFSM_FoundPlayerState_Start(bool CallFunc_IsAlive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnAIFSM_WhatWasThatState_End(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnAIFSM_WhatWasThatState_Start(bool CallFunc_IsAlive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UserConstructionScript(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21);
	void BPOnStartDirectLight(class AActor* Instigator);
	void BPOnStopDirectLight(class AActor* Instigator);
	void ReceiveTick(float DeltaSeconds);
	void ReceivePossessed(class AController* NewController);
	void PerceptionSightChanged(float OldValue, float NewValue);
	void PerceptionHearingChanged(float OldValue, float NewValue);
	void PerceptionPeripheralVisionChanged(float OldValue, float NewValue);
	void PerceptionLoseSightDistanceChanged(float OldValue, float NewValue);
	void ReceiveBeginPlay();
	void EventDied();
	void UpdateHealthPercent(float Value);
	void HandleMeshChanged();
	void ToggleDebugBotPerception(bool bOn);
	void OnBotConfigDataSet();
	void OnTeamChanged(int32 OldTeamId, int32 NewTeamId);
	void ExecuteUbergraph_BP_CharPlayer_Defender(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AController* K2Node_Event_NewController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_CustomEvent_OldValue_3, float K2Node_CustomEvent_NewValue_3, float K2Node_CustomEvent_OldValue_2, float K2Node_CustomEvent_NewValue_2, float K2Node_CustomEvent_OldValue_1, float K2Node_CustomEvent_NewValue_1, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, bool CallFunc_UpdateSightRadius_ReturnValue, bool CallFunc_UpdateLoseSightRadius_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_UpdatePeripheralVisionAngle_ReturnValue, float CallFunc_GetHealthPercent_ReturnValue, class AActor* K2Node_Event_Instigator, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_GetHealthPercent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_Value, bool K2Node_Event_bOn, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_2, class AAIController* CallFunc_GetAIController_ReturnValue_1, class AActor* K2Node_Event_Instigator_1, class ABP_AIController_Player_C* K2Node_DynamicCast_AsBP_AIController_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsActive_ReturnValue, int32 K2Node_Event_OldTeamId, int32 K2Node_Event_NewTeamId, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_HasFlag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsActive_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class UValBotWaveConfig* CallFunc_GetAlarmSpawnConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UValAIFSMComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
};

}


