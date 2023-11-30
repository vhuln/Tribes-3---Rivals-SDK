#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonBoundActionButtonInterface
class ICommonBoundActionButtonInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICommonBoundActionButtonInterface* GetDefaultObj();

};

// 0x20 (0x750 - 0x730)
// Class CommonUI.AnalogSlider
class UAnalogSlider : public USlider
{
public:
	FMulticastInlineDelegateProperty_            OnAnalogCapture;                                   // 0x730(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFA[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAnalogSlider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonActionHandlerInterface
class ICommonActionHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICommonActionHandlerInterface* GetDefaultObj();

};

// 0x310 (0x490 - 0x180)
// Class CommonUI.CommonActionWidget
class UCommonActionWidget : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ProgressMaterialBrush;                             // 0x190(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ProgressMaterialParam;                             // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4D[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  IconRimBrush;                                      // 0x270(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct Engine_DataTableRowHandle>     InputActions;                                      // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UInputAction*                          EnhancedInputAction;                               // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D50[0x8];                                      // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              ProgressDynamicMaterial;                           // 0x360(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D52[0x128];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonActionWidget* GetDefaultObj();

	void SetInputActions(const TArray<struct Engine_DataTableRowHandle>& NewInputActions);
	void SetInputAction(const struct Engine_DataTableRowHandle& InputActionRow);
	void SetIconRimBrush(const struct SlateCore_SlateBrush& InIconRimBrush);
	void SetEnhancedInputAction(class UInputAction* InInputAction);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct SlateCore_SlateBrush GetIcon();
	class FText GetDisplayText();
};

// 0x50 (0x310 - 0x2C0)
// Class CommonUI.CommonUserWidget
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                         bDisplayInActionBar;                               // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConsumePointerInput;                              // 0x2C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DA0[0x4E];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUserWidget* GetDefaultObj();

	void StartNewJiggle(class UCommonUIJiggle* NewJiggle, class UCanvasPanel* CanvasToJiggle);
	void SetConsumePointerInput(bool bInConsumePointerInput);
	void RequestShow(bool Visible);
	void OnShown(bool Visible);
	void Animate(enum class ECommonUIAnimation Type, float Value, float Time, float Delay, bool Quadratic);
};

// 0x128 (0x438 - 0x310)
// Class CommonUI.CommonActivatableWidget
class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                         bIsBackHandler;                                    // 0x310(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBackActionDisplayedInActionBar;                 // 0x311(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivate;                                     // 0x312(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsActivationFocus;                          // 0x313(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsModal;                                          // 0x314(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoRestoreFocus;                                 // 0x315(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideActionDomain;                             // 0x316(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E14[0x1];                                      // Fixing Size After Last Property  
	class UInputMappingContext*                  InputMapping;                                      // 0x318(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InputMappingPriority;                              // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E18[0x4];                                      // Fixing Size After Last Property  
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainOverride;                              // 0x328(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BP_OnWidgetActivated;                              // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnWidgetDeactivated;                            // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	bool                                         bIsActive;                                         // 0x370(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E1E[0x7];                                      // Fixing Size After Last Property  
	TArray<TWeakObjectPtr<class UCommonActivatableWidget>> VisibilityBoundWidgets;                            // 0x378(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E21[0xA8];                                     // Fixing Size After Last Property  
	bool                                         bSetVisibilityOnActivated;                         // 0x430(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  ActivatedVisibility;                               // 0x431(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetVisibilityOnDeactivated;                       // 0x432(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  DeactivatedVisibility;                             // 0x433(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E23[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonActivatableWidget* GetDefaultObj();

	void SetBindVisibilities(enum class ESlateVisibility OnActivatedVisibility, enum class ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
	bool IsActivated();
	class UWidget* GetDesiredFocusTarget();
	void DeactivateWidget();
	bool BP_OnHandleBackAction();
	void BP_OnDeactivated();
	void BP_OnActivated();
	struct CommonUI_UIInputConfig BP_GetDesiredInputConfig();
	class UWidget* BP_GetDesiredFocusTarget();
	void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);
	void ActivateWidget();
};

// 0x70 (0x220 - 0x1B0)
// Class CommonUI.CommonAnimatedSwitcher
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	uint8                                        Pad_E7A[0x30];                                     // Fixing Size After Last Property  
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x1E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x1E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7E[0x2];                                      // Fixing Size After Last Property  
	float                                        TransitionDuration;                                // 0x1E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E80[0x38];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonAnimatedSwitcher* GetDefaultObj();

	void SetDisableTransitionAnimation(bool bDisableAnimation);
	bool IsTransitionPlaying();
	bool IsCurrentlySwitching();
	bool HasWidgets();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};

