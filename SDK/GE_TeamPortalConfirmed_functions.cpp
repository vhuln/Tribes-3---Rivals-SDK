#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TeamPortalConfirmed.GE_TeamPortalConfirmed_C
// (None)

class UClass* UGE_TeamPortalConfirmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TeamPortalConfirmed_C");

	return Clss;
}


// GE_TeamPortalConfirmed_C GE_TeamPortalConfirmed.Default__GE_TeamPortalConfirmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TeamPortalConfirmed_C* UGE_TeamPortalConfirmed_C::GetDefaultObj()
{
	static class UGE_TeamPortalConfirmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TeamPortalConfirmed_C*>(UGE_TeamPortalConfirmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


