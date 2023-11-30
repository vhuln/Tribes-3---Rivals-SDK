#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExperienceTracker_Eliminations.BP_ExperienceTracker_Eliminations_C
// (None)

class UClass* UBP_ExperienceTracker_Eliminations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExperienceTracker_Eliminations_C");

	return Clss;
}


// BP_ExperienceTracker_Eliminations_C BP_ExperienceTracker_Eliminations.Default__BP_ExperienceTracker_Eliminations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ExperienceTracker_Eliminations_C* UBP_ExperienceTracker_Eliminations_C::GetDefaultObj()
{
	static class UBP_ExperienceTracker_Eliminations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ExperienceTracker_Eliminations_C*>(UBP_ExperienceTracker_Eliminations_C::StaticClass()->DefaultObject);

	return Default;
}

}


