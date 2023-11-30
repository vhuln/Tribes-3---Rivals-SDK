#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TeleportConfirmed.GE_TeleportConfirmed_C
// (None)

class UClass* UGE_TeleportConfirmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TeleportConfirmed_C");

	return Clss;
}


// GE_TeleportConfirmed_C GE_TeleportConfirmed.Default__GE_TeleportConfirmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TeleportConfirmed_C* UGE_TeleportConfirmed_C::GetDefaultObj()
{
	static class UGE_TeleportConfirmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TeleportConfirmed_C*>(UGE_TeleportConfirmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


