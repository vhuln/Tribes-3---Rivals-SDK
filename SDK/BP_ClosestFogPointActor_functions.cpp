#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ClosestFogPointActor.BP_ClosestFogPointActor_C
// (Actor)

class UClass* ABP_ClosestFogPointActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ClosestFogPointActor_C");

	return Clss;
}


// BP_ClosestFogPointActor_C BP_ClosestFogPointActor.Default__BP_ClosestFogPointActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ClosestFogPointActor_C* ABP_ClosestFogPointActor_C::GetDefaultObj()
{
	static class ABP_ClosestFogPointActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ClosestFogPointActor_C*>(ABP_ClosestFogPointActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ClosestFogPointActor.BP_ClosestFogPointActor_C.OnFogUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ClosestFogPointActor_C::OnFogUpdated(float Distance, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClosestFogPointActor_C", "OnFogUpdated");

	Params::ABP_ClosestFogPointActor_C_OnFogUpdated_Params Parms{};

	Parms.Distance = Distance;
	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ClosestFogPointActor.BP_ClosestFogPointActor_C.OnFogStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ClosestFogPointActor_C::OnFogStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClosestFogPointActor_C", "OnFogStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ClosestFogPointActor.BP_ClosestFogPointActor_C.OnCellDestroyed
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               SoundToPlay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ClosestFogPointActor_C::OnCellDestroyed(class UAkAudioEvent* SoundToPlay, struct CoreUObject_Vector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClosestFogPointActor_C", "OnCellDestroyed");

	Params::ABP_ClosestFogPointActor_C_OnCellDestroyed_Params Parms{};

	Parms.SoundToPlay = SoundToPlay;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ClosestFogPointActor.BP_ClosestFogPointActor_C.ExecuteUbergraph_BP_ClosestFogPointActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Event_SoundToPlay                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          K2Node_Event_Location                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Distance                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Radius                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ClosestFogPointActor_C::ExecuteUbergraph_BP_ClosestFogPointActor(int32 EntryPoint, class UAkAudioEvent* K2Node_Event_SoundToPlay, const struct CoreUObject_Vector& K2Node_Event_Location, float K2Node_Event_Distance, float K2Node_Event_Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ClosestFogPointActor_C", "ExecuteUbergraph_BP_ClosestFogPointActor");

	Params::ABP_ClosestFogPointActor_C_ExecuteUbergraph_BP_ClosestFogPointActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SoundToPlay = K2Node_Event_SoundToPlay;
	Parms.K2Node_Event_Location = K2Node_Event_Location;
	Parms.K2Node_Event_Distance = K2Node_Event_Distance;
	Parms.K2Node_Event_Radius = K2Node_Event_Radius;

	UObject::ProcessEvent(Func, &Parms);

}

}


