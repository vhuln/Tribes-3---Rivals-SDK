#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathCrate_Support_Scanner.BP_DeathCrate_Support_Scanner_C
// (Actor)

class UClass* ABP_DeathCrate_Support_Scanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathCrate_Support_Scanner_C");

	return Clss;
}


// BP_DeathCrate_Support_Scanner_C BP_DeathCrate_Support_Scanner.Default__BP_DeathCrate_Support_Scanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeathCrate_Support_Scanner_C* ABP_DeathCrate_Support_Scanner_C::GetDefaultObj()
{
	static class ABP_DeathCrate_Support_Scanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeathCrate_Support_Scanner_C*>(ABP_DeathCrate_Support_Scanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeathCrate_Support_Scanner.BP_DeathCrate_Support_Scanner_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DeathCrate_Support_Scanner_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathCrate_Support_Scanner_C", "ReceiveActorBeginOverlap");

	Params::ABP_DeathCrate_Support_Scanner_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeathCrate_Support_Scanner.BP_DeathCrate_Support_Scanner_C.ExecuteUbergraph_BP_DeathCrate_Support_Scanner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_DeathCrate_Support_Scanner_C::ExecuteUbergraph_BP_DeathCrate_Support_Scanner(int32 EntryPoint, class AActor* K2Node_Event_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeathCrate_Support_Scanner_C", "ExecuteUbergraph_BP_DeathCrate_Support_Scanner");

	Params::ABP_DeathCrate_Support_Scanner_C_ExecuteUbergraph_BP_DeathCrate_Support_Scanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


