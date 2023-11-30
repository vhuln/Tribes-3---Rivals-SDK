#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BulletWhizCameraShake.BulletWhizCameraShake_C
// (None)

class UClass* UBulletWhizCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BulletWhizCameraShake_C");

	return Clss;
}


// BulletWhizCameraShake_C BulletWhizCameraShake.Default__BulletWhizCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBulletWhizCameraShake_C* UBulletWhizCameraShake_C::GetDefaultObj()
{
	static class UBulletWhizCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBulletWhizCameraShake_C*>(UBulletWhizCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


