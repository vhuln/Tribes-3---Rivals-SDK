#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x560 - 0x510)
// BlueprintGeneratedClass BP_ReviveBeacon_Tier3Medic.BP_ReviveBeacon_Tier3Medic_C
class ABP_ReviveBeacon_Tier3Medic_C : public AValReviveBeacon
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValTempAkComponent*                   ValTempAk;                                         // 0x518(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_CloneRespawn;                               // 0x520(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_ReviveOrbInteract;                              // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Revive_PrintHuman;                              // 0x530(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_ReviveOrb;                                      // 0x538(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              PrintHumanMID;                                     // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ChannelTime;                                       // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ChannelTimeDuration;                               // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ActiveRevivingTime;                                // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ReviveBeacon_Tier3Medic_C* GetDefaultObj();

	void UpdateLocalVisibility(bool LocalBeaconShouldBeVisible, bool Temp_bool_Variable, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, enum class ECollisionEnabled K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldBeVisibleToLocalPlayer_ReturnValue);
	void ApplyReviveModsToReviver(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetShieldsMax_ReturnValue, int32 CallFunc_GetHealthMax_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast_1);
	void CacheReviveModsTargetingRevivedPlayer(float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue, float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue_1);
	struct CoreUObject_Vector GetRespawnLocation(const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue);
	bool ShouldShowOnMinimap(class AValPlayerController* Controller);
	void OnBeaconStateChanged(enum class EReviveBeaconState State, bool LocalBeaconShouldBeVisible, enum class ECollisionEnabled Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ECollisionEnabled Temp_byte_Variable_1, bool CallFunc_ShouldBeVisibleToLocalPlayer_ReturnValue, bool Temp_bool_Variable, enum class ECollisionEnabled K2Node_Select_Default, bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void EventDied();
	void BndEvt__BP_ReviveBeacon_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_ReviveBeacon_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ReviveBeacon_Tier3Medic(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanInteract_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


