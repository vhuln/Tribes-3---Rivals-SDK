#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x660 - 0x600)
// BlueprintGeneratedClass GA_Ruby_Block.GA_Ruby_Block_C
class UGA_Ruby_Block_C : public UValGameplayAbility
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValCharacter*                         OwningChar;                                        // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle ParryActiveGE;                                     // 0x610(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle BlockActiveGE;                                     // 0x618(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitInputRelease*         WaitReleaseTask;                                   // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHoldToBlock;                                      // 0x628(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D54[0x7];                                     // Fixing Size After Last Property  
	class UAbilityTask_WaitInputPress*           WaitHoldTask;                                      // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        PrefireTime;                                       // 0x638(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D57[0x4];                                     // Fixing Size After Last Property  
	class UAbilityTask_WaitDelay*                PrefireTimeTask;                                   // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle BlockingActiveGE;                                  // 0x648(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bApplyParry;                                       // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D61[0x7];                                     // Fixing Size After Last Property  
	double                                       ParryTime;                                         // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Ruby_Block_C* GetDefaultObj();

	void OnRelease_A2C5861E4C2D0809AD93EFA9BC3C1128(float TimeHeld);
	void OnPress_6EE1063C4D9AF16F13CD249D50051562(float TimeWaited);
	void OnFinish_47A9CC0B42A624FC01248EA107AE8812();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void OnDied(float TimeToRespawn, class AValCharacter* Pawn);
	void ExecuteUbergraph_GA_Ruby_Block(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_TimeWaited, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_real_Variable, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, float K2Node_CustomEvent_TimeToRespawn, class AValCharacter* K2Node_CustomEvent_Pawn, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, float Temp_real_Variable_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue_1, float K2Node_CustomEvent_TimeHeld, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, double CallFunc_SelectFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_9, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_2, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_SetDuration_Duration_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_VariableSet_PrefireTime_ImplicitCast);
};

}


