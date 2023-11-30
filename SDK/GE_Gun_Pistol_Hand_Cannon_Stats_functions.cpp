#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Gun_Pistol_Hand_Cannon_Stats.GE_Gun_Pistol_Hand_Cannon_Stats_C
// (None)

class UClass* UGE_Gun_Pistol_Hand_Cannon_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Gun_Pistol_Hand_Cannon_Stats_C");

	return Clss;
}


// GE_Gun_Pistol_Hand_Cannon_Stats_C GE_Gun_Pistol_Hand_Cannon_Stats.Default__GE_Gun_Pistol_Hand_Cannon_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UGE_Gun_Pistol_Hand_Cannon_Stats_C* UGE_Gun_Pistol_Hand_Cannon_Stats_C::GetDefaultObj()
{
	static class UGE_Gun_Pistol_Hand_Cannon_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Gun_Pistol_Hand_Cannon_Stats_C*>(UGE_Gun_Pistol_Hand_Cannon_Stats_C::StaticClass()->DefaultObject);

	return Default;
}

}


