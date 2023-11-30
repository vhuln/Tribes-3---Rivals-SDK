#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_Bio_SL3.BP_LootCrate_Bio_SL3_C
// (Actor)

class UClass* ABP_LootCrate_Bio_SL3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_Bio_SL3_C");

	return Clss;
}


// BP_LootCrate_Bio_SL3_C BP_LootCrate_Bio_SL3.Default__BP_LootCrate_Bio_SL3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_Bio_SL3_C* ABP_LootCrate_Bio_SL3_C::GetDefaultObj()
{
	static class ABP_LootCrate_Bio_SL3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_Bio_SL3_C*>(ABP_LootCrate_Bio_SL3_C::StaticClass()->DefaultObject);

	return Default;
}

}


