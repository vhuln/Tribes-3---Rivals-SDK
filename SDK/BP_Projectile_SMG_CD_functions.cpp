#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SMG_CD.BP_Projectile_SMG_CD_C
// (Actor)

class UClass* ABP_Projectile_SMG_CD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SMG_CD_C");

	return Clss;
}


// BP_Projectile_SMG_CD_C BP_Projectile_SMG_CD.Default__BP_Projectile_SMG_CD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SMG_CD_C* ABP_Projectile_SMG_CD_C::GetDefaultObj()
{
	static class ABP_Projectile_SMG_CD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SMG_CD_C*>(ABP_Projectile_SMG_CD_C::StaticClass()->DefaultObject);

	return Default;
}

}


