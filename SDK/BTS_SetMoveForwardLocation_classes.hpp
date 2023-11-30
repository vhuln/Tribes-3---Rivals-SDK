#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xC8 - 0x98)
// BlueprintGeneratedClass BTS_SetMoveForwardLocation.BTS_SetMoveForwardLocation_C
class UBTS_SetMoveForwardLocation_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AIModule_BlackboardKeySelector        GoalLocation;                                      // 0xA0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTS_SetMoveForwardLocation_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_SetMoveForwardLocation(int32 EntryPoint, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorForwardVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue);
};

}


