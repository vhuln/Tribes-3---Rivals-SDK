#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DissectorLatch_Bot.GE_DissectorLatch_Bot_C
// (None)

class UClass* UGE_DissectorLatch_Bot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DissectorLatch_Bot_C");

	return Clss;
}


// GE_DissectorLatch_Bot_C GE_DissectorLatch_Bot.Default__GE_DissectorLatch_Bot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DissectorLatch_Bot_C* UGE_DissectorLatch_Bot_C::GetDefaultObj()
{
	static class UGE_DissectorLatch_Bot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DissectorLatch_Bot_C*>(UGE_DissectorLatch_Bot_C::StaticClass()->DefaultObject);

	return Default;
}

}


