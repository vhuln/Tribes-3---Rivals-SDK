#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActivityTracker_LlamaGrab.BP_ActivityTracker_LlamaGrab_C
// (None)

class UClass* UBP_ActivityTracker_LlamaGrab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActivityTracker_LlamaGrab_C");

	return Clss;
}


// BP_ActivityTracker_LlamaGrab_C BP_ActivityTracker_LlamaGrab.Default__BP_ActivityTracker_LlamaGrab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActivityTracker_LlamaGrab_C* UBP_ActivityTracker_LlamaGrab_C::GetDefaultObj()
{
	static class UBP_ActivityTracker_LlamaGrab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActivityTracker_LlamaGrab_C*>(UBP_ActivityTracker_LlamaGrab_C::StaticClass()->DefaultObject);

	return Default;
}

}


