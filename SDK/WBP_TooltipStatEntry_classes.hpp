#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2F0 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_TooltipStatEntry.WBP_TooltipStatEntry_C
class UWBP_TooltipStatEntry_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BodyText;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatEntries;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelWidget_C*                    WBP_PanelWidget;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerAttributeConfig*                LocalAttributeConfig;                              // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_TooltipStatEntry_C* GetDefaultObj();

	void Update_Data(enum class EPlayerAttributeType Type, float Value, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAnyChildren_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, const struct Valhalla_PlayerAttributeConfigData& CallFunc_GetAttributeConfigData_AttributeConfigData, bool CallFunc_GetAttributeConfigData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EPlayerAttributeType>& CallFunc_Map_Keys_Keys, enum class EPlayerAttributeType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UCurveFloat* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUI_Tooltip_Equipment_PlayerAttribute_C* CallFunc_Create_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UPlayerAttributeConfig* CallFunc_GetPlayerAttributeConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_TooltipStatEntry(int32 EntryPoint);
};

}


