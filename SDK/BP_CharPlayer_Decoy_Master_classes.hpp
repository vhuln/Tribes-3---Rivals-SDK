#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E20 - 0x2DE8)
// BlueprintGeneratedClass BP_CharPlayer_Decoy_Master.BP_CharPlayer_Decoy_Master_C
class ABP_CharPlayer_Decoy_Master_C : public ABP_CharPlayer_Test_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2DE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValAISightComponent*                  AISightComp;                                       // 0x2DF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FlickerTimeline_Alpha_8AD3E06F441F23C6B601FEBF5545F642; // 0x2DF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FlickerTimeline__Direction_8AD3E06F441F23C6B601FEBF5545F642; // 0x2DFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E37[0x3];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    FlickerTimeline;                                   // 0x2E00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct Engine_TimerHandle                    DeathTimer;                                        // 0x2E08(0x8)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultOpacityToTeammates;                         // 0x2E10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedOpacity;                                     // 0x2E18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharPlayer_Decoy_Master_C* GetDefaultObj();

	void SetDeathTimer(double Time, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void RemoveComponentIfValid(class UActorComponent* Component, bool CallFunc_IsValid_ReturnValue);
	void SpawnDeathVFX(const struct CoreUObject_Vector& LocalActorLocation, bool CallFunc_IsDedicatedServer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void RemoveComponents();
	void FlickerTimeline__FinishedFunc();
	void FlickerTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void EventDied();
	void EventOnHealthChanged(float Value);
	void ReceiveTick(float DeltaSeconds);
	void UpdateLaserVisibility(bool ShouldBeVisible);
	void OnHealthPackCount(int32 Value, int32 OldValue);
	void OnShieldPackCount(int32 Value, int32 OldValue);
	void HandleMeshChanged();
	void ExecuteUbergraph_BP_CharPlayer_Decoy_Master(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float K2Node_CustomEvent_Value, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasPendingActors__, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_ShouldBeVisible, int32 K2Node_Event_Value_1, int32 K2Node_Event_OldValue_1, int32 K2Node_Event_Value, int32 K2Node_Event_OldValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class USkeletalMeshComponentBudgeted* CallFunc_GetJetpackMesh_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UObject* K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsFriendlyWith_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1);
};

}


