#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThirdPersonInterp_CamMod.ThirdPersonInterp_CamMod_C
// (None)

class UClass* UThirdPersonInterp_CamMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThirdPersonInterp_CamMod_C");

	return Clss;
}


// ThirdPersonInterp_CamMod_C ThirdPersonInterp_CamMod.Default__ThirdPersonInterp_CamMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UThirdPersonInterp_CamMod_C* UThirdPersonInterp_CamMod_C::GetDefaultObj()
{
	static class UThirdPersonInterp_CamMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UThirdPersonInterp_CamMod_C*>(UThirdPersonInterp_CamMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ThirdPersonInterp_CamMod.ThirdPersonInterp_CamMod_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          ViewLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         ViewRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          NewViewLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         NewViewRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetThirdPersonCameraAlpha_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_MinimalViewInfo      CallFunc_GetCameraView_DesiredView                               (None)
// struct Engine_MinimalViewInfo      CallFunc_GetCameraView_DesiredView_1                             (None)
// struct CoreUObject_Vector          CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UThirdPersonInterp_CamMod_C::BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, class AActor* CallFunc_GetViewTarget_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, const struct Engine_MinimalViewInfo& CallFunc_GetCameraView_DesiredView, const struct Engine_MinimalViewInfo& CallFunc_GetCameraView_DesiredView_1, const struct CoreUObject_Vector& CallFunc_VLerp_ReturnValue, const struct CoreUObject_Rotator& CallFunc_RLerp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPersonInterp_CamMod_C", "BlueprintModifyCamera");

	Params::UThirdPersonInterp_CamMod_C_BlueprintModifyCamera_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = ViewLocation;
	Parms.ViewRotation = ViewRotation;
	Parms.FOV = FOV;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetThirdPersonCameraAlpha_ReturnValue = CallFunc_GetThirdPersonCameraAlpha_ReturnValue;
	Parms.CallFunc_GetCameraView_DesiredView = CallFunc_GetCameraView_DesiredView;
	Parms.CallFunc_GetCameraView_DesiredView_1 = CallFunc_GetCameraView_DesiredView_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

}

}


