#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C
// (None)

class UClass* UUI_Shared_Preview_Rotator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_Preview_Rotator_C");

	return Clss;
}


// UI_Shared_Preview_Rotator_C UI_Shared_Preview_Rotator.Default__UI_Shared_Preview_Rotator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_Preview_Rotator_C* UUI_Shared_Preview_Rotator_C::GetDefaultObj()
{
	static class UUI_Shared_Preview_Rotator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_Preview_Rotator_C*>(UUI_Shared_Preview_Rotator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.UpdateDefaultRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::UpdateDefaultRotation(double Rotation, float CallFunc_GetScrollOffset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "UpdateDefaultRotation");

	Params::UUI_Shared_Preview_Rotator_C_UpdateDefaultRotation_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetItemDetailPreview
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ItemPreviewActor_C*      Preview                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_ItemPreviewActor_C*>CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ABP_ItemPreviewActor_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::GetItemDetailPreview(class ABP_ItemPreviewActor_C** Preview, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_ItemPreviewActor_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ABP_ItemPreviewActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "GetItemDetailPreview");

	Params::UUI_Shared_Preview_Rotator_C_GetItemDetailPreview_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Preview != nullptr)
		*Preview = Parms.Preview;

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetItemRotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::GetItemRotation(double Offset, struct CoreUObject_Rotator* Rotation, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "GetItemRotation");

	Params::UUI_Shared_Preview_Rotator_C_GetItemRotation_Params Parms{};

	Parms.Offset = Offset;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetCharRotation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::GetCharRotation(double Offset, struct CoreUObject_Rotator* Rotation, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "GetCharRotation");

	Params::UUI_Shared_Preview_Rotator_C_GetCharRotation_Params Parms{};

	Parms.Offset = Offset;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetCharPreviews
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_MergedPreviewActor_Loadout_C*>Previews                                                         (Parm, OutParm)
// TArray<class ABP_MergedPreviewActor_Loadout_C*>CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::GetCharPreviews(TArray<class ABP_MergedPreviewActor_Loadout_C*>* Previews, TArray<class ABP_MergedPreviewActor_Loadout_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, bool CallFunc_Array_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "GetCharPreviews");

	Params::UUI_Shared_Preview_Rotator_C_GetCharPreviews_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Previews != nullptr)
		*Previews = std::move(Parms.Previews);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.GetItemPreview
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ItemPreviewActor_C*      Preview                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_ItemPreviewActor_C*>CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ABP_ItemPreviewActor_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::GetItemPreview(class ABP_ItemPreviewActor_C** Preview, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_ItemPreviewActor_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ABP_ItemPreviewActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "GetItemPreview");

	Params::UUI_Shared_Preview_Rotator_C_GetItemPreview_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Preview != nullptr)
		*Preview = Parms.Preview;

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_Preview_Rotator_C::Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::Reset(const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "Reset");

	Params::UUI_Shared_Preview_Rotator_C_Reset_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast = CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::OnInitialized(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "OnInitialized");

	Params::UUI_Shared_Preview_Rotator_C_OnInitialized_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C.OnRotation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ItemPreviewActor_C*      CallFunc_GetItemDetailPreview_Preview                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_GetItemRotation_Rotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Rotator         CallFunc_GetCharRotation_Rotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Rotator         CallFunc_GetItemRotation_Rotation_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ItemPreviewActor_C*      CallFunc_GetItemPreview_Preview                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_MergedPreviewActor_Loadout_C*>CallFunc_GetCharPreviews_Previews                                (ReferenceParm)
// class ABP_MergedPreviewActor_Loadout_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_K2_SetActorRelativeRotation_SweepHitResult              (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetItemRotation_Offset_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetCharRotation_Offset_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetItemRotation_Offset_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Preview_Rotator_C::OnRotation(float Offset, int32 Temp_int_Loop_Counter_Variable, class ABP_ItemPreviewActor_C* CallFunc_GetItemDetailPreview_Preview, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct CoreUObject_Rotator& CallFunc_GetItemRotation_Rotation, const struct CoreUObject_Rotator& CallFunc_GetCharRotation_Rotation, const struct CoreUObject_Rotator& CallFunc_GetItemRotation_Rotation_1, class ABP_ItemPreviewActor_C* CallFunc_GetItemPreview_Preview, bool CallFunc_IsValid_ReturnValue_1, TArray<class ABP_MergedPreviewActor_Loadout_C*>& CallFunc_GetCharPreviews_Previews, class ABP_MergedPreviewActor_Loadout_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_GetItemRotation_Offset_ImplicitCast, double CallFunc_GetCharRotation_Offset_ImplicitCast, double CallFunc_GetItemRotation_Offset_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Preview_Rotator_C", "OnRotation");

	Params::UUI_Shared_Preview_Rotator_C_OnRotation_Params Parms{};

	Parms.Offset = Offset;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetItemDetailPreview_Preview = CallFunc_GetItemDetailPreview_Preview;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetItemRotation_Rotation = CallFunc_GetItemRotation_Rotation;
	Parms.CallFunc_GetCharRotation_Rotation = CallFunc_GetCharRotation_Rotation;
	Parms.CallFunc_GetItemRotation_Rotation_1 = CallFunc_GetItemRotation_Rotation_1;
	Parms.CallFunc_GetItemPreview_Preview = CallFunc_GetItemPreview_Preview;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharPreviews_Previews = CallFunc_GetCharPreviews_Previews;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_SetActorRelativeRotation_SweepHitResult = CallFunc_K2_SetActorRelativeRotation_SweepHitResult;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemRotation_Offset_ImplicitCast = CallFunc_GetItemRotation_Offset_ImplicitCast;
	Parms.CallFunc_GetCharRotation_Offset_ImplicitCast = CallFunc_GetCharRotation_Offset_ImplicitCast;
	Parms.CallFunc_GetItemRotation_Offset_ImplicitCast_1 = CallFunc_GetItemRotation_Offset_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


