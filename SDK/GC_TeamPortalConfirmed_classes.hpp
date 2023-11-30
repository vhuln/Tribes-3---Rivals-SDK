#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x348 - 0x308)
// BlueprintGeneratedClass GC_TeamPortalConfirmed.GC_TeamPortalConfirmed_C
class AGC_TeamPortalConfirmed_C : public AGameplayCueNotify_Actor
{
public:
	class UNiagaraComponent*                     Niagara_End;                                       // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Niagara_Start;                                     // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ParticleSystem;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CachedActorTarget;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    StartLocation;                                     // 0x330(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_TeamPortalConfirmed_C* GetDefaultObj();

	void UpdateTeamColor(class AActor* Instigator, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	bool OnExecute(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Location, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, const struct CoreUObject_Vector& CallFunc_EffectContextGetOrigin_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_2);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess);
};

}


