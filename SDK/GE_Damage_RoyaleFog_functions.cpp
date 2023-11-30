#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_RoyaleFog.GE_Damage_RoyaleFog_C
// (None)

class UClass* UGE_Damage_RoyaleFog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_RoyaleFog_C");

	return Clss;
}


// GE_Damage_RoyaleFog_C GE_Damage_RoyaleFog.Default__GE_Damage_RoyaleFog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_RoyaleFog_C* UGE_Damage_RoyaleFog_C::GetDefaultObj()
{
	static class UGE_Damage_RoyaleFog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_RoyaleFog_C*>(UGE_Damage_RoyaleFog_C::StaticClass()->DefaultObject);

	return Default;
}

}


