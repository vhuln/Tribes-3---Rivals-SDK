#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0x361 - 0x2D0)
// WidgetBlueprintGeneratedClass BP_OverlayDamage.BP_OverlayDamage_C
class UBP_OverlayDamage_C : public UTopOverlayDamage
{
public:
	class UWidgetAnimation*                      AnimateDisplayB;                                   // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateDisplayA;                                   // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Container;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBold;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       DefaultMaxX;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMaxY;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultHealColor;                                  // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultShieldColor;                                // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultDamageColor;                                // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultHeadshotColor;                              // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedValue;                                       // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDamageNumberType                 CachedNumberType;                                  // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_OverlayDamage_C* GetDefaultObj();

	void SetDamageData(struct Valhalla_DamageData& DamageData, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UWidgetAnimation* CallFunc_GetAnimation_Animation, const struct CoreUObject_Vector2D& CallFunc_GetPosition_Value, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetOutlineColor(const struct CoreUObject_LinearColor& Color, bool LocalHeadshot, double LocalValue, const struct SlateCore_FontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct SlateCore_FontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1);
	void GetAnimation(class UWidgetAnimation** Animation, bool Temp_bool_Variable, bool CallFunc_RandomBool_ReturnValue, class UWidgetAnimation* K2Node_Select_Default);
	void GetPosition(struct CoreUObject_Vector2D* Value, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateAppearance(const struct Valhalla_DamageData& Data, bool LocalShieldDamage, bool LocalHeadshot, double LocalValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue_2, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, double K2Node_VariableSet_LocalValue_ImplicitCast);
	void UpdateValue(const struct Valhalla_DamageData& Value, double CallFunc_Abs_ReturnValue, int64 CallFunc_Round64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, double CallFunc_Abs_A_ImplicitCast);
	void OnComplete__DelegateSignature(class UWidget* Widget);
};

}


