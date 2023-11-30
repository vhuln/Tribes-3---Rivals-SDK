#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_JumpPadAttributes.GE_JumpPadAttributes_C
// (None)

class UClass* UGE_JumpPadAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_JumpPadAttributes_C");

	return Clss;
}


// GE_JumpPadAttributes_C GE_JumpPadAttributes.Default__GE_JumpPadAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_JumpPadAttributes_C* UGE_JumpPadAttributes_C::GetDefaultObj()
{
	static class UGE_JumpPadAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_JumpPadAttributes_C*>(UGE_JumpPadAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


