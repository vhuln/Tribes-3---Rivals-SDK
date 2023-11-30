#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_text_button.WBP_text_button_C
// (None)

class UClass* UWBP_text_button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_text_button_C");

	return Clss;
}


// WBP_text_button_C WBP_text_button.Default__WBP_text_button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_text_button_C* UWBP_text_button_C::GetDefaultObj()
{
	static class UWBP_text_button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_text_button_C*>(UWBP_text_button_C::StaticClass()->DefaultObject);

	return Default;
}

}


