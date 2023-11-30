#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// BlueprintGeneratedClass BP_DefenderScanFSM_AlertState.BP_DefenderScanFSM_AlertState_C
class UBP_DefenderScanFSM_AlertState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle ScannerGEHandle;                                   // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DefenderScanFSM_AlertState_C* GetDefaultObj();

	void StartStateBP();
	void EndStateBP();
	void ExecuteUbergraph_BP_DefenderScanFSM_AlertState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetCurrentThreat_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UValThreatComponent* CallFunc_GetThreatComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4);
};

}


