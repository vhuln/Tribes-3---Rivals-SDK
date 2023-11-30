#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PackFilter.PackFilter_C
// (None)

class UClass* UPackFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PackFilter_C");

	return Clss;
}


// PackFilter_C PackFilter.Default__PackFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPackFilter_C* UPackFilter_C::GetDefaultObj()
{
	static class UPackFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPackFilter_C*>(UPackFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


