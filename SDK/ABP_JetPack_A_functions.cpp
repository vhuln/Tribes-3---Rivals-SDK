#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_JetPack_A.ABP_JetPack_A_C
// (None)

class UClass* UABP_JetPack_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_JetPack_A_C");

	return Clss;
}


// ABP_JetPack_A_C ABP_JetPack_A.Default__ABP_JetPack_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_JetPack_A_C* UABP_JetPack_A_C::GetDefaultObj()
{
	static class UABP_JetPack_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_JetPack_A_C*>(UABP_JetPack_A_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_JetPack_A.ABP_JetPack_A_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_JetPack_A_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_JetPack_A_C", "AnimGraph");

	Params::UABP_JetPack_A_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_JetPack_A.ABP_JetPack_A_C.ExecuteUbergraph_ABP_JetPack_A
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_JetPack_A_C::ExecuteUbergraph_ABP_JetPack_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_JetPack_A_C", "ExecuteUbergraph_ABP_JetPack_A");

	Params::UABP_JetPack_A_C_ExecuteUbergraph_ABP_JetPack_A_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


