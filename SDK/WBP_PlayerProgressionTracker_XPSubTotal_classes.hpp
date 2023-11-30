#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x309 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_PlayerProgressionTracker_XPSubTotal.WBP_PlayerProgressionTracker_XPSubTotal_C
class UWBP_PlayerProgressionTracker_XPSubTotal_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimOnShown;                                       // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            XPTotal;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            XPTotalLabel;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        DefaultXP;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1C72[0x4];                                     // Fixing Size After Last Property  
	class FText                                  DefaultText;                                       // 0x2F0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EPlayerLevelType                  ExperienceType;                                    // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerProgressionTracker_XPSubTotal_C* GetDefaultObj();

	void Construct();
	void PlayAnimationWithDelay(double Delay);
	void ExecuteUbergraph_WBP_PlayerProgressionTracker_XPSubTotal(int32 EntryPoint, double K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, class FText CallFunc_Format_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, float CallFunc_Delay_Duration_ImplicitCast);
};

}


