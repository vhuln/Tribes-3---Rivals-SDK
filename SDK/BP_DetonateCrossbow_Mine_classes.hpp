#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x4D8 - 0x3D0)
// BlueprintGeneratedClass BP_DetonateCrossbow_Mine.BP_DetonateCrossbow_Mine_C
class ABP_DetonateCrossbow_Mine_C : public AValAttributeActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      ProximityCollision;                                // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Active_FX;                                      // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_ValChar_Master_C*>            PlayersInRange;                                    // 0x3E8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsTriggered;                                       // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33BF[0x7];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    CheckTimerHandle_;                                 // 0x440(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        FizzleFX;                                          // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ArmTime;                                           // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Armed;                                             // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3406[0x7];                                     // Fixing Size After Last Property  
	double                                       ExplodeTime;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultExplosionRadius;                            // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UValAbilitySystemComponent*            ASC;                                               // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetsEnemies;                                    // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetsFriendlies;                                 // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TargetsSelf;                                       // 0x482(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3497[0x5];                                     // Fixing Size After Last Property  
	struct Valhalla_ValGameplayEffectContainerSpec EffectSpec;                                        // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                           ExplosionFalloff;                                  // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ExplosionRadius;                                   // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedOriginalDamage;                              // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              EffectTag;                                         // 0x4B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        GrenadeNumber;                                     // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34F8[0x4];                                     // Fixing Size After Last Property  
	class UValGrenadeAudioVisual*                AudioVisual;                                       // 0x4C0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultDecalSize_Scalar;                           // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                AttachedActor;                                     // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DetonateCrossbow_Mine_C* GetDefaultObj();

	void OnAttachedActorDestroyed(class AActor* Attached);
	void BindToAttachedActor(class AActor* AttachedActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void PlayFX(bool CallFunc_HasAuthority_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast);
	void CheckOverlaps(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorUpVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array_1, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, TArray<class ABP_ValChar_Master_C*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class ABP_ValChar_Master_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct Engine_HitResult& CallFunc_IsOccluded_Hit, bool CallFunc_IsOccluded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnArmTimeFinished(class AActor* CallFunc_GetOwner_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, class UGA_Gun_Bow_Exotic_Detonate_Instant_C* K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant, bool K2Node_DynamicCast_bSuccess);
	void Fizzle(const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void On_Root_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult, class AValProjectile* K2Node_DynamicCast_AsVal_Projectile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemyWith_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void UpdateTeamColor();
	void OnExplode();
	void TellClientToFizzle();
	void StartDetonate();
	void ExecuteUbergraph_BP_DetonateCrossbow_Mine(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_Array_Get_Item, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_DoesEffectContainerSpecHaveEffects_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TMap<class AActor*, struct Engine_HitResult> CallFunc_FindActorsInExplosion_OutResults, bool CallFunc_FindActorsInExplosion_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AActor*>& CallFunc_Map_Keys_Keys, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, const struct Engine_HitResult& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_IsFriendlyWith_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue_1, TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>& CallFunc_ApplyExternalEffectSpec_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_2, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_3, class AActor* CallFunc_GetOwner_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, class UGA_Gun_Bow_Exotic_Detonate_Instant_C* K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_FindActorsInExplosion_OuterDamageRadius_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
};

}

