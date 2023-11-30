#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x588 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C
class UWBP_ControllerPrompt_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Prompt;                                            // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGamepadPromptType                PromptType;                                        // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36B[0x3];                                      // Fixing Size After Last Property  
	class FName                                  ActionName;                                        // 0x564(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36D[0x4];                                      // Fixing Size After Last Property  
	struct InputCore_Key                         Button;                                            // 0x570(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ControllerPrompt_C* GetDefaultObj();

	void SetButtonPrompt(const struct InputCore_Key& Button);
	void SetIsCancel();
	void SetIsConfirm();
	void SetPromptFromButton(const struct InputCore_Key& Button, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon);
	void UpdateFromSetValues(const struct InputCore_Key& Temp_struct_Variable, bool Temp_bool_Variable, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, const struct InputCore_Key& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void SetInputAction(class FName ActionName);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_ControllerPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


