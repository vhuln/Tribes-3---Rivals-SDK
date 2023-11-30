#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x108 - 0xF8)
// BlueprintGeneratedClass BP_DefenderMainFSM_WallState.BP_DefenderMainFSM_WallState_C
class UBP_DefenderMainFSM_WallState_C : public UValAIFSM_State
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle MovementGE;                                        // 0x100(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DefenderMainFSM_WallState_C* GetDefaultObj();

	void EnableRotation(class AValCharacter* CallFunc_GetCharacter_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, class AValAIController* K2Node_DynamicCast_AsVal_AIController, bool K2Node_DynamicCast_bSuccess);
	void StartStateBP();
	void EndStateBP();
	void ExecuteUbergraph_BP_DefenderMainFSM_WallState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_CalculateWallJumpMaxLength_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


