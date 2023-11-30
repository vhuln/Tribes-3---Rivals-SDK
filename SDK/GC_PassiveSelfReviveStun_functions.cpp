#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_PassiveSelfReviveStun.GC_PassiveSelfReviveStun_C
// (Actor)

class UClass* AGC_PassiveSelfReviveStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_PassiveSelfReviveStun_C");

	return Clss;
}


// GC_PassiveSelfReviveStun_C GC_PassiveSelfReviveStun.Default__GC_PassiveSelfReviveStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_PassiveSelfReviveStun_C* AGC_PassiveSelfReviveStun_C::GetDefaultObj()
{
	static class AGC_PassiveSelfReviveStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_PassiveSelfReviveStun_C*>(AGC_PassiveSelfReviveStun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_PassiveSelfReviveStun.GC_PassiveSelfReviveStun_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_WithSpline_C*K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnRemove_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_PassiveSelfReviveStun_C::OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_ValChar_Master_WithSpline_C* K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnRemove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_PassiveSelfReviveStun_C", "OnRemove");

	Params::AGC_PassiveSelfReviveStun_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline = K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnRemove_ReturnValue = CallFunc_OnRemove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_PassiveSelfReviveStun.GC_PassiveSelfReviveStun_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_WithSpline_C*K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_PassiveSelfReviveStun_C::OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_ValChar_Master_WithSpline_C* K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_PassiveSelfReviveStun_C", "OnActive");

	Params::AGC_PassiveSelfReviveStun_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline = K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_OnActive_ReturnValue = CallFunc_OnActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


