#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xF8 - 0xA0)
// BlueprintGeneratedClass BTD_CheckCachedMovementLocation.BTD_CheckCachedMovementLocation_C
class UBTD_CheckCachedMovementLocation_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                         CheckForBehindCover;                               // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A9[0x7];                                      // Fixing Size After Last Property  
	struct AIModule_BlackboardKeySelector        TargetBlackboardKey;                               // 0xA8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct AIModule_BlackboardKeySelector        CachedLocationBlackboardKey;                       // 0xD0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)

	static class UClass* StaticClass();
	static class UBTD_CheckCachedMovementLocation_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, const struct CoreUObject_Vector& CachedLocation, class AValCharacter* Target, class AValCharacter* Bot, class FName CallFunc_MakeLiteralName_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct Engine_HitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast);
};

}


