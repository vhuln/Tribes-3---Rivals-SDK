#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_OverlayWidget_Character.BP_OverlayWidget_Character_C
// (None)

class UClass* UBP_OverlayWidget_Character_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OverlayWidget_Character_C");

	return Clss;
}


// BP_OverlayWidget_Character_C BP_OverlayWidget_Character.Default__BP_OverlayWidget_Character_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OverlayWidget_Character_C* UBP_OverlayWidget_Character_C::GetDefaultObj()
{
	static class UBP_OverlayWidget_Character_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OverlayWidget_Character_C*>(UBP_OverlayWidget_Character_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OverlayWidget_Character.BP_OverlayWidget_Character_C.OnCharacterClassChanged
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CharacterClass                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayWidget_Character_C::OnCharacterClassChanged(struct GameplayTags_GameplayTag& CharacterClass, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayWidget_Character_C", "OnCharacterClassChanged");

	Params::UBP_OverlayWidget_Character_C_OnCharacterClassChanged_Params Parms{};

	Parms.CharacterClass = CharacterClass;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayWidget_Character.BP_OverlayWidget_Character_C.UpdateLoadoutIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    QueuedClassTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayWidget_Character_C::UpdateLoadoutIcon(const struct GameplayTags_GameplayTag& QueuedClassTag, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayWidget_Character_C", "UpdateLoadoutIcon");

	Params::UBP_OverlayWidget_Character_C_UpdateLoadoutIcon_Params Parms{};

	Parms.QueuedClassTag = QueuedClassTag;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_OverlayWidget_Character.BP_OverlayWidget_Character_C.OnTeamRelationChanged
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETeamRelation           Relation                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     LocalColorLight                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     LocalColor                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamRelation           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeamRelation           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// struct CoreUObject_LinearColor     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OverlayWidget_Character_C::OnTeamRelationChanged(enum class ETeamRelation Relation, const struct CoreUObject_LinearColor& LocalColorLight, const struct CoreUObject_LinearColor& LocalColor, enum class ETeamRelation Temp_byte_Variable, enum class ETeamRelation Temp_byte_Variable_1, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct CoreUObject_LinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_LinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OverlayWidget_Character_C", "OnTeamRelationChanged");

	Params::UBP_OverlayWidget_Character_C_OnTeamRelationChanged_Params Parms{};

	Parms.Relation = Relation;
	Parms.LocalColorLight = LocalColorLight;
	Parms.LocalColor = LocalColor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


