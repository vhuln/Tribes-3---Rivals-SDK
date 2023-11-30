#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xC9 - 0xA0)
// BlueprintGeneratedClass BTD_IsEnemyInIdealRange.BTD_IsEnemyInIdealRange_C
class UBTD_IsEnemyInIdealRange_C : public UBTDecorator_BlueprintBase
{
public:
	struct AIModule_BlackboardKeySelector        IdealRangeKey;                                     // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	enum class E_CombatRangeQueryResult          RangeToCheckFor;                                   // 0xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_IsEnemyInIdealRange_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


