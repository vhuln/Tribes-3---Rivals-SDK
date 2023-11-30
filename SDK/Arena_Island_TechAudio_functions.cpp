#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Arena_Island_TechAudio.Arena_Island_TechAudio_C
// (Actor)

class UClass* AArena_Island_TechAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Arena_Island_TechAudio_C");

	return Clss;
}


// Arena_Island_TechAudio_C Arena_Island_TechAudio.Default__Arena_Island_TechAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArena_Island_TechAudio_C* AArena_Island_TechAudio_C::GetDefaultObj()
{
	static class AArena_Island_TechAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArena_Island_TechAudio_C*>(AArena_Island_TechAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Arena_Island_TechAudio.Arena_Island_TechAudio_C.BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AArena_Island_TechAudio_C::BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Arena_Island_TechAudio_C", "BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature");

	Params::AArena_Island_TechAudio_C_BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Arena_Island_TechAudio.Arena_Island_TechAudio_C.ExecuteUbergraph_Arena_Island_TechAudio
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ActorBoundEvent_OverlappedActor                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ActorBoundEvent_OtherActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AArena_Island_TechAudio_C::ExecuteUbergraph_Arena_Island_TechAudio(int32 EntryPoint, class AActor* K2Node_ActorBoundEvent_OverlappedActor, class AActor* K2Node_ActorBoundEvent_OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Arena_Island_TechAudio_C", "ExecuteUbergraph_Arena_Island_TechAudio");

	Params::AArena_Island_TechAudio_C_ExecuteUbergraph_Arena_Island_TechAudio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ActorBoundEvent_OverlappedActor = K2Node_ActorBoundEvent_OverlappedActor;
	Parms.K2Node_ActorBoundEvent_OtherActor = K2Node_ActorBoundEvent_OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


