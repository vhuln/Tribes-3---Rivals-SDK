#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DecoyDefaultAttribute_Hologram.GE_DecoyDefaultAttribute_Hologram_C
// (None)

class UClass* UGE_DecoyDefaultAttribute_Hologram_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DecoyDefaultAttribute_Hologram_C");

	return Clss;
}


// GE_DecoyDefaultAttribute_Hologram_C GE_DecoyDefaultAttribute_Hologram.Default__GE_DecoyDefaultAttribute_Hologram_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DecoyDefaultAttribute_Hologram_C* UGE_DecoyDefaultAttribute_Hologram_C::GetDefaultObj()
{
	static class UGE_DecoyDefaultAttribute_Hologram_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DecoyDefaultAttribute_Hologram_C*>(UGE_DecoyDefaultAttribute_Hologram_C::StaticClass()->DefaultObject);

	return Default;
}

}


