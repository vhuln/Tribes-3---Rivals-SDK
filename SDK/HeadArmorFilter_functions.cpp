#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeadArmorFilter.HeadArmorFilter_C
// (None)

class UClass* UHeadArmorFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeadArmorFilter_C");

	return Clss;
}


// HeadArmorFilter_C HeadArmorFilter.Default__HeadArmorFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeadArmorFilter_C* UHeadArmorFilter_C::GetDefaultObj()
{
	static class UHeadArmorFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeadArmorFilter_C*>(UHeadArmorFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


