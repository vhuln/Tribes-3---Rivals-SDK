#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x370 - 0x308)
// BlueprintGeneratedClass GC_PhaseShift.GC_PhaseShift_C
class AGC_PhaseShift_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedInstigator;                                  // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     OneP_PS;                                           // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ThreeP_PS;                                         // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ThreePRoot;                                        // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                OnePMesh;                                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Active_System;                                     // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EAF[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         ValCharacter;                                      // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root_Component;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ThreeP_Start_PS;                                   // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCameraModifier*                       CameraMod;                                         // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ValChar_Master_C*                  As_BP_Val_Char_Master;                             // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_PhaseShift_C* GetDefaultObj();

	void PlaySound(bool OnStart, class AValCharacter* TargetActor, bool NewLocalVar, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool K2Node_Select_Default, TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, bool CallFunc_IsEnemyWith_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_Variable_5, bool K2Node_Select_Default_1);
	void On_Spectator_Changed_View_Target(class AActor* NewViewTarget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void Bind_Spectator(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void UpdateTeamColor(class AActor* Instigator, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	void Update_VFX(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh1P_ReturnValue);
	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_1);
	void ToggleCharacterVisibility(bool Hidden, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXMesh1P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


