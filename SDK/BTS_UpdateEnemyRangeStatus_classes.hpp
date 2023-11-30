#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x138 - 0x98)
// BlueprintGeneratedClass BTS_UpdateEnemyRangeStatus.BTS_UpdateEnemyRangeStatus_C
class UBTS_UpdateEnemyRangeStatus_C : public UBTService_BlueprintBase
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct AIModule_BlackboardKeySelector        RangeStatusKey;                                    // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	double                                       IdealRangeMin;                                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       IdealRangeMax;                                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RangeHysteresis;                                   // 0xD8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct AIModule_BlackboardKeySelector        TargetActorKey;                                    // 0xE0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	struct AIModule_BlackboardKeySelector        LastRangeStatusCheckTimeKey;                       // 0x108(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	double                                       RangeHysteresisTime;                               // 0x130(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_UpdateEnemyRangeStatus_C* GetDefaultObj();

	void SetIdealRanges(class AActor* Actor, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, float CallFunc_GetIdealCombatRangeMin_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetIdealCombatRangeMax_ReturnValue, double K2Node_VariableSet_IdealRangeMin_ImplicitCast, double K2Node_VariableSet_IdealRangeMax_ImplicitCast);
	void DoUpdate(class AActor* Source, class AActor* Target, bool ApplyHysteresis, enum class E_CombatRangeQueryResult OldRange, double Distance, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_GetGameTimeInSeconds_ReturnValue_2, double CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_Less_DoubleDouble_ReturnValue_3, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_1, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_UpdateEnemyRangeStatus(int32 EntryPoint, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue_1);
};

}


