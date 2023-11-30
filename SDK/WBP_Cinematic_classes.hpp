#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x5D0 - 0x5A8)
// WidgetBlueprintGeneratedClass WBP_Cinematic.WBP_Cinematic_C
class UWBP_Cinematic_C : public URHMediaPlayerWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BlackBackground;                                   // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CinematicMediaTexture;                             // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SkipButton;                                        // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Cinematic_C* GetDefaultObj();

	void OnShown();
	void OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource);
	void HandleOnMediaOpenFailed(const class FString& FailedUrl);
	void WhenCinematicDone();
	void HandleOnMediaOpened(const class FString& OpenedUrl);
	void InitializeWidget();
	void BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnShouldShowPromptChanged(bool bCanSkipEntry);
	void OnHide();
	void ExecuteUbergraph_WBP_Cinematic(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* CallFunc_SetFocusToThis_ReturnValue, class UPlatformMediaSource* K2Node_Event_PlatformMediaSource, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_CustomEvent_FailedUrl, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_OpenSource_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& K2Node_CustomEvent_OpenedUrl, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Play_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Pause_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerOwner_ReturnValue, class UMediaSoundComponent* CallFunc_AddComponentByClass_ReturnValue, bool K2Node_Event_bCanSkipEntry, bool Temp_bool_Variable, bool CallFunc_Pause_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
};

}


