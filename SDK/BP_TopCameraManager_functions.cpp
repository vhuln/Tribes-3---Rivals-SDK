#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TopCameraManager.BP_TopCameraManager_C
// (Actor)

class UClass* ABP_TopCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TopCameraManager_C");

	return Clss;
}


// BP_TopCameraManager_C BP_TopCameraManager.Default__BP_TopCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TopCameraManager_C* ABP_TopCameraManager_C::GetDefaultObj()
{
	static class ABP_TopCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TopCameraManager_C*>(ABP_TopCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


