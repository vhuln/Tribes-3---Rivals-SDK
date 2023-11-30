#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_Bio_SL2.BP_LootCrate_Bio_SL2_C
// (Actor)

class UClass* ABP_LootCrate_Bio_SL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_Bio_SL2_C");

	return Clss;
}


// BP_LootCrate_Bio_SL2_C BP_LootCrate_Bio_SL2.Default__BP_LootCrate_Bio_SL2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_Bio_SL2_C* ABP_LootCrate_Bio_SL2_C::GetDefaultObj()
{
	static class ABP_LootCrate_Bio_SL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_Bio_SL2_C*>(ABP_LootCrate_Bio_SL2_C::StaticClass()->DefaultObject);

	return Default;
}

}


