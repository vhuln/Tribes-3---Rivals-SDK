#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_General_SL5.BP_LootCrate_General_SL5_C
// (Actor)

class UClass* ABP_LootCrate_General_SL5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_General_SL5_C");

	return Clss;
}


// BP_LootCrate_General_SL5_C BP_LootCrate_General_SL5.Default__BP_LootCrate_General_SL5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_General_SL5_C* ABP_LootCrate_General_SL5_C::GetDefaultObj()
{
	static class ABP_LootCrate_General_SL5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_General_SL5_C*>(ABP_LootCrate_General_SL5_C::StaticClass()->DefaultObject);

	return Default;
}

}


