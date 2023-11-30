#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_3p_Minigun.ABP_3p_Minigun_C
// (None)

class UClass* UABP_3p_Minigun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_3p_Minigun_C");

	return Clss;
}


// ABP_3p_Minigun_C ABP_3p_Minigun.Default__ABP_3p_Minigun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_3p_Minigun_C* UABP_3p_Minigun_C::GetDefaultObj()
{
	static class UABP_3p_Minigun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_3p_Minigun_C*>(UABP_3p_Minigun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_3p_Minigun.ABP_3p_Minigun_C.WeaponLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct Engine_PoseLink             WeaponLayer                                                      (Parm, OutParm, NoDestructor)

void UABP_3p_Minigun_C::WeaponLayer(struct Engine_PoseLink* WeaponLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_3p_Minigun_C", "WeaponLayer");

	Params::UABP_3p_Minigun_C_WeaponLayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponLayer != nullptr)
		*WeaponLayer = std::move(Parms.WeaponLayer);

}


// Function ABP_3p_Minigun.ABP_3p_Minigun_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_3p_Minigun_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_3p_Minigun_C", "AnimGraph");

	Params::UABP_3p_Minigun_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_3p_Minigun.ABP_3p_Minigun_C.ExecuteUbergraph_ABP_3p_Minigun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_3p_Minigun_C::ExecuteUbergraph_ABP_3p_Minigun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_3p_Minigun_C", "ExecuteUbergraph_ABP_3p_Minigun");

	Params::UABP_3p_Minigun_C_ExecuteUbergraph_ABP_3p_Minigun_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


