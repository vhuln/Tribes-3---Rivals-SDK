#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VendorConsumables.VendorConsumables_C
// (None)

class UClass* UVendorConsumables_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VendorConsumables_C");

	return Clss;
}


// VendorConsumables_C VendorConsumables.Default__VendorConsumables_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVendorConsumables_C* UVendorConsumables_C::GetDefaultObj()
{
	static class UVendorConsumables_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVendorConsumables_C*>(UVendorConsumables_C::StaticClass()->DefaultObject);

	return Default;
}

}


