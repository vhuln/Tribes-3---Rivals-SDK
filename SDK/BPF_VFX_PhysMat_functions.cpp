#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPF_VFX_PhysMat.BPF_VFX_PhysMat_C
// (None)

class UClass* UBPF_VFX_PhysMat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPF_VFX_PhysMat_C");

	return Clss;
}


// BPF_VFX_PhysMat_C BPF_VFX_PhysMat.Default__BPF_VFX_PhysMat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPF_VFX_PhysMat_C* UBPF_VFX_PhysMat_C::GetDefaultObj()
{
	static class UBPF_VFX_PhysMat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPF_VFX_PhysMat_C*>(UBPF_VFX_PhysMat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPF_VFX_PhysMat.BPF_VFX_PhysMat_C.SwitchExplosionHitBySurface
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        SurfaceIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              BigHit                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              SmallHit                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ReturnSystem_Small                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ReturnSystem                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_VFX_PhysMat_C::SwitchExplosionHitBySurface(enum class EPhysicalSurface SurfaceIn, class UObject* __WorldContext, class UNiagaraSystem** BigHit, class UNiagaraSystem** SmallHit, class UNiagaraSystem* ReturnSystem_Small, class UNiagaraSystem* ReturnSystem, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_VFX_PhysMat_C", "SwitchExplosionHitBySurface");

	Params::UBPF_VFX_PhysMat_C_SwitchExplosionHitBySurface_Params Parms{};

	Parms.SurfaceIn = SurfaceIn;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnSystem_Small = ReturnSystem_Small;
	Parms.ReturnSystem = ReturnSystem;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (BigHit != nullptr)
		*BigHit = Parms.BigHit;

	if (SmallHit != nullptr)
		*SmallHit = Parms.SmallHit;

}


// Function BPF_VFX_PhysMat.BPF_VFX_PhysMat_C.SwitchSkiBySurface
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        SurfaceIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ReturnSystem                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_VFX_PhysMat_C::SwitchSkiBySurface(enum class EPhysicalSurface SurfaceIn, class UObject* __WorldContext, class UNiagaraSystem** NiagaraSystem, class UNiagaraSystem* ReturnSystem, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_VFX_PhysMat_C", "SwitchSkiBySurface");

	Params::UBPF_VFX_PhysMat_C_SwitchSkiBySurface_Params Parms{};

	Parms.SurfaceIn = SurfaceIn;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnSystem = ReturnSystem;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraSystem != nullptr)
		*NiagaraSystem = Parms.NiagaraSystem;

}


// Function BPF_VFX_PhysMat.BPF_VFX_PhysMat_C.SwitchFootstepBySurface
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        SurfaceIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              ReturnSystem                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_VFX_PhysMat_C::SwitchFootstepBySurface(enum class EPhysicalSurface SurfaceIn, class UObject* __WorldContext, class UNiagaraSystem** NiagaraSystem, class UNiagaraSystem* ReturnSystem, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPF_VFX_PhysMat_C", "SwitchFootstepBySurface");

	Params::UBPF_VFX_PhysMat_C_SwitchFootstepBySurface_Params Parms{};

	Parms.SurfaceIn = SurfaceIn;
	Parms.__WorldContext = __WorldContext;
	Parms.ReturnSystem = ReturnSystem;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraSystem != nullptr)
		*NiagaraSystem = Parms.NiagaraSystem;

}

}


