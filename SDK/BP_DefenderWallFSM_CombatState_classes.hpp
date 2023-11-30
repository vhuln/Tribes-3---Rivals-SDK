#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_DefenderWallFSM_CombatState.BP_DefenderWallFSM_CombatState_C
class UBP_DefenderWallFSM_CombatState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderWallFSM_CombatState_C* GetDefaultObj();

	void StartStateBP();
	void EndStateBP();
	void ExecuteUbergraph_BP_DefenderWallFSM_CombatState(int32 EntryPoint);
};

}


