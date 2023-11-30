#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValChar_Turret_AntiAir.BP_ValChar_Turret_AntiAir_C
// (Actor, Pawn)

class UClass* ABP_ValChar_Turret_AntiAir_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValChar_Turret_AntiAir_C");

	return Clss;
}


// BP_ValChar_Turret_AntiAir_C BP_ValChar_Turret_AntiAir.Default__BP_ValChar_Turret_AntiAir_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValChar_Turret_AntiAir_C* ABP_ValChar_Turret_AntiAir_C::GetDefaultObj()
{
	static class ABP_ValChar_Turret_AntiAir_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValChar_Turret_AntiAir_C*>(ABP_ValChar_Turret_AntiAir_C::StaticClass()->DefaultObject);

	return Default;
}

}


