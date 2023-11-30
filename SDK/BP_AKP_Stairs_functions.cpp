#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AKP_Stairs.BP_AKP_Stairs_C
// (Actor)

class UClass* ABP_AKP_Stairs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AKP_Stairs_C");

	return Clss;
}


// BP_AKP_Stairs_C BP_AKP_Stairs.Default__BP_AKP_Stairs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AKP_Stairs_C* ABP_AKP_Stairs_C::GetDefaultObj()
{
	static class ABP_AKP_Stairs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AKP_Stairs_C*>(ABP_AKP_Stairs_C::StaticClass()->DefaultObject);

	return Default;
}

}


