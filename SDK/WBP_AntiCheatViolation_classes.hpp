#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x570 - 0x550)
// WidgetBlueprintGeneratedClass WBP_AntiCheatViolation.WBP_AntiCheatViolation_C
class UWBP_AntiCheatViolation_C : public UValAntiCheatViolationWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          ViolationDetailsBox;                               // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          ViolationMessages;                                 // 0x560(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_AntiCheatViolation_C* GetDefaultObj();

	void OnShown();
	void ExecuteUbergraph_WBP_AntiCheatViolation(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FText>& CallFunc_GetClientViolationMessages_OutMessages, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
};

}


