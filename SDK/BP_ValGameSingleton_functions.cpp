#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValGameSingleton.BP_ValGameSingleton_C
// (None)

class UClass* UBP_ValGameSingleton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValGameSingleton_C");

	return Clss;
}


// BP_ValGameSingleton_C BP_ValGameSingleton.Default__BP_ValGameSingleton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ValGameSingleton_C* UBP_ValGameSingleton_C::GetDefaultObj()
{
	static class UBP_ValGameSingleton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ValGameSingleton_C*>(UBP_ValGameSingleton_C::StaticClass()->DefaultObject);

	return Default;
}

}


