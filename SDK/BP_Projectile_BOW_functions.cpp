#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_BOW.BP_Projectile_BOW_C
// (Actor)

class UClass* ABP_Projectile_BOW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_BOW_C");

	return Clss;
}


// BP_Projectile_BOW_C BP_Projectile_BOW.Default__BP_Projectile_BOW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_BOW_C* ABP_Projectile_BOW_C::GetDefaultObj()
{
	static class ABP_Projectile_BOW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_BOW_C*>(ABP_Projectile_BOW_C::StaticClass()->DefaultObject);

	return Default;
}

}


