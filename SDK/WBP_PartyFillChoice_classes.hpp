#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x5E9 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_PartyFillChoice.WBP_PartyFillChoice_C
class UWBP_PartyFillChoice_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_Checkbox_C*                 PartyFill;                                         // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Stroke;                                            // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHPartyManager*                       PartyManager;                                      // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CachedPlayerInfo;                                  // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HideBackground;                                    // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PartyFillChoice_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(struct CoreUObject_Guid& PlayerId);
	bool NavigateConfirmPressed(bool CallFunc_NavigateConfirmPressed_ReturnValue);
	void Refresh_Fill_State(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFillParty_ReturnValue);
	void OnPartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember);
	void OnPartyMemberPromoted(const struct CoreUObject_Guid& PlayerId);
	void CheckIsPartyLeader(const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, bool CallFunc_IsInParty_ReturnValue, bool CallFunc_CheckPartyMemberIsLeader_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void OnPartyFill(bool Checked, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFillParty_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget();
	void OnHudBindingReady();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_PartyFillChoice(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue);
};

}


