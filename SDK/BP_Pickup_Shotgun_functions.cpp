#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Shotgun.BP_Pickup_Shotgun_C
// (Actor)

class UClass* ABP_Pickup_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Shotgun_C");

	return Clss;
}


// BP_Pickup_Shotgun_C BP_Pickup_Shotgun.Default__BP_Pickup_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Shotgun_C* ABP_Pickup_Shotgun_C::GetDefaultObj()
{
	static class ABP_Pickup_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Shotgun_C*>(ABP_Pickup_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


