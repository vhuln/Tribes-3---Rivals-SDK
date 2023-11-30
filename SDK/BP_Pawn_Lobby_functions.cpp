#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pawn_Lobby.BP_Pawn_Lobby_C
// (Actor, Pawn)

class UClass* ABP_Pawn_Lobby_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pawn_Lobby_C");

	return Clss;
}


// BP_Pawn_Lobby_C BP_Pawn_Lobby.Default__BP_Pawn_Lobby_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pawn_Lobby_C* ABP_Pawn_Lobby_C::GetDefaultObj()
{
	static class ABP_Pawn_Lobby_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pawn_Lobby_C*>(ABP_Pawn_Lobby_C::StaticClass()->DefaultObject);

	return Default;
}

}


