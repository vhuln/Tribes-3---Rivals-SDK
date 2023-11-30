#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Blink_MeleeDmgReduce.GE_Blink_MeleeDmgReduce_C
// (None)

class UClass* UGE_Blink_MeleeDmgReduce_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Blink_MeleeDmgReduce_C");

	return Clss;
}


// GE_Blink_MeleeDmgReduce_C GE_Blink_MeleeDmgReduce.Default__GE_Blink_MeleeDmgReduce_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Blink_MeleeDmgReduce_C* UGE_Blink_MeleeDmgReduce_C::GetDefaultObj()
{
	static class UGE_Blink_MeleeDmgReduce_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Blink_MeleeDmgReduce_C*>(UGE_Blink_MeleeDmgReduce_C::StaticClass()->DefaultObject);

	return Default;
}

}


