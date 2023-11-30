#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DecoyDefaultAttribute.GE_DecoyDefaultAttribute_C
// (None)

class UClass* UGE_DecoyDefaultAttribute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DecoyDefaultAttribute_C");

	return Clss;
}


// GE_DecoyDefaultAttribute_C GE_DecoyDefaultAttribute.Default__GE_DecoyDefaultAttribute_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UGE_DecoyDefaultAttribute_C* UGE_DecoyDefaultAttribute_C::GetDefaultObj()
{
	static class UGE_DecoyDefaultAttribute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DecoyDefaultAttribute_C*>(UGE_DecoyDefaultAttribute_C::StaticClass()->DefaultObject);

	return Default;
}

}


