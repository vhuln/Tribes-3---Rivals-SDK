#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5C0 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_Context_Bar.WBP_Context_Bar_C
class UWBP_Context_Bar_C : public URHContextBar
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x5B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Context_Bar_C* GetDefaultObj();

	bool CanCloseOnLogout();
	void RefreshContextBar();
	void ExecuteUbergraph_WBP_Context_Bar(int32 EntryPoint, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class FName CallFunc_GetCurrentRoute_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


