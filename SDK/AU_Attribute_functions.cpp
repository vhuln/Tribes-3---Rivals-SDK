#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AU_Attribute.AU_Attribute_C
// (None)

class UClass* UAU_Attribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AU_Attribute_C");

	return Clss;
}


// AU_Attribute_C AU_Attribute.Default__AU_Attribute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAU_Attribute_C* UAU_Attribute_C::GetDefaultObj()
{
	static class UAU_Attribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAU_Attribute_C*>(UAU_Attribute_C::StaticClass()->DefaultObject);

	return Default;
}

}


