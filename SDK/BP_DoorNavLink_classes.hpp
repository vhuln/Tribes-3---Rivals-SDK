#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x380 - 0x368)
// BlueprintGeneratedClass BP_DoorNavLink.BP_DoorNavLink_C
class ABP_DoorNavLink_C : public AValNavLinkProxy
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         MoveOffLedge;                                      // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_433[0x7];                                      // Fixing Size After Last Property  
	class ABP_WidgetInteraction_C*               InteractWidget;                                    // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DoorNavLink_C* GetDefaultObj();

	float GetDoorChannelTime(class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetTotalChannelTime_Total_Channel_Time, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	void DoorStatusChanged(bool DoorOpen);
	void ReceiveSmartLinkReached(class AActor* Agent, struct CoreUObject_Vector& Destination);
	void OnInteractionActorSet();
	void EventCurrentActorDied();
	void OpenDoor();
	void ExecuteUbergraph_BP_DoorNavLink(int32 EntryPoint, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Agent, const struct CoreUObject_Vector& K2Node_Event_Destination, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IValInteractable> CallFunc_Interact_self_CastInput, class AController* CallFunc_GetController_ReturnValue, bool K2Node_CustomEvent_DoorOpen, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door_3, bool K2Node_DynamicCast_bSuccess_3);
};

}


