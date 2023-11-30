#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TeleportActive.GE_TeleportActive_C
// (None)

class UClass* UGE_TeleportActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TeleportActive_C");

	return Clss;
}


// GE_TeleportActive_C GE_TeleportActive.Default__GE_TeleportActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TeleportActive_C* UGE_TeleportActive_C::GetDefaultObj()
{
	static class UGE_TeleportActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TeleportActive_C*>(UGE_TeleportActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


