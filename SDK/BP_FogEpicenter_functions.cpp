#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FogEpicenter.BP_FogEpicenter_C
// (Actor)

class UClass* ABP_FogEpicenter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FogEpicenter_C");

	return Clss;
}


// BP_FogEpicenter_C BP_FogEpicenter.Default__BP_FogEpicenter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FogEpicenter_C* ABP_FogEpicenter_C::GetDefaultObj()
{
	static class ABP_FogEpicenter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FogEpicenter_C*>(ABP_FogEpicenter_C::StaticClass()->DefaultObject);

	return Default;
}

}


