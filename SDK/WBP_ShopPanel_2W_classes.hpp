#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x750 - 0x745)
// WidgetBlueprintGeneratedClass WBP_ShopPanel_2W.WBP_ShopPanel_2W_C
class UWBP_ShopPanel_2W_C : public UWBP_ShopPanel_Base_C
{
public:
	uint8                                        Pad_B69[0x3];                                      // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x748(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_ShopPanel_2W_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_ShopPanel_2W(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


