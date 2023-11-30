#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadeFilter.GrenadeFilter_C
// (None)

class UClass* UGrenadeFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadeFilter_C");

	return Clss;
}


// GrenadeFilter_C GrenadeFilter.Default__GrenadeFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrenadeFilter_C* UGrenadeFilter_C::GetDefaultObj()
{
	static class UGrenadeFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrenadeFilter_C*>(UGrenadeFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


