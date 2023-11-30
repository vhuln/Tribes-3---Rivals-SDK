#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x608 - 0x4C0)
// BlueprintGeneratedClass BP_DeathCrate.BP_DeathCrate_C
class ABP_DeathCrate_C : public AValDeathCrate
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValTempAkComponent*                   ValTempAk;                                         // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_UnOpened_Glow;                                  // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Box;                                               // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AValCharacter*>                 CharactersThatCanInteract;                         // 0x4E0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         CheckLoS;                                          // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3162[0x7];                                     // Fixing Size After Last Property  
	class AValCharacter*                         CachedLastInitiator;                               // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayAbilities_ActiveGameplayEffectHandle ActiveGE;                                          // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBeenLaunched;                                   // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3166[0x7];                                     // Fixing Size After Last Property  
	double                                       SimGravity;                                        // 0x510(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SimVelocity;                                       // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    SimStartLocation;                                  // 0x520(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CrateMID;                                          // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ScannersActive;                                    // 0x540(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               Revealed_Color;                                    // 0x544(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3171[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    AdditionalGravityForce;                            // 0x558(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFalling;                                         // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3175[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Enemy_Crate_Highlight_Color;                       // 0x574(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              LootFinderTag;                                     // 0x584(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               Hovered_Color;                                     // 0x58C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTeamColored;                                     // 0x59C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHovered;                                         // 0x59D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRevealedByScanner;                               // 0x59E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3191[0x1];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               FriendlyTeamColor;                                 // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFriendly;                                        // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3193[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               EnemyTeamColor;                                    // 0x5B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               NeutralTeamColor;                                  // 0x5C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRevealedByLootFinder;                            // 0x5D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3198[0x3];                                     // Fixing Size After Last Property  
	class UValAT_GameplayTagAddedRemoved*        TagListenHandle;                                   // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              LootFinderPerkTag;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               FriendlyRevealedColor;                             // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               EnemyRevealedColor;                                // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DeathCrate_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	enum class ERarity GetContextPingRarity();
	struct CoreUObject_Vector GetPingOffset();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	enum class EValPingType GetContextPingType();
	void OnLootFinderTagAdded(const struct GameplayTags_GameplayTag& Tag);
	void ListenToTagAdded(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue);
	void OnViewTargetChanged(class AActor* NewViewTarget, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpdateColoringAndHighlighting(bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue_1);
	void UpdateLootFinderRevealedState(class UAbilitySystemComponent* LocalASC, class AActor* LocalViewTarget, class AValPlayerController* LocalLocalClientPC, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue);
	void SimulateLaunch(double DeltaTime, const struct CoreUObject_Vector& CallFunc_Vector_Up_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct Engine_HitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct Engine_HitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, double CallFunc_Add_DoubleDouble_ReturnValue);
	void BndEvt__BP_DeathCrate_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_DeathCrate_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void UpdateInteractableCharacters();
	void ReceiveBeginPlay();
	void OnHoverStart(class AValCharacter* Initiator);
	void OnHoverEnd(class AValCharacter* Initiator);
	void OnPlayerStartedUsing();
	void OnPlayerStoppedUsing();
	void ReceiveTick(float DeltaSeconds);
	void DoLaunchSequence();
	void EventOnCrateStateChanged(enum class ECrateState NewState);
	void AddScanner(int32 Amount);
	void OnPlayerCrateCreated(int32 PlayerTeam);
	void UpdatePlayerCrateTeamColor(int32 TeamId);
	void OnFirstOpen(class AValPlayerController* ValPC);
	void ExecuteUbergraph_BP_DeathCrate(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class AValCharacter* CallFunc_Array_Get_Item, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class UPrimitiveComponent* CallFunc_GetInteractComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class AActor*>& CallFunc_GetCachedArray_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UPrimitiveComponent* CallFunc_GetInteractComponent_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, TArray<class AActor*>& CallFunc_GetCachedArray_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, class AValCharacter* K2Node_Event_Initiator_1, class AValCharacter* K2Node_Event_Initiator, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_CanInteract_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ECrateState K2Node_CustomEvent_NewState, int32 Temp_int_Loop_Counter_Variable_1, int32 K2Node_Event_Amount, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Clamp_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character_3, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue, class UBoxComponent* CallFunc_GetCollisionComp_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Dungeon* K2Node_DynamicCast_AsVal_Game_State_Dungeon, bool K2Node_DynamicCast_bSuccess_4, const struct CoreUObject_Vector& CallFunc_GetVelocity_ReturnValue, const struct CoreUObject_IntPoint& CallFunc_RegisterObjectToCell_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, class UBoxComponent* CallFunc_GetCollisionComp_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Less_DoubleDouble_ReturnValue, int32 K2Node_Event_PlayerTeam, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_CustomEvent_TeamID, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class AValPlayerController* K2Node_Event_ValPC, TScriptInterface<class IWithTeamInterface> CallFunc_GetTeamId_self_CastInput, int32 CallFunc_GetTeamId_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_IsABot_ReturnValue, class AValGameMode* K2Node_DynamicCast_AsVal_Game_Mode, bool K2Node_DynamicCast_bSuccess_5, class UValStatsManager* CallFunc_GetStatsManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_9, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_BotCrate_C* K2Node_DynamicCast_AsABP_Bot_Crate, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1);
};

}


