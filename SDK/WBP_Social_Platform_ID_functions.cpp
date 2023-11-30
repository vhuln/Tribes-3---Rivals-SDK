#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Social_Platform_ID.WBP_Social_Platform_ID_C
// (None)

class UClass* UWBP_Social_Platform_ID_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Social_Platform_ID_C");

	return Clss;
}


// WBP_Social_Platform_ID_C WBP_Social_Platform_ID.Default__WBP_Social_Platform_ID_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Social_Platform_ID_C* UWBP_Social_Platform_ID_C::GetDefaultObj()
{
	static class UWBP_Social_Platform_ID_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Social_Platform_ID_C*>(UWBP_Social_Platform_ID_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Platform_ID_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Platform_ID_C", "PreConstruct");

	Params::UWBP_Social_Platform_ID_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Social_Platform_ID_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Platform_ID_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.ExecuteUbergraph_WBP_Social_Platform_ID
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Social_Platform_ID_C::ExecuteUbergraph_WBP_Social_Platform_ID(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Social_Platform_ID_C", "ExecuteUbergraph_WBP_Social_Platform_ID");

	Params::UWBP_Social_Platform_ID_C_ExecuteUbergraph_WBP_Social_Platform_ID_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


