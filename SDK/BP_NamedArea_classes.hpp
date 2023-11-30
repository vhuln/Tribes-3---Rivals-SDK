#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2C9 - 0x298)
// BlueprintGeneratedClass BP_NamedArea.BP_NamedArea_C
class ABP_NamedArea_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FText                                  AreaName;                                          // 0x2B0(0x18)(Edit, BlueprintVisible)
	bool                                         ShowOnMiniMap;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NamedArea_C* GetDefaultObj();

	void SetAreaName(class FText NewAreaName, bool ShowOnMiniMap);
	void OnStartOverlap(class AActor* Other_Actor, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess);
	void OnEndOverlap(class AActor* OtherActor, int32 Temp_int_Array_Index_Variable, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_NamedArea_C* K2Node_DynamicCast_AsBP_Named_Area, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NamedArea(int32 EntryPoint, class AActor* K2Node_Event_OtherActor_1, class AActor* K2Node_Event_OtherActor, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


