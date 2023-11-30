#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_AssaultRifleB_3p.ABP_AssaultRifleB_3p_C
// (None)

class UClass* UABP_AssaultRifleB_3p_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_AssaultRifleB_3p_C");

	return Clss;
}


// ABP_AssaultRifleB_3p_C ABP_AssaultRifleB_3p.Default__ABP_AssaultRifleB_3p_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_AssaultRifleB_3p_C* UABP_AssaultRifleB_3p_C::GetDefaultObj()
{
	static class UABP_AssaultRifleB_3p_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_AssaultRifleB_3p_C*>(UABP_AssaultRifleB_3p_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_AssaultRifleB_3p.ABP_AssaultRifleB_3p_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_AssaultRifleB_3p_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifleB_3p_C", "AnimGraph");

	Params::UABP_AssaultRifleB_3p_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_AssaultRifleB_3p.ABP_AssaultRifleB_3p_C.ExecuteUbergraph_ABP_AssaultRifleB_3p
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_AssaultRifleB_3p_C::ExecuteUbergraph_ABP_AssaultRifleB_3p(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_AssaultRifleB_3p_C", "ExecuteUbergraph_ABP_AssaultRifleB_3p");

	Params::UABP_AssaultRifleB_3p_C_ExecuteUbergraph_ABP_AssaultRifleB_3p_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


