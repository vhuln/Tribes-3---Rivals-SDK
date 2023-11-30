#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Aiming.GE_Aiming_C
// (None)

class UClass* UGE_Aiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Aiming_C");

	return Clss;
}


// GE_Aiming_C GE_Aiming.Default__GE_Aiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Aiming_C* UGE_Aiming_C::GetDefaultObj()
{
	static class UGE_Aiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Aiming_C*>(UGE_Aiming_C::StaticClass()->DefaultObject);

	return Default;
}

}


