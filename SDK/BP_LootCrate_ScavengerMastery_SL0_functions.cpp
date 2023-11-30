#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LootCrate_ScavengerMastery_SL0.BP_LootCrate_ScavengerMastery_SL0_C
// (Actor)

class UClass* ABP_LootCrate_ScavengerMastery_SL0_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LootCrate_ScavengerMastery_SL0_C");

	return Clss;
}


// BP_LootCrate_ScavengerMastery_SL0_C BP_LootCrate_ScavengerMastery_SL0.Default__BP_LootCrate_ScavengerMastery_SL0_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LootCrate_ScavengerMastery_SL0_C* ABP_LootCrate_ScavengerMastery_SL0_C::GetDefaultObj()
{
	static class ABP_LootCrate_ScavengerMastery_SL0_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LootCrate_ScavengerMastery_SL0_C*>(ABP_LootCrate_ScavengerMastery_SL0_C::StaticClass()->DefaultObject);

	return Default;
}

}


