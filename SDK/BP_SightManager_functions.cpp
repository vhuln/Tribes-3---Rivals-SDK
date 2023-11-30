#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SightManager.BP_SightManager_C
// (Actor)

class UClass* ABP_SightManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SightManager_C");

	return Clss;
}


// BP_SightManager_C BP_SightManager.Default__BP_SightManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SightManager_C* ABP_SightManager_C::GetDefaultObj()
{
	static class ABP_SightManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SightManager_C*>(ABP_SightManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


