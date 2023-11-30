#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MissleTurretBotDefaultAttributes.GE_MissleTurretBotDefaultAttributes_C
// (None)

class UClass* UGE_MissleTurretBotDefaultAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MissleTurretBotDefaultAttributes_C");

	return Clss;
}


// GE_MissleTurretBotDefaultAttributes_C GE_MissleTurretBotDefaultAttributes.Default__GE_MissleTurretBotDefaultAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MissleTurretBotDefaultAttributes_C* UGE_MissleTurretBotDefaultAttributes_C::GetDefaultObj()
{
	static class UGE_MissleTurretBotDefaultAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MissleTurretBotDefaultAttributes_C*>(UGE_MissleTurretBotDefaultAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


