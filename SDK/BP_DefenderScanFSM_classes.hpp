#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x110 - 0x108)
// BlueprintGeneratedClass BP_DefenderScanFSM.BP_DefenderScanFSM_C
class UBP_DefenderScanFSM_C : public UValAIFSM
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderScanFSM_C* GetDefaultObj();

	void StartAlertCooldownTimer(class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void ClearAlert(bool CallFunc_RemoveGameplayTag_ReturnValue);
	void GetCurrentThreat(class AActor** Threat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue);
	void On_Threat_Damage_Changed(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_HasTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void On_Threat_Seen(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_HasTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_Threat_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void On_Threat_Changed(class UObject* PreviousTarget, class UObject* NewTarget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue);
	void RemoveAlertState(bool CallFunc_RemoveGameplayTag_ReturnValue);
	void GenerateActiveTransitionTags();
	void InitializeBP();
	void StartMachineBP();
	void StopMachineBP();
	void ExecuteUbergraph_BP_DefenderScanFSM(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_GetCurrentThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsThreatSeen_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


