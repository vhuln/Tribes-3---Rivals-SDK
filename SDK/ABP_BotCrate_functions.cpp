#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BotCrate.ABP_BotCrate_C
// (None)

class UClass* UABP_BotCrate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BotCrate_C");

	return Clss;
}


// ABP_BotCrate_C ABP_BotCrate.Default__ABP_BotCrate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BotCrate_C* UABP_BotCrate_C::GetDefaultObj()
{
	static class UABP_BotCrate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BotCrate_C*>(UABP_BotCrate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_BotCrate.ABP_BotCrate_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_BotCrate_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BotCrate_C", "AnimGraph");

	Params::UABP_BotCrate_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_BotCrate.ABP_BotCrate_C.OnStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECrateState             NewCrate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BotCrate_C::OnStateChanged(enum class ECrateState NewCrate, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BotCrate_C", "OnStateChanged");

	Params::UABP_BotCrate_C_OnStateChanged_Params Parms{};

	Parms.NewCrate = NewCrate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_BotCrate.ABP_BotCrate_C.ExecuteUbergraph_ABP_BotCrate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_BotCrate_C::ExecuteUbergraph_ABP_BotCrate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_BotCrate_C", "ExecuteUbergraph_ABP_BotCrate");

	Params::UABP_BotCrate_C_ExecuteUbergraph_ABP_BotCrate_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


