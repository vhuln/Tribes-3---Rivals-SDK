#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DestructibleDoor_BuildingA1.BP_DestructibleDoor_BuildingA1_C
// (Actor)

class UClass* ABP_DestructibleDoor_BuildingA1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DestructibleDoor_BuildingA1_C");

	return Clss;
}


// BP_DestructibleDoor_BuildingA1_C BP_DestructibleDoor_BuildingA1.Default__BP_DestructibleDoor_BuildingA1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DestructibleDoor_BuildingA1_C* ABP_DestructibleDoor_BuildingA1_C::GetDefaultObj()
{
	static class ABP_DestructibleDoor_BuildingA1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DestructibleDoor_BuildingA1_C*>(ABP_DestructibleDoor_BuildingA1_C::StaticClass()->DefaultObject);

	return Default;
}

}


