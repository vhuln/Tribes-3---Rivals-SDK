#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x738 - 0x730)
// BlueprintGeneratedClass BP_Loot_Crate_Master_Dungeon_UI_Inventory.BP_Loot_Crate_Master_Dungeon_UI_Inventory_C
class ABP_Loot_Crate_Master_Dungeon_UI_Inventory_C : public ABP_Loot_Crate_Master_Dungeon_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x730(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Loot_Crate_Master_Dungeon_UI_Inventory_C* GetDefaultObj();

	void BndEvt__BP_Loot_Crate_Master_Dungeon_UI_Inventory_InteractCollisionComp_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon_UI_Inventory(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


