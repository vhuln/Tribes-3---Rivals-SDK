#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TurretDefaultAttributes.GE_TurretDefaultAttributes_C
// (None)

class UClass* UGE_TurretDefaultAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TurretDefaultAttributes_C");

	return Clss;
}


// GE_TurretDefaultAttributes_C GE_TurretDefaultAttributes.Default__GE_TurretDefaultAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TurretDefaultAttributes_C* UGE_TurretDefaultAttributes_C::GetDefaultObj()
{
	static class UGE_TurretDefaultAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TurretDefaultAttributes_C*>(UGE_TurretDefaultAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


