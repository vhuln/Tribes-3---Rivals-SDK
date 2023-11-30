#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderWallFSM_FoundPlayerState.BP_DefenderWallFSM_FoundPlayerState_C
// (None)

class UClass* UBP_DefenderWallFSM_FoundPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderWallFSM_FoundPlayerState_C");

	return Clss;
}


// BP_DefenderWallFSM_FoundPlayerState_C BP_DefenderWallFSM_FoundPlayerState.Default__BP_DefenderWallFSM_FoundPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderWallFSM_FoundPlayerState_C* UBP_DefenderWallFSM_FoundPlayerState_C::GetDefaultObj()
{
	static class UBP_DefenderWallFSM_FoundPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderWallFSM_FoundPlayerState_C*>(UBP_DefenderWallFSM_FoundPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderWallFSM_FoundPlayerState.BP_DefenderWallFSM_FoundPlayerState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderWallFSM_FoundPlayerState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_FoundPlayerState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderWallFSM_FoundPlayerState.BP_DefenderWallFSM_FoundPlayerState_C.ExecuteUbergraph_BP_DefenderWallFSM_FoundPlayerState
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderWallFSM_FoundPlayerState_C::ExecuteUbergraph_BP_DefenderWallFSM_FoundPlayerState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderWallFSM_FoundPlayerState_C", "ExecuteUbergraph_BP_DefenderWallFSM_FoundPlayerState");

	Params::UBP_DefenderWallFSM_FoundPlayerState_C_ExecuteUbergraph_BP_DefenderWallFSM_FoundPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


