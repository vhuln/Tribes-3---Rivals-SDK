#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopPanel_2W.WBP_ShopPanel_2W_C
// (None)

class UClass* UWBP_ShopPanel_2W_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopPanel_2W_C");

	return Clss;
}


// WBP_ShopPanel_2W_C WBP_ShopPanel_2W.Default__WBP_ShopPanel_2W_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopPanel_2W_C* UWBP_ShopPanel_2W_C::GetDefaultObj()
{
	static class UWBP_ShopPanel_2W_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopPanel_2W_C*>(UWBP_ShopPanel_2W_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ShopPanel_2W.WBP_ShopPanel_2W_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_2W_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_2W_C", "PreConstruct");

	Params::UWBP_ShopPanel_2W_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ShopPanel_2W.WBP_ShopPanel_2W_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_2W_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_2W_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_2W.WBP_ShopPanel_2W_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ShopPanel_2W_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_2W_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ShopPanel_2W.WBP_ShopPanel_2W_C.ExecuteUbergraph_WBP_ShopPanel_2W
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopPanel_2W_C::ExecuteUbergraph_WBP_ShopPanel_2W(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ShopPanel_2W_C", "ExecuteUbergraph_WBP_ShopPanel_2W");

	Params::UWBP_ShopPanel_2W_C_ExecuteUbergraph_WBP_ShopPanel_2W_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


