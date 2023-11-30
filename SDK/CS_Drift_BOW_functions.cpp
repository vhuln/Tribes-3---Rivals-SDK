#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Drift_BOW.CS_Drift_BOW_C
// (None)

class UClass* UCS_Drift_BOW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Drift_BOW_C");

	return Clss;
}


// CS_Drift_BOW_C CS_Drift_BOW.Default__CS_Drift_BOW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Drift_BOW_C* UCS_Drift_BOW_C::GetDefaultObj()
{
	static class UCS_Drift_BOW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Drift_BOW_C*>(UCS_Drift_BOW_C::StaticClass()->DefaultObject);

	return Default;
}

}


