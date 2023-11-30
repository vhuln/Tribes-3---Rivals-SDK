#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// BlueprintGeneratedClass BP_Defender_MainFSM_SpawnIntroState.BP_Defender_MainFSM_SpawnIntroState_C
class UBP_Defender_MainFSM_SpawnIntroState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DefaultStateTime;                                  // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Defender_MainFSM_SpawnIntroState_C* GetDefaultObj();

	void SetStateTimer(class AValCharacter* CallFunc_GetCharacter_ReturnValue, class ABP_CharPlayer_Defender_C* K2Node_DynamicCast_AsBP_Char_Player_Defender, bool K2Node_DynamicCast_bSuccess, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasSpawnAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast_1);
	void StartStateBP();
	void ExecuteUbergraph_BP_Defender_MainFSM_SpawnIntroState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, class AValAIController* K2Node_DynamicCast_AsVal_AIController, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasFlag_ReturnValue);
};

}


