#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x300 (0x5C0 - 0x2C0)
// WidgetBlueprintGeneratedClass UI_InteractWidget.UI_InteractWidget_C
class UUI_InteractWidget_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      IsChannelingAnim;                                  // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DeniedAnim;                                        // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UnlockAnim;                                        // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            AccesDeniedText;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ActivateLiftButton;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ActivateLiftRoot;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BotAlarmActionText_Background;                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BotAlarmActionText_Foreground;                     // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BotAlarmInteractButton;                            // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          BotAlarmProgressMask;                              // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              BotAlarmRoot;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChannelActionText_Background;                      // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChannelActionText_Foreground;                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChannelActionText_Hackable_Background;             // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChannelActionText_Hackable_Foreground;             // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ChannelInteractButton;                             // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              ChannelRoot;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DebugTerminalErrorText;                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              DisabledLightPanelRoot;                            // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DownloadSuccessfulText;                            // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Hackable_ProgressMask;                             // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HackableButtonContainer;                           // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HackablePanelMainMenu;                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          HackablePanelScreenSaver;                          // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       HackablePanelSwitcher;                             // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              HackableTerminalRoot;                              // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_0;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_1;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_2;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              KeycodeRoot;                                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LightPanelActionText;                              // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LightPanelActionText_1;                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LightPanelActionText_Foreground;                   // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LightPanelInteractButton;                          // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          LightPanelProgressMask;                            // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              LightPanelRoot;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MainMenutext;                                      // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ProgressMask;                                      // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SummonLiftButton;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SummonLiftRoot;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TerminalInteractButton;                            // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InfoTerminal_Selection_C*          UI_InfoTerminal_Selection;                         // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey;                                 // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_1;                               // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_2;                               // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_3;                               // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_4;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_5;                               // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_6;                               // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_7;                               // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_8;                               // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_InteractNumKey_C*                  UI_InteractNumKey_9;                               // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ViewSwitcher;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                InputDigits;                                       // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                CodeDigits;                                        // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CodeSize;                                          // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C0B[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                AvailableDigits;                                   // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UUI_InteractNumKey_C*>          CachedInteractNumKeys;                             // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnEndActivatable;                                  // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBecomeActivatable;                               // 0x4C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCorrectKeycode;                                  // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_WidgetInteraction_C*               OwningWidgetInteractionActor;                      // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnInteractWidgetBotAlarm;                          // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInteractWidgetActivatedLift;                     // 0x500(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInteractWidgetSummonedLift;                      // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInteractWidgetEnteredKeycode;                    // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	enum class EInteractWidgetType               InteractWidgetType;                                // 0x530(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1B[0x7];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnInteractWidgetToggledChannel;                    // 0x538(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsLocallyChanneling;                               // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFullyChanneled;                                  // 0x549(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C24[0x6];                                     // Fixing Size After Last Property  
	double                                       AuthoritativeChanneledPct;                         // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SimulatedChanneledPct;                             // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAuthoritativelyChanneling;                       // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentlyActivatable;                            // 0x561(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingChannelingSound;                          // 0x562(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C36[0x5];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnPlayerUnhoverWidget;                             // 0x568(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOpenHackableTerminal;                            // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHackableOptionSelected;                          // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHackableButtonHovered;                           // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHackableButtonUnhovered;                         // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AValCharacter*                         CachedHackerCharacter;                             // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_InteractWidget_C* GetDefaultObj();

	void UpdateHackableOptionUseCount(int32 OptionIndex, int32 NewUseCount, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UUI_InfoTerminal_Selection_C* K2Node_DynamicCast_AsUI_Info_Terminal_Selection, bool K2Node_DynamicCast_bSuccess);
	void UpdateOptionAvailabilityByCharacter(class AValCharacter* CharToCheck);
	void SetupHackableTerminalOptions(TArray<struct HackableButtonOption_HackableButtonOption>& HackableOptions);
	void IsHackablePanelHovered(bool* Hovered, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_InfoTerminal_Selection_C* K2Node_DynamicCast_AsUI_Info_Terminal_Selection, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHovered_ReturnValue);
	void GetRandomCodeDigit(int32* Digit, int32* Index, int32 CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
	void PlayerUnhoverWidget(class AValCharacter* UnhoveredCharacter);
	void CloseHackablePanel();
	void OpenHackablePanel();
	void GetLocalCharacter(class AValCharacter** Character, class AValPlayerController* CallFunc_GetLocalPlayer_Player, class AValCharacter* CallFunc_GetValCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetLocalPlayer(class AValPlayerController** Player, bool CallFunc_IsDedicatedServer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AValPlayerController* K2Node_DynamicCast_AsVal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void OnAuthoritativelyChannelingChanged();
	void OnAuthoritativelyInteractingChanged(bool IsInteracting);
	void OnPlayerUnhoverHackableButton();
	void OnPlayerHoveredHackableButton(enum class EHackableTerminalButtonType ButtonType, bool Usable);
	void OnHackablePanelOptionSelected(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex);
	void OnInteractingChanged(bool IsInteracting, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5);
	void UpdateChannelingAnimations(bool IsChanneling, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateLightPanel(class AValCharacter* CallFunc_GetLocalCharacter_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AValLightPanel* K2Node_DynamicCast_AsVal_Light_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void UpdateLiftPanel(bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void BindToNumKeys(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_InteractNumKey_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_8, int32 CallFunc_Array_Add_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue);
	void ClearInputDigits(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_InteractNumKey_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayDenyAccess(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void PlaySuccess(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AValPlayerController* CallFunc_GetLocalPlayer_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUI_InteractNumKey_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void IsLightPanel(bool* IsLightPanel, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetKeycode(bool CallFunc_IsValid_ReturnValue);
	void SetOwningWidgetInteractionActor(class ABP_WidgetInteraction_C* InOwningWidgetInteractionActor);
	void SetInteractWidgetType(enum class EInteractWidgetType WidgetType, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetProgressDisplay(double Alpha, class UCanvasPanelSlot* NewLocalVar, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, const struct Slate_Anchors& K2Node_MakeStruct_Anchors, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, enum class EInteractWidgetType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue);
	void SetNextInputDigit(int32 InputDigit, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SetIsActivatable(bool NewIsActivatable, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void SetNewKeycode(TArray<int32>& NewCode);
	void SetActionText(class FText InText);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void BndEvt__UI_InteractWidget_Button_425_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_InteractWidget_ChannelInteractButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void OnChannelPctUpdated(double Pct);
	void UpdateChannelingBar(double DeltaTime);
	void BndEvt__UI_InteractWidget_ActivateLiftButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_InteractWidget_SummonLiftButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void PressChannel();
	void ReleaseChannel();
	void BndEvt__UI_InteractWidget_LightPanelInteractButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_InteractWidget_BotAlarmInteractButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_InteractWidget_TerminalInteractButton_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void CheckPlayerHackerMastery();
	void ExecuteUbergraph_UI_InteractWidget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double K2Node_CustomEvent_Pct, double K2Node_CustomEvent_DeltaTime, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetTotalChannelTime_Total_Channel_Time, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue, class AValPlayerController* CallFunc_GetLocalClientValPlayerController_ReturnValue_1, class AValCharacter* CallFunc_GetLocalCharacter_Character, class AValCharacter* CallFunc_GetLocalCharacter_Character_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AValPlayerController* CallFunc_GetLocalPlayer_Player, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_UpdateChannelingBar_DeltaTime_ImplicitCast, float CallFunc_SetInteractChannelingPercent_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void OnOpenHackableTerminal__DelegateSignature();
	void OnHackableButtonUnhovered__DelegateSignature();
	void OnHackableButtonHovered__DelegateSignature(enum class EHackableTerminalButtonType ButtonType, bool Usable);
	void OnPlayerUnhoverWidget__DelegateSignature(class AValCharacter* UnhoveredCharacter);
	void OnHackableOptionSelected__DelegateSignature(enum class EHackableTerminalButtonType ButtonType, int32 ButtonIndex);
	void OnInteractWidgetBotAlarm__DelegateSignature();
	void OnEndActivatable__DelegateSignature();
	void OnBecomeActivatable__DelegateSignature();
	void OnInteractWidgetSummonedLift__DelegateSignature();
	void OnInteractWidgetActivatedLift__DelegateSignature();
	void OnInteractWidgetToggledChannel__DelegateSignature(bool bIsChanneling, class UUI_InteractWidget_C* InteractWidget, class AValPlayerController* PlayerController);
	void OnInteractWidgetEnteredKeycode__DelegateSignature(TArray<int32>& EnteredKeycode, class UUI_InteractWidget_C* InteractWidget);
	void OnCorrectKeycode__DelegateSignature();
};

}


