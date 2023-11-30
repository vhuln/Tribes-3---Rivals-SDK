#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UI_CommonUI_InputData.UI_CommonUI_InputData_C
// (None)

class UClass* UUI_CommonUI_InputData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CommonUI_InputData_C");

	return Clss;
}


// UI_CommonUI_InputData_C UI_CommonUI_InputData.Default__UI_CommonUI_InputData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CommonUI_InputData_C* UUI_CommonUI_InputData_C::GetDefaultObj()
{
	static class UUI_CommonUI_InputData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CommonUI_InputData_C*>(UUI_CommonUI_InputData_C::StaticClass()->DefaultObject);

	return Default;
}

}


