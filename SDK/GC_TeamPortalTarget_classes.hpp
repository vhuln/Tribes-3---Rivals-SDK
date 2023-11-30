#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x360 - 0x308)
// BlueprintGeneratedClass GC_TeamPortalTarget.GC_TeamPortalTarget_C
class AGC_TeamPortalTarget_C : public AGameplayCueNotify_Actor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                          Ak;                                                // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Teleport_Indicator;                                // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedChar;                                        // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Teleport_Range;                                    // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TeleportTraceRadius;                               // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SweepDownDistance;                                 // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Portal_Place_SFX;                                  // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351A[0x4];                                     // Fixing Size After Last Property  
	double                                       TeleportRangeMod;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CharPlayer_C*                      As_BP_Char_Player;                                 // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_TeamPortalTarget_C* GetDefaultObj();

	void StoreTeleportRangeMod(float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
	void GetTeleportRange(double* Range, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void GetGroundedTeleportPoint(const struct CoreUObject_Vector& LookAtTarget, const struct CoreUObject_Vector& VectorToLookatTarget, struct Engine_HitResult* OutHitResult, bool* FoundValidHit, int32 DefaultStepIncrements, bool LocalFoundValidHit, const struct Engine_HitResult& LocalValidHit, const struct CoreUObject_Vector& LocalTarget, TArray<class AActor*>& Temp_object_Variable, bool Temp_bool_Variable, double CallFunc_GetTeleportRange_Range, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_GetTeleportRange_Range_1, double CallFunc_Add_DoubleDouble_ReturnValue, TArray<class AActor*>& Temp_object_Variable_1, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable, const struct CoreUObject_Vector& CallFunc_Conv_IntToVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_Divide_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetMuzzleFireLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct Engine_HitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, const struct Engine_HitResult& CallFunc_SphereTraceSingle_OutHit_1, bool CallFunc_SphereTraceSingle_ReturnValue_1, float CallFunc_SphereTraceSingle_Radius_ImplicitCast);
	void SelectTracePoints(bool Blocking_Hit, const struct CoreUObject_Vector& Overlap_Location, const struct CoreUObject_Vector& Trace_End, bool Trace_Upward, struct CoreUObject_Vector* Sphere_Trace_Start, struct CoreUObject_Vector* Sphere_Trace_End, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_1);
	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyViewed_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, class UGameplayAbility* CallFunc_GetActiveSwappedAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_TeamPortal_C* K2Node_DynamicCast_AsGA_Team_Portal, bool K2Node_DynamicCast_bSuccess_2, class UGA_Teleport_C* K2Node_DynamicCast_AsGA_Teleport, bool K2Node_DynamicCast_bSuccess_3, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GC_TeamPortalTarget(int32 EntryPoint, double CallFunc_GetTeleportRange_Range, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_FindFloorTeleportLocation_IsValid, const struct CoreUObject_Vector& CallFunc_FindFloorTeleportLocation_TeleportLocation, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_MakeVector_Z_ImplicitCast);
};

}


