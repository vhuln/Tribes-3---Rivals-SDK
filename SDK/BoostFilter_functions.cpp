#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BoostFilter.BoostFilter_C
// (None)

class UClass* UBoostFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoostFilter_C");

	return Clss;
}


// BoostFilter_C BoostFilter.Default__BoostFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBoostFilter_C* UBoostFilter_C::GetDefaultObj()
{
	static class UBoostFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoostFilter_C*>(UBoostFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


