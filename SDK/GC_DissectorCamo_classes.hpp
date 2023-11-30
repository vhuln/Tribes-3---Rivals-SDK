#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x318 - 0x308)
// BlueprintGeneratedClass GC_DissectorCamo.GC_DissectorCamo_C
class AGC_DissectorCamo_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValCharacterAnimInstance*             AnimInst;                                          // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_DissectorCamo_C* GetDefaultObj();

	void PlayLoop(float CallFunc_Montage_Play_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue);
};

}


