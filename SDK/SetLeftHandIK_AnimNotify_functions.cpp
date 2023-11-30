#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SetLeftHandIK_AnimNotify.SetLeftHandIK_AnimNotify_C
// (None)

class UClass* USetLeftHandIK_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SetLeftHandIK_AnimNotify_C");

	return Clss;
}


// SetLeftHandIK_AnimNotify_C SetLeftHandIK_AnimNotify.Default__SetLeftHandIK_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USetLeftHandIK_AnimNotify_C* USetLeftHandIK_AnimNotify_C::GetDefaultObj()
{
	static class USetLeftHandIK_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USetLeftHandIK_AnimNotify_C*>(USetLeftHandIK_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SetLeftHandIK_AnimNotify.SetLeftHandIK_AnimNotify_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_AnimNotifyEventReferenceEventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLeftHandIKStrength_BlendTime_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLeftHandIKStrength_NewStrength_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USetLeftHandIK_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_SetLeftHandIKStrength_BlendTime_ImplicitCast, float CallFunc_SetLeftHandIKStrength_NewStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SetLeftHandIK_AnimNotify_C", "Received_Notify");

	Params::USetLeftHandIK_AnimNotify_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetLeftHandIKStrength_BlendTime_ImplicitCast = CallFunc_SetLeftHandIKStrength_BlendTime_ImplicitCast;
	Parms.CallFunc_SetLeftHandIKStrength_NewStrength_ImplicitCast = CallFunc_SetLeftHandIKStrength_NewStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