// 0x10 (0x230 - 0x220)
// Class CommonUI.CommonActivatableWidgetSwitcher
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:
	uint8                                        Pad_E87[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetSwitcher* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class CommonUI.CommonBorderStyle
class UCommonBorderStyle : public UObject
{
public:
	uint8                                        Pad_EA5[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Background;                                        // 0x30(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonBorderStyle* GetDefaultObj();

	void GetBackgroundBrush(struct SlateCore_SlateBrush* Brush);
};

// 0x20 (0x358 - 0x338)
// Class CommonUI.CommonBorder
class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>        Style;                                             // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReducePaddingBySafezone;                          // 0x340(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECF[0x3];                                      // Fixing Size After Last Property  
	struct SlateCore_Margin                      MinimumPadding;                                    // 0x344(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED0[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonBorder* GetDefaultObj();

	void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
};

// 0x788 (0x7B0 - 0x28)
// Class CommonUI.CommonButtonStyle
class UCommonButtonStyle : public UObject
{
public:
	bool                                         bSingleMaterial;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9D[0x7];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  SingleMaterialBrush;                               // 0x30(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalBase;                                        // 0x100(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalHovered;                                     // 0x1D0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalPressed;                                     // 0x2A0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SelectedBase;                                      // 0x370(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SelectedHovered;                                   // 0x440(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SelectedPressed;                                   // 0x510(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  Disabled;                                          // 0x5E0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ButtonPadding;                                     // 0x6B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      CustomPadding;                                     // 0x6C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x6D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x6D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalTextStyle;                                   // 0x6D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalHoveredTextStyle;                            // 0x6E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedTextStyle;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedHoveredTextStyle;                          // 0x6F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DisabledTextStyle;                                 // 0x6F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  PressedSlateSound;                                 // 0x700(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct CommonUI_CommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;                         // 0x718(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct CommonUI_CommonButtonStyleOptionalSlateSound LockedPressedSlateSound;                           // 0x738(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  HoveredSlateSound;                                 // 0x758(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct CommonUI_CommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;                         // 0x770(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct CommonUI_CommonButtonStyleOptionalSlateSound LockedHoveredSlateSound;                           // 0x790(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonButtonStyle* GetDefaultObj();

	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct SlateCore_SlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct SlateCore_SlateBrush* Brush);
	void GetSelectedBaseBrush(struct SlateCore_SlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct SlateCore_SlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct SlateCore_SlateBrush* Brush);
	void GetNormalBaseBrush(struct SlateCore_SlateBrush* Brush);
	void GetMaterialBrush(struct SlateCore_SlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct SlateCore_SlateBrush* Brush);
	void GetCustomPadding(struct SlateCore_Margin* OutCustomPadding);
	void GetButtonPadding(struct SlateCore_Margin* OutButtonPadding);
};

// 0x70 (0x690 - 0x620)
// Class CommonUI.CommonButtonInternalBase
class UCommonButtonInternalBase : public UButton
{
public:
	uint8                                        Pad_FE8[0x8];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnDoubleClicked;                                   // 0x628(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FEA[0x20];                                     // Fixing Size After Last Property  
	int32                                        MinWidth;                                          // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x65C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bButtonEnabled;                                    // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractionEnabled;                               // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF2[0x2E];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonButtonInternalBase* GetDefaultObj();

};

