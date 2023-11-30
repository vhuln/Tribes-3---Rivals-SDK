#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Item_Uncommon.BP_Pickup_Item_Uncommon_C
// (Actor)

class UClass* ABP_Pickup_Item_Uncommon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Item_Uncommon_C");

	return Clss;
}


// BP_Pickup_Item_Uncommon_C BP_Pickup_Item_Uncommon.Default__BP_Pickup_Item_Uncommon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Item_Uncommon_C* ABP_Pickup_Item_Uncommon_C::GetDefaultObj()
{
	static class ABP_Pickup_Item_Uncommon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Item_Uncommon_C*>(ABP_Pickup_Item_Uncommon_C::StaticClass()->DefaultObject);

	return Default;
}

}


