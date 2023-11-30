#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_OverlayDamage.BP_OverlayDamage_C
// (None)

class UClass* UBP_OverlayDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OverlayDamage_C");

	return Clss;
}


// BP_OverlayDamage_C BP_OverlayDamage.Default__BP_OverlayDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OverlayDamage_C* UBP_OverlayDamage_C::GetDefaultObj()
{
	static class UBP_OverlayDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OverlayDamage_C*>(UBP_OverlayDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OverlayDamage.BP_OverlayDamage_C.SetDamageData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            CallFunc_GetAnimation_Animation                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_GetPosition_Value                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayDamage_C::SetDamageData(struct Valhalla_DamageData& DamageData, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UWidgetAnimation* CallFunc_GetAnimation_Animation, const struct CoreUObject_Vector2D& CallFunc_GetPosition_Value, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "SetDamageData");

	Params::UBP_OverlayDamage_C_SetDamageData_Params Parms{};

	Parms.DamageData = DamageData;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetAnimation_Animation = CallFunc_GetAnimation_Animation;
	Parms.CallFunc_GetPosition_Value = CallFunc_GetPosition_Value;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayDamage.BP_OverlayDamage_C.SetOutlineColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_LinearColor     Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalHeadshot                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_FontOutlineSettingsK2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct SlateCore_FontOutlineSettingsK2Node_MakeStruct_FontOutlineSettings_1                          (NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)

void UBP_OverlayDamage_C::SetOutlineColor(const struct CoreUObject_LinearColor& Color, bool LocalHeadshot, double LocalValue, const struct SlateCore_FontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct SlateCore_FontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "SetOutlineColor");

	Params::UBP_OverlayDamage_C_SetOutlineColor_Params Parms{};

	Parms.Color = Color;
	Parms.LocalHeadshot = LocalHeadshot;
	Parms.LocalValue = LocalValue;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_FontOutlineSettings_1 = K2Node_MakeStruct_FontOutlineSettings_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayDamage.BP_OverlayDamage_C.GetAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayDamage_C::GetAnimation(class UWidgetAnimation** Animation, bool Temp_bool_Variable, bool CallFunc_RandomBool_ReturnValue, class UWidgetAnimation* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "GetAnimation");

	Params::UBP_OverlayDamage_C_GetAnimation_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Animation != nullptr)
		*Animation = Parms.Animation;

}


// Function BP_OverlayDamage.BP_OverlayDamage_C.GetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector2D        Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayDamage_C::GetPosition(struct CoreUObject_Vector2D* Value, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "GetPosition");

	Params::UBP_OverlayDamage_C_GetPosition_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function BP_OverlayDamage.BP_OverlayDamage_C.UpdateAppearance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LocalShieldDamage                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalHeadshot                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocalValue                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// double                             K2Node_VariableSet_LocalValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayDamage_C::UpdateAppearance(const struct Valhalla_DamageData& Data, bool LocalShieldDamage, bool LocalHeadshot, double LocalValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue_2, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, double K2Node_VariableSet_LocalValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "UpdateAppearance");

	Params::UBP_OverlayDamage_C_UpdateAppearance_Params Parms{};

	Parms.Data = Data;
	Parms.LocalShieldDamage = LocalShieldDamage;
	Parms.LocalHeadshot = LocalHeadshot;
	Parms.LocalValue = LocalValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_VariableSet_LocalValue_ImplicitCast = K2Node_VariableSet_LocalValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayDamage.BP_OverlayDamage_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Round64_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// double                             CallFunc_Abs_A_ImplicitCast                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayDamage_C::UpdateValue(const struct Valhalla_DamageData& Value, double CallFunc_Abs_ReturnValue, int64 CallFunc_Round64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, double CallFunc_Abs_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "UpdateValue");

	Params::UBP_OverlayDamage_C_UpdateValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Round64_ReturnValue = CallFunc_Round64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayDamage.BP_OverlayDamage_C.OnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayDamage_C::OnComplete__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayDamage_C", "OnComplete__DelegateSignature");

	Params::UBP_OverlayDamage_C_OnComplete__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


