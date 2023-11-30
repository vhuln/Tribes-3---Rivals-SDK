#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DomeShieldAttributes.GE_DomeShieldAttributes_C
// (None)

class UClass* UGE_DomeShieldAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DomeShieldAttributes_C");

	return Clss;
}


// GE_DomeShieldAttributes_C GE_DomeShieldAttributes.Default__GE_DomeShieldAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DomeShieldAttributes_C* UGE_DomeShieldAttributes_C::GetDefaultObj()
{
	static class UGE_DomeShieldAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DomeShieldAttributes_C*>(UGE_DomeShieldAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


