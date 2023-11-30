#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_NonCombatTagAndDebuff.GE_NonCombatTagAndDebuff_C
// (None)

class UClass* UGE_NonCombatTagAndDebuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_NonCombatTagAndDebuff_C");

	return Clss;
}


// GE_NonCombatTagAndDebuff_C GE_NonCombatTagAndDebuff.Default__GE_NonCombatTagAndDebuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_NonCombatTagAndDebuff_C* UGE_NonCombatTagAndDebuff_C::GetDefaultObj()
{
	static class UGE_NonCombatTagAndDebuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_NonCombatTagAndDebuff_C*>(UGE_NonCombatTagAndDebuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


