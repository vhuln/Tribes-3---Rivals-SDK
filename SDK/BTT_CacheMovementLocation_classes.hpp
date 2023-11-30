#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x108 - 0xA8)
// BlueprintGeneratedClass BTT_CacheMovementLocation.BTT_CacheMovementLocation_C
class UBTT_CacheMovementLocation_C : public UBTTask_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bSave;                                             // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A[0x7];                                       // Fixing Size After Last Property  
	struct AIModule_BlackboardKeySelector        CachedMovementLocationBlackboardKey;               // 0xB8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct AIModule_BlackboardKeySelector        MovementLocationBlackboardKey;                     // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)

	static class UClass* StaticClass();
	static class UBTT_CacheMovementLocation_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_CacheMovementLocation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1);
};

}


