#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_subscreen_header.WBP_subscreen_header_C
// (None)

class UClass* UWBP_subscreen_header_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_subscreen_header_C");

	return Clss;
}


// WBP_subscreen_header_C WBP_subscreen_header.Default__WBP_subscreen_header_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_subscreen_header_C* UWBP_subscreen_header_C::GetDefaultObj()
{
	static class UWBP_subscreen_header_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_subscreen_header_C*>(UWBP_subscreen_header_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_subscreen_header.WBP_subscreen_header_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_subscreen_header_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_subscreen_header_C", "PreConstruct");

	Params::UWBP_subscreen_header_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_subscreen_header.WBP_subscreen_header_C.ExecuteUbergraph_WBP_subscreen_header
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)

void UWBP_subscreen_header_C::ExecuteUbergraph_WBP_subscreen_header(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_subscreen_header_C", "ExecuteUbergraph_WBP_subscreen_header");

	Params::UWBP_subscreen_header_C_ExecuteUbergraph_WBP_subscreen_header_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


