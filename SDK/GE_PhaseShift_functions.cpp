#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PhaseShift.GE_PhaseShift_C
// (None)

class UClass* UGE_PhaseShift_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PhaseShift_C");

	return Clss;
}


// GE_PhaseShift_C GE_PhaseShift.Default__GE_PhaseShift_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PhaseShift_C* UGE_PhaseShift_C::GetDefaultObj()
{
	static class UGE_PhaseShift_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PhaseShift_C*>(UGE_PhaseShift_C::StaticClass()->DefaultObject);

	return Default;
}

}


