#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x1E9 - 0x1E0)
// BlueprintGeneratedClass BPC_ThreatSystem.BPC_ThreatSystem_C
class UBPC_ThreatSystem_C : public UValThreatComponent
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x1E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         PrintThreatListOn;                                 // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPC_ThreatSystem_C* GetDefaultObj();

	void PrintThreatList(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const struct Valhalla_Threat& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, class AActor* CallFunc_GetCurrentThreat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_2, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, const class FString& CallFunc_Concat_StrStr_ReturnValue_26, const class FString& CallFunc_Concat_StrStr_ReturnValue_27, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1);
	void DisplayThreatStatus(class AActor* PreviousTarget, class AActor* NewTarget);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_ThreatSystem(int32 EntryPoint);
};

}


