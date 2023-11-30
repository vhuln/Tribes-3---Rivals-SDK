#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x561 - 0x550)
// WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C
class UWBP_PlatformIcon_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ERHAPI_Platform                   Platform;                                          // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlatformIcon_C* GetDefaultObj();

	void SetPlatformByDisplayType(enum class ERHPlatformDisplayType Platform, class UTexture2D* CallFunc_GetPlatformIconByDisplayType_Icon, bool CallFunc_IsValid_ReturnValue);
	void SetPlatform(enum class ERHAPI_Platform Platform, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UTexture2D* CallFunc_GetPlatformIcon_Icon, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_PlatformIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


