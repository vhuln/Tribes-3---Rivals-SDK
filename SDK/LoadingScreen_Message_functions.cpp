#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoadingScreen_Message.LoadingScreen_Message_C
// (None)

class UClass* ULoadingScreen_Message_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreen_Message_C");

	return Clss;
}


// LoadingScreen_Message_C LoadingScreen_Message.Default__LoadingScreen_Message_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoadingScreen_Message_C* ULoadingScreen_Message_C::GetDefaultObj()
{
	static class ULoadingScreen_Message_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoadingScreen_Message_C*>(ULoadingScreen_Message_C::StaticClass()->DefaultObject);

	return Default;
}

}


