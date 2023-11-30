#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValPlayerController_City.BP_ValPlayerController_City_C
// (Actor, PlayerController)

class UClass* ABP_ValPlayerController_City_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValPlayerController_City_C");

	return Clss;
}


// BP_ValPlayerController_City_C BP_ValPlayerController_City.Default__BP_ValPlayerController_City_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValPlayerController_City_C* ABP_ValPlayerController_City_C::GetDefaultObj()
{
	static class ABP_ValPlayerController_City_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValPlayerController_City_C*>(ABP_ValPlayerController_City_C::StaticClass()->DefaultObject);

	return Default;
}

}


