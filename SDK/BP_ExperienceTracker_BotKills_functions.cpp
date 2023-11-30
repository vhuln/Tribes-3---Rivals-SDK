#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExperienceTracker_BotKills.BP_ExperienceTracker_BotKills_C
// (None)

class UClass* UBP_ExperienceTracker_BotKills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExperienceTracker_BotKills_C");

	return Clss;
}


// BP_ExperienceTracker_BotKills_C BP_ExperienceTracker_BotKills.Default__BP_ExperienceTracker_BotKills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ExperienceTracker_BotKills_C* UBP_ExperienceTracker_BotKills_C::GetDefaultObj()
{
	static class UBP_ExperienceTracker_BotKills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ExperienceTracker_BotKills_C*>(UBP_ExperienceTracker_BotKills_C::StaticClass()->DefaultObject);

	return Default;
}

}


