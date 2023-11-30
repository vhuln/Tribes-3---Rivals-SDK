#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPF_Set_1P3P_Systems.BPF_Set_1P3P_Systems_C
class UBPF_Set_1P3P_Systems_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPF_Set_1P3P_Systems_C* GetDefaultObj();

	void Update_1P3P_VFX(bool ActiveSystem, class AValCharacter* Val_Character, class USkeletalMeshComponent* OnePMesh, class USkeletalMeshComponent* ThreePMesh, class UNiagaraSystem* OneP_System_Ref, class UNiagaraSystem* ThreeP_System_Ref, class UNiagaraComponent* Active_1PVFX, class UNiagaraComponent* Active_3PVFX, class FName OnePSocket_Name, class FName ThreePSocketName, const struct CoreUObject_Vector& OnePLoc_Offset, const struct CoreUObject_Vector& ThreePLoc_Offset, const struct CoreUObject_Rotator& OnePRot_Offset, class UObject* __WorldContext, class UNiagaraComponent** Active_1P, class UNiagaraComponent** Active_3P, class UNiagaraComponent* Temp_3P, class UNiagaraComponent* Temp_1P, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref);
	void Create_1P3P_VFX(bool ActiveSystem, class AValCharacter* ValCharacter, class USkeletalMeshComponent* OnePMesh, class USkeletalMeshComponent* ThreePMesh, class UNiagaraSystem* OnePVFX, class UNiagaraSystem* ThreePVFX, class UNiagaraComponent* Active_1P_FX, class UNiagaraComponent* Active_3P_FX, class FName OnePSocketName, class FName ThreePSocketName, const struct CoreUObject_Vector& OnePLoc_Offset, const struct CoreUObject_Vector& ThreePLoc_Offset, const struct CoreUObject_Rotator& OnePRot_Offset, class UObject* __WorldContext, class UNiagaraComponent** Active_1PVFX, class UNiagaraSystem** OneP_System_Ref, class UNiagaraComponent** Active_3PVFX, class UNiagaraSystem** ThreeP_System_Ref, class UNiagaraComponent* Temp1P, class UNiagaraComponent* Temp3P, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


