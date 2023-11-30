#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA8 - 0x90)
// BlueprintGeneratedClass BP_Behavior_OpenDoor.BP_Behavior_OpenDoor_C
class UBP_Behavior_OpenDoor_C : public UGameplayBehavior
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValCharacter*                         Bot;                                               // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValDoor*                              Door;                                              // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Behavior_OpenDoor_C* GetDefaultObj();

	void K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner);
	void OnInteractEnd();
	void K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted);
	void ExecuteUbergraph_BP_Behavior_OpenDoor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACharacter* K2Node_Event_Avatar_1, class UGameplayBehaviorConfig* K2Node_Event_Config, class AActor* K2Node_Event_SmartObjectOwner, class AValDoor* K2Node_DynamicCast_AsVal_Door, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACharacter* K2Node_Event_Avatar, bool K2Node_Event_bWasInterrupted, TScriptInterface<class IValInteractable> CallFunc_CanInteract_self_CastInput, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


