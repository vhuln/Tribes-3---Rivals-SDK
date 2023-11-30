#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleDeadZone_LeftStick.CircleDeadZone_LeftStick_C
// (None)

class UClass* UCircleDeadZone_LeftStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleDeadZone_LeftStick_C");

	return Clss;
}


// CircleDeadZone_LeftStick_C CircleDeadZone_LeftStick.Default__CircleDeadZone_LeftStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleDeadZone_LeftStick_C* UCircleDeadZone_LeftStick_C::GetDefaultObj()
{
	static class UCircleDeadZone_LeftStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleDeadZone_LeftStick_C*>(UCircleDeadZone_LeftStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


