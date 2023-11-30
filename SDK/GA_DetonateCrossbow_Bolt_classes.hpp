#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x658 - 0x600)
// BlueprintGeneratedClass GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C
class UGA_DetonateCrossbow_Bolt_C : public UValGameplayAbility
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
	uint8                                        Pad_2002[0x7];                                     // Fixing Size After Last Property  
	class UAbilityTask_WaitInputRelease*         WaitReleaseTask;                                   // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputPress*           WaitPressTask;                                     // 0x650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_DetonateCrossbow_Bolt_C* GetDefaultObj();

	void GA_DetonateCrossbow_Bolt_AutoGenFunc(const struct GameplayAbilities_ActiveGameplayEffect& Effect, bool* bMatches);
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, bool CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance, class UGameplayAbility* CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue, int32 CallFunc_K2_GetTagCount_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGA_Jetpack_C* K2Node_DynamicCast_AsGA_Jetpack, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
	void OnSettingsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAimingMode_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void BeginPlay(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DetonateCrossbow_Bolt(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, class UGA_Gun_Bow_Exotic_Detonate_Instant_C* K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant, bool K2Node_DynamicCast_bSuccess);
};

}


