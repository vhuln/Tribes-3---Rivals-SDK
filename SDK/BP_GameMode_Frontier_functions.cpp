#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GameMode_Frontier.BP_GameMode_Frontier_C
// (Actor)

class UClass* ABP_GameMode_Frontier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GameMode_Frontier_C");

	return Clss;
}


// BP_GameMode_Frontier_C BP_GameMode_Frontier.Default__BP_GameMode_Frontier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GameMode_Frontier_C* ABP_GameMode_Frontier_C::GetDefaultObj()
{
	static class ABP_GameMode_Frontier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GameMode_Frontier_C*>(ABP_GameMode_Frontier_C::StaticClass()->DefaultObject);

	return Default;
}

}


