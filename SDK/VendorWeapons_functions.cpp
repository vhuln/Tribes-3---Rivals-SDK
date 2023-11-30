#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VendorWeapons.VendorWeapons_C
// (None)

class UClass* UVendorWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VendorWeapons_C");

	return Clss;
}


// VendorWeapons_C VendorWeapons.Default__VendorWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVendorWeapons_C* UVendorWeapons_C::GetDefaultObj()
{
	static class UVendorWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVendorWeapons_C*>(UVendorWeapons_C::StaticClass()->DefaultObject);

	return Default;
}

}


