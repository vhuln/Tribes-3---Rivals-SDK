#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Motion_Sensor.ABP_Motion_Sensor_C
// (None)

class UClass* UABP_Motion_Sensor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Motion_Sensor_C");

	return Clss;
}


// ABP_Motion_Sensor_C ABP_Motion_Sensor.Default__ABP_Motion_Sensor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Motion_Sensor_C* UABP_Motion_Sensor_C::GetDefaultObj()
{
	static class UABP_Motion_Sensor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Motion_Sensor_C*>(UABP_Motion_Sensor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Motion_Sensor.ABP_Motion_Sensor_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Motion_Sensor_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Motion_Sensor_C", "AnimGraph");

	Params::UABP_Motion_Sensor_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Motion_Sensor.ABP_Motion_Sensor_C.ExecuteUbergraph_ABP_Motion_Sensor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Motion_Sensor_C::ExecuteUbergraph_ABP_Motion_Sensor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Motion_Sensor_C", "ExecuteUbergraph_ABP_Motion_Sensor");

	Params::UABP_Motion_Sensor_C_ExecuteUbergraph_ABP_Motion_Sensor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


