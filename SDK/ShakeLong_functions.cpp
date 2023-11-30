#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeLong.ShakeLong_C
// (None)

class UClass* UShakeLong_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeLong_C");

	return Clss;
}


// ShakeLong_C ShakeLong.Default__ShakeLong_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeLong_C* UShakeLong_C::GetDefaultObj()
{
	static class UShakeLong_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeLong_C*>(UShakeLong_C::StaticClass()->DefaultObject);

	return Default;
}

}


