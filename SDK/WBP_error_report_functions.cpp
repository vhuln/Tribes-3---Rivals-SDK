#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_error_report.WBP_error_report_C
// (None)

class UClass* UWBP_error_report_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_error_report_C");

	return Clss;
}


// WBP_error_report_C WBP_error_report.Default__WBP_error_report_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_error_report_C* UWBP_error_report_C::GetDefaultObj()
{
	static class UWBP_error_report_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_error_report_C*>(UWBP_error_report_C::StaticClass()->DefaultObject);

	return Default;
}

}


