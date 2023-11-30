#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x648 - 0x600)
// BlueprintGeneratedClass GA_Jetpack.GA_Jetpack_C
class UGA_Jetpack_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValCharacterMovementComponent*        ValCharMoveComp;                                   // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  ValCharacter;                                      // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle GE_Jetpacking;                                     // 0x618(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Jetpacking_Class;                               // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       AirControlModifier;                                // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockWeaponUse;                                    // 0x630(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316B[0x3];                                     // Fixing Size After Last Property  
	float                                        InitialThrustMagnitude;                            // 0x634(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastJetpackAttemptTimestamp;                       // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DoubleClickJetpackTime;                            // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Jetpack_C* GetDefaultObj();

	void Add_Initial_Thrust();
	void OnRep_AirControlModifier();
	void On_Zero_Energy(float CallFunc_GetEnergy_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerControlled_ReturnValue, float CallFunc_GetEnergy_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsSkydiveLanding_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void OnSync_1FB5C07D40A552370FA9F690E8F55472();
	void OnRelease_5F8E9ED8405F1F5FDA94C9A70B45C082(float TimeHeld);
	void EventReceived_91C6817245E965BC9A526694900BB7A1(const struct GameplayAbilities_GameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void OnEnergyEmpty();
	void SetBlockWeaponUse(bool ShouldBlock);
	void ExecuteUbergraph_GA_Jetpack(int32 EntryPoint, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayEventData& K2Node_CustomEvent_Payload, const struct GameplayAbilities_GameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float Temp_real_Variable, float K2Node_CustomEvent_TimeHeld, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsInputPressed_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_GetEnergy_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>& CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, double CallFunc_Divide_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_ShouldBlock, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Array_Index_Variable, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_Array_Get_Item, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, bool CallFunc_IsBotControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetEnergy_NewEnergy_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_AirControl_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_AirControl_ImplicitCast_1);
};

}


