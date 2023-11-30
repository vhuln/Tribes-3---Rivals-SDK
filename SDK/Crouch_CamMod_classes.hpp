#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xC0 - 0x48)
// BlueprintGeneratedClass Crouch_CamMod.Crouch_CamMod_C
class UCrouch_CamMod_C : public UCameraModifier
{
public:
	double                                       CrouchAlpha;                                       // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CrouchSpeed;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CrouchCamDist;                                     // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       UnCrouchSpeed;                                     // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SkiFOVDelta;                                       // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SkiAlpha;                                          // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SkiFOVBlendInSpeed;                                // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SkiFOVBlendOutSpeed;                               // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           SkiFOVCurve;                                       // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         ValCharacterOwner;                                 // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValCharacterMovementComponent*        ValCharacterMovementComp;                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       SmoothZ;                                           // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    SmoothedLocation;                                  // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCrouch_CamMod_C* GetDefaultObj();

	void GetFOV(class AValCharacter* Character, double InFOV, double DeltaTime, double* OutFOV, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess);
	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, const struct CoreUObject_Vector& NewViewLoc, class UValCrouchComponent* CrouchComponent, class UCurveFloat* CrouchHeightCurve, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValGunAnimInstance* K2Node_DynamicCast_AsVal_Gun_Anim_Instance, bool K2Node_DynamicCast_bSuccess, double CallFunc_Lerp_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct CoreUObject_Vector& CallFunc_Evaluate_NewViewLocation, class ULegacyCameraShake* CallFunc_StartLegacyCameraShake_ReturnValue, bool CallFunc_IsSkiing_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, double CallFunc_GetFOV_outFOV, class ULegacyCameraShake* CallFunc_StartLegacyCameraShake_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_2, class UCameraShakeBase* CallFunc_StartCameraShake_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_2, float K2Node_FunctionResult_NewFOV_ImplicitCast, float K2Node_FunctionResult_NewFOV_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_CrouchAlpha_ImplicitCast, double CallFunc_GetFOV_DeltaTime_ImplicitCast, double CallFunc_GetFOV_inFOV_ImplicitCast);
};

}


