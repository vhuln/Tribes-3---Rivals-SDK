#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HandArmorFilter.HandArmorFilter_C
// (None)

class UClass* UHandArmorFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HandArmorFilter_C");

	return Clss;
}


// HandArmorFilter_C HandArmorFilter.Default__HandArmorFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHandArmorFilter_C* UHandArmorFilter_C::GetDefaultObj()
{
	static class UHandArmorFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHandArmorFilter_C*>(UHandArmorFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


