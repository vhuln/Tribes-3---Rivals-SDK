#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActivityTracker_FlagGrab.BP_ActivityTracker_FlagGrab_C
// (None)

class UClass* UBP_ActivityTracker_FlagGrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActivityTracker_FlagGrab_C");

	return Clss;
}


// BP_ActivityTracker_FlagGrab_C BP_ActivityTracker_FlagGrab.Default__BP_ActivityTracker_FlagGrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActivityTracker_FlagGrab_C* UBP_ActivityTracker_FlagGrab_C::GetDefaultObj()
{
	static class UBP_ActivityTracker_FlagGrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActivityTracker_FlagGrab_C*>(UBP_ActivityTracker_FlagGrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


