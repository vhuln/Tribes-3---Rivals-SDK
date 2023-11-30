#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x80 - 0x68)
// BlueprintGeneratedClass PersistentOutline_CamMod.PersistentOutline_CamMod_C
class UPersistentOutline_CamMod_C : public UValCameraModifier
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValPlayerState*                       PlayerStateRef;                                    // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPersistentOutline_CamMod_C* GetDefaultObj();

	void OnBotTeamNumChanged(uint8 TeamNum, double CallFunc_Conv_ByteToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetupPlayerState(class AValPlayerState* PlayerStateRef, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IWithTeamInterface> CallFunc_AddOnTeamChangedDelegate_self_CastInput, bool CallFunc_GetTeamFromObject_bHasATeam, int32 CallFunc_GetTeamFromObject_TeamId);
	void UpdateStencilMID(int32 TeamNum, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, const struct Engine_WeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct Engine_PostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
	void OnAddedToCamera(class APlayerCameraManager* Camera);
	void OnTeamChanged(int32 OldTeamId, int32 NewTeamId);
	void OnViewTargetChanged(class AActor* NewViewTarget);
	void Repeat_Until_Player_State();
	void ExecuteUbergraph_PersistentOutline_CamMod(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_OldTeamId, int32 K2Node_CustomEvent_NewTeamId, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_NewViewTarget, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_GetTeamFromObject_bHasATeam, int32 CallFunc_GetTeamFromObject_TeamId, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_GetBotTeamNum_ReturnValue, bool CallFunc_GetTeamFromObject_bHasATeam_1, int32 CallFunc_GetTeamFromObject_TeamId_1, class APlayerCameraManager* K2Node_Event_Camera, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


