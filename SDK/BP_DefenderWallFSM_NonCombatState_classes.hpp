#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_DefenderWallFSM_NonCombatState.BP_DefenderWallFSM_NonCombatState_C
class UBP_DefenderWallFSM_NonCombatState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderWallFSM_NonCombatState_C* GetDefaultObj();

	void OverwriteBehaviorTreeBP();
	void StartStateBP();
	void ExecuteUbergraph_BP_DefenderWallFSM_NonCombatState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


