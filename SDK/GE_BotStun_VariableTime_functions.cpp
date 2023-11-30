#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BotStun_VariableTime.GE_BotStun_VariableTime_C
// (None)

class UClass* UGE_BotStun_VariableTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BotStun_VariableTime_C");

	return Clss;
}


// GE_BotStun_VariableTime_C GE_BotStun_VariableTime.Default__GE_BotStun_VariableTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BotStun_VariableTime_C* UGE_BotStun_VariableTime_C::GetDefaultObj()
{
	static class UGE_BotStun_VariableTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BotStun_VariableTime_C*>(UGE_BotStun_VariableTime_C::StaticClass()->DefaultObject);

	return Default;
}

}


