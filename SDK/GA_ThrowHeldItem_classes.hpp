#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x64C - 0x628)
// BlueprintGeneratedClass GA_ThrowHeldItem.GA_ThrowHeldItem_C
class UGA_ThrowHeldItem_C : public UValAbilitySwappable
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_WaitDelay*                WaitTask;                                          // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ThrowTime;                                         // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitConfirmCancel*        Async_Task;                                        // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        SFXGrabLoop;                                       // 0x648(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ThrowHeldItem_C* GetDefaultObj();

	void SFXBarrelThrow();
	void SFXStop();
	void SFXBarrelGrabStart();
	bool K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHoldingObject_ReturnValue, class AActor* CallFunc_GetBestInteraction_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool TryInputLocal(enum class EValAbilityInputID InputID, bool K2Node_SwitchEnum_CmpSuccess);
	void OnCancel_F79DDCA3449002A8C81B1783C9EF8AEE();
	void OnConfirm_F79DDCA3449002A8C81B1783C9EF8AEE();
	void OnFinish_48227935482617AFF46DAE82A02F7BCC();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void ExecuteUbergraph_GA_ThrowHeldItem(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitConfirmCancel* CallFunc_WaitConfirmCancel_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetBestInteraction_ReturnValue, bool CallFunc_TryGrabPhysicsObject_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_WaitDelay_Time_ImplicitCast);
};

}


