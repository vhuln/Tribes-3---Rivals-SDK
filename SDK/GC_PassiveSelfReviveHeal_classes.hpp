#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// BlueprintGeneratedClass GC_PassiveSelfReviveHeal.GC_PassiveSelfReviveHeal_C
class AGC_PassiveSelfReviveHeal_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_PassiveSelfReviveHeal_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, const struct Engine_SingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_OnRemove_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue);
};

}


