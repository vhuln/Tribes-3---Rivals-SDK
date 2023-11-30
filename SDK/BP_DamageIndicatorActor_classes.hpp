#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x398 - 0x2C8)
// BlueprintGeneratedClass BP_DamageIndicatorActor.BP_DamageIndicatorActor_C
class ABP_DamageIndicatorActor_C : public AValDamageIndicatorActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  DamageInd_02;                                      // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Plane;                                             // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Animation;                                         // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LocalRotation;                                     // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scale;                                             // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Offset;                                            // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CenterAxis;                                        // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    TargetLocation;                                    // 0x310(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           PitchBankAmount;                                   // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          AnimationScale;                                    // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          AnimationSpawn;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          AnimationShutdown;                                 // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    BaseRelativeLocation;                              // 0x348(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    AlignedRelativeLocationOffset;                     // 0x360(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AlignedPitchOffset;                                // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    PitchDownRelativeOffset;                           // 0x380(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DamageIndicatorActor_C* GetDefaultObj();

	bool IsTargetValidToTrack(bool CallFunc_IsTargetValidToTrack_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateTarget();
	void UpdateAnimation();
	void ExecuteUbergraph_BP_DamageIndicatorActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetPlayerViewPoint_Location, const struct CoreUObject_Rotator& CallFunc_GetPlayerViewPoint_Rotation, const struct Engine_HitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Transform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetGameTimeSinceCreation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVectorValue_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_2, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVectorValue_ReturnValue_1, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVectorValue_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindRelativeLookAtRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue_2, const struct Engine_HitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, const struct Engine_HitResult& CallFunc_K2_AddRelativeLocation_SweepHitResult, float CallFunc_MakeRotator_Pitch_ImplicitCast);
};

}


