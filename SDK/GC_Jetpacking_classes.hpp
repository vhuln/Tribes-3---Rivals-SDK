#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x350 - 0x308)
// BlueprintGeneratedClass GC_Jetpacking.GC_Jetpacking_C
class AGC_Jetpacking_C : public AGameplayCueNotify_Actor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_Jetpack;                                     // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Jetpack_L;                                      // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Jetpack_R;                                      // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                JetpackMesh;                                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         ValCharacter;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>             FXList;                                            // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class AGC_Jetpacking_C* GetDefaultObj();

	void StopJetParticles(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateJetParticles(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, class UValJetpackMeshData* CallFunc_GetEquippedJetpackAt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct Valhalla_JetpackThrustSocketAndFX& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValJetpackMeshData* CallFunc_GetEquippedJetpackAt_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct Valhalla_JetpackThrustSocketAndFX& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void UpdateTeamColors(class UNiagaraComponent* ParticleSystem, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, int32 Temp_int_Array_Index_Variable, bool CallFunc_OnRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsLocallyViewed_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UValJetpackMeshData* CallFunc_GetEquippedJetpackAt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct Valhalla_JetpackThrustSocketAndFX& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class UAkSwitchValue* Temp_object_Variable, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, class UAkSwitchValue* Temp_object_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsLocallyViewed_ReturnValue, class UAkSwitchValue* K2Node_Select_Default, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class USkeletalMeshComponentBudgeted* CallFunc_GetJetpackMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GC_Jetpacking(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


