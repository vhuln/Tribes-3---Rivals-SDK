#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_AOE.GE_Damage_AOE_C
// (None)

class UClass* UGE_Damage_AOE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_AOE_C");

	return Clss;
}


// GE_Damage_AOE_C GE_Damage_AOE.Default__GE_Damage_AOE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_AOE_C* UGE_Damage_AOE_C::GetDefaultObj()
{
	static class UGE_Damage_AOE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_AOE_C*>(UGE_Damage_AOE_C::StaticClass()->DefaultObject);

	return Default;
}

}


