#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xAC - 0xA0)
// BlueprintGeneratedClass BTD_HasBotDataFlag.BTD_HasBotDataFlag_C
class UBTD_HasBotDataFlag_C : public UBTDecorator_BlueprintBase
{
public:
	bool                                         ExactMatch;                                        // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E63[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              FlagToLookFor;                                     // 0xA4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_HasBotDataFlag_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFlag_ReturnValue);
};

}


