#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x488 - 0x388)
// BlueprintGeneratedClass BP_DungeonPortal.BP_DungeonPortal_C
class ABP_DungeonPortal_C : public AValDungeonPortal
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x388(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         BotDestroyCollision;                               // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Interaction;                                    // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_POD_TopPart_Cap;                                // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_POD_TopPart;                                    // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_POD_TopPart1;                                   // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender1;                                       // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Teleport_Destination;                           // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  BaseMeshHover;                                     // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  PodMeshHover;                                      // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender3;                                       // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender2;                                       // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube;                                              // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          ExtractionAkComp;                                  // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                MESH_CloneGenerator;                               // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxCollision;                                      // 0x410(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Value_7B4E991741686DCD58702196F544ED7D;   // 0x418(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline__Direction_7B4E991741686DCD58702196F544ED7D; // 0x41C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415B[0x3];                                     // Fixing Size After Last Property  
	class UTimelineComponent*                    Timeline;                                          // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           ClosedStaticMesh;                                  // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           OpenStaticMesh;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    DefaultInitialLocation;                            // 0x438(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultDistanceToTravelUp;                         // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AnimCompleteTIme;                                  // 0x458(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         AnimUp;                                            // 0x460(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4166[0x7];                                     // Fixing Size After Last Property  
	TArray<class UMaterialInterface*>            DefaultUninteractableMaterials;                    // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            CachedDefaultMaterials;                            // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_DungeonPortal_C* GetDefaultObj();

	void GetWidgetBlockInteractReason(class AValCharacter* Initiator, enum class EInteractionFailureType* Reason);
	void GetInteractWidgetType(enum class EInteractWidgetType* Type);
	void GetKeycode(TArray<int32>* Keycode);
	void GetTotalChannelTime(double* ChannelTime, class AValCharacter* CallFunc_GetCachedChanneler_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	enum class ERarity GetContextPingRarity();
	enum class EValPingType GetContextPingType();
	struct CoreUObject_Vector GetPingOffset();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	void CheckForOnActiveOverlaps_KillBots(const TArray<class AActor*>& LocalOverlapActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsBotControlled_ReturnValue);
	void On_Interactable_Teams_Changed(bool Temp_bool_Variable, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ATeamState* CallFunc_GetTeamStateFromObject_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetTeamId_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<class UMaterialInterface*>& K2Node_Select_Default, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item_1);
	void CheckForOnActiveOverlaps(const TArray<class AActor*>& LocalOverlapActors, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsCybrid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors);
	void OnAnimComplete();
	void OnRep_AnimCompleteTIme();
	class UShapeComponent* GetCollisionComp();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void OnKeycodeEntered(TArray<int32>& EnteredKeycode, class AActor* InteractingActor);
	void AddChildInteractionActor(class ABP_WidgetInteraction_C* ChildToAdd);
	void OnChannellingToggled(bool IsChanneling, class AController* Controller, class ABP_WidgetInteraction_C* WidgetInteractionActor);
	void OnLiftActivated();
	void OnLiftSummoned(int32 LiftLevel);
	void OnInstantActivation(class AController* Controller);
	void UpdateState(enum class EDungeonPortalState Value);
	void BndEvt__BP_Pickup_Item_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_Pickup_Item_InteractCollisionComp_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void OnHoverStart(class AValCharacter* Initiator);
	void OnHoverEnd(class AValCharacter* Initiator);
	void PredictAnimation();
	void OnPlayerStartedUsing();
	void OnPlayerStoppedUsing();
	void ExecuteUbergraph_BP_DungeonPortal(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetServerWorldTimeSeconds_ReturnValue_1, TArray<int32>& K2Node_Event_EnteredKeycode, class AActor* K2Node_Event_InteractingActor, class ABP_WidgetInteraction_C* K2Node_Event_ChildToAdd, bool K2Node_Event_IsChanneling, class AController* K2Node_Event_Controller_1, class ABP_WidgetInteraction_C* K2Node_Event_WidgetInteractionActor, int32 K2Node_Event_LiftLevel, class AController* K2Node_Event_Controller, enum class EDungeonPortalState K2Node_Event_Value, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, bool K2Node_SwitchEnum_CmpSuccess, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_HasAuthority_ReturnValue_1, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State_2, bool K2Node_DynamicCast_bSuccess_4, double CallFunc_GetServerWorldTimeSeconds_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, class AValGameState_Dungeon* K2Node_DynamicCast_AsVal_Game_State_Dungeon, bool K2Node_DynamicCast_bSuccess_5, class AValCharacter* K2Node_Event_Initiator_1, const struct CoreUObject_IntPoint& CallFunc_RegisterObjectToCell_ReturnValue, class AValCharacter* K2Node_Event_Initiator, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPrimitiveComponent* CallFunc_GetInteractComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class AValCharacter* CallFunc_Array_Get_Item_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_1, const struct Engine_HitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct Engine_HitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_SetPlaybackPosition_NewPosition_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1);
};

}


