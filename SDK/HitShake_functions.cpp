#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitShake.HitShake_C
// (None)

class UClass* UHitShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitShake_C");

	return Clss;
}


// HitShake_C HitShake.Default__HitShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitShake_C* UHitShake_C::GetDefaultObj()
{
	static class UHitShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitShake_C*>(UHitShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


