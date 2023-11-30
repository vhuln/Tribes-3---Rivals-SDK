#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_LookForPlayerState.BP_DefenderFSM_LookForPlayerState_C
// (None)

class UClass* UBP_DefenderFSM_LookForPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_LookForPlayerState_C");

	return Clss;
}


// BP_DefenderFSM_LookForPlayerState_C BP_DefenderFSM_LookForPlayerState.Default__BP_DefenderFSM_LookForPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_LookForPlayerState_C* UBP_DefenderFSM_LookForPlayerState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_LookForPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_LookForPlayerState_C*>(UBP_DefenderFSM_LookForPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}

}


