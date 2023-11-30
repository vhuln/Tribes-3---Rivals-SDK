#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_ScavengerMastery_SL4.BP_LootCrate_ScavengerMastery_SL4_C
// (Actor)

class UClass* ABP_LootCrate_ScavengerMastery_SL4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_ScavengerMastery_SL4_C");

	return Clss;
}


// BP_LootCrate_ScavengerMastery_SL4_C BP_LootCrate_ScavengerMastery_SL4.Default__BP_LootCrate_ScavengerMastery_SL4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_ScavengerMastery_SL4_C* ABP_LootCrate_ScavengerMastery_SL4_C::GetDefaultObj()
{
	static class ABP_LootCrate_ScavengerMastery_SL4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_ScavengerMastery_SL4_C*>(ABP_LootCrate_ScavengerMastery_SL4_C::StaticClass()->DefaultObject);

	return Default;
}

}