// 0x12A0 (0x15B0 - 0x310)
// Class CommonUI.CommonButtonBase
class UCommonButtonBase : public UCommonUserWidget
{
public:
	struct UMG_WidgetEventField                  ClickEvent;                                        // 0x310(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1397[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinWidth;                                          // 0x314(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x318(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_139A[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCommonButtonStyle>        Style;                                             // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideInputAction;                                  // 0x328(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13A0[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateSound                  PressedSlateSoundOverride;                         // 0x330(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_SlateSound                  HoveredSlateSoundOverride;                         // 0x348(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_SlateSound                  SelectedPressedSlateSoundOverride;                 // 0x360(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_SlateSound                  SelectedHoveredSlateSoundOverride;                 // 0x378(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_SlateSound                  LockedPressedSlateSoundOverride;                   // 0x390(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_SlateSound                  LockedHoveredSlateSoundOverride;                   // 0x3A8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bApplyAlphaOnDisable : 1;                          // Mask: 0x1, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Blocked : 1;                                       // Mask: 0x2, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSelectable : 1;                                   // Mask: 0x4, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldSelectUponReceivingFocus : 1;               // Mask: 0x8, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInteractableWhenSelected : 1;                     // Mask: 0x10, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bToggleable : 1;                                   // Mask: 0x20, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTriggerClickedAfterSelection : 1;                 // Mask: 0x40, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisplayInputActionWhenNotInteractable : 1;        // Mask: 0x80, PropSize: 0x10x3C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideInputActionWithKeyboard : 1;                  // Mask: 0x1, PropSize: 0x10x3C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldUseFallbackDefaultInputAction : 1;          // Mask: 0x2, PropSize: 0x10x3C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRequiresHold : 1;                                 // Mask: 0x4, PropSize: 0x10x3C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_69 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_13BD[0x6];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCommonUIHoldData>         HoldData;                                          // 0x3C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSimulateHoverOnTouchInput;                        // 0x3D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13C1[0x1];                                     // Fixing Size After Last Property  
	enum class EButtonClickMethod                ClickMethod;                                       // 0x3D2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x3D3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x3D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C2[0x3];                                     // Fixing Size After Last Property  
	int32                                        InputPriority;                                     // 0x3D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C3[0x4];                                     // Fixing Size After Last Property  
	struct Engine_DataTableRowHandle             TriggeringInputAction;                             // 0x3E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UInputAction*                          TriggeringEnhancedInputAction;                     // 0x3F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C5[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnSelectedChangedBase;                             // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseHovered;                               // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseUnhovered;                             // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_13D1[0x30];                                    // Fixing Size After Last Property  
	bool                                         bIsPersistentBinding;                              // 0x488(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputMode                  InputModeOverride;                                 // 0x489(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13D4[0x36];                                    // Fixing Size After Last Property  
	class UMaterialInstanceDynamic*              SingleMaterialStyleMID;                            // 0x4C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13D5[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 NormalStyle;                                       // 0x4D0(0x3F0)(NativeAccessSpecifierPrivate)
	struct SlateCore_ButtonStyle                 SelectedStyle;                                     // 0x8C0(0x3F0)(NativeAccessSpecifierPrivate)
	struct SlateCore_ButtonStyle                 DisabledStyle;                                     // 0xCB0(0x3F0)(NativeAccessSpecifierPrivate)
	struct SlateCore_ButtonStyle                 LockedStyle;                                       // 0x10A0(0x3F0)(NativeAccessSpecifierPrivate)
	uint8                                        bStopDoubleClickPropagation : 1;                   // Mask: 0x1, PropSize: 0x10x1490(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_6B : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_13DC[0x117];                                   // Fixing Size After Last Property  
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x15A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonButtonBase* GetDefaultObj();

