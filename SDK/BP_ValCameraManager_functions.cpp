#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValCameraManager.BP_ValCameraManager_C
// (Actor)

class UClass* ABP_ValCameraManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValCameraManager_C");

	return Clss;
}


// BP_ValCameraManager_C BP_ValCameraManager.Default__BP_ValCameraManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValCameraManager_C* ABP_ValCameraManager_C::GetDefaultObj()
{
	static class ABP_ValCameraManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValCameraManager_C*>(ABP_ValCameraManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


