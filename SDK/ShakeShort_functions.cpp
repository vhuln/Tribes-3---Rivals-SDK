#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeShort.ShakeShort_C
// (None)

class UClass* UShakeShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeShort_C");

	return Clss;
}


// ShakeShort_C ShakeShort.Default__ShakeShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeShort_C* UShakeShort_C::GetDefaultObj()
{
	static class UShakeShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeShort_C*>(UShakeShort_C::StaticClass()->DefaultObject);

	return Default;
}

}


