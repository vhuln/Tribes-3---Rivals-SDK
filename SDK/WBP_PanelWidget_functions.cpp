#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PanelWidget.WBP_PanelWidget_C
// (None)

class UClass* UWBP_PanelWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PanelWidget_C");

	return Clss;
}


// WBP_PanelWidget_C WBP_PanelWidget.Default__WBP_PanelWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PanelWidget_C* UWBP_PanelWidget_C::GetDefaultObj()
{
	static class UWBP_PanelWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PanelWidget_C*>(UWBP_PanelWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


