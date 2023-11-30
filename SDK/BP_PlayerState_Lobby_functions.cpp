#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerState_Lobby.BP_PlayerState_Lobby_C
// (Actor)

class UClass* ABP_PlayerState_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerState_Lobby_C");

	return Clss;
}


// BP_PlayerState_Lobby_C BP_PlayerState_Lobby.Default__BP_PlayerState_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerState_Lobby_C* ABP_PlayerState_Lobby_C::GetDefaultObj()
{
	static class ABP_PlayerState_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerState_Lobby_C*>(ABP_PlayerState_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}

}


