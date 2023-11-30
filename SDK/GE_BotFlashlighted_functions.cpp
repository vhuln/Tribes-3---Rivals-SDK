#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BotFlashlighted.GE_BotFlashlighted_C
// (None)

class UClass* UGE_BotFlashlighted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BotFlashlighted_C");

	return Clss;
}


// GE_BotFlashlighted_C GE_BotFlashlighted.Default__GE_BotFlashlighted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BotFlashlighted_C* UGE_BotFlashlighted_C::GetDefaultObj()
{
	static class UGE_BotFlashlighted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BotFlashlighted_C*>(UGE_BotFlashlighted_C::StaticClass()->DefaultObject);

	return Default;
}

}


