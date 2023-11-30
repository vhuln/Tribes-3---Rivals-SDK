#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x2F4 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_KeyCallout.WBP_KeyCallout_C
class UWBP_KeyCallout_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AsyncIcon_C*                      CalloutIcon;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct InputCore_Key                         Key;                                               // 0x2D0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  KeyBind;                                           // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DisplayKeybind;                                    // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SecondaryKey;                                      // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         FallbackToDefaults;                                // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         GamepadDoubleTap;                                  // 0x2F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_KeyCallout_C* GetDefaultObj();

	void SetKeybind(class FName KeyBind);
	void UpdateKeyDisplay(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct InputCore_Key& CallFunc_GetKeyForBinding_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon_1, bool CallFunc_IsValid_ReturnValue_1);
	void SetKey(const struct InputCore_Key& Key);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_KeyCallout(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class URHGameUserSettings* K2Node_DynamicCast_AsRHGame_User_Settings, bool K2Node_DynamicCast_bSuccess);
};

}


