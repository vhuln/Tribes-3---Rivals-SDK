#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x1628 - 0x15C8)
// BlueprintGeneratedClass BP_ValPlayerController_Topaz.BP_ValPlayerController_Topaz_C
class ABP_ValPlayerController_Topaz_C : public ABP_ValPlayerController_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x15C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       DownwardZSpeedAudio;                               // 0x15D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       SpeedAudio;                                        // 0x15E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       MinSpeedForSpeedSound;                             // 0x15E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FilteredSpeed;                                     // 0x15F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       NormalizedMinSpeedForSound;                        // 0x15F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinSpeedForDownwardZAudio;                         // 0x1600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DownwardZAudioTraceLength;                         // 0x1608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FilteredDistanceToGround;                          // 0x1610(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PickupFXCameraModClass;                            // 0x1618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPickupItem_CamMod_C*                  PickupFXCameraMod;                                 // 0x1620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ValPlayerController_Topaz_C* GetDefaultObj();

	void OnPawnChangedDelegate(class APawn* NewPawn, bool CallFunc_IsThirdPerson_ReturnValue, class ATopCharacter* K2Node_DynamicCast_AsTop_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void UpdateDownwardZSpeedSound(double CurrentZSpeed, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetPlayerViewPoint_Location, const struct CoreUObject_Rotator& CallFunc_GetPlayerViewPoint_Rotation, TArray<class AActor*>& Temp_object_Variable, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct Engine_HitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetFloatParameter_InFloat_ImplicitCast);
	void UpdateSpeedSound(double CurrentSpeedPctFiltered, double CurrentSpeedPct, double CurrentSpeed, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVelocity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetUpperBoundSpeed_ReturnValue, double CallFunc_SafeDivide_ReturnValue, float CallFunc_SetFloatParameter_InFloat_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast, double K2Node_VariableSet_CurrentSpeedPctFiltered_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast);
	void PossessOtherBot(class ABP_CharPlayer_Test_C* BotToPossess, class ABP_CharPlayer_Test_C* ClosestBot, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_GetPlayerViewPoint_Location, const struct CoreUObject_Rotator& CallFunc_GetPlayerViewPoint_Rotation, double CallFunc_Vector_Distance_ReturnValue, TArray<class ABP_CharPlayer_Test_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CharPlayer_Test_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void PlayPickupFX();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ValPlayerController_Topaz(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UPickupItem_CamMod_C* K2Node_DynamicCast_AsPickup_Item_Cam_Mod, bool K2Node_DynamicCast_bSuccess);
};

}


