#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Drift_Sniper.CS_Drift_Sniper_C
// (None)

class UClass* UCS_Drift_Sniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Drift_Sniper_C");

	return Clss;
}


// CS_Drift_Sniper_C CS_Drift_Sniper.Default__CS_Drift_Sniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Drift_Sniper_C* UCS_Drift_Sniper_C::GetDefaultObj()
{
	static class UCS_Drift_Sniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Drift_Sniper_C*>(UCS_Drift_Sniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


