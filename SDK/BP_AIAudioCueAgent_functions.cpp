#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIAudioCueAgent.BP_AIAudioCueAgent_C
// (None)

class UClass* UBP_AIAudioCueAgent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIAudioCueAgent_C");

	return Clss;
}


// BP_AIAudioCueAgent_C BP_AIAudioCueAgent.Default__BP_AIAudioCueAgent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AIAudioCueAgent_C* UBP_AIAudioCueAgent_C::GetDefaultObj()
{
	static class UBP_AIAudioCueAgent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AIAudioCueAgent_C*>(UBP_AIAudioCueAgent_C::StaticClass()->DefaultObject);

	return Default;
}

}


