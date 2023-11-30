#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lobby_Terrain.Lobby_Terrain_C
// (Actor)

class UClass* ALobby_Terrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_Terrain_C");

	return Clss;
}


// Lobby_Terrain_C Lobby_Terrain.Default__Lobby_Terrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobby_Terrain_C* ALobby_Terrain_C::GetDefaultObj()
{
	static class ALobby_Terrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobby_Terrain_C*>(ALobby_Terrain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Lobby_Terrain.Lobby_Terrain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALobby_Terrain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Terrain_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Lobby_Terrain.Lobby_Terrain_C.ExecuteUbergraph_Lobby_Terrain
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALobby_Terrain_C::ExecuteUbergraph_Lobby_Terrain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lobby_Terrain_C", "ExecuteUbergraph_Lobby_Terrain");

	Params::ALobby_Terrain_C_ExecuteUbergraph_Lobby_Terrain_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


