#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActivityTracker_FlagDefender.BP_ActivityTracker_FlagDefender_C
// (None)

class UClass* UBP_ActivityTracker_FlagDefender_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActivityTracker_FlagDefender_C");

	return Clss;
}


// BP_ActivityTracker_FlagDefender_C BP_ActivityTracker_FlagDefender.Default__BP_ActivityTracker_FlagDefender_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActivityTracker_FlagDefender_C* UBP_ActivityTracker_FlagDefender_C::GetDefaultObj()
{
	static class UBP_ActivityTracker_FlagDefender_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActivityTracker_FlagDefender_C*>(UBP_ActivityTracker_FlagDefender_C::StaticClass()->DefaultObject);

	return Default;
}

}


