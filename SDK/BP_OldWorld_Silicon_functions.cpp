#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OldWorld_Silicon.BP_OldWorld_Silicon_C
// (Actor)

class UClass* ABP_OldWorld_Silicon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OldWorld_Silicon_C");

	return Clss;
}


// BP_OldWorld_Silicon_C BP_OldWorld_Silicon.Default__BP_OldWorld_Silicon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OldWorld_Silicon_C* ABP_OldWorld_Silicon_C::GetDefaultObj()
{
	static class ABP_OldWorld_Silicon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OldWorld_Silicon_C*>(ABP_OldWorld_Silicon_C::StaticClass()->DefaultObject);

	return Default;
}

}


