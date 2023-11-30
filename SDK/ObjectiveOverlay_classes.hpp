#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x4E0 - 0x328)
// WidgetBlueprintGeneratedClass ObjectiveOverlay.ObjectiveOverlay_C
class UObjectiveOverlay_C : public UValCharacterOverlay_NPC
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateHide;                                       // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateShow;                                       // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ContestedColor;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ObjectiveHelp;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ObjectiveName;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Offset;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OwnerColor;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CachedDead;                                        // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedInitial;                                     // 0x369(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedEnemy;                                       // 0x36A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedVisible;                                     // 0x36B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F0F[0x4];                                     // Fixing Size After Last Property  
	double                                       CachedHealth;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedHealthMax;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMinScale;                                   // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMaxScale;                                   // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMaxOffset;                                  // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMinDistance;                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EObjectiveState, class FText> DefaultHelpEnemy;                                  // 0x3A0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EObjectiveState, class FText> DefaultHelpFriendly;                               // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EObjectiveState, struct CoreUObject_LinearColor> DefaultColorsEnemy;                                // 0x440(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EObjectiveState, struct CoreUObject_LinearColor> DefaultColorsFriendly;                             // 0x490(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UObjectiveOverlay_C* GetDefaultObj();

	void UpdateProgress(double Value, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetStateHelpText(enum class EObjectiveState State, class FText* Text, bool Temp_bool_Variable, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void GetStateColor(enum class EObjectiveState State, struct CoreUObject_LinearColor* Color, const struct CoreUObject_LinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue);
	void UpdateDisplay(bool Visible, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void UpdateEnemy(int32 TeamNum, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetTeamFromObject_bHasATeam, int32 CallFunc_GetTeamFromObject_TeamId, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateState(enum class EObjectiveState State, int32 TeamNum, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetStateColor_Color, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_GetStateHelpText_Text);
	void OnUpdateVisibility(bool Visible, bool Hovered, bool bClose, bool bShowHealthBar);
	void Construct();
	void ExecuteUbergraph_ObjectiveOverlay(int32 EntryPoint, bool K2Node_Event_Visible, bool K2Node_Event_Hovered, bool K2Node_Event_bClose, bool K2Node_Event_bShowHealthBar);
};

}


