#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoostItem_Common.BP_BoostItem_Common_C
// (Actor)

class UClass* ABP_BoostItem_Common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoostItem_Common_C");

	return Clss;
}


// BP_BoostItem_Common_C BP_BoostItem_Common.Default__BP_BoostItem_Common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoostItem_Common_C* ABP_BoostItem_Common_C::GetDefaultObj()
{
	static class ABP_BoostItem_Common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoostItem_Common_C*>(ABP_BoostItem_Common_C::StaticClass()->DefaultObject);

	return Default;
}

}


