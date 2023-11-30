#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x5D9 - 0x550)
// WidgetBlueprintGeneratedClass UI_Tooltip_Ability.UI_Tooltip_Ability_C
class UUI_Tooltip_Ability_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                          GreyscaleMat;                                      // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HelperText;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemDescText;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemNameText;                                      // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemTypeText;                                      // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               LockedTooltip;                                     // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MasteryBottomRule;                                 // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MasteryDescription;                                // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                      MasteryIcon;                                       // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                      MasteryIcon_2;                                     // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MasteryLabel;                                      // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PassiveInfo;                                       // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Loadout_Ability_C*                 UI_Equipment_Ability_2;                            // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelWidget_C*                    WBP_PanelWidget;                                   // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UValItemAsset*                         DefaultAsset;                                      // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsLocked;                                          // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_523[0x3];                                      // Fixing Size After Last Property  
	int32                                        RequiredLevel;                                     // 0x5D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsMasteryUnlocked;                                 // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Tooltip_Ability_C* GetDefaultObj();

	void GetAbilityPassiveInfo(bool IsUnlocked, const TArray<struct Valhalla_ValAbilityAffectingPassiveInfo>& LocalAbilityPassiveInfos, const struct Valhalla_ValAbilityAffectingPassiveInfo& LocalCurrentInfo, int32 LocalHighestMasteryRequirement, int32 Temp_int_Array_Index_Variable, const struct Valhalla_ValAbilityAffectingPassiveInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, class FText Temp_text_Variable, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FText Temp_text_Variable_1, class UTexture2D* CallFunc_GetIconFromPlayerProperty_OutText, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetTextFromPlayerProperty_OutText, class FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable, class FText K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_Format_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class AValGameState_Lobby* K2Node_DynamicCast_AsVal_Game_State_Lobby, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPlayerPropertyLevel_ReturnValue, TArray<struct Valhalla_ValAbilityAffectingPassiveInfo>& CallFunc_GetPassivesAffectingAbilityByID_AffectingPassivesArray, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void UpdateData(class UValItemAsset* ItemAsset, TArray<enum class EPlayerProperty>& CallFunc_Map_Keys_Keys, bool CallFunc_Map_IsNotEmpty_ReturnValue, class FText CallFunc_GetTextFromPlayerProperty_OutText, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Format_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
	void OnLoaded_A4EDD58F4B695E03311D149D9193BA79(class UObject* Loaded);
	void Construct();
	void SetMasteryInfoFromSoftAsset(TSoftObjectPtr<class UObject> Asset);
	void ExecuteUbergraph_UI_Tooltip_Ability(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


