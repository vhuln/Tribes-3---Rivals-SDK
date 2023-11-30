#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5B8 - 0x5B0)
// WidgetBlueprintGeneratedClass UI_SettingsInputBlocker.UI_SettingsInputBlocker_C
class UUI_SettingsInputBlocker_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UUI_SettingsInputBlocker_C* GetDefaultObj();

	void OnShown();
	void OnHide();
	void ExecuteUbergraph_UI_SettingsInputBlocker(int32 EntryPoint);
};

}


