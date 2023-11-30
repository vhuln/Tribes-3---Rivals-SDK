#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x110 - 0x108)
// BlueprintGeneratedClass BP_DefenderFSM.BP_DefenderFSM_C
class UBP_DefenderFSM_C : public UValAIFSM
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderFSM_C* GetDefaultObj();

	void OnLatchFailed(const struct GameplayTags_GameplayTag& Tag, bool Added, bool CallFunc_RemoveGameplayTag_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveGameplayTag_ReturnValue_1);
	void On_Damaged(const struct Valhalla_DamageData& DamageData, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void OnStalkStateChanged(const struct GameplayTags_GameplayTag& Tag, bool Added, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_RemoveGameplayTag_ReturnValue_2, bool CallFunc_RemoveGameplayTag_ReturnValue_3, bool CallFunc_RemoveGameplayTag_ReturnValue_4);
	void ApplyHunterBotExceptions(class UValAIFSM_State* FoundPlayerState, bool CallFunc_IsValid_ReturnValue, class UValAIFSM_State* CallFunc_GetState_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void Test_All_Threats_in_Cover(bool* InCover, bool AllThreatsInCover, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ThreatComponent, bool CallFunc_IsValid_ReturnValue, const struct Valhalla_Threat& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsThreatInCover_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnCoverTagChanged(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_Test_All_Threats_in_Cover_InCover, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, class UValThreatComponent* CallFunc_GetThreatComponent_ThreatComponent, bool CallFunc_IsValid_ReturnValue);
	void OnThreatDamagedChanged(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_RemoveGameplayTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_OutThreat, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void GetThreatComponent(class UValThreatComponent** ThreatComponent, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetCurrentThreat(class AActor** OutThreat, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue);
	void OnThreatHeardChanged(class UObject* Threat, bool bNewIsPerceived, bool CallFunc_RemoveGameplayTag_ReturnValue, class AActor* CallFunc_GetCurrentThreat_OutThreat, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnThreatSeenChanged(class UObject* Threat, bool bNewIsPerceived, class AActor* CallFunc_GetCurrentThreat_OutThreat, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_OutThreat_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnThreatChanged(class UObject* PreviousTarget, class UObject* NewTarget, class AValCharacter* PrevTargetCharacter, class AValCharacter* NewTargetCharacter, class UValThreatComponent* ThreatComp, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveGameplayTag_ReturnValue_2);
	void OnFlashlightedChanged(bool bIsFlashlighted);
	void OnTagRemoved_7F8184834813D031BDFDC5B633CA7374(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_7F8184834813D031BDFDC5B633CA7374(const struct GameplayTags_GameplayTag& Tag);
	void OnTagRemoved_D061336F44F543CB14F57EA40D68AB1F(const struct GameplayTags_GameplayTag& Tag);
	void OnTagAdded_D061336F44F543CB14F57EA40D68AB1F(const struct GameplayTags_GameplayTag& Tag);
	void InitializeBP();
	void GenerateActiveTransitionTags();
	void StartMachineBP();
	void StopMachineBP();
	void ExecuteUbergraph_BP_DefenderFSM(int32 EntryPoint, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, const struct GameplayTags_GameplayTag& Temp_struct_Variable, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_3, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_HasFlag_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, class AActor* CallFunc_GetCurrentThreat_ReturnValue, bool CallFunc_IsThreatHeard_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsThreatSeen_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct GameplayTags_GameplayTag& Temp_struct_Variable_1, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9);
};

}


