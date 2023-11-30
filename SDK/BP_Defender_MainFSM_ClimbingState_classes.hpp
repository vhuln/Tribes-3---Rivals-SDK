#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x100 - 0xF8)
// BlueprintGeneratedClass BP_Defender_MainFSM_ClimbingState.BP_Defender_MainFSM_ClimbingState_C
class UBP_Defender_MainFSM_ClimbingState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Defender_MainFSM_ClimbingState_C* GetDefaultObj();

	void On_Vaulting_State_Changed(bool Active);
	void StartStateBP();
	void ExecuteUbergraph_BP_Defender_MainFSM_ClimbingState(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


