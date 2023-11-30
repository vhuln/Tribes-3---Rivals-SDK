#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mine_Gold.BP_Mine_Gold_C
// (Actor)

class UClass* ABP_Mine_Gold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mine_Gold_C");

	return Clss;
}


// BP_Mine_Gold_C BP_Mine_Gold.Default__BP_Mine_Gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mine_Gold_C* ABP_Mine_Gold_C::GetDefaultObj()
{
	static class ABP_Mine_Gold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mine_Gold_C*>(ABP_Mine_Gold_C::StaticClass()->DefaultObject);

	return Default;
}

}


