#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_Gun.GE_Damage_Gun_C
// (None)

class UClass* UGE_Damage_Gun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_Gun_C");

	return Clss;
}


// GE_Damage_Gun_C GE_Damage_Gun.Default__GE_Damage_Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_Gun_C* UGE_Damage_Gun_C::GetDefaultObj()
{
	static class UGE_Damage_Gun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_Gun_C*>(UGE_Damage_Gun_C::StaticClass()->DefaultObject);

	return Default;
}

}


