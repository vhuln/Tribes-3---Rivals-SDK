#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_DefenderFSM_LatchedState.BP_DefenderFSM_LatchedState_C
class UBP_DefenderFSM_LatchedState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderFSM_LatchedState_C* GetDefaultObj();

	void StartStateBP();
	void EndStateBP();
	void ExecuteUbergraph_BP_DefenderFSM_LatchedState(int32 EntryPoint);
};

}


