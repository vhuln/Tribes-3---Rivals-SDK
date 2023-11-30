#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActivityTracker_TurretDown.BP_ActivityTracker_TurretDown_C
// (None)

class UClass* UBP_ActivityTracker_TurretDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActivityTracker_TurretDown_C");

	return Clss;
}


// BP_ActivityTracker_TurretDown_C BP_ActivityTracker_TurretDown.Default__BP_ActivityTracker_TurretDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActivityTracker_TurretDown_C* UBP_ActivityTracker_TurretDown_C::GetDefaultObj()
{
	static class UBP_ActivityTracker_TurretDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActivityTracker_TurretDown_C*>(UBP_ActivityTracker_TurretDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


