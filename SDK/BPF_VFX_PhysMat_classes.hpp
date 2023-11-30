#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPF_VFX_PhysMat.BPF_VFX_PhysMat_C
class UBPF_VFX_PhysMat_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPF_VFX_PhysMat_C* GetDefaultObj();

	void SwitchExplosionHitBySurface(enum class EPhysicalSurface SurfaceIn, class UObject* __WorldContext, class UNiagaraSystem** BigHit, class UNiagaraSystem** SmallHit, class UNiagaraSystem* ReturnSystem_Small, class UNiagaraSystem* ReturnSystem, bool K2Node_SwitchEnum_CmpSuccess);
	void SwitchSkiBySurface(enum class EPhysicalSurface SurfaceIn, class UObject* __WorldContext, class UNiagaraSystem** NiagaraSystem, class UNiagaraSystem* ReturnSystem, bool K2Node_SwitchEnum_CmpSuccess);
	void SwitchFootstepBySurface(enum class EPhysicalSurface SurfaceIn, class UObject* __WorldContext, class UNiagaraSystem** NiagaraSystem, class UNiagaraSystem* ReturnSystem, bool K2Node_SwitchEnum_CmpSuccess);
};

}


