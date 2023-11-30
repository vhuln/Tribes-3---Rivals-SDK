#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
// (Actor, Pawn)

class UClass* ABP_SpectatorPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpectatorPawn_C");

	return Clss;
}


// BP_SpectatorPawn_C BP_SpectatorPawn.Default__BP_SpectatorPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpectatorPawn_C* ABP_SpectatorPawn_C::GetDefaultObj()
{
	static class ABP_SpectatorPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpectatorPawn_C*>(ABP_SpectatorPawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SpectatorPawn_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorPawn_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorPawn_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorPawn_C", "K2_OnBecomeViewTarget");

	Params::ABP_SpectatorPawn_C_K2_OnBecomeViewTarget_Params Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_PC                                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SpectatorPawn_C::ExecuteUbergraph_BP_SpectatorPawn(int32 EntryPoint, class APlayerController* K2Node_Event_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpectatorPawn_C", "ExecuteUbergraph_BP_SpectatorPawn");

	Params::ABP_SpectatorPawn_C_ExecuteUbergraph_BP_SpectatorPawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PC = K2Node_Event_PC;

	UObject::ProcessEvent(Func, &Parms);

}

}


