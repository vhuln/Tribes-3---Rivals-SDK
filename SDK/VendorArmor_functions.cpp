#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VendorArmor.VendorArmor_C
// (None)

class UClass* UVendorArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VendorArmor_C");

	return Clss;
}


// VendorArmor_C VendorArmor.Default__VendorArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVendorArmor_C* UVendorArmor_C::GetDefaultObj()
{
	static class UVendorArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVendorArmor_C*>(UVendorArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


