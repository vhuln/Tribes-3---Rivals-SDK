#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Drop_Med_Kit.ABP_Drop_Med_Kit_C
// (None)

class UClass* UABP_Drop_Med_Kit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Drop_Med_Kit_C");

	return Clss;
}


// ABP_Drop_Med_Kit_C ABP_Drop_Med_Kit.Default__ABP_Drop_Med_Kit_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UABP_Drop_Med_Kit_C* UABP_Drop_Med_Kit_C::GetDefaultObj()
{
	static class UABP_Drop_Med_Kit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Drop_Med_Kit_C*>(UABP_Drop_Med_Kit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Drop_Med_Kit.ABP_Drop_Med_Kit_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Drop_Med_Kit_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Drop_Med_Kit_C", "AnimGraph");

	Params::UABP_Drop_Med_Kit_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Drop_Med_Kit.ABP_Drop_Med_Kit_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Drop_Med_Kit_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Drop_Med_Kit_C", "BlueprintUpdateAnimation");

	Params::UABP_Drop_Med_Kit_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Drop_Med_Kit.ABP_Drop_Med_Kit_C.ExecuteUbergraph_ABP_Drop_Med_Kit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Drop_Med_Kit_C::ExecuteUbergraph_ABP_Drop_Med_Kit(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Drop_Med_Kit_C", "ExecuteUbergraph_ABP_Drop_Med_Kit");

	Params::UABP_Drop_Med_Kit_C_ExecuteUbergraph_ABP_Drop_Med_Kit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


