#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BehaviorConfig_OpenDoor.BP_BehaviorConfig_OpenDoor_C
// (None)

class UClass* UBP_BehaviorConfig_OpenDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BehaviorConfig_OpenDoor_C");

	return Clss;
}


// BP_BehaviorConfig_OpenDoor_C BP_BehaviorConfig_OpenDoor.Default__BP_BehaviorConfig_OpenDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BehaviorConfig_OpenDoor_C* UBP_BehaviorConfig_OpenDoor_C::GetDefaultObj()
{
	static class UBP_BehaviorConfig_OpenDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BehaviorConfig_OpenDoor_C*>(UBP_BehaviorConfig_OpenDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


