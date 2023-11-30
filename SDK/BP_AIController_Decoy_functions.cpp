#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIController_Decoy.BP_AIController_Decoy_C
// (Actor)

class UClass* ABP_AIController_Decoy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIController_Decoy_C");

	return Clss;
}


// BP_AIController_Decoy_C BP_AIController_Decoy.Default__BP_AIController_Decoy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AIController_Decoy_C* ABP_AIController_Decoy_C::GetDefaultObj()
{
	static class ABP_AIController_Decoy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AIController_Decoy_C*>(ABP_AIController_Decoy_C::StaticClass()->DefaultObject);

	return Default;
}

}


