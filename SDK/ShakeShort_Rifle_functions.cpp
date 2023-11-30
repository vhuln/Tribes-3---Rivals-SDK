#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeShort_Rifle.ShakeShort_Rifle_C
// (None)

class UClass* UShakeShort_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeShort_Rifle_C");

	return Clss;
}


// ShakeShort_Rifle_C ShakeShort_Rifle.Default__ShakeShort_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeShort_Rifle_C* UShakeShort_Rifle_C::GetDefaultObj()
{
	static class UShakeShort_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeShort_Rifle_C*>(UShakeShort_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


