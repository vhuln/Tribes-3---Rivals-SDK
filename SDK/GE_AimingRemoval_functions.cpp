#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AimingRemoval.GE_AimingRemoval_C
// (None)

class UClass* UGE_AimingRemoval_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AimingRemoval_C");

	return Clss;
}


// GE_AimingRemoval_C GE_AimingRemoval.Default__GE_AimingRemoval_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AimingRemoval_C* UGE_AimingRemoval_C::GetDefaultObj()
{
	static class UGE_AimingRemoval_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AimingRemoval_C*>(UGE_AimingRemoval_C::StaticClass()->DefaultObject);

	return Default;
}

}


