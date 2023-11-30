#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x580 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C
class UWBP_ReplayOpeningCinematicLoreVideo_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BlackBackground;                                   // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CinematicMediaTexture;                             // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SkipButton;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          Video;                                             // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ReplayOpeningCinematicLoreVideo_C* GetDefaultObj();

	void OnShown();
	void HandleOnMediaOpenFailed(const class FString& FailedUrl);
	void WhenCinematicDone();
	void HandleOnMediaOpened(const class FString& OpenedUrl);
	void InitializeWidget();
	void BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnHide();
	void ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo(int32 EntryPoint, const class FString& K2Node_CustomEvent_FailedUrl, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& K2Node_CustomEvent_OpenedUrl, class UWidget* CallFunc_SetFocusToThis_ReturnValue, bool CallFunc_Play_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Pause_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerOwner_ReturnValue, class UMediaSoundComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_OpenSource_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Pause_ReturnValue_1, bool CallFunc_RemoveViewRoute_ReturnValue);
};

}


