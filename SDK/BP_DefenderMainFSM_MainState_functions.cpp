#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderMainFSM_MainState.BP_DefenderMainFSM_MainState_C
// (None)

class UClass* UBP_DefenderMainFSM_MainState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderMainFSM_MainState_C");

	return Clss;
}


// BP_DefenderMainFSM_MainState_C BP_DefenderMainFSM_MainState.Default__BP_DefenderMainFSM_MainState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderMainFSM_MainState_C* UBP_DefenderMainFSM_MainState_C::GetDefaultObj()
{
	static class UBP_DefenderMainFSM_MainState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderMainFSM_MainState_C*>(UBP_DefenderMainFSM_MainState_C::StaticClass()->DefaultObject);

	return Default;
}

}


