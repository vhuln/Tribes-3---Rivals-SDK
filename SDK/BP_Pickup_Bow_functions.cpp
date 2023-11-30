#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Bow.BP_Pickup_Bow_C
// (Actor)

class UClass* ABP_Pickup_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Bow_C");

	return Clss;
}


// BP_Pickup_Bow_C BP_Pickup_Bow.Default__BP_Pickup_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Bow_C* ABP_Pickup_Bow_C::GetDefaultObj()
{
	static class ABP_Pickup_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Bow_C*>(ABP_Pickup_Bow_C::StaticClass()->DefaultObject);

	return Default;
}

}


