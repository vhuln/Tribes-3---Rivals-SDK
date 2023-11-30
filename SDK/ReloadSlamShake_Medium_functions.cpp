#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReloadSlamShake_Medium.ReloadSlamShake_Medium_C
// (None)

class UClass* UReloadSlamShake_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReloadSlamShake_Medium_C");

	return Clss;
}


// ReloadSlamShake_Medium_C ReloadSlamShake_Medium.Default__ReloadSlamShake_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReloadSlamShake_Medium_C* UReloadSlamShake_Medium_C::GetDefaultObj()
{
	static class UReloadSlamShake_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReloadSlamShake_Medium_C*>(UReloadSlamShake_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


