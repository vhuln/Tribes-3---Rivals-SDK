#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_TriangleThrobber.WBP_TriangleThrobber_C
class UWBP_TriangleThrobber_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image;                                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TriangleThrobber_C* GetDefaultObj();

	void SetThrobberColor(const struct SlateCore_SlateColor& NewColor);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void RestartAnimation();
	void ExecuteUbergraph_WBP_TriangleThrobber(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


