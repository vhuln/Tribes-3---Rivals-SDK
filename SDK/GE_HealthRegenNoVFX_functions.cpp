#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealthRegenNoVFX.GE_HealthRegenNoVFX_C
// (None)

class UClass* UGE_HealthRegenNoVFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealthRegenNoVFX_C");

	return Clss;
}


// GE_HealthRegenNoVFX_C GE_HealthRegenNoVFX.Default__GE_HealthRegenNoVFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealthRegenNoVFX_C* UGE_HealthRegenNoVFX_C::GetDefaultObj()
{
	static class UGE_HealthRegenNoVFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealthRegenNoVFX_C*>(UGE_HealthRegenNoVFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


