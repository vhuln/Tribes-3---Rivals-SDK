#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x110 - 0x108)
// BlueprintGeneratedClass BP_DefenderWallFSM.BP_DefenderWallFSM_C
class UBP_DefenderWallFSM_C : public UValAIFSM
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderWallFSM_C* GetDefaultObj();

	void GetCurrentThreat(class AActor** OutThreat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue);
	void OnThreatDamageChanged(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_RemoveGameplayTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_OutThreat, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnThreatHeardChanged(class UObject* Threat, bool bNewIsPerceived);
	void OnThreatSeenChanged(class UObject* Threat, bool bNewIsPerceived, class AActor* CallFunc_GetCurrentThreat_OutThreat, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1);
	void OnThreatChanged(class UObject* PreviousTarget, class UObject* NewTarget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue);
	void GenerateActiveTransitionTags();
	void InitializeBP();
	void StartMachineBP();
	void StopMachineBP();
	void ExecuteUbergraph_BP_DefenderWallFSM(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasFlag_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetCurrentThreat_ReturnValue, bool CallFunc_IsThreatHeard_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsThreatSeen_ReturnValue);
};

}


