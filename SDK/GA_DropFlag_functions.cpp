#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DropFlag.GA_DropFlag_C
// (None)

class UClass* UGA_DropFlag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DropFlag_C");

	return Clss;
}


// GA_DropFlag_C GA_DropFlag.Default__GA_DropFlag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DropFlag_C* UGA_DropFlag_C::GetDefaultObj()
{
	static class UGA_DropFlag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DropFlag_C*>(UGA_DropFlag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DropFlag.GA_DropFlag_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DropFlag_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DropFlag_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DropFlag.GA_DropFlag_C.ExecuteUbergraph_GA_DropFlag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityActorInfoCallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ATopGameState_TopazCTF*      K2Node_DynamicCast_AsTop_Game_State_Topaz_CTF                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class AValCharacter*, class ATopPickup_Flag*>CallFunc_GetFlagHolders_ReturnValue                              (None)
// class ATopPickup_Flag*             CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DropFlag_C::ExecuteUbergraph_GA_DropFlag(int32 EntryPoint, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATopGameState_TopazCTF* K2Node_DynamicCast_AsTop_Game_State_Topaz_CTF, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, TMap<class AValCharacter*, class ATopPickup_Flag*> CallFunc_GetFlagHolders_ReturnValue, class ATopPickup_Flag* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DropFlag_C", "ExecuteUbergraph_GA_DropFlag");

	Params::UGA_DropFlag_C_ExecuteUbergraph_GA_DropFlag_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsTop_Game_State_Topaz_CTF = K2Node_DynamicCast_AsTop_Game_State_Topaz_CTF;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFlagHolders_ReturnValue = CallFunc_GetFlagHolders_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


