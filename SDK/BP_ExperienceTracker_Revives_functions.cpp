#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExperienceTracker_Revives.BP_ExperienceTracker_Revives_C
// (None)

class UClass* UBP_ExperienceTracker_Revives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExperienceTracker_Revives_C");

	return Clss;
}


// BP_ExperienceTracker_Revives_C BP_ExperienceTracker_Revives.Default__BP_ExperienceTracker_Revives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ExperienceTracker_Revives_C* UBP_ExperienceTracker_Revives_C::GetDefaultObj()
{
	static class UBP_ExperienceTracker_Revives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ExperienceTracker_Revives_C*>(UBP_ExperienceTracker_Revives_C::StaticClass()->DefaultObject);

	return Default;
}

}


