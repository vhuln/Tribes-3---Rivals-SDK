#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA2 (0x2A82 - 0x29E0)
// BlueprintGeneratedClass BP_ValChar_Master.BP_ValChar_Master_C
class ABP_ValChar_Master_C : public ATopCharacter
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x29E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_Val_HUD;                                     // 0x29E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Val_Ski;                                     // 0x29F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Val_Footstep;                                // 0x29F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Val_WPN;                                     // 0x2A00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Val_Abil;                                    // 0x2A08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Val;                                         // 0x2A10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValAimAssistTargetComponent*          ValAimAssistTarget;                                // 0x2A18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_ThreatSystem_C*                   BPC_ThreatSystem;                                  // 0x2A20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                  MuzzleSocket;                                      // 0x2A28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             DeathSound;                                        // 0x2A30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SpawnAdded;                                        // 0x2A38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct GameplayAbilities_ActiveGameplayEffectHandle AimZoomHandle;                                     // 0x2A48(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ZoomedIn;                                          // 0x2A50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasEngineeringMastery;                             // 0x2A51(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D7[0x2];                                     // Fixing Size After Last Property  
	float                                        ShieldSize;                                        // 0x2A54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValRoyaleFogVolume*                   RoyaleFog;                                         // 0x2A58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_CurrentFogCircleData         CurrentFogData;                                    // 0x2A60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CachedOutsideFogVolume;                            // 0x2A80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Headshot;                                          // 0x2A81(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ValChar_Master_C* GetDefaultObj();

	TSubclassOf<class AValProjectile> GetEquippedAbilityProjectileClass(struct GameplayTags_GameplayTag& Slot, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnCurrentRoyaleFogData(const struct Valhalla_CurrentFogCircleData& CallFunc_GetCurrentData_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnActiveRoyaleFog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AValRoyaleFogVolume* CallFunc_GetActiveRoyaleFog_ReturnValue);
	void PlayEnemyKilledSFX(class AActor* Actor, enum class EPlayerType TargetPlayerType, bool Headshot, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue);
	void RemoveMasteryZoom(bool CallFunc_RemoveActiveGameplayEffect_ReturnValue);
	void ApplyMasteryZoom(const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
	float GetStealthDetectionRadius(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	float GetEquippedAbilityTimeBetweenShots(struct GameplayTags_GameplayTag& Slot, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTimeBetweenShots_TimeBetweenShots, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	struct GameplayTags_GameplayTag GetEquippedAbilityFireMode(struct GameplayTags_GameplayTag& Slot, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess);
	void CheckShieldBreakFX(int32 OldValue, int32 NewValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void AttemptReload(const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue_1, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	void SetHealthShieldRTPC();
	void IsLocalCharacter(bool* Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void ReceiveBeginPlay();
	void EventDied();
	void EquipSlotUpdated(const struct GameplayTags_GameplayTag& EquipSlot);
	void EventRespawned();
	void OnDamagedEvent(const struct Valhalla_DamageData& DamageData);
	void OnDealtDamageEvent(const struct Valhalla_DamageData& Data, class AActor* Target);
	void On_Shield_Changed(int32 OldValue, int32 NewValue);
	void ReserveAmmoChanged(float OldValue, float NewValue);
	void ToggleMasteryAim();
	void ExecuteUbergraph_BP_ValChar_Master(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_EquipSlot, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Valhalla_DamageData& K2Node_CustomEvent_Data, class AActor* K2Node_CustomEvent_Target, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_OldValue_1, int32 K2Node_CustomEvent_NewValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, class UValDeviceAudioVisual* CallFunc_GetActiveEquipSlotAV_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void SpawnAdded__DelegateSignature();
};

}


