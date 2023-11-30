#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Drift_Assault_Rifle_Reduced.CS_Drift_Assault_Rifle_Reduced_C
// (None)

class UClass* UCS_Drift_Assault_Rifle_Reduced_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Drift_Assault_Rifle_Reduced_C");

	return Clss;
}


// CS_Drift_Assault_Rifle_Reduced_C CS_Drift_Assault_Rifle_Reduced.Default__CS_Drift_Assault_Rifle_Reduced_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Drift_Assault_Rifle_Reduced_C* UCS_Drift_Assault_Rifle_Reduced_C::GetDefaultObj()
{
	static class UCS_Drift_Assault_Rifle_Reduced_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Drift_Assault_Rifle_Reduced_C*>(UCS_Drift_Assault_Rifle_Reduced_C::StaticClass()->DefaultObject);

	return Default;
}

}


