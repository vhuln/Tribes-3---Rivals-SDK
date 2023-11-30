#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x159 (0x481 - 0x328)
// WidgetBlueprintGeneratedClass CharacterOverlay.CharacterOverlay_C
class UCharacterOverlay_C : public UValCharacterOverlay_NPC
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateNameplate;                                  // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimateDisplay;                                    // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              ActionLabelGroup;                                  // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ActionText;                                        // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       BackgroundSwitcher;                                // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BlueDefend;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ClassMarker;                                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Container;                                         // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Damage;                                            // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          FlagMarker;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterOverlay_Health_C*            Health;                                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LegendaryLootMarker;                               // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Nameplate;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RedGoTo;                                           // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CachedAlive;                                       // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedVisible;                                     // 0x3B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedBound;                                       // 0x3B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedDisplay;                                     // 0x3B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedHovered;                                     // 0x3B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2216[0x3];                                     // Fixing Size After Last Property  
	double                                       CachedShield;                                      // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedHealth;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedShieldMax;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedHealthMax;                                   // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AValPlayerStateBase*                   CachedPlayerState;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          DefaultBotNames;                                   // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct CoreUObject_LinearColor               DefaultColorEnemy;                                 // 0x3F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               DefaultColorFriendly;                              // 0x400(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDamageNumberType                 CachedDamageType;                                  // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221A[0x7];                                     // Fixing Size After Last Property  
	class UCharacterOverlay_Damage_C*            CachedAggregateWidget;                             // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValCharacter*                         CachedLocalCharacter;                              // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedClose;                                       // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedSpectating;                                  // 0x429(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedFriendly;                                    // 0x42A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedForceHidden;                                 // 0x42B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedShowMarker;                                  // 0x42C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221F[0x3];                                     // Fixing Size After Last Property  
	TMap<struct GameplayTags_GameplayTag, class UTexture2D*> ClassIconMap;                                      // 0x430(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CachedForceShown;                                  // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCharacterOverlay_C* GetDefaultObj();

	void UpdateEnemyMarkerVisiblitySettings(bool CallFunc_IsFriendly_Value, bool CallFunc_Not_PreBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIntSetting_IntVal, bool CallFunc_GetIntSetting_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnTeamChanged(int32 OldTeamId, int32 NewTeamId, bool CallFunc_IsFriendly_Value);
	void OnActiveLoadoutChanged(const struct GameplayTags_GameplayTag& QueuedClassTag);
	void UpdateMarker(bool CallFunc_IsValid_ReturnValue, class AValPlayerState_Frontier* K2Node_DynamicCast_AsVal_Player_State_Frontier, bool K2Node_DynamicCast_bSuccess, const struct GameplayTags_GameplayTag& CallFunc_GetActiveLoadoutTag_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnDeadUpdated(bool Dead, bool CallFunc_Not_PreBool_ReturnValue);
	void OnShieldPercent(float Value, double CallFunc_UpdateShieldPercent_Value_ImplicitCast);
	void OnHealthPercent(float Value, double CallFunc_UpdateHealthPercent_Value_ImplicitCast);
	void UpdateClose(bool Close, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void HideUICheat(bool bIsHidden, bool CallFunc_Not_PreBool_ReturnValue);
	void OnViewTargetChanged(class AActor* NewViewTarget, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess);
	void OnSpectateChanged(bool bSpectating, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue_1, class AValCharacter* CallFunc_GetValCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnHealthVisibilityChanged(bool ShowHealth, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void OnUpdateVisibility(bool Visible, bool Hovered, bool bClose, bool bShowHealthBar, bool ShowMarker);
	void BindCharacter(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerStateBase* K2Node_DynamicCast_AsVal_Player_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpdateDamageType(int32 Value, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void UpdateTeamType(bool Friendly, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue_1, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor);
	void UpdateShieldMax(int32 CallFunc_GetShieldsMax_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetRandomBotName(class FText* Value);
	void GetAggregateWidget();
	void IsBindingReady(bool* Value, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsBindingReady_ReturnValue, bool CallFunc_IsBindingReady_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void AddDamage(const struct Valhalla_DamageData& Data, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCharacterOverlay_Damage_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess);
	void IsFriendly(bool* Value, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFriendlyWith_ReturnValue);
	void IsEnemy(bool* Value, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue);
	void UpdateHovered(bool Hovered, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateDisplay(bool LocalHideHUDCheat, bool LocalDisplay, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, enum class EUMGSequencePlayMode K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void UpdateVisible(bool Value, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void UpdateName(bool Temp_bool_Variable, class FText CallFunc_GetRandomBotName_Value, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default);
	void Update_Team(bool LocalEnemy, bool CallFunc_IsFriendly_Value, bool CallFunc_IsFriendly_Value_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void BindSettings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess);
	void Initialize(class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, bool CallFunc_IsBindingReady_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnLocalDealtDamage(const struct Valhalla_DamageData& Data, class AActor* Target, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnDamageComplete(class UWidget* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_RemoveChild_ReturnValue);
	void OnSettingsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetShowDamageNumbers_ReturnValue);
	void OnUpdateInterface(bool CallFunc_IsFriendly_Value, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess);
	void OnBindingReady(enum class EBindingType Type);
	void OnShieldMax(int32 OldValue, int32 NewValue);
	void BindHealth(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetShieldPercent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetHealthPercent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue);
	void BindPlayer(class AValPlayerStateBase* PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AValPlayerState_Frontier* K2Node_DynamicCast_AsVal_Player_State_Frontier, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDead_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void UnbindLocal(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void BindLocal(class AValCharacter* Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, TScriptInterface<class IWithTeamInterface> CallFunc_AddOnTeamChangedDelegate_self_CastInput, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void BindAll(class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue, class AValPlayerController* CallFunc_GetLocalPlayer_ReturnValue_1, class AValCharacter* CallFunc_GetLocalChar_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValCharacter* CallFunc_GetLocalChar_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBindingReady_Value, bool CallFunc_BooleanAND_ReturnValue);
	void OnOwningCharacterSet();
	void OnOwningNPCSet();
	void OnInitializedFromComponent();
	void Construct();
	void ExecuteUbergraph_CharacterOverlay(int32 EntryPoint, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess);
};

}


