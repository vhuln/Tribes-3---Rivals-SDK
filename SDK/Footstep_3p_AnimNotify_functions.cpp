#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Footstep_3p_AnimNotify.Footstep_3p_AnimNotify_C
// (None)

class UClass* UFootstep_3p_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Footstep_3p_AnimNotify_C");

	return Clss;
}


// Footstep_3p_AnimNotify_C Footstep_3p_AnimNotify.Default__Footstep_3p_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFootstep_3p_AnimNotify_C* UFootstep_3p_AnimNotify_C::GetDefaultObj()
{
	static class UFootstep_3p_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFootstep_3p_AnimNotify_C*>(UFootstep_3p_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Footstep_3p_AnimNotify.Footstep_3p_AnimNotify_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_AnimNotifyEventReferenceEventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        ValCharMaster                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        MatType                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               ValChar                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             Movement_Type                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AKTarget                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetSkeletalMeshAsset_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshSocket*         CallFunc_FindSocket_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshSocket*         CallFunc_FindSocket_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_13                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_14                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_15                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_16                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_17                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_18                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_19                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_20                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_21                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_22                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_23                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_24                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_25                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_26                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_27                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_28                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_29                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_30                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_31                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_32                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_33                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_34                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_35                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_36                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_37                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_38                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_39                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_40                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_41                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_42                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_43                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_44                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_45                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_46                                          (ConstParm, ReferenceParm)
// bool                               CallFunc_AreFootstepsSilenced_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemyWith_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_47                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_48                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_49                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_50                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_51                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_52                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        CallFunc_GetSurfaceType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_SwitchFootstepBySurface_NiagaraSystem                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

bool UFootstep_3p_AnimNotify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct Engine_AnimNotifyEventReference& EventReference, class ABP_ValChar_Master_C* ValCharMaster, enum class EPhysicalSurface MatType, class AValCharacter* ValChar, double Movement_Type, class AActor* Owner, class UAkComponent* AKTarget, class USoundBase* Temp_object_Variable, class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue, class USkeletalMeshSocket* CallFunc_FindSocket_ReturnValue, class USkeletalMeshSocket* CallFunc_FindSocket_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase* Temp_object_Variable_10, class USoundBase* Temp_object_Variable_11, class USoundBase* Temp_object_Variable_12, class USoundBase* Temp_object_Variable_13, class USoundBase* Temp_object_Variable_14, class USoundBase* Temp_object_Variable_15, class USoundBase* Temp_object_Variable_16, class USoundBase* Temp_object_Variable_17, class USoundBase* Temp_object_Variable_18, class USoundBase* Temp_object_Variable_19, enum class EPhysicalSurface Temp_byte_Variable, class USoundBase* Temp_object_Variable_20, class USoundBase* Temp_object_Variable_21, class USoundBase* Temp_object_Variable_22, class USoundBase* Temp_object_Variable_23, class USoundBase* Temp_object_Variable_24, class USoundBase* Temp_object_Variable_25, class USoundBase* Temp_object_Variable_26, class USoundBase* Temp_object_Variable_27, class USoundBase* Temp_object_Variable_28, class USoundBase* Temp_object_Variable_29, class USoundBase* Temp_object_Variable_30, class USoundBase* Temp_object_Variable_31, class USoundBase* Temp_object_Variable_32, class USoundBase* Temp_object_Variable_33, class USoundBase* Temp_object_Variable_34, class USoundBase* Temp_object_Variable_35, class USoundBase* Temp_object_Variable_36, class USoundBase* Temp_object_Variable_37, class USoundBase* Temp_object_Variable_38, class USoundBase* Temp_object_Variable_39, class USoundBase* Temp_object_Variable_40, class USoundBase* Temp_object_Variable_41, class USoundBase* Temp_object_Variable_42, class USoundBase* Temp_object_Variable_43, class USoundBase* Temp_object_Variable_44, class USoundBase* Temp_object_Variable_45, TArray<class AActor*>& Temp_object_Variable_46, bool CallFunc_AreFootstepsSilenced_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, class USoundBase* K2Node_Select_Default, class USoundBase* Temp_object_Variable_47, class USoundBase* Temp_object_Variable_48, class USoundBase* Temp_object_Variable_49, class USoundBase* Temp_object_Variable_50, class USoundBase* Temp_object_Variable_51, class USoundBase* Temp_object_Variable_52, enum class EPhysicalSurface Temp_byte_Variable_1, class USoundBase* K2Node_Select_Default_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct Engine_HitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class UNiagaraSystem* CallFunc_SwitchFootstepBySurface_NiagaraSystem, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Footstep_3p_AnimNotify_C", "Received_Notify");

	Params::UFootstep_3p_AnimNotify_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.ValCharMaster = ValCharMaster;
	Parms.MatType = MatType;
	Parms.ValChar = ValChar;
	Parms.Movement_Type = Movement_Type;
	Parms.Owner = Owner;
	Parms.AKTarget = AKTarget;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetSkeletalMeshAsset_ReturnValue = CallFunc_GetSkeletalMeshAsset_ReturnValue;
	Parms.CallFunc_FindSocket_ReturnValue = CallFunc_FindSocket_ReturnValue;
	Parms.CallFunc_FindSocket_ReturnValue_1 = CallFunc_FindSocket_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.Temp_object_Variable_14 = Temp_object_Variable_14;
	Parms.Temp_object_Variable_15 = Temp_object_Variable_15;
	Parms.Temp_object_Variable_16 = Temp_object_Variable_16;
	Parms.Temp_object_Variable_17 = Temp_object_Variable_17;
	Parms.Temp_object_Variable_18 = Temp_object_Variable_18;
	Parms.Temp_object_Variable_19 = Temp_object_Variable_19;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_20 = Temp_object_Variable_20;
	Parms.Temp_object_Variable_21 = Temp_object_Variable_21;
	Parms.Temp_object_Variable_22 = Temp_object_Variable_22;
	Parms.Temp_object_Variable_23 = Temp_object_Variable_23;
	Parms.Temp_object_Variable_24 = Temp_object_Variable_24;
	Parms.Temp_object_Variable_25 = Temp_object_Variable_25;
	Parms.Temp_object_Variable_26 = Temp_object_Variable_26;
	Parms.Temp_object_Variable_27 = Temp_object_Variable_27;
	Parms.Temp_object_Variable_28 = Temp_object_Variable_28;
	Parms.Temp_object_Variable_29 = Temp_object_Variable_29;
	Parms.Temp_object_Variable_30 = Temp_object_Variable_30;
	Parms.Temp_object_Variable_31 = Temp_object_Variable_31;
	Parms.Temp_object_Variable_32 = Temp_object_Variable_32;
	Parms.Temp_object_Variable_33 = Temp_object_Variable_33;
	Parms.Temp_object_Variable_34 = Temp_object_Variable_34;
	Parms.Temp_object_Variable_35 = Temp_object_Variable_35;
	Parms.Temp_object_Variable_36 = Temp_object_Variable_36;
	Parms.Temp_object_Variable_37 = Temp_object_Variable_37;
	Parms.Temp_object_Variable_38 = Temp_object_Variable_38;
	Parms.Temp_object_Variable_39 = Temp_object_Variable_39;
	Parms.Temp_object_Variable_40 = Temp_object_Variable_40;
	Parms.Temp_object_Variable_41 = Temp_object_Variable_41;
	Parms.Temp_object_Variable_42 = Temp_object_Variable_42;
	Parms.Temp_object_Variable_43 = Temp_object_Variable_43;
	Parms.Temp_object_Variable_44 = Temp_object_Variable_44;
	Parms.Temp_object_Variable_45 = Temp_object_Variable_45;
	Parms.Temp_object_Variable_46 = Temp_object_Variable_46;
	Parms.CallFunc_AreFootstepsSilenced_ReturnValue = CallFunc_AreFootstepsSilenced_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_IsEnemyWith_ReturnValue = CallFunc_IsEnemyWith_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable_47 = Temp_object_Variable_47;
	Parms.Temp_object_Variable_48 = Temp_object_Variable_48;
	Parms.Temp_object_Variable_49 = Temp_object_Variable_49;
	Parms.Temp_object_Variable_50 = Temp_object_Variable_50;
	Parms.Temp_object_Variable_51 = Temp_object_Variable_51;
	Parms.Temp_object_Variable_52 = Temp_object_Variable_52;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_GetSurfaceType_ReturnValue = CallFunc_GetSurfaceType_ReturnValue;
	Parms.CallFunc_SwitchFootstepBySurface_NiagaraSystem = CallFunc_SwitchFootstepBySurface_NiagaraSystem;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


