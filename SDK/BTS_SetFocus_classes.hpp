#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5A (0xF2 - 0x98)
// BlueprintGeneratedClass BTS_SetFocus.BTS_SetFocus_C
class UBTS_SetFocus_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AIModule_BlackboardKeySelector        ActorToFocus;                                      // 0xA0(0x28)(Edit, BlueprintVisible)
	struct AIModule_BlackboardKeySelector        CanSeeActor;                                       // 0xC8(0x28)(Edit, BlueprintVisible)
	bool                                         FocusOnlyWhileActive;                              // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActorSeen;                                         // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_SetFocus_C* GetDefaultObj();

	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTS_SetFocus(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, bool CallFunc_GetBlackboardValueAsBool_ReturnValue, class AActor* CallFunc_GetFocusActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_BooleanOR_ReturnValue, class AActor* CallFunc_GetFocusActor_ReturnValue_1, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetFocusActor_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_1, bool CallFunc_GetBlackboardValueAsBool_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1);
};

}


