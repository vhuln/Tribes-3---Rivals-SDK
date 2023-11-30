#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0xA1 - 0x68)
// BlueprintGeneratedClass SprintCameraMod.SprintCameraMod_C
class USprintCameraMod_C : public UValCameraModifier
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveVector*                          RotationCurve;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Time;                                              // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          LocationCurve;                                     // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          RotationCurve_3P;                                  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                          LocationCurve_3P;                                  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         Val_Character_Owner;                               // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnabled;                                          // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USprintCameraMod_C* GetDefaultObj();

	void CalcUIOffset(const struct CoreUObject_Transform& OldCamTransform, const struct CoreUObject_Transform& NewCamTransform, double TraceDist, const struct CoreUObject_Vector& CallFunc_BreakTransform_Location, const struct CoreUObject_Rotator& CallFunc_BreakTransform_Rotation, const struct CoreUObject_Vector& CallFunc_BreakTransform_Scale, const struct CoreUObject_Vector& CallFunc_BreakTransform_Location_1, const struct CoreUObject_Rotator& CallFunc_BreakTransform_Rotation_1, const struct CoreUObject_Vector& CallFunc_BreakTransform_Scale_1, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_ProjectWorldToScreen_ScreenPosition_1, bool CallFunc_ProjectWorldToScreen_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, int32 CallFunc_GetGameplayTagCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsFirstPerson_ReturnValue, class UCurveVector* K2Node_Select_Default, const struct CoreUObject_Vector& CallFunc_GetVectorValue_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast_3, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, float CallFunc_GetVectorValue_InTime_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void OnModifierDisabled();
	void OnAddedToCamera(class APlayerCameraManager* Camera);
	void OnSettingsChanged();
	void ExecuteUbergraph_SprintCameraMod(int32 EntryPoint, class APlayerCameraManager* K2Node_Event_Camera, class AActor* CallFunc_GetViewTarget_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetDisableCameraBob_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_GetDisableCameraBob_ReturnValue_1);
};

}


