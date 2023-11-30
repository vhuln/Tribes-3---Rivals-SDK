#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpaceDungeon_ShieldPack.BP_SpaceDungeon_ShieldPack_C
// (Actor)

class UClass* ABP_SpaceDungeon_ShieldPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpaceDungeon_ShieldPack_C");

	return Clss;
}


// BP_SpaceDungeon_ShieldPack_C BP_SpaceDungeon_ShieldPack.Default__BP_SpaceDungeon_ShieldPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpaceDungeon_ShieldPack_C* ABP_SpaceDungeon_ShieldPack_C::GetDefaultObj()
{
	static class ABP_SpaceDungeon_ShieldPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpaceDungeon_ShieldPack_C*>(ABP_SpaceDungeon_ShieldPack_C::StaticClass()->DefaultObject);

	return Default;
}

}


