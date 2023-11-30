#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TauntTag.GE_TauntTag_C
// (None)

class UClass* UGE_TauntTag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TauntTag_C");

	return Clss;
}


// GE_TauntTag_C GE_TauntTag.Default__GE_TauntTag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TauntTag_C* UGE_TauntTag_C::GetDefaultObj()
{
	static class UGE_TauntTag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TauntTag_C*>(UGE_TauntTag_C::StaticClass()->DefaultObject);

	return Default;
}

}


