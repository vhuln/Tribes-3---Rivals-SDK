#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x68 - 0x68)
// BlueprintGeneratedClass FirstPersonCamAnim_CamMod.FirstPersonCamAnim_CamMod_C
class UFirstPersonCamAnim_CamMod_C : public UValCameraModifier
{
public:

	static class UClass* StaticClass();
	static class UFirstPersonCamAnim_CamMod_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, class AActor* CallFunc_GetViewTarget_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Rotator& CallFunc_GetFirstPersonCameraAnimation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
};

}


