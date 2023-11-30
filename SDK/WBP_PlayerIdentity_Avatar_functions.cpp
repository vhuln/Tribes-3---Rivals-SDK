#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C
// (None)

class UClass* UWBP_PlayerIdentity_Avatar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerIdentity_Avatar_C");

	return Clss;
}


// WBP_PlayerIdentity_Avatar_C WBP_PlayerIdentity_Avatar.Default__WBP_PlayerIdentity_Avatar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerIdentity_Avatar_C* UWBP_PlayerIdentity_Avatar_C::GetDefaultObj()
{
	static class UWBP_PlayerIdentity_Avatar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerIdentity_Avatar_C*>(UWBP_PlayerIdentity_Avatar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHAvatar*                   Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetLargeAvatarInfo_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerIdentity_Avatar_C::SetAvatar(class URHAvatar* Avatar, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerIdentity_Avatar_C", "SetAvatar");

	Params::UWBP_PlayerIdentity_Avatar_C_SetAvatar_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.CallFunc_GetLargeAvatarInfo_ReturnValue = CallFunc_GetLargeAvatarInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


