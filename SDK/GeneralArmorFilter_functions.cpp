#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GeneralArmorFilter.GeneralArmorFilter_C
// (None)

class UClass* UGeneralArmorFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeneralArmorFilter_C");

	return Clss;
}


// GeneralArmorFilter_C GeneralArmorFilter.Default__GeneralArmorFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGeneralArmorFilter_C* UGeneralArmorFilter_C::GetDefaultObj()
{
	static class UGeneralArmorFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneralArmorFilter_C*>(UGeneralArmorFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


