#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CF_Wind.BP_CF_Wind_C
// (Actor)

class UClass* ABP_CF_Wind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CF_Wind_C");

	return Clss;
}


// BP_CF_Wind_C BP_CF_Wind.Default__BP_CF_Wind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CF_Wind_C* ABP_CF_Wind_C::GetDefaultObj()
{
	static class ABP_CF_Wind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CF_Wind_C*>(ABP_CF_Wind_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CF_Wind.BP_CF_Wind_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CF_Wind_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CF_Wind_C", "UserConstructionScript");

	Params::ABP_CF_Wind_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CF_Wind.BP_CF_Wind_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CF_Wind_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CF_Wind_C", "ReceiveTick");

	Params::ABP_CF_Wind_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CF_Wind.BP_CF_Wind_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CF_Wind_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CF_Wind_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CF_Wind.BP_CF_Wind_C.ExecuteUbergraph_BP_CF_Wind
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CF_Wind_C::ExecuteUbergraph_BP_CF_Wind(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CF_Wind_C", "ExecuteUbergraph_BP_CF_Wind");

	Params::ABP_CF_Wind_C_ExecuteUbergraph_BP_CF_Wind_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


