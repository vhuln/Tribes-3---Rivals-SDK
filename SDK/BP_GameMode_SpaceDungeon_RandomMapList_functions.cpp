#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameMode_SpaceDungeon_RandomMapList.BP_GameMode_SpaceDungeon_RandomMapList_C
// (Actor)

class UClass* ABP_GameMode_SpaceDungeon_RandomMapList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameMode_SpaceDungeon_RandomMapList_C");

	return Clss;
}


// BP_GameMode_SpaceDungeon_RandomMapList_C BP_GameMode_SpaceDungeon_RandomMapList.Default__BP_GameMode_SpaceDungeon_RandomMapList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameMode_SpaceDungeon_RandomMapList_C* ABP_GameMode_SpaceDungeon_RandomMapList_C::GetDefaultObj()
{
	static class ABP_GameMode_SpaceDungeon_RandomMapList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameMode_SpaceDungeon_RandomMapList_C*>(ABP_GameMode_SpaceDungeon_RandomMapList_C::StaticClass()->DefaultObject);

	return Default;
}

}


