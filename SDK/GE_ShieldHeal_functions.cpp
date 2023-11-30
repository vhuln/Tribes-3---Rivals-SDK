#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShieldHeal.GE_ShieldHeal_C
// (None)

class UClass* UGE_ShieldHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShieldHeal_C");

	return Clss;
}


// GE_ShieldHeal_C GE_ShieldHeal.Default__GE_ShieldHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShieldHeal_C* UGE_ShieldHeal_C::GetDefaultObj()
{
	static class UGE_ShieldHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShieldHeal_C*>(UGE_ShieldHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


