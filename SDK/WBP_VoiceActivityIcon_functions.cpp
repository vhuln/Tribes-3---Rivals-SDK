#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C
// (None)

class UClass* UWBP_VoiceActivityIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_VoiceActivityIcon_C");

	return Clss;
}


// WBP_VoiceActivityIcon_C WBP_VoiceActivityIcon.Default__WBP_VoiceActivityIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_VoiceActivityIcon_C* UWBP_VoiceActivityIcon_C::GetDefaultObj()
{
	static class UWBP_VoiceActivityIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_VoiceActivityIcon_C*>(UWBP_VoiceActivityIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTalking                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMuted                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceActivityIcon_C::SetState(bool IsTalking, bool IsMuted, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VoiceActivityIcon_C", "SetState");

	Params::UWBP_VoiceActivityIcon_C_SetState_Params Parms{};

	Parms.IsTalking = IsTalking;
	Parms.IsMuted = IsMuted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceActivityIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VoiceActivityIcon_C", "PreConstruct");

	Params::UWBP_VoiceActivityIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VoiceActivityIcon.WBP_VoiceActivityIcon_C.ExecuteUbergraph_WBP_VoiceActivityIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VoiceActivityIcon_C::ExecuteUbergraph_WBP_VoiceActivityIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VoiceActivityIcon_C", "ExecuteUbergraph_WBP_VoiceActivityIcon");

	Params::UWBP_VoiceActivityIcon_C_ExecuteUbergraph_WBP_VoiceActivityIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


