#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AllFilter.AllFilter_C
// (None)

class UClass* UAllFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AllFilter_C");

	return Clss;
}


// AllFilter_C AllFilter.Default__AllFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAllFilter_C* UAllFilter_C::GetDefaultObj()
{
	static class UAllFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAllFilter_C*>(UAllFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


