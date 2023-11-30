#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTT_MarkLastCoverTime.BTT_MarkLastCoverTime_C
class UBTT_MarkLastCoverTime_C : public UBTTask_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AIModule_BlackboardKeySelector        LastCoverTimeBlackboardKey;                        // 0xB0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)

	static class UClass* StaticClass();
	static class UBTT_MarkLastCoverTime_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_MarkLastCoverTime(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast);
};

}


