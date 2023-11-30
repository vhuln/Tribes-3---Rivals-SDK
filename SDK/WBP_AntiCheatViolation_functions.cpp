#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AntiCheatViolation.WBP_AntiCheatViolation_C
// (None)

class UClass* UWBP_AntiCheatViolation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AntiCheatViolation_C");

	return Clss;
}


// WBP_AntiCheatViolation_C WBP_AntiCheatViolation.Default__WBP_AntiCheatViolation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AntiCheatViolation_C* UWBP_AntiCheatViolation_C::GetDefaultObj()
{
	static class UWBP_AntiCheatViolation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AntiCheatViolation_C*>(UWBP_AntiCheatViolation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AntiCheatViolation.WBP_AntiCheatViolation_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AntiCheatViolation_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AntiCheatViolation_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AntiCheatViolation.WBP_AntiCheatViolation_C.ExecuteUbergraph_WBP_AntiCheatViolation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetClientViolationMessages_OutMessages                  (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  K2Node_DynamicCast_AsText                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AntiCheatViolation_C::ExecuteUbergraph_WBP_AntiCheatViolation(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FText>& CallFunc_GetClientViolationMessages_OutMessages, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AntiCheatViolation_C", "ExecuteUbergraph_WBP_AntiCheatViolation");

	Params::UWBP_AntiCheatViolation_C_ExecuteUbergraph_WBP_AntiCheatViolation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetClientViolationMessages_OutMessages = CallFunc_GetClientViolationMessages_OutMessages;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsText = K2Node_DynamicCast_AsText;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


