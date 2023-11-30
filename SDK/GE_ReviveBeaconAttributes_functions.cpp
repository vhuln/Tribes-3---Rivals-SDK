#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ReviveBeaconAttributes.GE_ReviveBeaconAttributes_C
// (None)

class UClass* UGE_ReviveBeaconAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ReviveBeaconAttributes_C");

	return Clss;
}


// GE_ReviveBeaconAttributes_C GE_ReviveBeaconAttributes.Default__GE_ReviveBeaconAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ReviveBeaconAttributes_C* UGE_ReviveBeaconAttributes_C::GetDefaultObj()
{
	static class UGE_ReviveBeaconAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ReviveBeaconAttributes_C*>(UGE_ReviveBeaconAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


