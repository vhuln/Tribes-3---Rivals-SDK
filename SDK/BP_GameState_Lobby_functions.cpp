#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameState_Lobby.BP_GameState_Lobby_C
// (Actor)

class UClass* ABP_GameState_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameState_Lobby_C");

	return Clss;
}


// BP_GameState_Lobby_C BP_GameState_Lobby.Default__BP_GameState_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameState_Lobby_C* ABP_GameState_Lobby_C::GetDefaultObj()
{
	static class ABP_GameState_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameState_Lobby_C*>(ABP_GameState_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}

}


