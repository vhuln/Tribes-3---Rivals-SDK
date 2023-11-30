#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x61 - 0x48)
// BlueprintGeneratedClass Kickback_CamMod.Kickback_CamMod_C
class UKickback_CamMod_C : public UCameraModifier
{
public:
	double                                       Interp_Speed;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  PreviousOffset;                                    // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bWasFiring;                                        // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKickback_CamMod_C* GetDefaultObj();

	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, const struct CoreUObject_Vector2D& Delta, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, double CallFunc_BreakVector2D_X_3, double CallFunc_BreakVector2D_Y_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class AActor* CallFunc_GetViewTarget_ReturnValue, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Rotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct CoreUObject_Vector2D& CallFunc_GetCurrentOffset_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_Vector2DInterpTo_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct CoreUObject_Vector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_AddControllerPitchInput_Val_ImplicitCast, float CallFunc_AddControllerYawInput_Val_ImplicitCast, float CallFunc_Vector2DInterpTo_InterpSpeed_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


