#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x5F8 - 0x550)
// WidgetBlueprintGeneratedClass WBP_local_player_card.WBP_local_player_card_C
class UWBP_local_player_card_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimHover;                                         // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            AcctLevel;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AvatarShade;                                       // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AvatarShade_1;                                     // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundFill;                                    // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ChannelProgress;                                   // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ChannelProgressGroup;                              // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HitTarget;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_185;                                         // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_428;                                         // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             LevelBadge;                                        // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NewLevelText;                                      // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerIdentity_Avatar_C*          PlayerAvatar;                                      // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerNameSwitcher;                                // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               PlayerDataFactory;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URHLoadoutDataFactory*                 LoadoutDataFactory;                                // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValExperienceManager*                 CachedExperienceManager;                           // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_local_player_card_C* GetDefaultObj();

	void OnPlayerDisplayNameRetrieved(bool bSuccess, const class FString& DisplayName, bool Temp_bool_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default);
	void RequestPlayerDisplayName(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void On_Player_Loadouts_Updated(class URH_PlayerInfo* PlayerInfo, TArray<class URH_PlayerLoadout*>& Loadouts);
	void HandleViewStateChanged(class FName CurrentRoute, class FName NextRoute, enum class EViewManagerLayer Layer, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnXPChanged(const struct GameplayTags_GameplayTag& LevelType, int32 Count, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UValXpTable* CallFunc_GetXpTable_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetLevelAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetXpAt_ReturnValue, int32 CallFunc_GetXpAt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void OnLevelChanged(const struct GameplayTags_GameplayTag& LevelType, int32 Count, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnExperienceManager(class AValExperienceManager* ExperienceManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetPlayerXP_ReturnValue, int32 CallFunc_GetPlayerLevel_ReturnValue);
	void OnPlayerAvatarLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess);
	void InitializeWidget();
	void UninitializeWidget();
	void OnShown();
	void BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_local_player_card(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_AddViewRoute_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URHLoadoutDataFactory* CallFunc_GetLoadoutDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValPlayerController* CallFunc_GetPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


