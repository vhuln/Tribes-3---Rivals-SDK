#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x388 - 0x318)
// BlueprintGeneratedClass BP_HackablePanel.BP_HackablePanel_C
class ABP_HackablePanel_C : public AValHackablePanel
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_ValChar_Master_C*>            PotentialInteractors;                              // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              CachedMID;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CachedChannelTime;                                 // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedChannelStartTime;                            // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HackablePanel_C* GetDefaultObj();

	void GetChannelPassedTimePct(double* Time, class AGameStateBase* CallFunc_GetGameState_ReturnValue, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
	void BndEvt__BP_HackablePanel_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct Engine_HitResult& SweepResult);
	void BndEvt__BP_HackablePanel_InteractCollisionComp_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BP_ClientOnChannelingStart(class AValCharacter* Initiator, float StartTime);
	void BP_ClientOnChannelingEnd(class AValCharacter* Initiator);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BP_ClientClosePanel();
	void BP_ClientOpenPanel();
	void ResetPanel();
	void ExecuteUbergraph_BP_HackablePanel(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct Engine_HitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValCharacter* K2Node_Event_Initiator_1, float K2Node_Event_StartTime, float CallFunc_GetChannelTime_ReturnValue, class AValCharacter* K2Node_Event_Initiator, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_getChannelPassedTimePct_Time, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_getChannelPassedTimePct_Time_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


