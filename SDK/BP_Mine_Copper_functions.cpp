#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mine_Copper.BP_Mine_Copper_C
// (Actor)

class UClass* ABP_Mine_Copper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mine_Copper_C");

	return Clss;
}


// BP_Mine_Copper_C BP_Mine_Copper.Default__BP_Mine_Copper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mine_Copper_C* ABP_Mine_Copper_C::GetDefaultObj()
{
	static class ABP_Mine_Copper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mine_Copper_C*>(ABP_Mine_Copper_C::StaticClass()->DefaultObject);

	return Default;
}

}


