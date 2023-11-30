#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x778 - 0x668)
// BlueprintGeneratedClass GA_RubyWeapon_Melee_Master.GA_RubyWeapon_Melee_Master_C
class UGA_RubyWeapon_Melee_Master_C : public UGA_RubyWeapon_Master_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x668(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bEventBinded;                                      // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_290B[0x7];                                     // Fixing Size After Last Property  
	double                                       TimeBetweenSwing;                                  // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CachedFPWeapon;                                    // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    MeleeTraceTimer;                                   // 0x688(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TraceTickTime;                                     // 0x690(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFirstCache;                                       // 0x694(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_290D[0x3];                                     // Fixing Size After Last Property  
	TArray<class FName>                          DefaultSocketNames;                                // 0x698(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct CoreUObject_Vector> CachedSocketPositions;                             // 0x6A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                        CachedHitActors;                                   // 0x6F8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct Valhalla_ValMeleeSwing                Swing_Standard_LtoR;                               // 0x708(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct Valhalla_ValMeleeSwing                Swing_Standard_RtoL;                               // 0x730(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct Valhalla_ValMeleeSwing>        StandardSwings;                                    // 0x758(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        StandardSwingIndex;                                // 0x768(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2915[0x4];                                     // Fixing Size After Last Property  
	double                                       LastMeleeSwingTimestamp;                           // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_RubyWeapon_Melee_Master_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(struct Engine_HitResult& HitResult);
	void On_Actor_Hit(const struct Engine_HitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, const struct CoreUObject_Vector& CallFunc_GetActorForwardVector_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_GetActorForwardVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, bool CallFunc_IsEnemyWith_ReturnValue);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void OnCompoenentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct CoreUObject_Vector& NormalImpulse, struct Engine_HitResult& Hit, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void BindCollision(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void ToggleWeaponCollision(bool IsOn, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ECollisionEnabled K2Node_Select_Default);
	void Get_Socket_Position_from_Curve_At_Time(class FName SocketName, double Time, class UAnimMontage* Montage, struct CoreUObject_Vector* Location, TArray<class UAnimMetaData*>& CallFunc_GetMetaData_MetaData, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAnimMetaData* CallFunc_Array_Get_Item, class UAnimMetaData_Melee_C* K2Node_DynamicCast_AsAnim_Meta_Data_Melee, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct CoreUObject_Rotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct CoreUObject_Vector& CallFunc_GetVectorValue_ReturnValue, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_TransformLocation_ReturnValue, float CallFunc_GetVectorValue_InTime_ImplicitCast);
	void OnDeflected(bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValGunAnimInstance* K2Node_DynamicCast_AsVal_Gun_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
	void ApplyDamage(class UAbilitySystemComponent* ASC, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToTarget_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue);
	void HandleHitResults(TArray<struct Engine_HitResult>& HitResults, class FName SocketName, bool* HandledHit);
	void MeleeTrace(const struct CoreUObject_LinearColor& LocalLineColor, const struct CoreUObject_Vector& LocalSocketLoc, const struct CoreUObject_Vector& LocalFPLoc, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, TArray<struct Engine_HitResult>& CallFunc_LineTraceMultiForObjects_OutHits, bool CallFunc_LineTraceMultiForObjects_ReturnValue, bool CallFunc_HandleHitResults_HandledHit, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UValGunAnimInstance* K2Node_DynamicCast_AsVal_Gun_Anim_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue_1);
	void PlayMeleeCue(class ABP_ValChar_Master_C* ValCharacterMaster, double CallFunc_GetTimeSeconds_ReturnValue, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void BindMelee(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess);
	void OnSwingEnd();
	void OnSwingStart(const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void OnFinish_A9399BA2485FB51D2DFA37884BA88621();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered);
	void BeginPlay();
	void EventApplyDamage(class UAbilitySystemComponent* ASC);
	void ServerStartSwing(int32 SwingIndex);
	void StartSwing();
	void EndAbilityAfterSwingDelay();
	void ExecuteUbergraph_GA_RubyWeapon_Melee_Master(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class UAbilitySystemComponent* K2Node_CustomEvent_ASC, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_CustomEvent_SwingIndex, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_1, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsBotControlled_ReturnValue, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue_1, bool CallFunc_K2_HasAuthority_ReturnValue_2, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_K2_HasAuthority_ReturnValue_3, bool CallFunc_IsBotControlled_ReturnValue_1, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_WaitDelay_Time_ImplicitCast);
};

}


