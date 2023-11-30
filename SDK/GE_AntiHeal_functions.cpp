#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AntiHeal.GE_AntiHeal_C
// (None)

class UClass* UGE_AntiHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AntiHeal_C");

	return Clss;
}


// GE_AntiHeal_C GE_AntiHeal.Default__GE_AntiHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AntiHeal_C* UGE_AntiHeal_C::GetDefaultObj()
{
	static class UGE_AntiHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AntiHeal_C*>(UGE_AntiHeal_C::StaticClass()->DefaultObject);

	return Default;
}

}


