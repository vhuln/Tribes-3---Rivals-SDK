#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ProximityMine_DefaultAttributes.GE_ProximityMine_DefaultAttributes_C
// (None)

class UClass* UGE_ProximityMine_DefaultAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ProximityMine_DefaultAttributes_C");

	return Clss;
}


// GE_ProximityMine_DefaultAttributes_C GE_ProximityMine_DefaultAttributes.Default__GE_ProximityMine_DefaultAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ProximityMine_DefaultAttributes_C* UGE_ProximityMine_DefaultAttributes_C::GetDefaultObj()
{
	static class UGE_ProximityMine_DefaultAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ProximityMine_DefaultAttributes_C*>(UGE_ProximityMine_DefaultAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


