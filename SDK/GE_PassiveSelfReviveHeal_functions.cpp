#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassiveSelfReviveHeal.GE_PassiveSelfReviveHeal_C
// (None)

class UClass* UGE_PassiveSelfReviveHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassiveSelfReviveHeal_C");

	return Clss;
}


// GE_PassiveSelfReviveHeal_C GE_PassiveSelfReviveHeal.Default__GE_PassiveSelfReviveHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassiveSelfReviveHeal_C* UGE_PassiveSelfReviveHeal_C::GetDefaultObj()
{
	static class UGE_PassiveSelfReviveHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassiveSelfReviveHeal_C*>(UGE_PassiveSelfReviveHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


