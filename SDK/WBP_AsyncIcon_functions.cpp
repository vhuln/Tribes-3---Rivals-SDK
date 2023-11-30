#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AsyncIcon.WBP_AsyncIcon_C
// (None)

class UClass* UWBP_AsyncIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AsyncIcon_C");

	return Clss;
}


// WBP_AsyncIcon_C WBP_AsyncIcon.Default__WBP_AsyncIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AsyncIcon_C* UWBP_AsyncIcon_C::GetDefaultObj()
{
	static class UWBP_AsyncIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AsyncIcon_C*>(UWBP_AsyncIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush From Icon Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconInfo*                   Icon_Info                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::Set_Brush_From_Icon_Info(class UIconInfo* Icon_Info, bool MatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "Set Brush From Icon Info");

	Params::UWBP_AsyncIcon_C_Set_Brush_From_Icon_Info_Params Parms{};

	Parms.Icon_Info = Icon_Info;
	Parms.MatchSize = MatchSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_SoftObjectPath  Soft_Path                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::SetBrushFromSoftPath(const struct CoreUObject_SoftObjectPath& Soft_Path, bool MatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "SetBrushFromSoftPath");

	Params::UWBP_AsyncIcon_C_SetBrushFromSoftPath_Params Parms{};

	Parms.Soft_Path = Soft_Path;
	Parms.MatchSize = MatchSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem*      Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::Set_Brush_from_Texture_on_Item(class UPlatformInventoryItem* Item, bool MatchSize, TSoftObjectPtr<class UTexture2D> Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "Set Brush from Texture on Item");

	Params::UWBP_AsyncIcon_C_Set_Brush_from_Texture_on_Item_Params Parms{};

	Parms.Item = Item;
	Parms.MatchSize = MatchSize;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    MaterialInstanceDynamic                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "Get Material");

	Params::UWBP_AsyncIcon_C_Get_Material_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaterialInstanceDynamic != nullptr)
		*MaterialInstanceDynamic = Parms.MaterialInstanceDynamic;

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::SetMaterialToUse(class UMaterialInterface* Material, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "SetMaterialToUse");

	Params::UWBP_AsyncIcon_C_SetMaterialToUse_Params Parms{};

	Parms.Material = Material;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_AsyncIcon_C::ApplyDefaultBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "ApplyDefaultBrush");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> Texture, bool MatchSize, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "SetBrushFromSoftTexture");

	Params::UWBP_AsyncIcon_C_SetBrushFromSoftTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.MatchSize = MatchSize;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               MatchSize                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "SetBrushFromTexture");

	Params::UWBP_AsyncIcon_C_SetBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.MatchSize = MatchSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "PreConstruct");

	Params::UWBP_AsyncIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AsyncIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHAsyncImage*               Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::OnStartLoad(class URHAsyncImage* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "OnStartLoad");

	Params::UWBP_AsyncIcon_C_OnStartLoad_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHAsyncImage*               Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::OnFinishLoad(class URHAsyncImage* Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "OnFinishLoad");

	Params::UWBP_AsyncIcon_C_OnFinishLoad_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHAsyncImage*               K2Node_CustomEvent_Image                                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHAsyncImage*               K2Node_CustomEvent_Image_1                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentlyAsyncLoading_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetBrushResourceAsTexture2D_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::ExecuteUbergraph_WBP_AsyncIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHAsyncImage* K2Node_CustomEvent_Image, class URHAsyncImage* K2Node_CustomEvent_Image_1, bool CallFunc_IsCurrentlyAsyncLoading_ReturnValue, class UTexture2D* CallFunc_GetBrushResourceAsTexture2D_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "ExecuteUbergraph_WBP_AsyncIcon");

	Params::UWBP_AsyncIcon_C_ExecuteUbergraph_WBP_AsyncIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_CustomEvent_Image_1 = K2Node_CustomEvent_Image_1;
	Parms.CallFunc_IsCurrentlyAsyncLoading_ReturnValue = CallFunc_IsCurrentlyAsyncLoading_ReturnValue;
	Parms.CallFunc_GetBrushResourceAsTexture2D_ReturnValue = CallFunc_GetBrushResourceAsTexture2D_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_AsyncIcon_C::OnIconUpdated__DelegateSignature(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AsyncIcon_C", "OnIconUpdated__DelegateSignature");

	Params::UWBP_AsyncIcon_C_OnIconUpdated__DelegateSignature_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}

}


