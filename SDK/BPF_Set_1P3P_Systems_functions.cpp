#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPF_Set_1P3P_Systems.BPF_Set_1P3P_Systems_C
// (None)

class UClass* UBPF_Set_1P3P_Systems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPF_Set_1P3P_Systems_C");

	return Clss;
}


// BPF_Set_1P3P_Systems_C BPF_Set_1P3P_Systems.Default__BPF_Set_1P3P_Systems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPF_Set_1P3P_Systems_C* UBPF_Set_1P3P_Systems_C::GetDefaultObj()
{
	static class UBPF_Set_1P3P_Systems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPF_Set_1P3P_Systems_C*>(UBPF_Set_1P3P_Systems_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPF_Set_1P3P_Systems.BPF_Set_1P3P_Systems_C.Update_1P3P_VFX
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActiveSystem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               Val_Character                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      OnePMesh                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      ThreePMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              OneP_System_Ref                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ThreeP_System_Ref                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_1PVFX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_3PVFX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        OnePSocket_Name                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ThreePSocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          OnePLoc_Offset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          ThreePLoc_Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         OnePRot_Offset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_1P                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_3P                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Temp_3P                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Temp_1P                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Create_1P3P_VFX_Active_1PVFX                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Create_1P3P_VFX_1P_System_Ref                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Create_1P3P_VFX_Active_3PVFX                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Create_1P3P_VFX_3P_System_Ref                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPF_Set_1P3P_Systems_C::Update_1P3P_VFX(bool ActiveSystem, class AValCharacter* Val_Character, class USkeletalMeshComponent* OnePMesh, class USkeletalMeshComponent* ThreePMesh, class UNiagaraSystem* OneP_System_Ref, class UNiagaraSystem* ThreeP_System_Ref, class UNiagaraComponent* Active_1PVFX, class UNiagaraComponent* Active_3PVFX, class FName OnePSocket_Name, class FName ThreePSocketName, const struct CoreUObject_Vector& OnePLoc_Offset, const struct CoreUObject_Vector& ThreePLoc_Offset, const struct CoreUObject_Rotator& OnePRot_Offset, class UObject* __WorldContext, class UNiagaraComponent** Active_1P, class UNiagaraComponent** Active_3P, class UNiagaraComponent* Temp_3P, class UNiagaraComponent* Temp_1P, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_Set_1P3P_Systems_C", "Update_1P3P_VFX");

	Params::UBPF_Set_1P3P_Systems_C_Update_1P3P_VFX_Params Parms{};

	Parms.ActiveSystem = ActiveSystem;
	Parms.Val_Character = Val_Character;
	Parms.OnePMesh = OnePMesh;
	Parms.ThreePMesh = ThreePMesh;
	Parms.OneP_System_Ref = OneP_System_Ref;
	Parms.ThreeP_System_Ref = ThreeP_System_Ref;
	Parms.Active_1PVFX = Active_1PVFX;
	Parms.Active_3PVFX = Active_3PVFX;
	Parms.OnePSocket_Name = OnePSocket_Name;
	Parms.ThreePSocketName = ThreePSocketName;
	Parms.OnePLoc_Offset = OnePLoc_Offset;
	Parms.ThreePLoc_Offset = ThreePLoc_Offset;
	Parms.OnePRot_Offset = OnePRot_Offset;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_3P = Temp_3P;
	Parms.Temp_1P = Temp_1P;
	Parms.CallFunc_Create_1P3P_VFX_Active_1PVFX = CallFunc_Create_1P3P_VFX_Active_1PVFX;
	Parms.CallFunc_Create_1P3P_VFX_1P_System_Ref = CallFunc_Create_1P3P_VFX_1P_System_Ref;
	Parms.CallFunc_Create_1P3P_VFX_Active_3PVFX = CallFunc_Create_1P3P_VFX_Active_3PVFX;
	Parms.CallFunc_Create_1P3P_VFX_3P_System_Ref = CallFunc_Create_1P3P_VFX_3P_System_Ref;

	UObject::ProcessEvent(Func, &Parms);

	if (Active_1P != nullptr)
		*Active_1P = Parms.Active_1P;

	if (Active_3P != nullptr)
		*Active_3P = Parms.Active_3P;

}


// Function BPF_Set_1P3P_Systems.BPF_Set_1P3P_Systems_C.Create_1P3P_VFX
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ActiveSystem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               ValCharacter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      OnePMesh                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      ThreePMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              OnePVFX                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ThreePVFX                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_1P_FX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_3P_FX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        OnePSocketName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ThreePSocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          OnePLoc_Offset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          ThreePLoc_Offset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         OnePRot_Offset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_1PVFX                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              OneP_System_Ref                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Active_3PVFX                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ThreeP_System_Ref                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Temp1P                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           Temp3P                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetThirdPersonCameraAlpha_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_Set_1P3P_Systems_C::Create_1P3P_VFX(bool ActiveSystem, class AValCharacter* ValCharacter, class USkeletalMeshComponent* OnePMesh, class USkeletalMeshComponent* ThreePMesh, class UNiagaraSystem* OnePVFX, class UNiagaraSystem* ThreePVFX, class UNiagaraComponent* Active_1P_FX, class UNiagaraComponent* Active_3P_FX, class FName OnePSocketName, class FName ThreePSocketName, const struct CoreUObject_Vector& OnePLoc_Offset, const struct CoreUObject_Vector& ThreePLoc_Offset, const struct CoreUObject_Rotator& OnePRot_Offset, class UObject* __WorldContext, class UNiagaraComponent** Active_1PVFX, class UNiagaraSystem** OneP_System_Ref, class UNiagaraComponent** Active_3PVFX, class UNiagaraSystem** ThreeP_System_Ref, class UNiagaraComponent* Temp1P, class UNiagaraComponent* Temp3P, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_Set_1P3P_Systems_C", "Create_1P3P_VFX");

	Params::UBPF_Set_1P3P_Systems_C_Create_1P3P_VFX_Params Parms{};

	Parms.ActiveSystem = ActiveSystem;
	Parms.ValCharacter = ValCharacter;
	Parms.OnePMesh = OnePMesh;
	Parms.ThreePMesh = ThreePMesh;
	Parms.OnePVFX = OnePVFX;
	Parms.ThreePVFX = ThreePVFX;
	Parms.Active_1P_FX = Active_1P_FX;
	Parms.Active_3P_FX = Active_3P_FX;
	Parms.OnePSocketName = OnePSocketName;
	Parms.ThreePSocketName = ThreePSocketName;
	Parms.OnePLoc_Offset = OnePLoc_Offset;
	Parms.ThreePLoc_Offset = ThreePLoc_Offset;
	Parms.OnePRot_Offset = OnePRot_Offset;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp1P = Temp1P;
	Parms.Temp3P = Temp3P;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue_1 = CallFunc_SpawnSystemAttached_ReturnValue_1;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetThirdPersonCameraAlpha_ReturnValue = CallFunc_GetThirdPersonCameraAlpha_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Active_1PVFX != nullptr)
		*Active_1PVFX = Parms.Active_1PVFX;

	if (OneP_System_Ref != nullptr)
		*OneP_System_Ref = Parms.OneP_System_Ref;

	if (Active_3PVFX != nullptr)
		*Active_3PVFX = Parms.Active_3PVFX;

	if (ThreeP_System_Ref != nullptr)
		*ThreeP_System_Ref = Parms.ThreeP_System_Ref;

}

}


