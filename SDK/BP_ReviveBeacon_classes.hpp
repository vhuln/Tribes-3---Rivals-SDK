#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x541 - 0x510)
// BlueprintGeneratedClass BP_ReviveBeacon.BP_ReviveBeacon_C
class ABP_ReviveBeacon_C : public AValReviveBeacon
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValCharacterOverlayComponent*         Overlay;                                           // 0x518(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Respawn_PrintHuman_A;                           // 0x520(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                  TextRender;                                        // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     UnOpened_FX;                                       // 0x530(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AValPlayerState*                       CachedPlayerState;                                 // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckLoS;                                          // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ReviveBeacon_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	enum class ERarity GetContextPingRarity();
	enum class EValPingType GetContextPingType();
	struct CoreUObject_Vector GetPingOffset();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	struct CoreUObject_Vector GetRespawnLocation(const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue);
	void SetCachedPlayerState();
	void RespawnPlayer();
	void BndEvt__BP_ReviveBeacon_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_ReviveBeacon_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void EventDied();
	void EventRespawnCompleteTimeChanged(float RespawnCompleteTime);
	void ReceiveBeginPlay();
	void OnRespawnPlayerSet_Event(class AValPlayerState* PlayerToRespawn);
	void OnReviveFinished_Event();
	void OnReviveTimerStarted_Event(float Value);
	void OnLifetimeExpired_Event();
	void ExecuteUbergraph_BP_ReviveBeacon(int32 EntryPoint, bool CallFunc_Array_IsEmpty_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_Not_PreBool_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, float K2Node_Event_DeltaSeconds, float K2Node_Event_RespawnCompleteTime, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_CanInteract_ReturnValue, class AValPlayerState* K2Node_CustomEvent_PlayerToRespawn, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float K2Node_CustomEvent_Value, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast);
};

}


