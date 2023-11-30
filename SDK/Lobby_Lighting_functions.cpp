#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Lobby_Lighting.Lobby_Lighting_C
// (Actor)

class UClass* ALobby_Lighting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Lobby_Lighting_C");

	return Clss;
}


// Lobby_Lighting_C Lobby_Lighting.Default__Lobby_Lighting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALobby_Lighting_C* ALobby_Lighting_C::GetDefaultObj()
{
	static class ALobby_Lighting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALobby_Lighting_C*>(ALobby_Lighting_C::StaticClass()->DefaultObject);

	return Default;
}

}


