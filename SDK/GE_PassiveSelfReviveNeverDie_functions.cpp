#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassiveSelfReviveNeverDie.GE_PassiveSelfReviveNeverDie_C
// (None)

class UClass* UGE_PassiveSelfReviveNeverDie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassiveSelfReviveNeverDie_C");

	return Clss;
}


// GE_PassiveSelfReviveNeverDie_C GE_PassiveSelfReviveNeverDie.Default__GE_PassiveSelfReviveNeverDie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassiveSelfReviveNeverDie_C* UGE_PassiveSelfReviveNeverDie_C::GetDefaultObj()
{
	static class UGE_PassiveSelfReviveNeverDie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassiveSelfReviveNeverDie_C*>(UGE_PassiveSelfReviveNeverDie_C::StaticClass()->DefaultObject);

	return Default;
}

}


