#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x190 - 0x90)
// BlueprintGeneratedClass BP_DragDrop_EquipmentItem.BP_DragDrop_EquipmentItem_C
class UBP_DragDrop_EquipmentItem_C : public UDragDropOperation
{
public:
	int32                                        ItemId;                                            // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_160D[0x4];                                     // Fixing Size After Last Property  
	struct Valhalla_InventorySlot                InventorySlot;                                     // 0x98(0xD0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct GameplayTags_GameplayTagContainer     TagContainer;                                      // 0x168(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        TransferCount;                                     // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        StackCount;                                        // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DragDrop_EquipmentItem_C* GetDefaultObj();

};

}


