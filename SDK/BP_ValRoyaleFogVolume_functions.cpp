#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C
// (Actor)

class UClass* ABP_ValRoyaleFogVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValRoyaleFogVolume_C");

	return Clss;
}


// BP_ValRoyaleFogVolume_C BP_ValRoyaleFogVolume.Default__BP_ValRoyaleFogVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValRoyaleFogVolume_C* ABP_ValRoyaleFogVolume_C::GetDefaultObj()
{
	static class ABP_ValRoyaleFogVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValRoyaleFogVolume_C*>(ABP_ValRoyaleFogVolume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ValRoyaleFogVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValRoyaleFogVolume_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.EnableFog
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValRoyaleFogVolume_C::EnableFog(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValRoyaleFogVolume_C", "EnableFog");

	Params::ABP_ValRoyaleFogVolume_C_EnableFog_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValRoyaleFogVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValRoyaleFogVolume_C", "ReceiveTick");

	Params::ABP_ValRoyaleFogVolume_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.ExecuteUbergraph_BP_ValRoyaleFogVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_CurrentFogCircleDataCallFunc_GetCurrentData_ReturnValue                              (NoDestructor)
// struct Engine_HitResult            CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValRoyaleFogVolume_C::ExecuteUbergraph_BP_ValRoyaleFogVolume(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_bEnabled, const struct Valhalla_CurrentFogCircleData& CallFunc_GetCurrentData_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValRoyaleFogVolume_C", "ExecuteUbergraph_BP_ValRoyaleFogVolume");

	Params::ABP_ValRoyaleFogVolume_C_ExecuteUbergraph_BP_ValRoyaleFogVolume_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.CallFunc_GetCurrentData_ReturnValue = CallFunc_GetCurrentData_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


