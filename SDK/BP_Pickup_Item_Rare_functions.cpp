#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Item_Rare.BP_Pickup_Item_Rare_C
// (Actor)

class UClass* ABP_Pickup_Item_Rare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Item_Rare_C");

	return Clss;
}


// BP_Pickup_Item_Rare_C BP_Pickup_Item_Rare.Default__BP_Pickup_Item_Rare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Item_Rare_C* ABP_Pickup_Item_Rare_C::GetDefaultObj()
{
	static class ABP_Pickup_Item_Rare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Item_Rare_C*>(ABP_Pickup_Item_Rare_C::StaticClass()->DefaultObject);

	return Default;
}

}


