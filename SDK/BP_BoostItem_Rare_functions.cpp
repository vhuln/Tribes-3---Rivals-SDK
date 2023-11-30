#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BoostItem_Rare.BP_BoostItem_Rare_C
// (Actor)

class UClass* ABP_BoostItem_Rare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BoostItem_Rare_C");

	return Clss;
}


// BP_BoostItem_Rare_C BP_BoostItem_Rare.Default__BP_BoostItem_Rare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BoostItem_Rare_C* ABP_BoostItem_Rare_C::GetDefaultObj()
{
	static class ABP_BoostItem_Rare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BoostItem_Rare_C*>(ABP_BoostItem_Rare_C::StaticClass()->DefaultObject);

	return Default;
}

}


