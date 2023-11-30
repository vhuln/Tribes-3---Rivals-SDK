#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Swamp_Fiber.BP_Swamp_Fiber_C
// (Actor)

class UClass* ABP_Swamp_Fiber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Swamp_Fiber_C");

	return Clss;
}


// BP_Swamp_Fiber_C BP_Swamp_Fiber.Default__BP_Swamp_Fiber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Swamp_Fiber_C* ABP_Swamp_Fiber_C::GetDefaultObj()
{
	static class ABP_Swamp_Fiber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Swamp_Fiber_C*>(ABP_Swamp_Fiber_C::StaticClass()->DefaultObject);

	return Default;
}

}


