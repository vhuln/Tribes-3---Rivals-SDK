#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass Aiming_CamMod.Aiming_CamMod_C
class UAiming_CamMod_C : public UCameraModifier
{
public:
	class UCurveFloat*                           AimingAlphaCurve;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAiming_CamMod_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, class AActor* CallFunc_GetViewTarget_ReturnValue, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAimingAlpha_ReturnValue, bool CallFunc_GetHasFullScreenScope_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_GetAimingFOV_ReturnValue, double CallFunc_Lerp_ReturnValue, double CallFunc_Lerp_A_ImplicitCast, float K2Node_FunctionResult_NewFOV_ImplicitCast, double CallFunc_Lerp_Alpha_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast);
};

}


