#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Starship_Destroyed_Small.Starship_Destroyed_Small_C
// (Actor)

class UClass* AStarship_Destroyed_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Starship_Destroyed_Small_C");

	return Clss;
}


// Starship_Destroyed_Small_C Starship_Destroyed_Small.Default__Starship_Destroyed_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStarship_Destroyed_Small_C* AStarship_Destroyed_Small_C::GetDefaultObj()
{
	static class AStarship_Destroyed_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStarship_Destroyed_Small_C*>(AStarship_Destroyed_Small_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Starship_Destroyed_Small.Starship_Destroyed_Small_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AStarship_Destroyed_Small_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Starship_Destroyed_Small_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Starship_Destroyed_Small.Starship_Destroyed_Small_C.ExecuteUbergraph_Starship_Destroyed_Small
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStarship_Destroyed_Small_C::ExecuteUbergraph_Starship_Destroyed_Small(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Starship_Destroyed_Small_C", "ExecuteUbergraph_Starship_Destroyed_Small");

	Params::AStarship_Destroyed_Small_C_ExecuteUbergraph_Starship_Destroyed_Small_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


