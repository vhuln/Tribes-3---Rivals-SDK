#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircleDeadZone_RightStick.CircleDeadZone_RightStick_C
// (None)

class UClass* UCircleDeadZone_RightStick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircleDeadZone_RightStick_C");

	return Clss;
}


// CircleDeadZone_RightStick_C CircleDeadZone_RightStick.Default__CircleDeadZone_RightStick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCircleDeadZone_RightStick_C* UCircleDeadZone_RightStick_C::GetDefaultObj()
{
	static class UCircleDeadZone_RightStick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircleDeadZone_RightStick_C*>(UCircleDeadZone_RightStick_C::StaticClass()->DefaultObject);

	return Default;
}

}


