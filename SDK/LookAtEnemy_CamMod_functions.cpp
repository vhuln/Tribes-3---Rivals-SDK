#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LookAtEnemy_CamMod.LookAtEnemy_CamMod_C
// (None)

class UClass* ULookAtEnemy_CamMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LookAtEnemy_CamMod_C");

	return Clss;
}


// LookAtEnemy_CamMod_C LookAtEnemy_CamMod.Default__LookAtEnemy_CamMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULookAtEnemy_CamMod_C* ULookAtEnemy_CamMod_C::GetDefaultObj()
{
	static class ULookAtEnemy_CamMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULookAtEnemy_CamMod_C*>(ULookAtEnemy_CamMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LookAtEnemy_CamMod.LookAtEnemy_CamMod_C.StartZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULookAtEnemy_CamMod_C::StartZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LookAtEnemy_CamMod_C", "StartZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LookAtEnemy_CamMod.LookAtEnemy_CamMod_C.BlueprintModifyCamera
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          ViewLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         ViewRotation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          NewViewLocation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         NewViewRotation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              NewFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMin_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_REase_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_REase_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULookAtEnemy_CamMod_C::BlueprintModifyCamera(float DeltaTime, const struct CoreUObject_Vector& ViewLocation, const struct CoreUObject_Rotator& ViewRotation, float FOV, struct CoreUObject_Vector* NewViewLocation, struct CoreUObject_Rotator* NewViewRotation, float* NewFOV, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FMin_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct CoreUObject_Rotator& CallFunc_REase_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_REase_Alpha_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LookAtEnemy_CamMod_C", "BlueprintModifyCamera");

	Params::ULookAtEnemy_CamMod_C_BlueprintModifyCamera_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ViewLocation = ViewLocation;
	Parms.ViewRotation = ViewRotation;
	Parms.FOV = FOV;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_REase_ReturnValue = CallFunc_REase_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_REase_Alpha_ImplicitCast = CallFunc_REase_Alpha_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewViewLocation != nullptr)
		*NewViewLocation = std::move(Parms.NewViewLocation);

	if (NewViewRotation != nullptr)
		*NewViewRotation = std::move(Parms.NewViewRotation);

	if (NewFOV != nullptr)
		*NewFOV = Parms.NewFOV;

}


// Function LookAtEnemy_CamMod.LookAtEnemy_CamMod_C.OnEnabled
// (Event, Public, BlueprintEvent)
// Parameters:

void ULookAtEnemy_CamMod_C::OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LookAtEnemy_CamMod_C", "OnEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LookAtEnemy_CamMod.LookAtEnemy_CamMod_C.OnModifierDisabled
// (Event, Public, BlueprintEvent)
// Parameters:

void ULookAtEnemy_CamMod_C::OnModifierDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LookAtEnemy_CamMod_C", "OnModifierDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LookAtEnemy_CamMod.LookAtEnemy_CamMod_C.OnAddedToCamera
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULookAtEnemy_CamMod_C::OnAddedToCamera(class APlayerCameraManager* Camera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LookAtEnemy_CamMod_C", "OnAddedToCamera");

	Params::ULookAtEnemy_CamMod_C_OnAddedToCamera_Params Parms{};

	Parms.Camera = Camera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LookAtEnemy_CamMod.LookAtEnemy_CamMod_C.ExecuteUbergraph_LookAtEnemy_CamMod
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        K2Node_Event_Camera                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULookAtEnemy_CamMod_C::ExecuteUbergraph_LookAtEnemy_CamMod(int32 EntryPoint, class APlayerCameraManager* K2Node_Event_Camera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LookAtEnemy_CamMod_C", "ExecuteUbergraph_LookAtEnemy_CamMod");

	Params::ULookAtEnemy_CamMod_C_ExecuteUbergraph_LookAtEnemy_CamMod_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Camera = K2Node_Event_Camera;

	UObject::ProcessEvent(Func, &Parms);

}

}


