#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SuitComponentEntry.WBP_SuitComponentEntry_C
// (None)

class UClass* UWBP_SuitComponentEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SuitComponentEntry_C");

	return Clss;
}


// WBP_SuitComponentEntry_C WBP_SuitComponentEntry.Default__WBP_SuitComponentEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SuitComponentEntry_C* UWBP_SuitComponentEntry_C::GetDefaultObj()
{
	static class UWBP_SuitComponentEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SuitComponentEntry_C*>(UWBP_SuitComponentEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SuitComponentEntry.WBP_SuitComponentEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SuitComponentEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SuitComponentEntry_C", "PreConstruct");

	Params::UWBP_SuitComponentEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SuitComponentEntry.WBP_SuitComponentEntry_C.ExecuteUbergraph_WBP_SuitComponentEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SuitComponentEntry_C::ExecuteUbergraph_WBP_SuitComponentEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SuitComponentEntry_C", "ExecuteUbergraph_WBP_SuitComponentEntry");

	Params::UWBP_SuitComponentEntry_C_ExecuteUbergraph_WBP_SuitComponentEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


