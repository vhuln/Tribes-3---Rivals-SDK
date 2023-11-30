#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x309 - 0x2C0)
// WidgetBlueprintGeneratedClass GamepadPromptBasic.GamepadPromptBasic_C
class UGamepadPromptBasic_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ActionText;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     ButtonIcon;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct RallyHereStart_ButtonPromptData       Data;                                              // 0x2D8(0x30)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         IsSet;                                             // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGamepadPromptBasic_C* GetDefaultObj();

	void SetPrompt(const struct RallyHereStart_ButtonPromptData& Data);
	void Populate();
	void Construct();
	void ExecuteUbergraph_GamepadPromptBasic(int32 EntryPoint);
};

}


