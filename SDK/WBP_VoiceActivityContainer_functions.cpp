#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_VoiceActivityContainer.WBP_VoiceActivityContainer_C
// (None)

class UClass* UWBP_VoiceActivityContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_VoiceActivityContainer_C");

	return Clss;
}


// WBP_VoiceActivityContainer_C WBP_VoiceActivityContainer.Default__WBP_VoiceActivityContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_VoiceActivityContainer_C* UWBP_VoiceActivityContainer_C::GetDefaultObj()
{
	static class UWBP_VoiceActivityContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_VoiceActivityContainer_C*>(UWBP_VoiceActivityContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


