#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AmbushBotPerceptionModifer.GE_AmbushBotPerceptionModifer_C
// (None)

class UClass* UGE_AmbushBotPerceptionModifer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AmbushBotPerceptionModifer_C");

	return Clss;
}


// GE_AmbushBotPerceptionModifer_C GE_AmbushBotPerceptionModifer.Default__GE_AmbushBotPerceptionModifer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AmbushBotPerceptionModifer_C* UGE_AmbushBotPerceptionModifer_C::GetDefaultObj()
{
	static class UGE_AmbushBotPerceptionModifer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AmbushBotPerceptionModifer_C*>(UGE_AmbushBotPerceptionModifer_C::StaticClass()->DefaultObject);

	return Default;
}

}


