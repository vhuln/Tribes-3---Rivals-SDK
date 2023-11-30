#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xC9 - 0x98)
// BlueprintGeneratedClass BTS_CancelMoveIfTargetFound.BTS_CancelMoveIfTargetFound_C
class UBTS_CancelMoveIfTargetFound_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AIModule_BlackboardKeySelector        TargetActor;                                       // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                         CheckForNotFound;                                  // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_CancelMoveIfTargetFound_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_CancelMoveIfTargetFound(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


