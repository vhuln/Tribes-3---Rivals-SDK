#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DestructibleDoor_BuildingA2_Lrg1.BP_DestructibleDoor_BuildingA2_Lrg1_C
// (Actor)

class UClass* ABP_DestructibleDoor_BuildingA2_Lrg1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DestructibleDoor_BuildingA2_Lrg1_C");

	return Clss;
}


// BP_DestructibleDoor_BuildingA2_Lrg1_C BP_DestructibleDoor_BuildingA2_Lrg1.Default__BP_DestructibleDoor_BuildingA2_Lrg1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DestructibleDoor_BuildingA2_Lrg1_C* ABP_DestructibleDoor_BuildingA2_Lrg1_C::GetDefaultObj()
{
	static class ABP_DestructibleDoor_BuildingA2_Lrg1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DestructibleDoor_BuildingA2_Lrg1_C*>(ABP_DestructibleDoor_BuildingA2_Lrg1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DestructibleDoor_BuildingA2_Lrg1.BP_DestructibleDoor_BuildingA2_Lrg1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DestructibleDoor_BuildingA2_Lrg1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DestructibleDoor_BuildingA2_Lrg1_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DestructibleDoor_BuildingA2_Lrg1.BP_DestructibleDoor_BuildingA2_Lrg1_C.ExecuteUbergraph_BP_DestructibleDoor_BuildingA2_Lrg1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DestructibleDoor_BuildingA2_Lrg1_C::ExecuteUbergraph_BP_DestructibleDoor_BuildingA2_Lrg1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DestructibleDoor_BuildingA2_Lrg1_C", "ExecuteUbergraph_BP_DestructibleDoor_BuildingA2_Lrg1");

	Params::ABP_DestructibleDoor_BuildingA2_Lrg1_C_ExecuteUbergraph_BP_DestructibleDoor_BuildingA2_Lrg1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


