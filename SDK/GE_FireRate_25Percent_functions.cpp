#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_FireRate_25Percent.GE_FireRate_25Percent_C
// (None)

class UClass* UGE_FireRate_25Percent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_FireRate_25Percent_C");

	return Clss;
}


// GE_FireRate_25Percent_C GE_FireRate_25Percent.Default__GE_FireRate_25Percent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_FireRate_25Percent_C* UGE_FireRate_25Percent_C::GetDefaultObj()
{
	static class UGE_FireRate_25Percent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_FireRate_25Percent_C*>(UGE_FireRate_25Percent_C::StaticClass()->DefaultObject);

	return Default;
}

}


