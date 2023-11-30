#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ModuleHeader.WBP_ModuleHeader_C
// (None)

class UClass* UWBP_ModuleHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ModuleHeader_C");

	return Clss;
}


// WBP_ModuleHeader_C WBP_ModuleHeader.Default__WBP_ModuleHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ModuleHeader_C* UWBP_ModuleHeader_C::GetDefaultObj()
{
	static class UWBP_ModuleHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ModuleHeader_C*>(UWBP_ModuleHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ModuleHeader.WBP_ModuleHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModuleHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ModuleHeader_C", "PreConstruct");

	Params::UWBP_ModuleHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ModuleHeader.WBP_ModuleHeader_C.ExecuteUbergraph_WBP_ModuleHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModuleHeader_C::ExecuteUbergraph_WBP_ModuleHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ModuleHeader_C", "ExecuteUbergraph_WBP_ModuleHeader");

	Params::UWBP_ModuleHeader_C_ExecuteUbergraph_WBP_ModuleHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


