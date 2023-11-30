#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x5C9 - 0x5B0)
// WidgetBlueprintGeneratedClass UI_Shared_ActionIcon.UI_Shared_ActionIcon_C
class UUI_Shared_ActionIcon_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ActionIcon;                                        // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  InputName;                                         // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOnlyDisplayIfGamepad;                             // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shared_ActionIcon_C* GetDefaultObj();

	void GetRHInputKey(enum class ECommonInputType InputType, struct InputCore_Key* InputKey, class ARHHUDCommon* LocalHud, enum class ECommonInputType Temp_byte_Variable, enum class EInputType Temp_byte_Variable_1, enum class EInputType Temp_byte_Variable_2, enum class EInputType Temp_byte_Variable_3, enum class EInputType Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, enum class EInputType K2Node_Select_Default, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class UValInputManager* K2Node_DynamicCast_AsVal_Input_Manager, bool K2Node_DynamicCast_bSuccess, TArray<struct InputCore_Key>& CallFunc_GetRHInputKeys_OutKeys, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void UpdateInputName(class FName NewInputName, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
	void On_Input_Method_Changed(enum class ECommonInputType bNewInputType, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct InputCore_Key& CallFunc_GetRHInputKey_InputKey, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_GetCurrentGamepadName_ReturnValue, const struct SlateCore_SlateBrush& CallFunc_GetIconForInputKey_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1);
	void Construct();
	void ExecuteUbergraph_UI_Shared_ActionIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue);
};

}


