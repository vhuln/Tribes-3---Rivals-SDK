#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C
// (None)

class UClass* UWBP_RegionSelect_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RegionSelect_Entry_C");

	return Clss;
}


// WBP_RegionSelect_Entry_C WBP_RegionSelect_Entry.Default__WBP_RegionSelect_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RegionSelect_Entry_C* UWBP_RegionSelect_Entry_C::GetDefaultObj()
{
	static class UWBP_RegionSelect_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RegionSelect_Entry_C*>(UWBP_RegionSelect_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ShowPreferredSiteIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPreferredSite                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_Entry_C::ShowPreferredSiteIcon(bool IsPreferredSite, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "ShowPreferredSiteIcon");

	Params::UWBP_RegionSelect_Entry_C_ShowPreferredSiteIcon_Params Parms{};

	Parms.IsPreferredSite = IsPreferredSite;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_RegionSelect_Entry_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "NavigateConfirm");

	Params::UWBP_RegionSelect_Entry_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "PreConstruct");

	Params::UWBP_RegionSelect_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnGamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::OnGamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "OnGamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.ExecuteUbergraph_WBP_RegionSelect_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelect_Entry_C::ExecuteUbergraph_WBP_RegionSelect_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "ExecuteUbergraph_WBP_RegionSelect_Entry");

	Params::UWBP_RegionSelect_Entry_C_ExecuteUbergraph_WBP_RegionSelect_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RegionSelect_Entry.WBP_RegionSelect_Entry_C.OnRegionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelect_Entry_C::OnRegionSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelect_Entry_C", "OnRegionSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


