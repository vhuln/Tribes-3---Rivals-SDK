#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_InvestigateState.BP_DefenderFSM_InvestigateState_C
// (None)

class UClass* UBP_DefenderFSM_InvestigateState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_InvestigateState_C");

	return Clss;
}


// BP_DefenderFSM_InvestigateState_C BP_DefenderFSM_InvestigateState.Default__BP_DefenderFSM_InvestigateState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_InvestigateState_C* UBP_DefenderFSM_InvestigateState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_InvestigateState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_InvestigateState_C*>(UBP_DefenderFSM_InvestigateState_C::StaticClass()->DefaultObject);

	return Default;
}

}


