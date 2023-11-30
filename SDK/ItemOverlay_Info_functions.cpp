#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemOverlay_Info.ItemOverlay_Info_C
// (None)

class UClass* UItemOverlay_Info_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemOverlay_Info_C");

	return Clss;
}


// ItemOverlay_Info_C ItemOverlay_Info.Default__ItemOverlay_Info_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemOverlay_Info_C* UItemOverlay_Info_C::GetDefaultObj()
{
	static class UItemOverlay_Info_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemOverlay_Info_C*>(UItemOverlay_Info_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Input_Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UItemOverlay_Info_C::UpdateItemSlot(const struct GameplayTags_GameplayTag& Input_Tag, class FName CallFunc_GetTagName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "UpdateItemSlot");

	Params::UItemOverlay_Info_C_UpdateItemSlot_Params Parms{};

	Parms.Input_Tag = Input_Tag;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UItemOverlay_Info_C::UpdateItemIcon(class UTexture2D* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "UpdateItemIcon");

	Params::UItemOverlay_Info_C_UpdateItemIcon_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Item_Description                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemOverlay_Info_C::UpdateItemDescription(class FText Item_Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "UpdateItemDescription");

	Params::UItemOverlay_Info_C_UpdateItemDescription_Params Parms{};

	Parms.Item_Description = Item_Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemOverlay_Info_C::UpdateItemName(class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "UpdateItemName");

	Params::UItemOverlay_Info_C_UpdateItemName_Params Parms{};

	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOverlay_Info.ItemOverlay_Info_C.UpdateRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERarity                 Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemOverlay_Info_C::UpdateRarity(enum class ERarity Rarity, const struct CoreUObject_LinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "UpdateRarity");

	Params::UItemOverlay_Info_C_UpdateRarity_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemOverlay_Info.ItemOverlay_Info_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemOverlay_Info_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemOverlay_Info.ItemOverlay_Info_C.ExecuteUbergraph_ItemOverlay_Info
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemOverlay_Info_C::ExecuteUbergraph_ItemOverlay_Info(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemOverlay_Info_C", "ExecuteUbergraph_ItemOverlay_Info");

	Params::UItemOverlay_Info_C_ExecuteUbergraph_ItemOverlay_Info_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


