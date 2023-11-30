#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x659 - 0x600)
// BlueprintGeneratedClass GA_Gun_Aiming.GA_Gun_Aiming_C
class UGA_Gun_Aiming_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct GameplayAbilities_ActiveGameplayEffectHandle GE_Aiming;                                         // 0x608(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle GE_AimingRemoval;                                  // 0x610(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_Aiming_Class;                                   // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_AimingRemoval_Class;                            // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  OwningChar;                                        // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValAT_WaitAiming*                     OnePZoomTask;                                      // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValAT_WaitAiming*                     OnePZoomResetTask;                                 // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedHoldMode;                                    // 0x640(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2503[0x7];                                     // Fixing Size After Last Property  
	class UAbilityTask_WaitInputRelease*         WaitReleaseTask;                                   // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputPress*           WaitPressTask;                                     // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultIgnoreHoldMode;                             // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Gun_Aiming_C* GetDefaultObj();

	void OnZoomLevelChanged(bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void On_Third_Person(bool Value);
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void OnSettingsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAimingMode_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void BeginPlay(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess);
	void OnRelease_DDC8BF3A4B418242E6D80BA27A65F47D(float TimeHeld);
	void OnPress_1E6194474DB2BFC9CF5380B25C7550D3(float TimeWaited);
	void EventReceived_C08CC872411B8BA8F741ABA2DC3121AB(const struct GameplayAbilities_GameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void OnDied(float TimeToRespawn, class AValCharacter* Pawn);
	void ExecuteUbergraph_GA_Gun_Aiming(int32 EntryPoint, float K2Node_CustomEvent_TimeHeld, const struct GameplayAbilities_GameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_GameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_CustomEvent_TimeToRespawn, class AValCharacter* K2Node_CustomEvent_Pawn, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsPlayerControlled_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, int32 CallFunc_GetAbilityLevel_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue_1, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float Temp_real_Variable, float K2Node_CustomEvent_TimeWaited, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float Temp_real_Variable_1, float CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast, float CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast_1);
};

}


