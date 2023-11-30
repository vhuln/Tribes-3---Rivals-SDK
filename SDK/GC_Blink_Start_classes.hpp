#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x390 - 0x308)
// BlueprintGeneratedClass GC_Blink_Start.GC_Blink_Start_C
class AGC_Blink_Start_C : public AGameplayCueNotify_Actor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Alpha_Alpha_B7BC6CAB455BF993261EF8B15589DC70;      // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Alpha__Direction_B7BC6CAB455BF993261EF8B15589DC70; // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_333C[0x3];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    Alpha;                                             // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ParticleSystem;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EGameplayCueEvent                 Event_Type;                                        // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3343[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         As_Val_Character;                                  // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Active_System;                                     // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_334D[0x7];                                     // Fixing Size After Last Property  
	class UNiagaraSystem*                        OneP_System_Ref;                                   // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        ThreeP_System_Ref;                                 // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Active_1PVFX;                                      // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Active_3PVFX;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                OnePMesh;                                          // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                ThreePMesh;                                        // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialFx;                                        // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MaterialFxDynamic;                                 // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  As_BP_Val_Char_Master;                             // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_Blink_Start_C* GetDefaultObj();

	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, float CallFunc_BreakGameplayCueParameters_NormalizedMagnitude, float CallFunc_BreakGameplayCueParameters_RawMagnitude, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_BreakGameplayCueParameters_EffectContext, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_MatchedTagName, const struct GameplayTags_GameplayTag& CallFunc_BreakGameplayCueParameters_OriginalTag, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedSourceTags, const struct GameplayTags_GameplayTagContainer& CallFunc_BreakGameplayCueParameters_AggregatedTargetTags, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Location, const struct CoreUObject_Vector& CallFunc_BreakGameplayCueParameters_Normal, class AActor* CallFunc_BreakGameplayCueParameters_Instigator, class AActor* CallFunc_BreakGameplayCueParameters_EffectCauser, class UObject* CallFunc_BreakGameplayCueParameters_SourceObject, class UPhysicalMaterial* CallFunc_BreakGameplayCueParameters_PhysicalMaterial, int32 CallFunc_BreakGameplayCueParameters_GameplayEffectLevel, int32 CallFunc_BreakGameplayCueParameters_AbilityLevel, class USceneComponent* CallFunc_BreakGameplayCueParameters_TargetAttachComponent, bool CallFunc_BreakGameplayCueParameters_bReplicateLocationWhenUsingMinimalRepProxy, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyViewed_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh1P_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct GameplayAbilities_GameplayCueParameters& Parameters);
	void ExecuteUbergraph_GC_Blink_Start(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct GameplayAbilities_GameplayCueParameters& K2Node_Event_Parameters, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldLocation_SweepHitResult);
};

}


