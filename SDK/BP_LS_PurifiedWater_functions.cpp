#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LS_PurifiedWater.BP_LS_PurifiedWater_C
// (Actor)

class UClass* ABP_LS_PurifiedWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LS_PurifiedWater_C");

	return Clss;
}


// BP_LS_PurifiedWater_C BP_LS_PurifiedWater.Default__BP_LS_PurifiedWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LS_PurifiedWater_C* ABP_LS_PurifiedWater_C::GetDefaultObj()
{
	static class ABP_LS_PurifiedWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LS_PurifiedWater_C*>(ABP_LS_PurifiedWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


