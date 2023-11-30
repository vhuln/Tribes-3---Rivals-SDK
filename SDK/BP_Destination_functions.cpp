#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Destination.BP_Destination_C
// (Actor)

class UClass* ABP_Destination_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Destination_C");

	return Clss;
}


// BP_Destination_C BP_Destination.Default__BP_Destination_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Destination_C* ABP_Destination_C::GetDefaultObj()
{
	static class ABP_Destination_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Destination_C*>(ABP_Destination_C::StaticClass()->DefaultObject);

	return Default;
}

}


