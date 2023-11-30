#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PhaseShift_ResetOnKill.GE_PhaseShift_ResetOnKill_C
// (None)

class UClass* UGE_PhaseShift_ResetOnKill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PhaseShift_ResetOnKill_C");

	return Clss;
}


// GE_PhaseShift_ResetOnKill_C GE_PhaseShift_ResetOnKill.Default__GE_PhaseShift_ResetOnKill_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UGE_PhaseShift_ResetOnKill_C* UGE_PhaseShift_ResetOnKill_C::GetDefaultObj()
{
	static class UGE_PhaseShift_ResetOnKill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PhaseShift_ResetOnKill_C*>(UGE_PhaseShift_ResetOnKill_C::StaticClass()->DefaultObject);

	return Default;
}

}


