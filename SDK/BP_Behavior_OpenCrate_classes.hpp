#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA8 - 0x90)
// BlueprintGeneratedClass BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C
class UBP_Behavior_OpenCrate_C : public UGameplayBehavior
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValCharacter*                         Bot;                                               // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValBaseCrate*                         Crate;                                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Behavior_OpenCrate_C* GetDefaultObj();

	void LootAllTheLoot(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnFinish_2C42823C4A183801E7CFCF8EEC6E25FB();
	void OnFinish_3BFA45BA4CD9F7848F430EA8066611FB();
	void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void OnCrateStateChanged(enum class ECrateState NewState);
	void ExecuteUbergraph_BP_Behavior_OpenCrate(int32 EntryPoint, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput_1, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue_1, class ACharacter* K2Node_Event_Avatar_1, class UGameplayBehaviorConfig* K2Node_Event_Config, class AActor* K2Node_Event_SmartObjectOwner, class AValBaseCrate* K2Node_DynamicCast_AsVal_Base_Crate, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IValInteractable> CallFunc_CanInteract_self_CastInput, bool CallFunc_CanInteract_ReturnValue, class ACharacter* K2Node_Event_Avatar, bool K2Node_Event_bWasInterrupted, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ECrateState K2Node_CustomEvent_NewState, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IValInteractable> CallFunc_Interact_self_CastInput, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IValInteractable> CallFunc_StartChanneledInteract_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IValInteractable> CallFunc_EndChanneledInteract_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IValInteractable> CallFunc_EndInteraction_self_CastInput);
};

}


