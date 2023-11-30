#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Footstep_1p_AnimNotify.Footstep_1p_AnimNotify_C
// (None)

class UClass* UFootstep_1p_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Footstep_1p_AnimNotify_C");

	return Clss;
}


// Footstep_1p_AnimNotify_C Footstep_1p_AnimNotify.Default__Footstep_1p_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFootstep_1p_AnimNotify_C* UFootstep_1p_AnimNotify_C::GetDefaultObj()
{
	static class UFootstep_1p_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFootstep_1p_AnimNotify_C*>(UFootstep_1p_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Footstep_1p_AnimNotify.Footstep_1p_AnimNotify_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_AnimNotifyEventReferenceEventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             MovementType                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFootstep_1p_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class AActor* Owner, double MovementType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Footstep_1p_AnimNotify_C", "Received_Notify");

	Params::UFootstep_1p_AnimNotify_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.Owner = Owner;
	Parms.MovementType = MovementType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


