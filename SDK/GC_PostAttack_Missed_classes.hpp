#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// BlueprintGeneratedClass GC_PostAttack_Missed.GC_PostAttack_Missed_C
class AGC_PostAttack_Missed_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_PostAttack_Missed_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValCharacterAnimInstance* CallFunc_GetBotAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


