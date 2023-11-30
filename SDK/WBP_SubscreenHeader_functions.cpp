#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SubscreenHeader.WBP_SubscreenHeader_C
// (None)

class UClass* UWBP_SubscreenHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SubscreenHeader_C");

	return Clss;
}


// WBP_SubscreenHeader_C WBP_SubscreenHeader.Default__WBP_SubscreenHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SubscreenHeader_C* UWBP_SubscreenHeader_C::GetDefaultObj()
{
	static class UWBP_SubscreenHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SubscreenHeader_C*>(UWBP_SubscreenHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SubscreenHeader.WBP_SubscreenHeader_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SubscreenHeader_C::Set_Text(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubscreenHeader_C", "Set Text");

	Params::UWBP_SubscreenHeader_C_Set_Text_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubscreenHeader.WBP_SubscreenHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubscreenHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubscreenHeader_C", "PreConstruct");

	Params::UWBP_SubscreenHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SubscreenHeader.WBP_SubscreenHeader_C.ExecuteUbergraph_WBP_SubscreenHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SubscreenHeader_C::ExecuteUbergraph_WBP_SubscreenHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SubscreenHeader_C", "ExecuteUbergraph_WBP_SubscreenHeader");

	Params::UWBP_SubscreenHeader_C_ExecuteUbergraph_WBP_SubscreenHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


