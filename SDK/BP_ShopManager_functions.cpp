#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShopManager.BP_ShopManager_C
// (Actor)

class UClass* ABP_ShopManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShopManager_C");

	return Clss;
}


// BP_ShopManager_C BP_ShopManager.Default__BP_ShopManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShopManager_C* ABP_ShopManager_C::GetDefaultObj()
{
	static class ABP_ShopManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShopManager_C*>(ABP_ShopManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


