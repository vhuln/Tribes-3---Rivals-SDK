#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VendorCraftables.VendorCraftables_C
// (None)

class UClass* UVendorCraftables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VendorCraftables_C");

	return Clss;
}


// VendorCraftables_C VendorCraftables.Default__VendorCraftables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVendorCraftables_C* UVendorCraftables_C::GetDefaultObj()
{
	static class UVendorCraftables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVendorCraftables_C*>(UVendorCraftables_C::StaticClass()->DefaultObject);

	return Default;
}

}


