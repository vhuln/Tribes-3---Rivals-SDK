#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Crate.ABP_Crate_C
// (None)

class UClass* UABP_Crate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Crate_C");

	return Clss;
}


// ABP_Crate_C ABP_Crate.Default__ABP_Crate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Crate_C* UABP_Crate_C::GetDefaultObj()
{
	static class UABP_Crate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Crate_C*>(UABP_Crate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Crate.ABP_Crate_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Crate_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Crate_C", "AnimGraph");

	Params::UABP_Crate_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Crate.ABP_Crate_C.OnStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECrateState             NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Crate_C::OnStateChange(enum class ECrateState NewState, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Crate_C", "OnStateChange");

	Params::UABP_Crate_C_OnStateChange_Params Parms{};

	Parms.NewState = NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Crate.ABP_Crate_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Crate_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Crate_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Crate.ABP_Crate_C.ExecuteUbergraph_ABP_Crate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Crate_C::ExecuteUbergraph_ABP_Crate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Crate_C", "ExecuteUbergraph_ABP_Crate");

	Params::UABP_Crate_C_ExecuteUbergraph_ABP_Crate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


