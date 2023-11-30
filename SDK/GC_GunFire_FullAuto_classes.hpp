#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x339 - 0x308)
// BlueprintGeneratedClass GC_GunFire_FullAuto.GC_GunFire_FullAuto_C
class AGC_GunFire_FullAuto_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             CachedActiveFXSystems;                             // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class AValCharacter*                         CachedCharacter;                                   // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UGA_Gun_Master_C*                      CachedGunMaster;                                   // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    CachedBuildupTimer;                                // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedStartedFiring;                               // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_GunFire_FullAuto_C* GetDefaultObj();

	void Local_Player_Is_Enemy_with_Cached_Character(bool* IsEnemy, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsEnemyWith_ReturnValue);
	void PlayWhileFireFX(bool LocalUpdateFXDistance, class UAkSwitchValue* LocalAkSwitchValue, enum class ECameraPerspective LocalCameraPerspective, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ECameraPerspective Temp_byte_Variable, enum class ECameraPerspective Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, enum class ECameraPerspective Temp_byte_Variable_2, class UValDeviceAudioVisual* CallFunc_GetAudioVisual_ReturnValue, enum class ECameraPerspective K2Node_Select_Default, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh3P_ReturnValue, class USceneComponent* K2Node_Select_Default_1, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, class USceneComponent* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_1, class UValDeviceAudioVisual* CallFunc_GetAudioVisual_ReturnValue_1, const struct Valhalla_ActionFX& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PlayStopSfx(class AActor* SourceActor, class UObject* SourceObject, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Location, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetRemainingBuildUp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


