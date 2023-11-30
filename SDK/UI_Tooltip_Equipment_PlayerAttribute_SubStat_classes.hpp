#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x400 - 0x2C0)
// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment_PlayerAttribute_SubStat.UI_Tooltip_Equipment_PlayerAttribute_SubStat_C
class UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C : public UUserWidget
{
public:
	class UTextBlock*                            NameTextB;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueTextB;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPlayerAttributeType              CachedType;                                        // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1F95[0x3];                                     // Fixing Size After Last Property  
	float                                        CachedValue;                                       // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_PlayerAttributeConfigData    CachedConfig;                                      // 0x2D8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        FormattedValue;                                    // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  ColorNeutral;                                      // 0x394(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct SlateCore_SlateColor                  ColorPositive;                                     // 0x3A8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct SlateCore_SlateColor                  ColorNegative;                                     // 0x3BC(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct SlateCore_SlateColor                  ColorPrimary;                                      // 0x3D0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct SlateCore_SlateColor                  ColorSecondary;                                    // 0x3E4(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                         CachedNeedConfig;                                  // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FAA[0x3];                                     // Fixing Size After Last Property  
	float                                        FormattedClassDefault;                             // 0x3FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Tooltip_Equipment_PlayerAttribute_SubStat_C* GetDefaultObj();

	void CacheClassDefaultValue(float LocalDefaultValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TMap<enum class EPlayerAttributeType, float> CallFunc_GetClassAttributeValues_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_VariableSet_FormattedClassDefault_ImplicitCast);
	void CacheAttributeValue(double Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, float K2Node_VariableSet_CachedValue_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float K2Node_VariableSet_FormattedValue_ImplicitCast);
	void CacheAttributeType(enum class EPlayerAttributeType Type, class UPlayerAttributeConfig* CallFunc_GetPlayerAttributeConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Valhalla_PlayerAttributeConfigData& CallFunc_GetAttributeConfigData_AttributeConfigData, bool CallFunc_GetAttributeConfigData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void CacheAttributeData(enum class EPlayerAttributeType Type, double Value, bool* Changed, bool LocalChanged, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast);
	void GetFormattedText(class FText* Text, bool LocalFlatValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText CallFunc_AsPercent_Float_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void UpdateData(enum class EPlayerAttributeType Type, float Value, float LocalFormattedValue, const struct Valhalla_PlayerAttributeConfigData& LocalConfigData, bool CallFunc_CacheAttributeData_Changed, double CallFunc_CacheAttributeData_Value_ImplicitCast);
	void UpdateText(double LocalFormattedValue, class FText CallFunc_GetFormattedText_Text);
};

}


