#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFA (0x392 - 0x298)
// BlueprintGeneratedClass BP_DeathActor.BP_DeathActor_C
class ABP_DeathActor_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicalAnimationComponent*           PhysicalAnimation;                                 // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMeshComponent;                             // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_FadeIn_79B7A6774A0EB4A53677A48C4E57EB55; // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Dissolve_79B7A6774A0EB4A53677A48C4E57EB55; // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_79B7A6774A0EB4A53677A48C4E57EB55; // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1924[0x7];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    Timeline_0;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_FadeIn_88BEE39845F14838107A9783F9B53A2F;  // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Dissolve_88BEE39845F14838107A9783F9B53A2F; // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_88BEE39845F14838107A9783F9B53A2F; // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1934[0x7];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    Timeline;                                          // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  SimulationRootBoneName;                            // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFullRagdoll;                                    // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_193A[0x7];                                     // Fixing Size After Last Property  
	TArray<class FName>                          BreakConstraintNames;                              // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       BreakConstraintChance;                             // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimSequenceBase*>             DeathAnimations;                                   // 0x310(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FName                                  HeadBoneName;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  HeadConstraintName;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ResetOnDeath;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1946[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   TargetDeathRotation;                               // 0x338(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPlayingDeath;                                    // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1950[0x7];                                     // Fixing Size After Last Property  
	TArray<class UAnimSequenceBase*>             HeadshotDeathAnimations;                           // 0x358(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UAnimSequenceBase*                     IdleTestAnim;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DeathAnimMinPlayRate;                              // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DeathAnimMaxPlayRate;                              // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutDelay;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                    SpawnedWeaponSkelMeshActor;                        // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBlowHeadOff;                                    // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SpawnWeapon;                                       // 0x391(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeathActor_C* GetDefaultObj();

	void PlayDeathFX(bool Headshot, bool CallFunc_BooleanAND_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CharPlayer_Test_C* K2Node_DynamicCast_AsBP_Char_Player_Test, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	void GetDeathAnimPlayRate(double* Rate, double CallFunc_RandomFloatInRange_ReturnValue);
	void InitializeVisuals(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh3P_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentScale_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_GetAttachSocketName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Transform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, class ABP_DeathWeapon_C* CallFunc_FinishSpawningActor_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue_1);
	void GoFullRagdoll();
	void BlowHeadOff();
	void Start_Death(bool Headshot, const struct CoreUObject_Rotator& Direction, double CallFunc_GetDeathAnimPlayRate_Rate, bool CallFunc_Array_IsNotEmpty_ReturnValue, class UAnimSequenceBase* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Array_IsNotEmpty_ReturnValue_1, class UAnimSequenceBase* CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetPlayRate_Rate_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void Reset(class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue);
	void OnDeathAnimComplete();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void StartPhysOnlyDeath();
	void BndEvt__BP_DeathActor_MESH_NPC_GA_AVDroid_Melee_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct CoreUObject_Vector& NormalImpulse, struct Engine_HitResult& Hit);
	void StartResetAfterDelay();
	void StartHideAfterDelay();
	void ReceiveBeginPlay();
	void FadeOut();
	void ExecuteUbergraph_BP_DeathActor(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float K2Node_Event_DeltaSeconds, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct CoreUObject_Vector& K2Node_ComponentBoundEvent_NormalImpulse, const struct Engine_HitResult& K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsSimulatingPhysics_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Rotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


