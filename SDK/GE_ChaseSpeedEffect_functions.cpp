#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ChaseSpeedEffect.GE_ChaseSpeedEffect_C
// (None)

class UClass* UGE_ChaseSpeedEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ChaseSpeedEffect_C");

	return Clss;
}


// GE_ChaseSpeedEffect_C GE_ChaseSpeedEffect.Default__GE_ChaseSpeedEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ChaseSpeedEffect_C* UGE_ChaseSpeedEffect_C::GetDefaultObj()
{
	static class UGE_ChaseSpeedEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ChaseSpeedEffect_C*>(UGE_ChaseSpeedEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


