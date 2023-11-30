#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalAudioEvent.BP_LocalAudioEvent_C
// (Actor)

class UClass* ABP_LocalAudioEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalAudioEvent_C");

	return Clss;
}


// BP_LocalAudioEvent_C BP_LocalAudioEvent.Default__BP_LocalAudioEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalAudioEvent_C* ABP_LocalAudioEvent_C::GetDefaultObj()
{
	static class ABP_LocalAudioEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalAudioEvent_C*>(ABP_LocalAudioEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LocalAudioEvent.BP_LocalAudioEvent_C.HandleAudio
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bFriendly                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    ReferrenceTag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_LocalAudioEvent_C::HandleAudio(bool bFriendly, struct GameplayTags_GameplayTag& ReferrenceTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LocalAudioEvent_C", "HandleAudio");

	Params::ABP_LocalAudioEvent_C_HandleAudio_Params Parms{};

	Parms.bFriendly = bFriendly;
	Parms.ReferrenceTag = ReferrenceTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LocalAudioEvent.BP_LocalAudioEvent_C.ExecuteUbergraph_BP_LocalAudioEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFriendly                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_Event_ReferrenceTag                                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LocalAudioEvent_C::ExecuteUbergraph_BP_LocalAudioEvent(int32 EntryPoint, bool K2Node_Event_bFriendly, const struct GameplayTags_GameplayTag& K2Node_Event_ReferrenceTag, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LocalAudioEvent_C", "ExecuteUbergraph_BP_LocalAudioEvent");

	Params::ABP_LocalAudioEvent_C_ExecuteUbergraph_BP_LocalAudioEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFriendly = K2Node_Event_bFriendly;
	Parms.K2Node_Event_ReferrenceTag = K2Node_Event_ReferrenceTag;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


