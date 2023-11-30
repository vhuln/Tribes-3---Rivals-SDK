#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x45 (0x2F19 - 0x2ED4)
// BlueprintGeneratedClass BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C
class ABP_CharPlayer_Scanner_C : public ABP_CharPlayer_Defender_C
{
public:
	uint8                                        Pad_2708[0x4];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2ED8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     AlertLaser;                                        // 0x2EE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValAkComponent*                       ValAk;                                             // 0x2EE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ScanLaser;                                         // 0x2EF0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LaserRotator;                                      // 0x2EF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   ScanRotation;                                      // 0x2F00(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ScanActive;                                        // 0x2F18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharPlayer_Scanner_C* GetDefaultObj();

	void On_AIFSM_AlertState_end();
	void On_AIFSM_AlertState_Start(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	void On_AIFSM_ScanState_End();
	void On_AIFSM_ScanState_Start();
	void DeactivateScanLaser();
	void ActivateScanLaser(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue);
	void UserConstructionScript(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CybridBeamDistanceChanged(float OldValue, float NewValue);
	void OnViewRotationRepped();
	void EventDied();
	void ExecuteUbergraph_BP_CharPlayer_Scanner(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct Engine_HitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct CoreUObject_Rotator& CallFunc_GetCustomViewRotationAsRotator_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_UpdateLoseSightRadius_ReturnValue, bool CallFunc_UpdateSightRadius_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, float K2Node_Event_DeltaSeconds, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_UpdateSightRadius_ReturnValue_1, bool CallFunc_UpdateLoseSightRadius_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetCustomViewLocationOffset_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast, float CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast, float CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast_1, float CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast_1);
};

}


