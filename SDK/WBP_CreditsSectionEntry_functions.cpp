#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CreditsSectionEntry.WBP_CreditsSectionEntry_C
// (None)

class UClass* UWBP_CreditsSectionEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CreditsSectionEntry_C");

	return Clss;
}


// WBP_CreditsSectionEntry_C WBP_CreditsSectionEntry.Default__WBP_CreditsSectionEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CreditsSectionEntry_C* UWBP_CreditsSectionEntry_C::GetDefaultObj()
{
	static class UWBP_CreditsSectionEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CreditsSectionEntry_C*>(UWBP_CreditsSectionEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CreditsSectionEntry.WBP_CreditsSectionEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreditsSectionEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsSectionEntry_C", "PreConstruct");

	Params::UWBP_CreditsSectionEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CreditsSectionEntry.WBP_CreditsSectionEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CreditsSectionEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsSectionEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsSectionEntry.WBP_CreditsSectionEntry_C.ExecuteUbergraph_WBP_CreditsSectionEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CreditsSectionEntry_C::ExecuteUbergraph_WBP_CreditsSectionEntry(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsSectionEntry_C", "ExecuteUbergraph_WBP_CreditsSectionEntry");

	Params::UWBP_CreditsSectionEntry_C_ExecuteUbergraph_WBP_CreditsSectionEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


