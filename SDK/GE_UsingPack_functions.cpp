#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_UsingPack.GE_UsingPack_C
// (None)

class UClass* UGE_UsingPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_UsingPack_C");

	return Clss;
}


// GE_UsingPack_C GE_UsingPack.Default__GE_UsingPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_UsingPack_C* UGE_UsingPack_C::GetDefaultObj()
{
	static class UGE_UsingPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_UsingPack_C*>(UGE_UsingPack_C::StaticClass()->DefaultObject);

	return Default;
}

}


