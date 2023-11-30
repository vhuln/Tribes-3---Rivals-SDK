#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x3A0 - 0x338)
// BlueprintGeneratedClass BP_PhaseShift_Portal.BP_PhaseShift_Portal_C
class ABP_PhaseShift_Portal_C : public AValPhaseShiftPortal
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x338(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_TeamPortal;                                  // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     InitialVFX;                                        // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_PhaseShift_Portal_C*               Another_Portal;                                    // 0x350(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bOnCooldown;                                       // 0x358(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2121[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              GC_Tag_Start;                                      // 0x35C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        VFXSize;                                           // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSpawnAsEntrance;                                  // 0x368(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2124[0x7];                                     // Fixing Size After Last Property  
	class UNiagaraComponent*                     NS;                                                // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       PortalLiftspan;                                    // 0x378(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       PortalCastTime;                                    // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Portal_SFX;                                        // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_212A[0x4];                                     // Fixing Size After Last Property  
	double                                       SpeedBoost;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       SpeedBoostDuration;                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PhaseShift_Portal_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	enum class ERarity GetContextPingRarity();
	enum class EValPingType GetContextPingType();
	struct CoreUObject_Vector GetPingOffset();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	void On_Portal_Cast_Time_End();
	void OnRep_Another_Portal(bool CallFunc_HasAuthority_ReturnValue);
	void SpawnPortalVFX(bool Temp_bool_Variable, class UNiagaraSystem* Temp_object_Variable, class UNiagaraSystem* Temp_object_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct CoreUObject_Rotator& CallFunc_SelectRotator_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraSystem* K2Node_Select_Default, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast);
	void TeleportCue(class AValCharacter* Char, const struct CoreUObject_Vector& StartLoc, const struct CoreUObject_Vector& EndLoc, const struct GameplayAbilities_ActiveGameplayEffectHandle& NewLocalVar, const struct GameplayAbilities_GameplayEffectContextHandle& LocalContent, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void MeetYourAnotherHalf(class ABP_PhaseShift_Portal_C* AnotherPortal, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
	void BndEvt__BP_PhaseShift_Portal_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_PhaseShift_Portal_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ServerOnInteract(class AValCharacter* Initiator);
	void ReceiveBeginPlay();
	void ClientOnInteract(class AValCharacter* Initiator);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_PhaseShift_Portal(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AValCharacter* K2Node_Event_Initiator_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class AValCharacter* K2Node_Event_Initiator, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh1P_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, bool CallFunc_IsEnemyWith_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_SetDuration_Duration_ImplicitCast);
};

}


