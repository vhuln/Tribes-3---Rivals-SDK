#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x111 (0x439 - 0x328)
// WidgetBlueprintGeneratedClass ActorOverlay.ActorOverlay_C
class UActorOverlay_C : public UValCharacterOverlay_NPC
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateHovered;                                    // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateDisplay;                                    // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateAlive;                                      // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateDeath;                                      // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Container;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Damage;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          EnemyMarkerGroup;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterOverlay_Health_C*            Health;                                            // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LevelGroup;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText;                                         // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterOverlay_Marker_C*            Marker;                                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Nameplate;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText;                                          // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Skull;                                             // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CachedAlive;                                       // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedBound;                                       // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedEnemy;                                       // 0x3A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedDisplay;                                     // 0x3A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedHovered;                                     // 0x3A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CA0[0x3];                                     // Fixing Size After Last Property  
	double                                       CachedShield;                                      // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedHealth;                                      // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedShieldMax;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedHealthMax;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                          CachedPlayerState;                                 // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultHideDelay;                                  // 0x3D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          DefaultBotNames;                                   // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct CoreUObject_LinearColor               DefaultColorEnemy;                                 // 0x3E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultColorFriendly;                              // 0x3F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultHealthColorEnemy;                           // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDamageNumberType                 CachedDamageType;                                  // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CAC[0x7];                                     // Fixing Size After Last Property  
	class UCharacterOverlay_Damage_C*            CachedAggregateWidget;                             // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultHealthColorFriendly;                        // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedShowHealthOnly;                              // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActorOverlay_C* GetDefaultObj();

	void OnHealthPercent(float Value, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_UpdateHealthPercent_Value_ImplicitCast);
	void UpdateDamageType(int32 Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void GetRandomBotName(class FText* Value);
	void GetAggregateWidget();
	void SetTeamFriendly(const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor);
	void SetTeamEnemy(bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2);
	void AddDamage(const struct Valhalla_DamageData& Data, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCharacterOverlay_Damage_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void IsBindingReady(bool* Value, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsBindingReady_ReturnValue, bool CallFunc_IsBindingReady_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void IsEnemy(bool* Value, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	void UpdateHovered(bool Hovered, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast);
	void UpdateDisplay(bool Display, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast);
	void UpdateName(bool Temp_bool_Variable, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetRandomBotName_Value, class FText K2Node_Select_Default);
	void UpdateTeam(bool LocalEnemy, bool CallFunc_IsEnemy_Value, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsEnemy_Value_1);
	void UpdateAlive(bool Value, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
	void Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void OnLocalDealtDamage(const struct Valhalla_DamageData& Data, class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnDamageComplete(class UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void OnShieldPercent(double Value);
	void OnUnhoverReady(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void OnHideReady(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void BindHealth(float CallFunc_GetHealthPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void BindLocal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* CallFunc_GetLocalChar_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnUpdateVisibility(bool Visible, bool Hovered, bool bClose, bool bShowHealthBar);
	void OnOwningObjectiveSet();
	void ExecuteUbergraph_ActorOverlay(int32 EntryPoint, bool K2Node_Event_Visible, bool K2Node_Event_Hovered, bool K2Node_Event_bClose, bool K2Node_Event_bShowHealthBar, bool CallFunc_NotEqual_BoolBool_ReturnValue);
};

}


