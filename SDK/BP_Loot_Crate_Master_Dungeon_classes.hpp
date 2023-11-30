#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x730 - 0x700)
// BlueprintGeneratedClass BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C
class ABP_Loot_Crate_Master_Dungeon_C : public ABP_Loot_Crate_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x700(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UUserWidget>             InteractWidgetClass;                               // 0x708(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Loot_Crate_Master_Dungeon_C* GetDefaultObj();

	void HideWidgetOnStart();
	void OnHoverStart(class AValCharacter* Initiator);
	void OnHoverEnd(class AValCharacter* Initiator);
	void ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon(int32 EntryPoint, class AValCharacter* K2Node_Event_Initiator, class AValCharacter* K2Node_Event_Initiator_1);
};

}


