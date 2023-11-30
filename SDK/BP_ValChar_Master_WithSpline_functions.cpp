#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C
// (Actor, Pawn)

class UClass* ABP_ValChar_Master_WithSpline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValChar_Master_WithSpline_C");

	return Clss;
}


// BP_ValChar_Master_WithSpline_C BP_ValChar_Master_WithSpline.Default__BP_ValChar_Master_WithSpline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValChar_Master_WithSpline_C* ABP_ValChar_Master_WithSpline_C::GetDefaultObj()
{
	static class ABP_ValChar_Master_WithSpline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValChar_Master_WithSpline_C*>(ABP_ValChar_Master_WithSpline_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.IsStunned_Server
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutStunned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::IsStunned_Server(bool* OutStunned, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "IsStunned_Server");

	Params::ABP_ValChar_Master_WithSpline_C_IsStunned_Server_Params Parms{};

	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStunned != nullptr)
		*OutStunned = Parms.OutStunned;

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.ShouldPlayStunnedVFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               OutStunned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::ShouldPlayStunnedVFX(bool* OutStunned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "ShouldPlayStunnedVFX");

	Params::ABP_ValChar_Master_WithSpline_C_ShouldPlayStunnedVFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutStunned != nullptr)
		*OutStunned = Parms.OutStunned;

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.ToggleStunnedVfx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOn                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Conv_LinearColorToVector_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::ToggleStunnedVfx(bool bOn, const struct CoreUObject_LinearColor& K2Node_MakeStruct_LinearColor, const struct CoreUObject_Vector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct CoreUObject_LinearColor& K2Node_MakeStruct_LinearColor_1, const struct CoreUObject_Vector& CallFunc_Conv_LinearColorToVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "ToggleStunnedVfx");

	Params::ABP_ValChar_Master_WithSpline_C_ToggleStunnedVfx_Params Parms{};

	Parms.bOn = bOn;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue_1 = CallFunc_Conv_LinearColorToVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.UpdateTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocalLerpValue                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          LocalDirection                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Lerp_B_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::UpdateTransform(double Alpha, double LocalLerpValue, const struct CoreUObject_Vector& LocalDirection, double CallFunc_SelectFloat_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotFromX_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast, double CallFunc_Lerp_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "UpdateTransform");

	Params::ABP_ValChar_Master_WithSpline_C_UpdateTransform_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.LocalLerpValue = LocalLerpValue;
	Parms.LocalDirection = LocalDirection;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue = CallFunc_GetDirectionAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast = CallFunc_GetDirectionAtDistanceAlongSpline_Distance_ImplicitCast;
	Parms.CallFunc_Lerp_B_ImplicitCast = CallFunc_Lerp_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.SetTravelCompletionTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsClosedLoop_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPlayRate_NewRate_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::SetTravelCompletionTime(bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSplineLength_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPlayRate_NewRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "SetTravelCompletionTime");

	Params::ABP_ValChar_Master_WithSpline_C_SetTravelCompletionTime_Params Parms{};

	Parms.CallFunc_IsClosedLoop_ReturnValue = CallFunc_IsClosedLoop_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_GetMaxSpeed_ReturnValue = CallFunc_GetMaxSpeed_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetPlayRate_NewRate_ImplicitCast = CallFunc_SetPlayRate_NewRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.IsFollowingSpline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFollowing                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::IsFollowingSpline(bool* IsFollowing, bool CallFunc_IsPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "IsFollowingSpline");

	Params::ABP_ValChar_Master_WithSpline_C_IsFollowingSpline_Params Parms{};

	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFollowing != nullptr)
		*IsFollowing = Parms.IsFollowing;

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.MoveAlongSpline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_WithSpline_C::MoveAlongSpline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "MoveAlongSpline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.MoveAlongSpline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_WithSpline_C::MoveAlongSpline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "MoveAlongSpline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.FollowSpline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_WithSpline_C::FollowSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "FollowSpline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.StopFollowingSpline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_WithSpline_C::StopFollowingSpline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "StopFollowingSpline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master_WithSpline.BP_ValChar_Master_WithSpline_C.ExecuteUbergraph_BP_ValChar_Master_WithSpline
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClosedLoop_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateTransform_Alpha_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_WithSpline_C::ExecuteUbergraph_BP_ValChar_Master_WithSpline(int32 EntryPoint, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_UpdateTransform_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_WithSpline_C", "ExecuteUbergraph_BP_ValChar_Master_WithSpline");

	Params::ABP_ValChar_Master_WithSpline_C_ExecuteUbergraph_BP_ValChar_Master_WithSpline_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsClosedLoop_ReturnValue = CallFunc_IsClosedLoop_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_UpdateTransform_Alpha_ImplicitCast = CallFunc_UpdateTransform_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


