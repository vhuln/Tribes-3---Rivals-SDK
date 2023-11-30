#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_DefenderFSM_CombatState.BP_DefenderFSM_CombatState_C
class UBP_DefenderFSM_CombatState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_DefenderFSM_CombatState_C* GetDefaultObj();

	void CheckForStalk(class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasFlag_ReturnValue);
	void SetInitialBlackboardValues(bool Temp_bool_Variable, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue_1, bool CallFunc_HasFlag_ReturnValue, bool CallFunc_HasFlag_ReturnValue_1, int32 K2Node_Select_Default, class FName CallFunc_MakeLiteralName_ReturnValue, double CallFunc_RandomFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast);
	void OverwriteBehaviorTreeBP();
	void StartStateBP();
	void EndStateBP();
	void ExecuteUbergraph_BP_DefenderFSM_CombatState(int32 EntryPoint, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5);
};

}


