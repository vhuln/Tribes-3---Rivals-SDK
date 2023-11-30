#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_DefenderFSM_FoundPlayerState.BP_DefenderFSM_FoundPlayerState_C
class UBP_DefenderFSM_FoundPlayerState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderFSM_FoundPlayerState_C* GetDefaultObj();

	void StartStateBP();
	void ExecuteUbergraph_BP_DefenderFSM_FoundPlayerState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TScriptInterface<class IBI_AI_C> K2Node_DynamicCast_AsBI_AI, bool K2Node_DynamicCast_bSuccess, class UValThreatComponent* CallFunc_GetThreatSystem_ThreatSystem, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, class UValBotData* CallFunc_GetBotConfigData_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCurrentThreat_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_CalculateBotReactionTimeForTarget_ReturnValue);
};

}


