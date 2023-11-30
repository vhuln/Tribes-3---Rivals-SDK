#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Pistol_Hand_Cannon.BP_Pickup_Pistol_Hand_Cannon_C
// (Actor)

class UClass* ABP_Pickup_Pistol_Hand_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Pistol_Hand_Cannon_C");

	return Clss;
}


// BP_Pickup_Pistol_Hand_Cannon_C BP_Pickup_Pistol_Hand_Cannon.Default__BP_Pickup_Pistol_Hand_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class ABP_Pickup_Pistol_Hand_Cannon_C* ABP_Pickup_Pistol_Hand_Cannon_C::GetDefaultObj()
{
	static class ABP_Pickup_Pistol_Hand_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Pistol_Hand_Cannon_C*>(ABP_Pickup_Pistol_Hand_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


