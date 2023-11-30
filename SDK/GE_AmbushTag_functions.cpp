#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AmbushTag.GE_AmbushTag_C
// (None)

class UClass* UGE_AmbushTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AmbushTag_C");

	return Clss;
}


// GE_AmbushTag_C GE_AmbushTag.Default__GE_AmbushTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AmbushTag_C* UGE_AmbushTag_C::GetDefaultObj()
{
	static class UGE_AmbushTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AmbushTag_C*>(UGE_AmbushTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


