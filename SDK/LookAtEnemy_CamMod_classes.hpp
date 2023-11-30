#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xB0 - 0x68)
// BlueprintGeneratedClass LookAtEnemy_CamMod.LookAtEnemy_CamMod_C
class ULookAtEnemy_CamMod_C : public UValCameraModifier
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValCharacter*                         EnemyActor;                                        // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ZoomAmount;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZoomDelay;                                         // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZoomAlpha;                                         // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ZoomTotalTime;                                     // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPendingZoom;                                      // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EF2[0x7];                                     // Fixing Size After Last Property  
	double                                       ElapsedTime;                                       // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValPlayerCameraManager*               CameraManager;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULookAtEnemy_CamMod_C* GetDefaultObj();

	void StartZoomIn();
	void BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct CoreUObject_Rotator& CallFunc_REase_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_REase_Alpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void OnEnabled();
	void OnModifierDisabled();
	void OnAddedToCamera(class APlayerCameraManager* Camera);
	void ExecuteUbergraph_LookAtEnemy_CamMod(int32 EntryPoint, class APlayerCameraManager* K2Node_Event_Camera);
};

}


