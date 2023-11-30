#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass BTD_ShouldTakeCover.BTD_ShouldTakeCover_C
class UBTD_ShouldTakeCover_C : public UBTDecorator_BlueprintBase
{
public:
	struct AIModule_BlackboardKeySelector        LastCoverTimeBlackboardKey;                        // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly)
	double                                       CoverUsageCooldownTime;                            // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_ShouldTakeCover_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AValCharacter* Bot, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_HasFlag_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UValBotData* CallFunc_GetBotConfigData_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFlag_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


