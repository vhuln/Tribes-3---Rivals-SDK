#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Loot_Crate_Master_Barricade.BP_Loot_Crate_Master_Barricade_C
// (Actor)

class UClass* ABP_Loot_Crate_Master_Barricade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Loot_Crate_Master_Barricade_C");

	return Clss;
}


// BP_Loot_Crate_Master_Barricade_C BP_Loot_Crate_Master_Barricade.Default__BP_Loot_Crate_Master_Barricade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Loot_Crate_Master_Barricade_C* ABP_Loot_Crate_Master_Barricade_C::GetDefaultObj()
{
	static class ABP_Loot_Crate_Master_Barricade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Loot_Crate_Master_Barricade_C*>(ABP_Loot_Crate_Master_Barricade_C::StaticClass()->DefaultObject);

	return Default;
}

}


