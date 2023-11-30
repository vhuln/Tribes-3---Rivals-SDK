#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x4A1 - 0x450)
// BlueprintGeneratedClass BP_MotionSensor_Deployed.BP_MotionSensor_Deployed_C
class ABP_MotionSensor_Deployed_C : public ABP_Deployed_Actor_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_MotionSensor_Active_A;                          // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValAkComponent*                       ValAk;                                             // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovement;                                // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DetectionSphere;                                   // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ValChar_Master_C*>          CachedHits;                                        // 0x478(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	class UValGameInstance*                      CachedGameInstance;                                // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Range;                                             // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bIsDeployed;                                       // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A16[0x3];                                     // Fixing Size After Last Property  
	int32                                        AudioID;                                           // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShroudUpgrade;                                     // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MotionSensor_Deployed_C* GetDefaultObj();

	void RevealEnemy(class ABP_ValChar_Master_C* Enemy, const struct GameplayAbilities_GameplayEffectContextHandle& K2Node_MakeStruct_GameplayEffectContextHandle, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVelocity_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_Vector_IsZero_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnDamageTaken(const struct Valhalla_DamageData& DamageData);
	void BndEvt__BP_MotionSensor_New_DetectionSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_MotionSensor_New_DetectionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__BP_MotionSensor_Deployed_ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct Engine_HitResult& ImpactResult);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_MotionSensor_Deployed(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ Temp_delegate_Variable, float K2Node_Event_DeltaSeconds, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFriendlyWith_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsEnemyWith_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Array_RemoveItem_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsFriendlyWith_ReturnValue_1, bool CallFunc_IsEnemyWith_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct Engine_HitResult& K2Node_ComponentBoundEvent_ImpactResult, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsEnemyWith_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_PostEventAtLocation_OutputComponent, int32 CallFunc_PostEventAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, class ABP_ValChar_Master_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue_3, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast, float CallFunc_SphereOverlapActors_SphereRadius_ImplicitCast);
};

}


