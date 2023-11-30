#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x598 - 0x550)
// WidgetBlueprintGeneratedClass LoggingInStatus.LoggingInStatus_C
class ULoggingInStatus_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StandardButtonMedium_C*           LogOffBtn;                                         // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WaitQueueMessage;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WaitQueueTitle;                                    // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              WaitQueueWrapper;                                  // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LoginBackground_Shared_C*         WBP_LoginBackground_Shared;                        // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Throbber_C*                       WBP_ThrobberShield;                                // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHLoginDataFactory*                   LoginDataFactory;                                  // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ShowQueuedThreshold_Position;                      // 0x590(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShowQueuedThreshold_WaitSeconds;                   // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ULoggingInStatus_C* GetDefaultObj();

	void SetWaitQueueMessage(const struct RallyHereStart_LoginQueueInfo& LoginQueueInfo, bool Temp_bool_Has_Been_Initd_Variable, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, class FText CallFunc_AsTimespan_Timespan_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool Temp_bool_IsClosed_Variable, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_BooleanOR_ReturnValue);
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget);
	void OnShown();
	void ExecuteUbergraph_LoggingInStatus(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* K2Node_ComponentBoundEvent_Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCinematicToPlay_ReturnValue, bool CallFunc_AddViewRoute_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue);
};

}


