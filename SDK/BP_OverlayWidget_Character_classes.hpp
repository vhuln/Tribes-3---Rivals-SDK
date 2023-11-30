#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x4A8 - 0x3F0)
// WidgetBlueprintGeneratedClass BP_OverlayWidget_Character.BP_OverlayWidget_Character_C
class UBP_OverlayWidget_Character_C : public UTopOverlayWidget_Character
{
public:
	class UImage*                                Icon;                                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               ColorEnemy;                                        // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               ColorFriendly;                                     // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               ColorNeutral;                                      // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct GameplayTags_GameplayTag, class UTexture2D*> ClassIconMap;                                      // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct CoreUObject_LinearColor               ColorEnemyLight;                                   // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               ColorFriendlyLight;                                // 0x488(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               ColorNeutralLight;                                 // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_OverlayWidget_Character_C* GetDefaultObj();

	void OnCharacterClassChanged(struct GameplayTags_GameplayTag& CharacterClass, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateLoadoutIcon(const struct GameplayTags_GameplayTag& QueuedClassTag, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnTeamRelationChanged(enum class ETeamRelation Relation, const struct CoreUObject_LinearColor& LocalColorLight, const struct CoreUObject_LinearColor& LocalColor, enum class ETeamRelation Temp_byte_Variable, enum class ETeamRelation Temp_byte_Variable_1, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct CoreUObject_LinearColor& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct CoreUObject_LinearColor& K2Node_Select_Default_1);
};

}


