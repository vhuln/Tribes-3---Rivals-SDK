#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BotSquad.BP_BotSquad_C
// (None)

class UClass* UBP_BotSquad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BotSquad_C");

	return Clss;
}


// BP_BotSquad_C BP_BotSquad.Default__BP_BotSquad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BotSquad_C* UBP_BotSquad_C::GetDefaultObj()
{
	static class UBP_BotSquad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BotSquad_C*>(UBP_BotSquad_C::StaticClass()->DefaultObject);

	return Default;
}

}


