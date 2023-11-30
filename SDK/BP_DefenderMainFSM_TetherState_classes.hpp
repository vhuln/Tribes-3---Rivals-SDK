#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// BlueprintGeneratedClass BP_DefenderMainFSM_TetherState.BP_DefenderMainFSM_TetherState_C
class UBP_DefenderMainFSM_TetherState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle SpeedEffectHandle;                                 // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DefenderMainFSM_TetherState_C* GetDefaultObj();

	void StartStateBP();
	void EndStateBP();
	void InitializeStateBP();
	void ExecuteUbergraph_BP_DefenderMainFSM_TetherState(int32 EntryPoint);
};

}


