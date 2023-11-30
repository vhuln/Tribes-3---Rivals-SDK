#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_panel_bevel.WBP_panel_bevel_C
// (None)

class UClass* UWBP_panel_bevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_panel_bevel_C");

	return Clss;
}


// WBP_panel_bevel_C WBP_panel_bevel.Default__WBP_panel_bevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_panel_bevel_C* UWBP_panel_bevel_C::GetDefaultObj()
{
	static class UWBP_panel_bevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_panel_bevel_C*>(UWBP_panel_bevel_C::StaticClass()->DefaultObject);

	return Default;
}

}


