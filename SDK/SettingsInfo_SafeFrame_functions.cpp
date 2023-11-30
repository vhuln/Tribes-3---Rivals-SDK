#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SettingsInfo_SafeFrame.SettingsInfo_SafeFrame_C
// (None)

class UClass* USettingsInfo_SafeFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SettingsInfo_SafeFrame_C");

	return Clss;
}


// SettingsInfo_SafeFrame_C SettingsInfo_SafeFrame.Default__SettingsInfo_SafeFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USettingsInfo_SafeFrame_C* USettingsInfo_SafeFrame_C::GetDefaultObj()
{
	static class USettingsInfo_SafeFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USettingsInfo_SafeFrame_C*>(USettingsInfo_SafeFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


