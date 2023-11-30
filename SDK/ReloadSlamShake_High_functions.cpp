#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReloadSlamShake_High.ReloadSlamShake_High_C
// (None)

class UClass* UReloadSlamShake_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReloadSlamShake_High_C");

	return Clss;
}


// ReloadSlamShake_High_C ReloadSlamShake_High.Default__ReloadSlamShake_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReloadSlamShake_High_C* UReloadSlamShake_High_C::GetDefaultObj()
{
	static class UReloadSlamShake_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReloadSlamShake_High_C*>(UReloadSlamShake_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


