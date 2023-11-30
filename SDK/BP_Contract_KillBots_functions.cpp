#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Contract_KillBots.BP_Contract_KillBots_C
// (None)

class UClass* UBP_Contract_KillBots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Contract_KillBots_C");

	return Clss;
}


// BP_Contract_KillBots_C BP_Contract_KillBots.Default__BP_Contract_KillBots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Contract_KillBots_C* UBP_Contract_KillBots_C::GetDefaultObj()
{
	static class UBP_Contract_KillBots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Contract_KillBots_C*>(UBP_Contract_KillBots_C::StaticClass()->DefaultObject);

	return Default;
}

}


