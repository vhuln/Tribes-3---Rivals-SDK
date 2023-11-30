#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderMainFSM_TetherState.BP_DefenderMainFSM_TetherState_C
// (None)

class UClass* UBP_DefenderMainFSM_TetherState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderMainFSM_TetherState_C");

	return Clss;
}


// BP_DefenderMainFSM_TetherState_C BP_DefenderMainFSM_TetherState.Default__BP_DefenderMainFSM_TetherState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderMainFSM_TetherState_C* UBP_DefenderMainFSM_TetherState_C::GetDefaultObj()
{
	static class UBP_DefenderMainFSM_TetherState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderMainFSM_TetherState_C*>(UBP_DefenderMainFSM_TetherState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderMainFSM_TetherState.BP_DefenderMainFSM_TetherState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderMainFSM_TetherState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderMainFSM_TetherState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderMainFSM_TetherState.BP_DefenderMainFSM_TetherState_C.EndStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderMainFSM_TetherState_C::EndStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderMainFSM_TetherState_C", "EndStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderMainFSM_TetherState.BP_DefenderMainFSM_TetherState_C.InitializeStateBP
// (BlueprintEvent)
// Parameters:

void UBP_DefenderMainFSM_TetherState_C::InitializeStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderMainFSM_TetherState_C", "InitializeStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderMainFSM_TetherState.BP_DefenderMainFSM_TetherState_C.ExecuteUbergraph_BP_DefenderMainFSM_TetherState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderMainFSM_TetherState_C::ExecuteUbergraph_BP_DefenderMainFSM_TetherState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderMainFSM_TetherState_C", "ExecuteUbergraph_BP_DefenderMainFSM_TetherState");

	Params::UBP_DefenderMainFSM_TetherState_C_ExecuteUbergraph_BP_DefenderMainFSM_TetherState_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


