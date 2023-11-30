#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SilentFootsteps.GE_SilentFootsteps_C
// (None)

class UClass* UGE_SilentFootsteps_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SilentFootsteps_C");

	return Clss;
}


// GE_SilentFootsteps_C GE_SilentFootsteps.Default__GE_SilentFootsteps_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SilentFootsteps_C* UGE_SilentFootsteps_C::GetDefaultObj()
{
	static class UGE_SilentFootsteps_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SilentFootsteps_C*>(UGE_SilentFootsteps_C::StaticClass()->DefaultObject);

	return Default;
}

}


