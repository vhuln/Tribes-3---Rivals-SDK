#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_LostPlayerState.BP_DefenderFSM_LostPlayerState_C
// (None)

class UClass* UBP_DefenderFSM_LostPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_LostPlayerState_C");

	return Clss;
}


// BP_DefenderFSM_LostPlayerState_C BP_DefenderFSM_LostPlayerState.Default__BP_DefenderFSM_LostPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_LostPlayerState_C* UBP_DefenderFSM_LostPlayerState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_LostPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_LostPlayerState_C*>(UBP_DefenderFSM_LostPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}

}


