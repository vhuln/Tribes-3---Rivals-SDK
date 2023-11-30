#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_DefenderFSM_FleeState.BP_DefenderFSM_FleeState_C
class UBP_DefenderFSM_FleeState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderFSM_FleeState_C* GetDefaultObj();

	void OverwriteBehaviorTreeBP();
	void StartStateBP();
	void EndStateBP();
	void OverwriteTimeInStateVariables();
	void ExecuteUbergraph_BP_DefenderFSM_FleeState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1, float K2Node_VariableSet_TimeInStateVariance_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast_2, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2, double CallFunc_SelectFloat_B_ImplicitCast_1, float K2Node_VariableSet_MinTimeInState_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_2, float K2Node_VariableSet_MaxTimeInState_ImplicitCast);
};

}


