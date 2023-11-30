#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xD0 - 0x68)
// BlueprintGeneratedClass Fog_CamMod.Fog_CamMod_C
class UFog_CamMod_C : public UValCameraModifier
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_OutsideCircle;                                 // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValPlayerState*                       PlayerStateRef;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValRoyaleFogVolume*                   CachedRoyaleFog;                                   // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CachedRadius;                                      // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F95[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CachedLocation;                                    // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAddedToCamera;                                    // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F96[0x7];                                     // Fixing Size After Last Property  
	class AActor*                                LocalViewTarget;                                   // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Engine_WeightedBlendable              CachedOutsideCircleBlendable;                      // 0xC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UFog_CamMod_C* GetDefaultObj();

	void CheckViewTargetLocation(bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Square_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Vector_Distance2DSquared_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Square_A_ImplicitCast);
	void OnLocalViewTargetChanged(class AActor* NewViewTarget);
	void OnCurrentData(bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue, const struct Valhalla_CurrentFogCircleData& CallFunc_GetCurrentData_ReturnValue, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void OnFogEnabled(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFogEnabled_ReturnValue);
	void OnFogSpawnRadius(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_GetFogSpawnRadius_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_R_ImplicitCast, float CallFunc_MakeColor_G_ImplicitCast);
	void OnActiveFog(class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValRoyaleFogVolume* CallFunc_GetActiveRoyaleFog_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, const struct Engine_PostProcessSettings& K2Node_MakeStruct_PostProcessSettings, const struct Engine_WeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct Engine_PostProcessSettings& K2Node_MakeStruct_PostProcessSettings_1);
	void OnAddedToCamera(class APlayerCameraManager* Camera);
	void Repeat_Until_Player_State();
	void ExecuteUbergraph_Fog_CamMod(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class APlayerCameraManager* K2Node_Event_Camera, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess_1, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetViewTarget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface_1, bool K2Node_DynamicCast_bSuccess_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
};

}


