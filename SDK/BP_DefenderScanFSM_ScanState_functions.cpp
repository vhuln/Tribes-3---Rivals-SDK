#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderScanFSM_ScanState.BP_DefenderScanFSM_ScanState_C
// (None)

class UClass* UBP_DefenderScanFSM_ScanState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderScanFSM_ScanState_C");

	return Clss;
}


// BP_DefenderScanFSM_ScanState_C BP_DefenderScanFSM_ScanState.Default__BP_DefenderScanFSM_ScanState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderScanFSM_ScanState_C* UBP_DefenderScanFSM_ScanState_C::GetDefaultObj()
{
	static class UBP_DefenderScanFSM_ScanState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderScanFSM_ScanState_C*>(UBP_DefenderScanFSM_ScanState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderScanFSM_ScanState.BP_DefenderScanFSM_ScanState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_ScanState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_ScanState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM_ScanState.BP_DefenderScanFSM_ScanState_C.EndStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderScanFSM_ScanState_C::EndStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_ScanState_C", "EndStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderScanFSM_ScanState.BP_DefenderScanFSM_ScanState_C.ExecuteUbergraph_BP_DefenderScanFSM_ScanState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderScanFSM_ScanState_C::ExecuteUbergraph_BP_DefenderScanFSM_ScanState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderScanFSM_ScanState_C", "ExecuteUbergraph_BP_DefenderScanFSM_ScanState");

	Params::UBP_DefenderScanFSM_ScanState_C_ExecuteUbergraph_BP_DefenderScanFSM_ScanState_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


