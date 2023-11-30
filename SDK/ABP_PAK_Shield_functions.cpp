#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_PAK_Shield.ABP_PAK_Shield_C
// (None)

class UClass* UABP_PAK_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_PAK_Shield_C");

	return Clss;
}


// ABP_PAK_Shield_C ABP_PAK_Shield.Default__ABP_PAK_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_PAK_Shield_C* UABP_PAK_Shield_C::GetDefaultObj()
{
	static class UABP_PAK_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_PAK_Shield_C*>(UABP_PAK_Shield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_PAK_Shield.ABP_PAK_Shield_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_PAK_Shield_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PAK_Shield_C", "AnimGraph");

	Params::UABP_PAK_Shield_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_PAK_Shield.ABP_PAK_Shield_C.ExecuteUbergraph_ABP_PAK_Shield
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_PAK_Shield_C::ExecuteUbergraph_ABP_PAK_Shield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_PAK_Shield_C", "ExecuteUbergraph_ABP_PAK_Shield");

	Params::UABP_PAK_Shield_C_ExecuteUbergraph_ABP_PAK_Shield_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