	void UpdateHoldData(enum class ECommonInputType CurrentInputType);
	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(struct Engine_DataTableRowHandle& InputActionRow);
	void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);
	void SetTriggeredInputAction(struct Engine_DataTableRowHandle& InputActionRow);
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedPressedSoundOverride(class USoundBase* Sound);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetSelectedHoveredSoundOverride(class USoundBase* Sound);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetPressedSoundOverride(class USoundBase* Sound);
	void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void SetLockedPressedSoundOverride(class USoundBase* Sound);
	void SetLockedHoveredSoundOverride(class USoundBase* Sound);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsLocked(bool bInIsLocked);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetIsFocusable(bool bInIsFocusable);
	void SetInputActionProgressMaterial(struct SlateCore_SlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam);
	void SetHoveredSoundOverride(class USoundBase* Sound);
	void SetHideInputAction(bool bInHideInputAction);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void OnTriggeringInputActionChanged(struct Engine_DataTableRowHandle& NewTriggeredAction);
	void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);
	void OnTriggeredInputActionChanged(struct Engine_DataTableRowHandle& NewTriggeredAction);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	bool NativeOnHoldProgressRollback(float DeltaTime);
	bool NativeOnHoldProgress(float DeltaTime);
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	void HoldReset();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleFocusLost();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetLocked();
	bool GetIsFocusable();
	bool GetInputAction(struct Engine_DataTableRowHandle* InputActionRow);
	class UInputAction* GetEnhancedInputAction();
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct SlateCore_Margin* OutCustomPadding);
	void GetCurrentButtonPadding(struct SlateCore_Margin* OutButtonPadding);
	bool GetConvertInputActionToHold();
	void DisableButtonWithReason(class FText& DisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnReleased();
	void BP_OnPressed();
	void BP_OnLockedChanged(bool bIsLocked);
	void BP_OnLockDoubleClicked();
	void BP_OnLockClicked();
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void BP_OnHovered();
	void BP_OnFocusReceived();
	void BP_OnFocusLost();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.WidgetLockedStateRegistration
class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration
{
public:

	static class UClass* StaticClass();
	static class UWidgetLockedStateRegistration* GetDefaultObj();

};

// 0x18 (0x350 - 0x338)
// Class CommonUI.CommonCustomNavigation
class UCommonCustomNavigation : public UBorder
{
public:
	FDelegateProperty_                           OnNavigationEvent;                                 // 0x338(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1418[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonCustomNavigation* GetDefaultObj();

};

// 0x30 (0x398 - 0x368)
// Class CommonUI.CommonTextBlock
class UCommonTextBlock : public UTextBlock
{
public:
	float                                        MobileFontSizeMultiplier;                          // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1483[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCommonTextStyle>          Style;                                             // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x378(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsScrollingEnabled;                               // 0x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x381(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x382(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1487[0x15];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonTextBlock* GetDefaultObj();

	void SetWrapTextWidth(int32 InWrapTextAt);
	void SetTextCase(bool bUseAllCaps);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
	void SetScrollingEnabled(bool bInIsScrollingEnabled);
	void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);
	void SetMargin(struct SlateCore_Margin& InMargin);
	void SetLineHeightPercentage(float InLineHeightPercentage);
	void ResetScrollState();
	float GetMobileFontSizeMultiplier();
	struct SlateCore_Margin GetMargin();
};

