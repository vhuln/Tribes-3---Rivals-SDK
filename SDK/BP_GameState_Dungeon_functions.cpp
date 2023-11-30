#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameState_Dungeon.BP_GameState_Dungeon_C
// (Actor)

class UClass* ABP_GameState_Dungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameState_Dungeon_C");

	return Clss;
}


// BP_GameState_Dungeon_C BP_GameState_Dungeon.Default__BP_GameState_Dungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameState_Dungeon_C* ABP_GameState_Dungeon_C::GetDefaultObj()
{
	static class ABP_GameState_Dungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameState_Dungeon_C*>(ABP_GameState_Dungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}


