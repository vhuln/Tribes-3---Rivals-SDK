#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x48 - 0x48)
// BlueprintGeneratedClass ThirdPersonInterp_CamMod.ThirdPersonInterp_CamMod_C
class UThirdPersonInterp_CamMod_C : public UCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UThirdPersonInterp_CamMod_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, class AActor* CallFunc_GetViewTarget_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, const struct Engine_MinimalViewInfo& CallFunc_GetCameraView_DesiredView, const struct Engine_MinimalViewInfo& CallFunc_GetCameraView_DesiredView_1, const struct CoreUObject_Vector& CallFunc_VLerp_ReturnValue, const struct CoreUObject_Rotator& CallFunc_RLerp_ReturnValue);
};

}


