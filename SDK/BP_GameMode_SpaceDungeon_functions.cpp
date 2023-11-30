#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameMode_SpaceDungeon.BP_GameMode_SpaceDungeon_C
// (Actor)

class UClass* ABP_GameMode_SpaceDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameMode_SpaceDungeon_C");

	return Clss;
}


// BP_GameMode_SpaceDungeon_C BP_GameMode_SpaceDungeon.Default__BP_GameMode_SpaceDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameMode_SpaceDungeon_C* ABP_GameMode_SpaceDungeon_C::GetDefaultObj()
{
	static class ABP_GameMode_SpaceDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameMode_SpaceDungeon_C*>(ABP_GameMode_SpaceDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}


