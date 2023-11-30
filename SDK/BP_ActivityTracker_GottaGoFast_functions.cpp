#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActivityTracker_GottaGoFast.BP_ActivityTracker_GottaGoFast_C
// (None)

class UClass* UBP_ActivityTracker_GottaGoFast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActivityTracker_GottaGoFast_C");

	return Clss;
}


// BP_ActivityTracker_GottaGoFast_C BP_ActivityTracker_GottaGoFast.Default__BP_ActivityTracker_GottaGoFast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActivityTracker_GottaGoFast_C* UBP_ActivityTracker_GottaGoFast_C::GetDefaultObj()
{
	static class UBP_ActivityTracker_GottaGoFast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActivityTracker_GottaGoFast_C*>(UBP_ActivityTracker_GottaGoFast_C::StaticClass()->DefaultObject);

	return Default;
}

}


