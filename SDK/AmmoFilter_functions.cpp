#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmmoFilter.AmmoFilter_C
// (None)

class UClass* UAmmoFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmmoFilter_C");

	return Clss;
}


// AmmoFilter_C AmmoFilter.Default__AmmoFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmmoFilter_C* UAmmoFilter_C::GetDefaultObj()
{
	static class UAmmoFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmmoFilter_C*>(UAmmoFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


