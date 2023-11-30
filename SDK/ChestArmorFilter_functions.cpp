#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChestArmorFilter.ChestArmorFilter_C
// (None)

class UClass* UChestArmorFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChestArmorFilter_C");

	return Clss;
}


// ChestArmorFilter_C ChestArmorFilter.Default__ChestArmorFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChestArmorFilter_C* UChestArmorFilter_C::GetDefaultObj()
{
	static class UChestArmorFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChestArmorFilter_C*>(UChestArmorFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


