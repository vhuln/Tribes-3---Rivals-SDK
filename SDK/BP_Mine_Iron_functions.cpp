#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mine_Iron.BP_Mine_Iron_C
// (Actor)

class UClass* ABP_Mine_Iron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mine_Iron_C");

	return Clss;
}


// BP_Mine_Iron_C BP_Mine_Iron.Default__BP_Mine_Iron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mine_Iron_C* ABP_Mine_Iron_C::GetDefaultObj()
{
	static class ABP_Mine_Iron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mine_Iron_C*>(ABP_Mine_Iron_C::StaticClass()->DefaultObject);

	return Default;
}

}


