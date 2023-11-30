#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x5C1 - 0x550)
// WidgetBlueprintGeneratedClass WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C
class UWBP_LocalPlayerNameplate_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_65;                                          // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_DownArrow;                                   // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Underline;                                   // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         Leader;                                            // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              NameDisplay;                                       // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PartyMemberStatusSwitcher;                         // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerNameplate;                                   // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         Ready;                                             // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ReadySwitcher;                                     // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         Unready;                                           // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                             Waiting;                                           // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               PlayerDataFactory;                                 // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalPlayer;                                       // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_LocalPlayerNameplate_C* GetDefaultObj();

	void OnDisplayName(bool bSuccess, const class FString& DisplayName, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UWidget* K2Node_Select_Default);
	void Show_Party_Member_Status(bool InParty);
	void SetReady(bool IsLeader, bool IsReady, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default);
	void SetMemberName(bool Local, class URH_PlayerInfo* PlayerInfo, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName, bool CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue);
	void Set_Party_Member_Info(bool Local, bool InParty, const struct RallyHereStart_RH_PartyMemberData& PartyMemberData, class FText NewLocalVar, bool CallFunc_IsValid_ReturnValue);
	void UpdateLocalPlayerName(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void InitializeWidget();
	void OnHudBindingReady();
	void ExecuteUbergraph_WBP_LocalPlayerNameplate(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


