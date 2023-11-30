#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x3B8 - 0x308)
// BlueprintGeneratedClass GC_AmmoBoost.GC_AmmoBoost_C
class AGC_AmmoBoost_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedActive;                                      // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_129D[0x7];                                     // Fixing Size After Last Property  
	double                                       CachedTimer;                                       // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedDuration;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  CachedCharacter;                                   // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultShield;                                     // 0x330(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A4[0x7];                                     // Fixing Size After Last Property  
	class UNiagaraComponent*                     Active_3PVFX;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Active_System;                                     // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12A6[0x7];                                     // Fixing Size After Last Property  
	class USkeletalMeshComponent*                OnePMesh;                                          // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ThreePMesh;                                        // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        OneP_System_Ref;                                   // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        ThreeP_System_Ref;                                 // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Active_1PVFX;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        OnePVFX;                                           // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        ThreePVFX;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        OnComplete1P;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        OnComplete3P;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    Emissive_Color;                                    // 0x390(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedAudioHandle;                                 // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12B3[0x4];                                     // Fixing Size After Last Property  
	class USkeletalMeshComponent*                OnePMesh_Gun;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_AmmoBoost_C* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Location, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh1P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_SetFloatParameter_Param_ImplicitCast, double K2Node_VariableSet_CachedDuration_ImplicitCast);
	void OnCompleteVFX(bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void Toggle_VFX(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class UNiagaraComponent* CallFunc_Update_1P3P_VFX_Active_1P, class UNiagaraComponent* CallFunc_Update_1P3P_VFX_Active_3P);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdatePercent(double Value, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetHealingPercent_Value_ImplicitCast);
	void UpdateActive(bool Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void ReceiveTick(float DeltaSeconds, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


