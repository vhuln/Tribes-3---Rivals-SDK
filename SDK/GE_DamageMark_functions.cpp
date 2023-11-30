#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DamageMark.GE_DamageMark_C
// (None)

class UClass* UGE_DamageMark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DamageMark_C");

	return Clss;
}


// GE_DamageMark_C GE_DamageMark.Default__GE_DamageMark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DamageMark_C* UGE_DamageMark_C::GetDefaultObj()
{
	static class UGE_DamageMark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DamageMark_C*>(UGE_DamageMark_C::StaticClass()->DefaultObject);

	return Default;
}

}


