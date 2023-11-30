#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlatformIcon.WBP_PlatformIcon_C
// (None)

class UClass* UWBP_PlatformIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlatformIcon_C");

	return Clss;
}


// WBP_PlatformIcon_C WBP_PlatformIcon.Default__WBP_PlatformIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlatformIcon_C* UWBP_PlatformIcon_C::GetDefaultObj()
{
	static class UWBP_PlatformIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlatformIcon_C*>(UWBP_PlatformIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatformByDisplayType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHPlatformDisplayType  Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetPlatformIconByDisplayType_Icon                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformIcon_C::SetPlatformByDisplayType(enum class ERHPlatformDisplayType Platform, class UTexture2D* CallFunc_GetPlatformIconByDisplayType_Icon, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlatformIcon_C", "SetPlatformByDisplayType");

	Params::UWBP_PlatformIcon_C_SetPlatformByDisplayType_Params Parms{};

	Parms.Platform = Platform;
	Parms.CallFunc_GetPlatformIconByDisplayType_Icon = CallFunc_GetPlatformIconByDisplayType_Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHAPI_Platform         Platform                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetPlatformIcon_Icon                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformIcon_C::SetPlatform(enum class ERHAPI_Platform Platform, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UTexture2D* CallFunc_GetPlatformIcon_Icon, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlatformIcon_C", "SetPlatform");

	Params::UWBP_PlatformIcon_C_SetPlatform_Params Parms{};

	Parms.Platform = Platform;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetPlatformIcon_Icon = CallFunc_GetPlatformIcon_Icon;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlatformIcon_C", "PreConstruct");

	Params::UWBP_PlatformIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlatformIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlatformIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlatformIcon_C::ExecuteUbergraph_WBP_PlatformIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlatformIcon_C", "ExecuteUbergraph_WBP_PlatformIcon");

	Params::UWBP_PlatformIcon_C_ExecuteUbergraph_WBP_PlatformIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


