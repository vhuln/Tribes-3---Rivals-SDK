#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimMetaData_Melee.AnimMetaData_Melee_C
// (None)

class UClass* UAnimMetaData_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimMetaData_Melee_C");

	return Clss;
}


// AnimMetaData_Melee_C AnimMetaData_Melee.Default__AnimMetaData_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimMetaData_Melee_C* UAnimMetaData_Melee_C::GetDefaultObj()
{
	static class UAnimMetaData_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimMetaData_Melee_C*>(UAnimMetaData_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


