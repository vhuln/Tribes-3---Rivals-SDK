#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VendorCrafting.VendorCrafting_C
// (None)

class UClass* UVendorCrafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VendorCrafting_C");

	return Clss;
}


// VendorCrafting_C VendorCrafting.Default__VendorCrafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVendorCrafting_C* UVendorCrafting_C::GetDefaultObj()
{
	static class UVendorCrafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVendorCrafting_C*>(UVendorCrafting_C::StaticClass()->DefaultObject);

	return Default;
}

}


