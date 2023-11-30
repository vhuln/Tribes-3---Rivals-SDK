#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterOverlay_Marker.CharacterOverlay_Marker_C
// (None)

class UClass* UCharacterOverlay_Marker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterOverlay_Marker_C");

	return Clss;
}


// CharacterOverlay_Marker_C CharacterOverlay_Marker.Default__CharacterOverlay_Marker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterOverlay_Marker_C* UCharacterOverlay_Marker_C::GetDefaultObj()
{
	static class UCharacterOverlay_Marker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterOverlay_Marker_C*>(UCharacterOverlay_Marker_C::StaticClass()->DefaultObject);

	return Default;
}

}


