#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_RubyWeapon_Master.GA_RubyWeapon_Master_C
// (None)

class UClass* UGA_RubyWeapon_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_RubyWeapon_Master_C");

	return Clss;
}


// GA_RubyWeapon_Master_C GA_RubyWeapon_Master.Default__GA_RubyWeapon_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_RubyWeapon_Master_C* UGA_RubyWeapon_Master_C::GetDefaultObj()
{
	static class UGA_RubyWeapon_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_RubyWeapon_Master_C*>(UGA_RubyWeapon_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_RubyWeapon_Master.GA_RubyWeapon_Master_C.CacheData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RubyWeapon_Master_C::CacheData(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RubyWeapon_Master_C", "CacheData");

	Params::UGA_RubyWeapon_Master_C_CacheData_Params Parms{};

	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_RubyWeapon_Master.GA_RubyWeapon_Master_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_RubyWeapon_Master_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RubyWeapon_Master_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_RubyWeapon_Master.GA_RubyWeapon_Master_C.ExecuteUbergraph_GA_RubyWeapon_Master
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_RubyWeapon_Master_C::ExecuteUbergraph_GA_RubyWeapon_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_RubyWeapon_Master_C", "ExecuteUbergraph_GA_RubyWeapon_Master");

	Params::UGA_RubyWeapon_Master_C_ExecuteUbergraph_GA_RubyWeapon_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


