#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x348 - 0x338)
// BlueprintGeneratedClass GC_BotHitReaction_Latched.GC_BotHitReaction_Latched_C
class AGC_BotHitReaction_Latched_C : public AGC_BotHitReaction_C
{
public:
	class UNiagaraComponent*                     ReactionPS_0;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root_Component_0;                                  // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_BotHitReaction_Latched_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CharPlayer_Defender_Dissector_C* K2Node_DynamicCast_AsBP_Char_Player_Defender_Dissector, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAlive_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
};

}


