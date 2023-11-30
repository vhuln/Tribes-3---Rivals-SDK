#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x149 - 0x108)
// BlueprintGeneratedClass BP_DefenderMainFSM.BP_DefenderMainFSM_C
class UBP_DefenderMainFSM_C : public UValAIFSM
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct CoreUObject_Vector                    SpawnVolumeLocation;                               // 0x110(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TetherDistance;                                    // 0x128(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTethering;                                       // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEverTether;                                  // 0x131(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E7B[0x6];                                     // Fixing Size After Last Property  
	double                                       WallJumpDistance;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    TetherHandle;                                      // 0x140(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitingToTether;                                   // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DefenderMainFSM_C* GetDefaultObj();

	void GetCurrentThreat(class AActor** Threat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue);
	void HasAnyThreats(bool* HasThreats, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAnyThreats_ReturnValue);
	void AddTetherTransition(bool CallFunc_RemoveGameplayTag_ReturnValue);
	void CheckTargetDistance(class FName CallFunc_MakeLiteralName_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueAsFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void Clear_Wall_State();
	void ToggleWallState(const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue);
	void On_Vaulting_State_Changed(bool Active, bool CallFunc_RemoveGameplayTag_ReturnValue);
	void OnSpawnVolumePlayersEntered(bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue);
	void OnSpawnVolumeBotsShouldBeDestroyed(bool CallFunc_HasAnyThreats_HasThreats, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void CheckTether(class AValCharacter* CallFunc_GetCharacter_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_Threat, double CallFunc_Distance2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void GenerateActiveTransitionTags();
	void InitializeBP();
	void StartMachineBP();
	void StopMachineBP();
	void BotSpawnVolumeSet();
	void ExecuteUbergraph_BP_DefenderMainFSM(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class AValBotSpawnVolume* CallFunc_GetBotSpawnVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AValBotSpawnVolume* CallFunc_GetBotSpawnVolume_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, class AValCharacter* CallFunc_GetCharacter_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasFlag_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_HasFlag_ReturnValue_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AValCharacter* CallFunc_GetCharacter_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AValBotSpawnVolume* CallFunc_GetBotSpawnVolume_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, double K2Node_VariableSet_WallJumpDistance_ImplicitCast);
};

}


