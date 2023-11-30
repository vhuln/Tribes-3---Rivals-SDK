#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DoubleBlink.GE_DoubleBlink_C
// (None)

class UClass* UGE_DoubleBlink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DoubleBlink_C");

	return Clss;
}


// GE_DoubleBlink_C GE_DoubleBlink.Default__GE_DoubleBlink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DoubleBlink_C* UGE_DoubleBlink_C::GetDefaultObj()
{
	static class UGE_DoubleBlink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DoubleBlink_C*>(UGE_DoubleBlink_C::StaticClass()->DefaultObject);

	return Default;
}

}


