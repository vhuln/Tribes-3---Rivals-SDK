#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_HighSecurity_SL1.BP_LootCrate_HighSecurity_SL1_C
// (Actor)

class UClass* ABP_LootCrate_HighSecurity_SL1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_HighSecurity_SL1_C");

	return Clss;
}


// BP_LootCrate_HighSecurity_SL1_C BP_LootCrate_HighSecurity_SL1.Default__BP_LootCrate_HighSecurity_SL1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_HighSecurity_SL1_C* ABP_LootCrate_HighSecurity_SL1_C::GetDefaultObj()
{
	static class ABP_LootCrate_HighSecurity_SL1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_HighSecurity_SL1_C*>(ABP_LootCrate_HighSecurity_SL1_C::StaticClass()->DefaultObject);

	return Default;
}

}


