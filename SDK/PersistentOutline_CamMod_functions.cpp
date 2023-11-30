#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PersistentOutline_CamMod.PersistentOutline_CamMod_C
// (None)

class UClass* UPersistentOutline_CamMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentOutline_CamMod_C");

	return Clss;
}


// PersistentOutline_CamMod_C PersistentOutline_CamMod.Default__PersistentOutline_CamMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPersistentOutline_CamMod_C* UPersistentOutline_CamMod_C::GetDefaultObj()
{
	static class UPersistentOutline_CamMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPersistentOutline_CamMod_C*>(UPersistentOutline_CamMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.OnBotTeamNumChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              TeamNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_ByteToDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::OnBotTeamNumChanged(uint8 TeamNum, double CallFunc_Conv_ByteToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "OnBotTeamNumChanged");

	Params::UPersistentOutline_CamMod_C_OnBotTeamNumChanged_Params Parms{};

	Parms.TeamNum = TeamNum;
	Parms.CallFunc_Conv_ByteToDouble_ReturnValue = CallFunc_Conv_ByteToDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.SetupPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerState*             PlayerStateRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IWithTeamInterface>CallFunc_AddOnTeamChangedDelegate_self_CastInput                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTeamFromObject_bHasATeam                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamFromObject_TeamId                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::SetupPlayerState(class AValPlayerState* PlayerStateRef, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IWithTeamInterface> CallFunc_AddOnTeamChangedDelegate_self_CastInput, bool CallFunc_GetTeamFromObject_bHasATeam, int32 CallFunc_GetTeamFromObject_TeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "SetupPlayerState");

	Params::UPersistentOutline_CamMod_C_SetupPlayerState_Params Parms{};

	Parms.PlayerStateRef = PlayerStateRef;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddOnTeamChangedDelegate_self_CastInput = CallFunc_AddOnTeamChangedDelegate_self_CastInput;
	Parms.CallFunc_GetTeamFromObject_bHasATeam = CallFunc_GetTeamFromObject_bHasATeam;
	Parms.CallFunc_GetTeamFromObject_TeamId = CallFunc_GetTeamFromObject_TeamId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.UpdateStencilMID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TeamNum                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::UpdateStencilMID(int32 TeamNum, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "UpdateStencilMID");

	Params::UPersistentOutline_CamMod_C_UpdateStencilMID_Params Parms{};

	Parms.TeamNum = TeamNum;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_PostProcessSettings  PostProcessSettings                                              (Parm, OutParm)
// struct Engine_WeightedBlendables   K2Node_MakeStruct_WeightedBlendables                             (None)
// struct Engine_PostProcessSettings  K2Node_MakeStruct_PostProcessSettings                            (None)

void UPersistentOutline_CamMod_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, const struct Engine_WeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct Engine_PostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "BlueprintModifyPostProcess");

	Params::UPersistentOutline_CamMod_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.OnAddedToCamera
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::OnAddedToCamera(class APlayerCameraManager* Camera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "OnAddedToCamera");

	Params::UPersistentOutline_CamMod_C_OnAddedToCamera_Params Parms{};

	Parms.Camera = Camera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.OnTeamChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldTeamId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewTeamId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::OnTeamChanged(int32 OldTeamId, int32 NewTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "OnTeamChanged");

	Params::UPersistentOutline_CamMod_C_OnTeamChanged_Params Parms{};

	Parms.OldTeamId = OldTeamId;
	Parms.NewTeamId = NewTeamId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.OnViewTargetChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewViewTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::OnViewTargetChanged(class AActor* NewViewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "OnViewTargetChanged");

	Params::UPersistentOutline_CamMod_C_OnViewTargetChanged_Params Parms{};

	Parms.NewViewTarget = NewViewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.Repeat Until Player State
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPersistentOutline_CamMod_C::Repeat_Until_Player_State()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "Repeat Until Player State");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentOutline_CamMod.PersistentOutline_CamMod_C.ExecuteUbergraph_PersistentOutline_CamMod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OldTeamId                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewTeamId                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_NewViewTarget                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTeamFromObject_bHasATeam                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamFromObject_TeamId                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetBotTeamNum_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTeamFromObject_bHasATeam_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamFromObject_TeamId_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        K2Node_Event_Camera                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        K2Node_DynamicCast_AsVal_Player_Controller                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             K2Node_DynamicCast_AsVal_Player_State                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPersistentOutline_CamMod_C::ExecuteUbergraph_PersistentOutline_CamMod(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_OldTeamId, int32 K2Node_CustomEvent_NewTeamId, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_NewViewTarget, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_GetTeamFromObject_bHasATeam, int32 CallFunc_GetTeamFromObject_TeamId, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, uint8 CallFunc_GetBotTeamNum_ReturnValue, bool CallFunc_GetTeamFromObject_bHasATeam_1, int32 CallFunc_GetTeamFromObject_TeamId_1, class APlayerCameraManager* K2Node_Event_Camera, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentOutline_CamMod_C", "ExecuteUbergraph_PersistentOutline_CamMod");

	Params::UPersistentOutline_CamMod_C_ExecuteUbergraph_PersistentOutline_CamMod_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_OldTeamId = K2Node_CustomEvent_OldTeamId;
	Parms.K2Node_CustomEvent_NewTeamId = K2Node_CustomEvent_NewTeamId;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_NewViewTarget = K2Node_CustomEvent_NewViewTarget;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetTeamFromObject_bHasATeam = CallFunc_GetTeamFromObject_bHasATeam;
	Parms.CallFunc_GetTeamFromObject_TeamId = CallFunc_GetTeamFromObject_TeamId;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBotTeamNum_ReturnValue = CallFunc_GetBotTeamNum_ReturnValue;
	Parms.CallFunc_GetTeamFromObject_bHasATeam_1 = CallFunc_GetTeamFromObject_bHasATeam_1;
	Parms.CallFunc_GetTeamFromObject_TeamId_1 = CallFunc_GetTeamFromObject_TeamId_1;
	Parms.K2Node_Event_Camera = K2Node_Event_Camera;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_Controller = K2Node_DynamicCast_AsVal_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsVal_Player_State = K2Node_DynamicCast_AsVal_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


