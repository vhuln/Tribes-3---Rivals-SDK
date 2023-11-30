#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoostItemLegendary.BP_BoostItemLegendary_C
// (Actor)

class UClass* ABP_BoostItemLegendary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoostItemLegendary_C");

	return Clss;
}


// BP_BoostItemLegendary_C BP_BoostItemLegendary.Default__BP_BoostItemLegendary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoostItemLegendary_C* ABP_BoostItemLegendary_C::GetDefaultObj()
{
	static class ABP_BoostItemLegendary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoostItemLegendary_C*>(ABP_BoostItemLegendary_C::StaticClass()->DefaultObject);

	return Default;
}

}


