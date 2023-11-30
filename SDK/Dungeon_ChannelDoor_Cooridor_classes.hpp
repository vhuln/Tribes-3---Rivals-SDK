#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x489 - 0x451)
// BlueprintGeneratedClass Dungeon_ChannelDoor_Cooridor.Dungeon_ChannelDoor_Cooridor_C
class ADungeon_ChannelDoor_Cooridor_C : public ACellFeatures_Parent_Starship_C
{
public:
	uint8                                        Pad_3015[0x7];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  DoorInteractB1;                                    // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  DoorInteractA1;                                    // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  DoorInteractB;                                     // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  DoorInteractA;                                     // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  Door;                                              // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EInteractWidgetType               InteractType;                                      // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADungeon_ChannelDoor_Cooridor_C* GetDefaultObj();

	void CacheParent(class AValDoor* LocalParentDoor, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& K2Node_MakeArray_Array, class AValDoor* K2Node_DynamicCast_AsVal_Door, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item, class ABP_DoorPanel_C* K2Node_DynamicCast_AsBP_Door_Panel, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class ABP_DoorPanel_C* K2Node_DynamicCast_AsBP_Door_Panel_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dungeon_ChannelDoor_Cooridor(int32 EntryPoint);
};

}


