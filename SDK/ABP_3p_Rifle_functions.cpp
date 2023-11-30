#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_3p_Rifle.ABP_3p_Rifle_C
// (None)

class UClass* UABP_3p_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_3p_Rifle_C");

	return Clss;
}


// ABP_3p_Rifle_C ABP_3p_Rifle.Default__ABP_3p_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_3p_Rifle_C* UABP_3p_Rifle_C::GetDefaultObj()
{
	static class UABP_3p_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_3p_Rifle_C*>(UABP_3p_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_3p_Rifle.ABP_3p_Rifle_C.WeaponLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct Engine_PoseLink             WeaponLayer                                                      (Parm, OutParm, NoDestructor)

void UABP_3p_Rifle_C::WeaponLayer(struct Engine_PoseLink* WeaponLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_3p_Rifle_C", "WeaponLayer");

	Params::UABP_3p_Rifle_C_WeaponLayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WeaponLayer != nullptr)
		*WeaponLayer = std::move(Parms.WeaponLayer);

}


// Function ABP_3p_Rifle.ABP_3p_Rifle_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_3p_Rifle_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_3p_Rifle_C", "AnimGraph");

	Params::UABP_3p_Rifle_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_3p_Rifle.ABP_3p_Rifle_C.ExecuteUbergraph_ABP_3p_Rifle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_3p_Rifle_C::ExecuteUbergraph_ABP_3p_Rifle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_3p_Rifle_C", "ExecuteUbergraph_ABP_3p_Rifle");

	Params::UABP_3p_Rifle_C_ExecuteUbergraph_ABP_3p_Rifle_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


