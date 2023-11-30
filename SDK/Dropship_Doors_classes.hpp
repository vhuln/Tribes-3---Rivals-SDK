#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x470 - 0x298)
// BlueprintGeneratedClass Dropship_Doors.Dropship_Doors_C
class ADropship_Doors_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  ScreenRight;                                       // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight2;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight3;                                        // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight4;                                        // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Dropship_IntWall2;                              // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship9;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship8;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship7;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship6;                                  // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship5;                                  // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship4;                                  // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship3;                                  // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship2;                                  // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship1;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_006;                       // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_005;                       // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_004;                       // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_003;                       // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  AI_Destination_Point;                              // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight1;                                        // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                   RectLight;                                         // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal1;                                            // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  STATIC_Dropship;                                   // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Dropship_IntWall1;                              // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_0036;                      // 0x368(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_0031;                      // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_0030;                      // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Screens;                                           // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Dropship_IntWall;                               // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_TechWallInt_CR_Floor_002;                       // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight1;                                       // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door1;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Door2;                                             // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        OpenDoorsAnim_Alpha_3372EAB8494929CFF8B1EEBA82CFA722; // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                OpenDoorsAnim__Direction_3372EAB8494929CFF8B1EEBA82CFA722; // 0x3BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A1[0x3];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    OpenDoorsAnim;                                     // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedDoorsOpen;                                   // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27A5[0x7];                                     // Fixing Size After Last Property  
	double                                       OpenDoorsTime;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                       DoorWaitDuration;                                  // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    UpdateTimerHandle;                                 // 0x3E0(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    Door1CachedLocation;                               // 0x3E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    Door2CachedLocation;                               // 0x400(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DoorMoveDistance;                                  // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              ScreenMID;                                         // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               LightStartColor;                                   // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               LightWarningColor;                                 // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CachedDoorMoveVector;                              // 0x448(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnDoorsOpened;                                     // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ADropship_Doors_C* GetDefaultObj();

	void InitMID(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void OnRep_OpenDoorsTime();
	void UpdateDoorPosition(double Alpha, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_VLerp_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_1, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, float CallFunc_VLerp_Alpha_ImplicitCast);
	void UpdateDoorState(bool Value, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void OnMatchState(bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void ReceiveBeginPlay(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess);
	void OpenDoorsAnim__FinishedFunc();
	void OpenDoorsAnim__UpdateFunc();
	void OpenDoors();
	void WaitForDoorOpenTime();
	void UpdateTimeRemaining();
	void ExecuteUbergraph_Dropship_Doors(int32 EntryPoint, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct Engine_WalkableSlopeOverride& K2Node_MakeStruct_WalkableSlopeOverride, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AValGameState* K2Node_DynamicCast_AsVal_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetServerWorldTimeSeconds_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct CoreUObject_Vector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, class AValGameMode_Deposits_Training* K2Node_DynamicCast_AsVal_Game_Mode_Deposits_Training, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_UpdateDoorPosition_Alpha_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void OnDoorsOpened__DelegateSignature();
};

}


