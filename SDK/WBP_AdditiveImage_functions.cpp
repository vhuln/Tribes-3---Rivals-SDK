#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AdditiveImage.WBP_AdditiveImage_C
// (None)

class UClass* UWBP_AdditiveImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AdditiveImage_C");

	return Clss;
}


// WBP_AdditiveImage_C WBP_AdditiveImage.Default__WBP_AdditiveImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AdditiveImage_C* UWBP_AdditiveImage_C::GetDefaultObj()
{
	static class UWBP_AdditiveImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AdditiveImage_C*>(UWBP_AdditiveImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.SetAdditiveMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_SlateBrush        K2Node_MakeStruct_SlateBrush                                     (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_SetDesiredSizeOverride_DesiredSize_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AdditiveImage_C::SetAdditiveMaterial(const struct SlateCore_SlateBrush& K2Node_MakeStruct_SlateBrush, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_SetDesiredSizeOverride_DesiredSize_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AdditiveImage_C", "SetAdditiveMaterial");

	Params::UWBP_AdditiveImage_C_SetAdditiveMaterial_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue = CallFunc_GetBrushResourceAsTexture2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetDesiredSizeOverride_DesiredSize_ImplicitCast = CallFunc_SetDesiredSizeOverride_DesiredSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AdditiveImage_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AdditiveImage_C", "PreConstruct");

	Params::UWBP_AdditiveImage_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AdditiveImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AdditiveImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.ExecuteUbergraph_WBP_AdditiveImage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AdditiveImage_C::ExecuteUbergraph_WBP_AdditiveImage(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AdditiveImage_C", "ExecuteUbergraph_WBP_AdditiveImage");

	Params::UWBP_AdditiveImage_C_ExecuteUbergraph_WBP_AdditiveImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


