#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerProgressionTracker_XPSubTotal.WBP_PlayerProgressionTracker_XPSubTotal_C
// (None)

class UClass* UWBP_PlayerProgressionTracker_XPSubTotal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerProgressionTracker_XPSubTotal_C");

	return Clss;
}


// WBP_PlayerProgressionTracker_XPSubTotal_C WBP_PlayerProgressionTracker_XPSubTotal.Default__WBP_PlayerProgressionTracker_XPSubTotal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerProgressionTracker_XPSubTotal_C* UWBP_PlayerProgressionTracker_XPSubTotal_C::GetDefaultObj()
{
	static class UWBP_PlayerProgressionTracker_XPSubTotal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerProgressionTracker_XPSubTotal_C*>(UWBP_PlayerProgressionTracker_XPSubTotal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerProgressionTracker_XPSubTotal.WBP_PlayerProgressionTracker_XPSubTotal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerProgressionTracker_XPSubTotal_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProgressionTracker_XPSubTotal_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerProgressionTracker_XPSubTotal.WBP_PlayerProgressionTracker_XPSubTotal_C.PlayAnimationWithDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerProgressionTracker_XPSubTotal_C::PlayAnimationWithDelay(double Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProgressionTracker_XPSubTotal_C", "PlayAnimationWithDelay");

	Params::UWBP_PlayerProgressionTracker_XPSubTotal_C_PlayAnimationWithDelay_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerProgressionTracker_XPSubTotal.WBP_PlayerProgressionTracker_XPSubTotal_C.ExecuteUbergraph_WBP_PlayerProgressionTracker_XPSubTotal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerProgressionTracker_XPSubTotal_C::ExecuteUbergraph_WBP_PlayerProgressionTracker_XPSubTotal(int32 EntryPoint, double K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, class FText CallFunc_Format_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerProgressionTracker_XPSubTotal_C", "ExecuteUbergraph_WBP_PlayerProgressionTracker_XPSubTotal");

	Params::UWBP_PlayerProgressionTracker_XPSubTotal_C_ExecuteUbergraph_WBP_PlayerProgressionTracker_XPSubTotal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_2 = CallFunc_Conv_IntToInt64_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


