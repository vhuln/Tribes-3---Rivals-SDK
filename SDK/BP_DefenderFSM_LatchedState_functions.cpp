#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_LatchedState.BP_DefenderFSM_LatchedState_C
// (None)

class UClass* UBP_DefenderFSM_LatchedState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_LatchedState_C");

	return Clss;
}


// BP_DefenderFSM_LatchedState_C BP_DefenderFSM_LatchedState.Default__BP_DefenderFSM_LatchedState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_LatchedState_C* UBP_DefenderFSM_LatchedState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_LatchedState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_LatchedState_C*>(UBP_DefenderFSM_LatchedState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderFSM_LatchedState.BP_DefenderFSM_LatchedState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderFSM_LatchedState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_LatchedState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderFSM_LatchedState.BP_DefenderFSM_LatchedState_C.EndStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderFSM_LatchedState_C::EndStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_LatchedState_C", "EndStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderFSM_LatchedState.BP_DefenderFSM_LatchedState_C.ExecuteUbergraph_BP_DefenderFSM_LatchedState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderFSM_LatchedState_C::ExecuteUbergraph_BP_DefenderFSM_LatchedState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_LatchedState_C", "ExecuteUbergraph_BP_DefenderFSM_LatchedState");

	Params::UBP_DefenderFSM_LatchedState_C_ExecuteUbergraph_BP_DefenderFSM_LatchedState_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


