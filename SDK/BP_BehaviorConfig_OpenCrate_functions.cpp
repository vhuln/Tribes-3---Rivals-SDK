#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BehaviorConfig_OpenCrate.BP_BehaviorConfig_OpenCrate_C
// (None)

class UClass* UBP_BehaviorConfig_OpenCrate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BehaviorConfig_OpenCrate_C");

	return Clss;
}


// BP_BehaviorConfig_OpenCrate_C BP_BehaviorConfig_OpenCrate.Default__BP_BehaviorConfig_OpenCrate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BehaviorConfig_OpenCrate_C* UBP_BehaviorConfig_OpenCrate_C::GetDefaultObj()
{
	static class UBP_BehaviorConfig_OpenCrate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BehaviorConfig_OpenCrate_C*>(UBP_BehaviorConfig_OpenCrate_C::StaticClass()->DefaultObject);

	return Default;
}

}