// 0x58 (0x3F0 - 0x398)
// Class CommonUI.CommonDateTimeTextBlock
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_14B5[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonDateTimeTextBlock* GetDefaultObj();

	void SetTimespanValue(const struct CoreUObject_Timespan& InTimespan);
	void SetDateTimeValue(const struct CoreUObject_DateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
	void SetCountDownCompletionText(class FText InCompletionText);
	struct CoreUObject_DateTime GetDateTime();
};

// 0x40 (0x3F0 - 0x3B0)
// Class CommonUI.CommonGameViewportClient
class UCommonGameViewportClient : public UGameViewportClient
{
public:
	uint8                                        Pad_14B9[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonGameViewportClient* GetDefaultObj();

};

// 0x58 (0x3B0 - 0x358)
// Class CommonUI.CommonHardwareVisibilityBorder
class UCommonHardwareVisibilityBorder : public UCommonBorder
{
public:
	struct GameplayTags_GameplayTagQuery         VisibilityQuery;                                   // 0x358(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibleType;                                       // 0x3A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  HiddenType;                                        // 0x3A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14C3[0xE];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonHardwareVisibilityBorder* GetDefaultObj();

};

// 0x0 (0xCF0 - 0xCF0)
// Class CommonUI.CommonHierarchicalScrollBox
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static class UClass* StaticClass();
	static class UCommonHierarchicalScrollBox* GetDefaultObj();

};

// 0x118 (0x3F0 - 0x2D8)
// Class CommonUI.CommonLazyImage
class UCommonLazyImage : public UImage
{
public:
	uint8                                        Pad_150B[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  LoadingBackgroundBrush;                            // 0x2E0(0xD0)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  MaterialTextureParamName;                          // 0x3B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_150D[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonLazyImage* GetDefaultObj();

	void SetMaterialTextureParamName(class FName TextureParamName);
	void SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
	void SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
	void SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
	bool IsLoading();
};

// 0x160 (0x2E0 - 0x180)
// Class CommonUI.CommonLazyWidget
class UCommonLazyWidget : public UWidget
{
public:
	struct SlateCore_SlateBrush                  LoadingBackgroundBrush;                            // 0x180(0xD0)(Edit, NativeAccessSpecifierPrivate)
	class UUserWidget*                           Content;                                           // 0x250(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1530[0x30];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1531[0x48];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonLazyWidget* GetDefaultObj();

	void SetLazyContent(TSoftClassPtr<class UUserWidget> SoftWidget);
	bool IsLoading();
	class UUserWidget* GetContent();
};

// 0x0 (0xC70 - 0xC70)
// Class CommonUI.CommonListView
class UCommonListView : public UListView
{
public:

	static class UClass* StaticClass();
	static class UCommonListView* GetDefaultObj();

	void SetEntrySpacing(float InEntrySpacing);
};

// 0x28 (0x60 - 0x38)
// Class CommonUI.LoadGuardSlot
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1561[0x16];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULoadGuardSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x168 (0x300 - 0x198)
// Class CommonUI.CommonLoadGuard
class UCommonLoadGuard : public UContentWidget
{
public:
	uint8                                        Pad_15B1[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  LoadingBackgroundBrush;                            // 0x1A0(0xD0)(Edit, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              ThrobberAlignment;                                 // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15B7[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      ThrobberPadding;                                   // 0x274(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15BA[0x4];                                     // Fixing Size After Last Property  
	class FText                                  LoadingText;                                       // 0x288(0x18)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x2A0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct CoreUObject_SoftObjectPath            SpinnerMaterialPath;                               // 0x2B8(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15BF[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonLoadGuard* GetDefaultObj();

	void SetLoadingText(class FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, FDelegateProperty_& OnAssetLoaded);
};

// 0xA8 (0x440 - 0x398)
// Class CommonUI.CommonNumericTextBlock
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	FMulticastInlineDelegateProperty_            OnInterpolationStartedEvent;                       // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationUpdatedEvent;                       // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOutroEvent;                                      // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationEndedEvent;                         // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentNumericValue;                               // 0x3D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0x3DC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BC[0x3];                                     // Fixing Size After Last Property  
	struct CommonUI_CommonNumberFormattingOptions FormattingSpecification;                           // 0x3E0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutInterpolationExponent;                      // 0x3F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationUpdateInterval;                       // 0x3F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostInterpolationShrinkDuration;                   // 0x3FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerformSizeInterpolation;                          // 0x400(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPercentage;                                      // 0x401(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16C2[0x3E];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonNumericTextBlock* GetDefaultObj();

	void SetNumericType(enum class ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
	void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonPoolableWidgetInterface
class ICommonPoolableWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICommonPoolableWidgetInterface* GetDefaultObj();

	void OnReleaseToPool();
	void OnAcquireFromPool();
};

// 0x40 (0x8E0 - 0x8A0)
// Class CommonUI.CommonRichTextBlock
class UCommonRichTextBlock : public URichTextBlock
{
public:
	enum class ERichTextInlineIconDisplayMode    InlineIconDisplayMode;                             // 0x8A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTintInlineIcon;                                   // 0x8A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1711[0x6];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCommonTextStyle>          DefaultTextStyleOverrideClass;                     // 0x8A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MobileTextBlockScale;                              // 0x8B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1713[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x8B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsScrollingEnabled;                               // 0x8C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x8C1(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x8C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_171D[0x1D];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonRichTextBlock* GetDefaultObj();

	void SetScrollingEnabled(bool bInIsScrollingEnabled);
};

// 0x60 (0x1610 - 0x15B0)
// Class CommonUI.CommonRotator
class UCommonRotator : public UCommonButtonBase
{
public:
	uint8                                        Pad_1771[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnRotated;                                         // 0x15C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1775[0x18];                                    // Fixing Size After Last Property  
	class UCommonTextBlock*                      MyText;                                            // 0x15E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1776[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonRotator* GetDefaultObj();

	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int32 InValue);
	void PopulateTextLabels(const TArray<class FText>& Labels);
	class FText GetSelectedText();
	int32 GetSelectedIndex();
	void BP_OnOptionsPopulated(int32 Count);
	void BP_OnOptionSelected(int32 Index);
};

// 0xF8 (0x408 - 0x310)
// Class CommonUI.CommonTabListWidgetBase
class UCommonTabListWidgetBase : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnTabSelected;                                     // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonCreation;                               // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonRemoval;                                // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabListRebuilt;                                  // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct Engine_DataTableRowHandle             NextTabInputActionData;                            // 0x350(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct Engine_DataTableRowHandle             PreviousTabInputActionData;                        // 0x360(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UInputAction*                          NextTabEnhancedInputAction;                        // 0x370(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          PreviousTabEnhancedInputAction;                    // 0x378(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x380(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeferRebuildingTabList;                           // 0x381(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1928[0x2];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;                                    // 0x384(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_192A[0x4];                                     // Fixing Size After Last Property  
	class UCommonButtonGroupBase*                TabButtonGroup;                                    // 0x390(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_192C[0x8];                                     // Fixing Size After Last Property  
	TMap<class FName, struct CommonUI_CommonRegisteredTabInfo> RegisteredTabsByID;                                // 0x3A0(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_192D[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonTabListWidgetBase* GetDefaultObj();

	void SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(class FName TabNameID, bool bEnable);
	void SetTabEnabled(class FName TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
	bool SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(class FName TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, int32 TabIndex);
	void OnTabSelected__DelegateSignature(class FName TabId);
	void OnTabListRebuilt__DelegateSignature();
	void OnTabButtonRemoval__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void OnTabButtonCreation__DelegateSignature(class FName TabId, class UCommonButtonBase* TabButton);
	void HandleTabRemoval(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabCreation(class FName TabNameID, class UCommonButtonBase* TabButton);
	void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	class FName GetTabIdAtIndex(int32 Index);
	int32 GetTabCount();
	class UCommonButtonBase* GetTabButtonBaseByID(class FName TabNameID);
	class FName GetSelectedTabId();
	class UCommonAnimatedSwitcher* GetLinkedSwitcher();
	class FName GetActiveTab();
	void DisableTabWithReason(class FName TabNameID, class FText& Reason);
};

// 0x188 (0x1B0 - 0x28)
// Class CommonUI.CommonTextStyle
class UCommonTextStyle : public UObject
{
public:
	struct SlateCore_SlateFontInfo               Font;                                              // 0x28(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesDropShadow;                                   // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C5[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ShadowOffset;                                      // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ShadowColor;                                       // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Margin;                                            // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19CF[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  StrikeBrush;                                       // 0xD0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        LineHeightPercentage;                              // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D3[0xC];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonTextStyle* GetDefaultObj();

	void GetStrikeBrush(struct SlateCore_SlateBrush* OutStrikeBrush);
	void GetShadowOffset(struct CoreUObject_Vector2D* OutShadowOffset);
	void GetShadowColor(struct CoreUObject_LinearColor* OutColor);
	void GetMargin(struct SlateCore_Margin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct SlateCore_SlateFontInfo* OutFont);
	void GetColor(struct CoreUObject_LinearColor* OutColor);
};

// 0x18 (0x40 - 0x28)
// Class CommonUI.CommonTextScrollStyle
class UCommonTextScrollStyle : public UObject
{
public:
	float                                        Speed;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDelay;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDelay;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDelay;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F1[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonTextScrollStyle* GetDefaultObj();

};

// 0x0 (0xCA0 - 0xCA0)
// Class CommonUI.CommonTileView
class UCommonTileView : public UTileView
{
public:

	static class UClass* StaticClass();
	static class UCommonTileView* GetDefaultObj();

};

// 0x8 (0xCD0 - 0xCC8)
// Class CommonUI.CommonTreeView
class UCommonTreeView : public UTreeView
{
public:
	uint8                                        Pad_1A15[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonTreeView* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class CommonUI.CommonUIEditorSettings
class UCommonUIEditorSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonTextStyle>        TemplateTextStyle;                                 // 0x28(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonButtonStyle>      TemplateButtonStyle;                               // 0x50(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonBorderStyle>      TemplateBorderStyle;                               // 0x78(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A22[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUIEditorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonUILibrary
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCommonUILibrary* GetDefaultObj();

	class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonUIRichTextData
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                            InlineIconSet;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonUIRichTextData* GetDefaultObj();

};

// 0x1A8 (0x1D0 - 0x28)
// Class CommonUI.CommonUISettings
class UCommonUISettings : public UObject
{
public:
	bool                                         bAutoLoadData;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A7A[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UObject>                DefaultImageResourceObject;                        // 0x30(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     DefaultThrobberMaterial;                           // 0x58(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonUIRichTextData>   DefaultRichTextDataClass;                          // 0x80(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct GameplayTags_GameplayTag>      PlatformTraits;                                    // 0xA8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A86[0x28];                                    // Fixing Size After Last Property  
	class UObject*                               DefaultImageResourceObjectInstance;                // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DefaultThrobberMaterialInstance;                   // 0xE8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct SlateCore_SlateBrush                  DefaultThrobberBrush;                              // 0xF0(0xD0)(Transient, NativeAccessSpecifierPrivate)
	class UCommonUIRichTextData*                 RichTextDataInstance;                              // 0x1C0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A89[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUISettings* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class CommonUI.CommonUISubsystemBase
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1AB6[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUISubsystemBase* GetDefaultObj();

	struct SlateCore_SlateBrush GetInputActionButtonIcon(struct Engine_DataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, class FName& GamepadName);
	struct SlateCore_SlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonInputMetadata
class UCommonInputMetadata : public UObject
{
public:
	int32                                        NavBarPriority;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGenericInputAction;                             // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC5[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonInputMetadata* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonMappingContextMetadataInterface
class ICommonMappingContextMetadataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICommonMappingContextMetadataInterface* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class CommonUI.CommonMappingContextMetadata
class UCommonMappingContextMetadata : public UDataAsset
{
public:
	uint8                                        Pad_1AD6[0x8];                                     // Fixing Size After Last Property  
	class UCommonInputMetadata*                  EnhancedInputMetadata;                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UInputAction*, class UCommonInputMetadata*> PerActionEnhancedInputMetadata;                    // 0x40(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCommonMappingContextMetadata* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class CommonUI.CommonUIVisibilitySubsystem
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_1AE1[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUIVisibilitySubsystem* GetDefaultObj();

};

// 0x40 (0x70 - 0x30)
// Class CommonUI.CommonUIJiggle
class UCommonUIJiggle : public UDataAsset
{
public:
	float                                        Duration;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF7[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Amplitude;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Frequency;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  AdditiveScaleAmplitude;                            // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomPhaseStartX;                                // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomPhaseStartY;                                // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFB[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUIJiggle* GetDefaultObj();

};

// 0x160 (0x2E0 - 0x180)
// Class CommonUI.CommonVideoPlayer
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                          Video;                                             // 0x180(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x188(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x190(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                             VideoMaterial;                                     // 0x198(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x1A0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B0F[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  VideoBrush;                                        // 0x1B0(0xD0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B10[0x60];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonVideoPlayer* GetDefaultObj();

};

// 0x28 (0x1D0 - 0x1A8)
// Class CommonUI.CommonVisibilitySwitcher
class UCommonVisibilitySwitcher : public UOverlay
{
public:
	enum class ESlateVisibility                  ShownVisibility;                                   // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B5D[0x3];                                     // Fixing Size After Last Property  
	int32                                        ActiveWidgetIndex;                                 // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivateSlot;                                 // 0x1B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActivateFirstSlotOnAdding;                        // 0x1B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B5F[0x1E];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonVisibilitySwitcher* GetDefaultObj();

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void IncrementActiveWidgetIndex(bool bAllowWrapping);
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
	void DecrementActiveWidgetIndex(bool bAllowWrapping);
	void DeactivateVisibleSlot();
	void ActivateVisibleSlot();
};

// 0x10 (0x68 - 0x58)
// Class CommonUI.CommonVisibilitySwitcherSlot
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_1B69[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonVisibilitySwitcherSlot* GetDefaultObj();

};

// 0x58 (0x3B0 - 0x358)
// Class CommonUI.UCommonVisibilityWidgetBase
class UUCommonVisibilityWidgetBase : public UCommonBorder
{
public:
	TMap<class FName, bool>                      VisibilityControls;                                // 0x358(0x50)(Edit, EditFixedSize, NativeAccessSpecifierPublic)
	bool                                         bShowForGamepad;                                   // 0x3A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x3A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x3AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x3AB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x3AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB5[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUCommonVisibilityWidgetBase* GetDefaultObj();

	TArray<class FName> GetRegisteredPlatforms();
};

// 0x20 (0x1F0 - 0x1D0)
// Class CommonUI.CommonVisualAttachment
class UCommonVisualAttachment : public USizeBox
{
public:
	struct CoreUObject_Vector2D                  ContentAnchor;                                     // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBE[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonVisualAttachment* GetDefaultObj();

};

// 0x48 (0x1E0 - 0x198)
// Class CommonUI.CommonWidgetCarousel
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x198(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEA[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnCurrentPageIndexChanged;                         // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEB[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonWidgetCarousel* GetDefaultObj();

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};

// 0x48 (0x1C8 - 0x180)
// Class CommonUI.CommonWidgetCarouselNavBar
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	TSubclassOf<class UCommonButtonBase>         ButtonWidgetType;                                  // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ButtonPadding;                                     // 0x188(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C19[0x10];                                    // Fixing Size After Last Property  
	class UCommonWidgetCarousel*                 LinkedCarousel;                                    // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                ButtonGroup;                                       // 0x1B0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonButtonBase*>             Buttons;                                           // 0x1B8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonWidgetCarouselNavBar* GetDefaultObj();

	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
	void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonWidgetGroupBase
class UCommonWidgetGroupBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCommonWidgetGroupBase* GetDefaultObj();

	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};

// 0xE8 (0x110 - 0x28)
// Class CommonUI.CommonButtonGroupBase
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedButtonBaseChanged;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE5[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnHoveredButtonBaseChanged;                        // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE7[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEC[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CED[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnSelectionCleared;                                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEE[0x18];                                    // Fixing Size After Last Property  
	bool                                         bSelectionRequired;                                // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CF2[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonButtonGroupBase* GetDefaultObj();

	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int32 ButtonIndex, bool bAllowSound);
	void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
	void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
	void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
	void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
	bool HasAnyButtons();
	int32 GetSelectedButtonIndex();
	class UCommonButtonBase* GetSelectedButtonBase();
	int32 GetHoveredButtonIndex();
	int32 GetButtonCount();
	class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index);
	int32 FindButtonIndex(class UCommonButtonBase* ButtonToFind);
	void DeselectAll();
};

// 0x18 (0x278 - 0x260)
// Class CommonUI.CommonBoundActionBar
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	uint8                                        Pad_1D23[0x8];                                     // Fixing Size After Last Property  
	TSubclassOf<class UCommonButtonBase>         ActionButtonClass;                                 // 0x268(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayOwningPlayerActionsOnly;                   // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreDuplicateActions;                           // 0x271(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D2C[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonBoundActionBar* GetDefaultObj();

	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
};

// 0x18 (0x15C8 - 0x15B0)
// Class CommonUI.CommonBoundActionButton
class UCommonBoundActionButton : public UCommonButtonBase
{
public:
	uint8                                        Pad_1D3A[0x8];                                     // Fixing Size After Last Property  
	class UCommonTextBlock*                      Text_ActionName;                                   // 0x15B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D3B[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonBoundActionButton* GetDefaultObj();

	void OnUpdateInputAction();
};

// 0x0 (0xB0 - 0xB0)
// Class CommonUI.CommonGenericInputActionDataTable
class UCommonGenericInputActionDataTable : public UDataTable
{
public:

	static class UClass* StaticClass();
	static class UCommonGenericInputActionDataTable* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonInputActionDataProcessor
class UCommonInputActionDataProcessor : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCommonInputActionDataProcessor* GetDefaultObj();

};

// 0x140 (0x170 - 0x30)
// Class CommonUI.CommonUIActionRouterBase
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_1D56[0x140];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUIActionRouterBase* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class CommonUI.CommonUIInputSettings
class UCommonUIInputSettings : public UObject
{
public:
	bool                                         bLinkCursorToGamepadFocus;                         // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D63[0x3];                                     // Fixing Size After Last Property  
	int32                                        UIActionProcessingPriority;                        // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct CommonUI_UIInputAction>        InputActions;                                      // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct CommonUI_UIInputAction>        ActionOverrides;                                   // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct CommonUI_CommonAnalogCursorSettings   AnalogCursorSettings;                              // 0x50(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D67[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonUIInputSettings* GetDefaultObj();

};

// 0x120 (0x2A0 - 0x180)
// Class CommonUI.CommonActivatableWidgetContainerBase
class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	uint8                                        Pad_1DCB[0x18];                                    // Fixing Size After Last Property  
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x199(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DCE[0x2];                                     // Fixing Size After Last Property  
	float                                        TransitionDuration;                                // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonActivatableWidget*>      WidgetList;                                        // 0x1A0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UCommonActivatableWidget*              DisplayedWidget;                                   // 0x1B0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct UMG_UserWidgetPool                    GeneratedWidgetsPool;                              // 0x1B8(0x88)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DEB[0x60];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetContainerBase* GetDefaultObj();

	void SetTransitionDuration(float Duration);
	void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
	float GetTransitionDuration();
	class UCommonActivatableWidget* GetActiveWidget();
	void ClearWidgets();
	class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
};

// 0x10 (0x2B0 - 0x2A0)
// Class CommonUI.CommonActivatableWidgetStack
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
public:
	TSubclassOf<class UCommonActivatableWidget>  RootContentWidgetClass;                            // 0x2A0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*              RootContentWidget;                                 // 0x2A8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetStack* GetDefaultObj();

};

// 0x0 (0x2A0 - 0x2A0)
// Class CommonUI.CommonActivatableWidgetQueue
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
public:

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetQueue* GetDefaultObj();

};

}


