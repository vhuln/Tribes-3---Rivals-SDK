#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FeetArmorFilter.FeetArmorFilter_C
// (None)

class UClass* UFeetArmorFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FeetArmorFilter_C");

	return Clss;
}


// FeetArmorFilter_C FeetArmorFilter.Default__FeetArmorFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFeetArmorFilter_C* UFeetArmorFilter_C::GetDefaultObj()
{
	static class UFeetArmorFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFeetArmorFilter_C*>(UFeetArmorFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


