#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class UMG.Visual
class UVisual : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVisual* GetDefaultObj();

};

// 0x158 (0x180 - 0x28)
// Class UMG.Widget
class UWidget : public UVisual
{
public:
	uint8                                        Pad_105C[0x8];                                     // Fixing Size After Last Property  
	class UPanelSlot*                            Slot;                                              // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           bIsEnabledDelegate;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ToolTipTextDelegate;                               // 0x60(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ToolTipWidget;                                     // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x78(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           VisibilityDelegate;                                // 0x88(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_WidgetTransform                   RenderTransform;                                   // 0x98(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  RenderTransformPivot;                              // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFlowDirectionPreference          FlowDirectionPreference;                           // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xE1(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xE1(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xE1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xE1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xE1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_5B : 3;                                     // Fixing Bit-Field Size  
	enum class EMouseCursor                      Cursor;                                            // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetClipping                   Clipping;                                          // 0xE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  Visibility;                                        // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EB[0x3];                                     // Fixing Size After Last Property  
	float                                        RenderOpacity;                                     // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetPixelSnapping              PixelSnapping;                                     // 0xEC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F5[0x3];                                     // Fixing Size After Last Property  
	class USlateAccessibleWidgetData*            AccessibleWidgetData;                              // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetNavigation*                     Navigation;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110C[0x50];                                    // Fixing Size After Last Property  
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0x150(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1116[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidget* GetDefaultObj();

	void Show(bool Visible);
	void SetVisibility(enum class ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(class FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct CoreUObject_Vector2D& Translation);
	void SetRenderTransformPivot(const struct CoreUObject_Vector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct UMG_WidgetTransform& InTransform);
	void SetRenderShear(const struct CoreUObject_Vector2D& Shear);
	void SetRenderScale(const struct CoreUObject_Vector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, class UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate);
	void SetNavigationRuleCustom(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate);
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule);
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(enum class EMouseCursor InCursor);
	void SetClipping(enum class EWidgetClipping InClipping);
	void SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct UMG_EventReply OnReply__DelegateSignature();
	struct UMG_EventReply OnPointerEvent__DelegateSignature(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	void K2_RemoveFieldValueChangedDelegate(const struct FieldNotification_FieldNotificationId& FieldId, FDelegateProperty_ Delegate);
	void K2_BroadcastFieldValueChanged(const struct FieldNotification_FieldNotificationId& FieldId);
	void K2_AddFieldValueChangedDelegate(const struct FieldNotification_FieldNotificationId& FieldId, FDelegateProperty_ Delegate);
	bool IsVisible();
	bool IsRendered();
	bool IsInViewport();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	enum class ESlateVisibility GetVisibility();
	struct SlateCore_Geometry GetTickSpaceGeometry();
	class FText GetText__DelegateSignature();
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct SlateCore_SlateColor GetSlateColor__DelegateSignature();
	struct SlateCore_SlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct SlateCore_Geometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	enum class EMouseCursor GetMouseCursor__DelegateSignature();
	struct CoreUObject_LinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int32 GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct CoreUObject_Vector2D GetDesiredSize();
	enum class EWidgetClipping GetClipping();
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct SlateCore_Geometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class FText GetAccessibleText();
	class FText GetAccessibleSummaryText();
	class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// 0x118 (0x298 - 0x180)
// Class UMG.ListViewBase
class UListViewBase : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            BP_OnEntryGenerated;                               // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_136C[0x10];                                    // Fixing Size After Last Property  
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x1A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WheelScrollMultiplier;                             // 0x1A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableScrollAnimation;                            // 0x1AC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AllowOverscroll;                                   // 0x1AD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableRightClickScrolling;                        // 0x1AE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableFixedLineOffset;                            // 0x1AF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FixedLineScrollOffset;                             // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowDragging;                                    // 0x1B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1396[0x3];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BP_OnEntryReleased;                                // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct UMG_UserWidgetPool                    EntryWidgetPool;                                   // 0x1C8(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13AC[0x48];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UListViewBase* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	float GetScrollOffset();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// 0x9D8 (0xC70 - 0x298)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	uint8                                        Pad_189F[0xE8];                                    // Fixing Size After Last Property  
	struct SlateCore_TableViewStyle              WidgetStyle;                                       // 0x380(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_ScrollBarStyle              ScrollBarStyle;                                    // 0x460(0x770)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EOrientation                      Orientation;                                       // 0xBD0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESelectionMode                    SelectionMode;                                     // 0xBD1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xBD2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearSelectionOnClick;                            // 0xBD3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFocusable;                                      // 0xBD4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReturnFocusToSelection;                           // 0xBD5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_18E9[0x2];                                     // Fixing Size After Last Property  
	TArray<class UObject*>                       ListItems;                                         // 0xBD8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_18F7[0x10];                                    // Fixing Size After Last Property  
	float                                        HorizontalEntrySpacing;                            // 0xBF8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        VerticalEntrySpacing;                              // 0xBFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnEntryInitialized;                             // 0xC00(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemClicked;                                  // 0xC10(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemDoubleClicked;                            // 0xC20(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemIsHoveredChanged;                         // 0xC30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemSelectionChanged;                         // 0xC40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemScrolledIntoView;                         // 0xC50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnListViewScrolled;                             // 0xC60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UListView* GetDefaultObj();

	void SetSelectionMode(enum class ESelectionMode SelectionMode);
	void SetSelectedIndex(int32 Index);
	void ScrollIndexIntoView(int32 Index);
	void RemoveItem(class UObject* Item);
	void OnListItemOuterEndPlayed(class AActor* ItemOuter, enum class EEndPlayReason EndPlayReason);
	void OnListItemEndPlayed(class AActor* Item, enum class EEndPlayReason EndPlayReason);
	void NavigateToIndex(int32 Index);
	bool IsRefreshPending();
	float GetVerticalEntrySpacing();
	int32 GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int32 Index);
	int32 GetIndexForItem(class UObject* Item);
	float GetHorizontalEntrySpacing();
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*>& InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int32 BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};

// 0x0 (0x28 - 0x28)
// Class UMG.ListViewDesignerPreviewItem
class UListViewDesignerPreviewItem : public UObject
{
public:

	static class UClass* StaticClass();
	static class UListViewDesignerPreviewItem* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                         bCanChildrenBeAccessible;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateAccessibleBehavior          AccessibleBehavior;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateAccessibleBehavior          AccessibleSummaryBehavior;                         // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A53[0x5];                                     // Fixing Size After Last Property  
	class FText                                  AccessibleText;                                    // 0x30(0x18)(NativeAccessSpecifierPublic)
	FDelegateProperty_                           AccessibleTextDelegate;                            // 0x48(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AccessibleSummaryText;                             // 0x58(0x18)(NativeAccessSpecifierPublic)
	FDelegateProperty_                           AccessibleSummaryTextDelegate;                     // 0x70(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USlateAccessibleWidgetData* GetDefaultObj();

};

// 0x0 (0xA8 - 0xA8)
// Class UMG.UserWidgetBlueprint
class UUserWidgetBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UUserWidgetBlueprint* GetDefaultObj();

};

// 0x140 (0x2C0 - 0x180)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_3D49[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               ColorAndOpacity;                                   // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x198(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x1A8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ForegroundColorDelegate;                           // 0x1BC(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5A[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnVisibilityChanged;                               // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D5C[0x18];                                    // Fixing Size After Last Property  
	struct SlateCore_Margin                      Padding;                                           // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x1, PropSize: 0x10x20C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAction : 1;                                   // Mask: 0x2, PropSize: 0x10x20C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_F8 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_3D6A[0x3];                                     // Fixing Size After Last Property  
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x210(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UUMGSequenceTickManager*               AnimationTickManager;                              // 0x220(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x228(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct UMG_NamedSlotBinding>          NamedSlotBindings;                                 // 0x238(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UUserWidgetExtension*>          Extensions;                                        // 0x248(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWidgetTree*                           WidgetTree;                                        // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x1, PropSize: 0x10x260(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x2, PropSize: 0x10x260(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_F9 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_3D7D[0x17];                                    // Fixing Size After Last Property  
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D83[0x3];                                     // Fixing Size After Last Property  
	struct UMG_WidgetChild                       DesiredFocusWidget;                                // 0x27C(0x10)(Edit, DisableEditOnInstance, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D85[0x4];                                     // Fixing Size After Last Property  
	class UInputComponent*                       InputComponent;                                    // 0x290(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct UMG_AnimationEventBinding>     AnimationCallbacks;                                // 0x298(0x10)(ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D8A[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUserWidget* GetDefaultObj();

	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(class FName ActionName, enum class EInputEvent EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct CoreUObject_Vector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
	void SetInputActionPriority(int32 NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct SlateCore_SlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct CoreUObject_Vector2D& Size);
	void SetColorAndOpacity(const struct CoreUObject_LinearColor& InColorAndOpacity);
	void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);
	void SetAnchorsInViewport(const struct Slate_Anchors& Anchors);
	void SetAlignmentInViewport(const struct CoreUObject_Vector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RemoveExtensions(TSubclassOf<class UUserWidgetExtension> InExtensionType);
	void RemoveExtension(class UUserWidgetExtension* InExtension);
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct UMG_EventReply OnTouchStarted(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& InTouchEvent);
	struct UMG_EventReply OnTouchMoved(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& InTouchEvent);
	struct UMG_EventReply OnTouchGesture(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& GestureEvent);
	struct UMG_EventReply OnTouchForceChanged(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& InTouchEvent);
	struct UMG_EventReply OnTouchEnded(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct SlateCore_FocusEvent& InFocusEvent);
	struct UMG_EventReply OnPreviewMouseButtonDown(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	struct UMG_EventReply OnPreviewKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent);
	void OnPaint(struct UMG_PaintContext& Context);
	struct UMG_EventReply OnMouseWheel(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	struct UMG_EventReply OnMouseMove(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	void OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent);
	void OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct UMG_EventReply OnMouseButtonUp(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	struct UMG_EventReply OnMouseButtonDown(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	struct UMG_EventReply OnMouseButtonDoubleClick(const struct SlateCore_Geometry& InMyGeometry, struct SlateCore_PointerEvent& InMouseEvent);
	struct UMG_EventReply OnMotionDetected(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_MotionEvent& InMotionEvent);
	struct UMG_EventReply OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent);
	struct UMG_EventReply OnKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent);
	struct UMG_EventReply OnKeyChar(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_CharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct UMG_EventReply OnFocusReceived(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_FocusEvent& InFocusEvent);
	void OnFocusLost(const struct SlateCore_FocusEvent& InFocusEvent);
	bool OnDrop(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_PointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_PointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct SlateCore_PointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_PointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(struct SlateCore_PointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct UMG_EventReply OnAnalogValueChanged(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_AnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct SlateCore_FocusEvent& InFocusEvent);
	void ListenForInputAction(class FName ActionName, enum class EInputEvent EventType, bool bConsume, FDelegateProperty_ Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(class FName ActionName);
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerCameraManager* GetOwningPlayerCameraManager();
	bool GetIsVisible();
	TArray<class UUserWidgetExtension*> GetExtensions(TSubclassOf<class UUserWidgetExtension> ExtensionType);
	class UUserWidgetExtension* GetExtension(TSubclassOf<class UUserWidgetExtension> ExtensionType);
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct Slate_Anchors GetAnchorsInViewport();
	struct CoreUObject_Vector2D GetAlignmentInViewport();
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate);
	void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate, enum class EWidgetAnimationEvent AnimationEvent, class FName UserTag);
	void AddToViewport(int32 ZOrder);
	bool AddToPlayerScreen(int32 ZOrder);
	class UUserWidgetExtension* AddExtension(TSubclassOf<class UUserWidgetExtension> InExtensionType);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserWidgetExtension
class UUserWidgetExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UUserWidgetExtension* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintGeneratedClassExtension
class UWidgetBlueprintGeneratedClassExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWidgetBlueprintGeneratedClassExtension* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetFieldNotificationExtension
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{
public:
	uint8                                        Pad_3E1B[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetFieldNotificationExtension* GetDefaultObj();

};

// 0xD8 (0x100 - 0x28)
// Class UMG.WidgetNavigation
class UWidgetNavigation : public UObject
{
public:
	struct UMG_WidgetNavigationData              Up;                                                // 0x28(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct UMG_WidgetNavigationData              Down;                                              // 0x4C(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct UMG_WidgetNavigationData              Left;                                              // 0x70(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct UMG_WidgetNavigationData              Right;                                             // 0x94(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct UMG_WidgetNavigationData              Next;                                              // 0xB8(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct UMG_WidgetNavigationData              Previous;                                          // 0xDC(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWidgetNavigation* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieScene2DTransformPropertySystem
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieScene2DTransformPropertySystem* GetDefaultObj();

};

// 0x780 (0x870 - 0xF0)
// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_3E41[0x8];                                     // Fixing Size After Last Property  
	struct UMG_MovieScene2DTransformMask         TransformMask;                                     // 0xF8(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E46[0x4];                                     // Fixing Size After Last Property  
	struct MovieScene_MovieSceneFloatChannel     Translation[0x2];                                  // 0x100(0x220)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Rotation;                                          // 0x320(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Scale[0x2];                                        // 0x430(0x220)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Shear[0x2];                                        // 0x650(0x220)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieScene2DTransformSection* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieScene2DTransformTrack
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieScene2DTransformTrack* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieSceneMarginPropertySystem
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMarginPropertySystem* GetDefaultObj();

};

// 0x448 (0x538 - 0xF0)
// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_3E70[0x8];                                     // Fixing Size After Last Property  
	struct MovieScene_MovieSceneFloatChannel     TopCurve;                                          // 0xF8(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     LeftCurve;                                         // 0x208(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     RightCurve;                                        // 0x318(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     BottomCurve;                                       // 0x428(0x110)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneMarginSection* GetDefaultObj();

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieSceneMarginTrack
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneMarginTrack* GetDefaultObj();

};

// 0x160 (0x1A0 - 0x40)
// Class UMG.MovieSceneWidgetMaterialSystem
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_3E8C[0x160];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialSystem* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_3E9D[0x10];                                    // Fixing Size After Last Property  
	TArray<class FName>                          BrushPropertyNamePath;                             // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneWidgetMaterialTrack* GetDefaultObj();

};

// 0x310 (0x338 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_3EC6[0x1F8];                                   // Fixing Size After Last Property  
	class UWidgetAnimation*                      Animation;                                         // 0x220(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EC8[0x8];                                     // Fixing Size After Last Property  
	struct MovieScene_MovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x230(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_3EC9[0x80];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUMGSequencePlayer* GetDefaultObj();

	void SetUserTag(class FName InUserTag);
	class FName GetUserTag();
};

// 0x98 (0xC0 - 0x28)
// Class UMG.UMGSequenceTickManager
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct UMG_SequenceTickManagerWidgetData> WeakUserWidgetData;                                // 0x28(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3ED2[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUMGSequenceTickManager* GetDefaultObj();

};

// 0x30 (0x98 - 0x68)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct UMG_WidgetAnimationBinding>    AnimationBindings;                                 // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bLegacyFinishOnStop;                               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3F3C[0x7];                                     // Fixing Size After Last Property  
	class FString                                DisplayLabel;                                      // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWidgetAnimation* GetDefaultObj();

	void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate);
	void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate);
	void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate);
};

// 0x10 (0x38 - 0x28)
// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct UMG_BlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWidgetAnimationDelegateBinding* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE2[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetAnimationPlayCallbackProxy* GetDefaultObj();

	class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
	class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
};

// 0x48 (0x70 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_DynamicPropertyPath               SourcePath;                                        // 0x30(0x38)(NativeAccessSpecifierPublic)
	class FName                                  DestinationProperty;                               // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPropertyBinding* GetDefaultObj();

};

// 0x0 (0x70 - 0x70)
// Class UMG.BoolBinding
class UBoolBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UBoolBinding* GetDefaultObj();

	bool GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_4015[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBrushBinding* GetDefaultObj();

	struct SlateCore_SlateBrush GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_402C[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCheckedStateBinding* GetDefaultObj();

	enum class ECheckBoxState GetValue();
};

// 0x8 (0x78 - 0x70)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_406B[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UColorBinding* GetDefaultObj();

	struct SlateCore_SlateColor GetSlateValue();
	struct CoreUObject_LinearColor GetLinearValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UFloatBinding* GetDefaultObj();

	float GetValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UInt32Binding* GetDefaultObj();

	int32 GetValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UMouseCursorBinding* GetDefaultObj();

	enum class EMouseCursor GetValue();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBinaryStateRegistration
class UWidgetBinaryStateRegistration : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWidgetBinaryStateRegistration* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetHoveredStateRegistration
class UWidgetHoveredStateRegistration : public UWidgetBinaryStateRegistration
{
public:

	static class UClass* StaticClass();
	static class UWidgetHoveredStateRegistration* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetPressedStateRegistration
class UWidgetPressedStateRegistration : public UWidgetBinaryStateRegistration
{
public:

	static class UClass* StaticClass();
	static class UWidgetPressedStateRegistration* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetDisabledStateRegistration
class UWidgetDisabledStateRegistration : public UWidgetBinaryStateRegistration
{
public:

	static class UClass* StaticClass();
	static class UWidgetDisabledStateRegistration* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetSelectedStateRegistration
class UWidgetSelectedStateRegistration : public UWidgetBinaryStateRegistration
{
public:

	static class UClass* StaticClass();
	static class UWidgetSelectedStateRegistration* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetEnumStateRegistration
class UWidgetEnumStateRegistration : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWidgetEnumStateRegistration* GetDefaultObj();

};

// 0x6B0 (0x6E8 - 0x38)
// Class UMG.WidgetStateSettings
class UWidgetStateSettings : public UDeveloperSettings
{
public:
	uint8                                        Pad_40FC[0x6B0];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetStateSettings* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_412C[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTextBinding* GetDefaultObj();

	class FText GetTextValue();
	class FString GetStringValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UVisibilityBinding* GetDefaultObj();

	enum class ESlateVisibility GetValue();
};

// 0x0 (0x70 - 0x70)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass();
	static class UWidgetBinding* GetDefaultObj();

	class UWidget* GetValue();
};

// 0x20 (0x50 - 0x30)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAsyncTaskDownloadImage* GetDefaultObj();

	class UAsyncTaskDownloadImage* DownloadImage(const class FString& URL);
};

// 0x80 (0xB0 - 0x30)
// Class UMG.GameViewportSubsystem
class UGameViewportSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_427F[0x80];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGameViewportSubsystem* GetDefaultObj();

	struct UMG_GameViewportWidgetSlot SetWidgetSlotPosition(const struct UMG_GameViewportWidgetSlot& Slot, class UWidget* Widget, const struct CoreUObject_Vector2D& Position, bool bRemoveDPIScale);
	struct UMG_GameViewportWidgetSlot SetWidgetSlotDesiredSize(const struct UMG_GameViewportWidgetSlot& Slot, const struct CoreUObject_Vector2D& Size);
	void SetWidgetSlot(class UWidget* Widget, const struct UMG_GameViewportWidgetSlot& Slot);
	void RemoveWidget(class UWidget* Widget);
	bool IsWidgetAdded(class UWidget* Widget);
	struct UMG_GameViewportWidgetSlot GetWidgetSlot(class UWidget* Widget);
	bool AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, const struct UMG_GameViewportWidgetSlot& Slot);
	bool AddWidget(class UWidget* Widget, const struct UMG_GameViewportWidgetSlot& Slot);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntry
class IUserListEntry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUserListEntry* GetDefaultObj();

	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntryLibrary
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserListEntryLibrary* GetDefaultObj();

	bool IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry);
	bool IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry);
	class UListViewBase* GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntry
class IUserObjectListEntry : public IUserListEntry
{
public:

	static class UClass* StaticClass();
	static class IUserObjectListEntry* GetDefaultObj();

	void OnListItemObjectSet(class UObject* ListItemObject);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntryLibrary
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UUserObjectListEntryLibrary* GetDefaultObj();

	class UObject* GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry);
};

// 0x18 (0x198 - 0x180)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x180(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_4354[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPanelWidget* GetDefaultObj();

	bool RemoveChildAt(int32 Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int32 GetChildrenCount();
	int32 GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int32 Index);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};

// 0x0 (0x198 - 0x198)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass();
	static class UContentWidget* GetDefaultObj();

	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// 0x128 (0x2C0 - 0x198)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x1A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAlphaToBlur;                                 // 0x1AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D7[0x1];                                     // Fixing Size After Last Property  
	float                                        BlurStrength;                                      // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D9[0x3];                                     // Fixing Size After Last Property  
	int32                                        BlurRadius;                                        // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43DB[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4                   CornerRadius;                                      // 0x1C0(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  LowQualityFallbackBrush;                           // 0x1E0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_43DC[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBackgroundBlur* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetLowQualityFallbackBrush(struct SlateCore_SlateBrush& InBrush);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetCornerRadius(const struct CoreUObject_Vector4& InCornerRadius);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int32 InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// 0x10 (0x38 - 0x28)
// Class UMG.PanelSlot
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Content;                                           // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPanelSlot* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_43FC[0x16];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBackgroundBlurSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x1A0 (0x338 - 0x198)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x19A(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_101 : 7;                                    // Fixing Bit-Field Size  
	uint8                                        Pad_443C[0x1];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               ContentColorAndOpacity;                            // 0x19C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x1AC(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x1BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_443F[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Background;                                        // 0x1D0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BackgroundDelegate;                                // 0x2A0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               BrushColor;                                        // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BrushColorDelegate;                                // 0x2C0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  DesiredSizeScale;                                  // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4443[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x2E4(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x2F4(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnMouseMoveEvent;                                  // 0x304(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x314(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4448[0x14];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBorder* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetDesiredSizeScale(const struct CoreUObject_Vector2D& InScale);
	void SetContentColorAndOpacity(const struct CoreUObject_LinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct CoreUObject_LinearColor& InBrushColor);
	void SetBrush(struct SlateCore_SlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x28 (0x60 - 0x38)
// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4455[0x16];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBorderSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x488 (0x620 - 0x198)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	uint8                                        Pad_4469[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 WidgetStyle;                                       // 0x1A0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ColorAndOpacity;                                   // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               BackgroundColor;                                   // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x5B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x5B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x5B3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446D[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x5B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x5C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x5D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x5E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_446E[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UButton* GetDefaultObj();

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(struct SlateCore_ButtonStyle& InStyle);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetColorAndOpacity(const struct CoreUObject_LinearColor& InColorAndOpacity);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetBackgroundColor(const struct CoreUObject_LinearColor& InBackgroundColor);
	bool IsPressed();
};

// 0x28 (0x60 - 0x38)
// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4478[0x16];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UButtonSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x10 (0x1A8 - 0x198)
// Class UMG.CanvasPanel
class UCanvasPanel : public UPanelWidget
{
public:
	uint8                                        Pad_4481[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCanvasPanel* GetDefaultObj();

	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

// 0x50 (0x88 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct UMG_AnchorData                        LayoutData;                                        // 0x38(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAutoSize;                                         // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44BD[0x3];                                     // Fixing Size After Last Property  
	int32                                        ZOrder;                                            // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44BF[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCanvasPanelSlot* GetDefaultObj();

	void SetZOrder(int32 InZOrder);
	void SetSize(const struct CoreUObject_Vector2D& InSize);
	void SetPosition(const struct CoreUObject_Vector2D& InPosition);
	void SetOffsets(const struct SlateCore_Margin& InOffset);
	void SetMinimum(const struct CoreUObject_Vector2D& InMinimumAnchors);
	void SetMaximum(const struct CoreUObject_Vector2D& InMaximumAnchors);
	void SetLayout(struct UMG_AnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct Slate_Anchors& InAnchors);
	void SetAlignment(const struct CoreUObject_Vector2D& InAlignment);
	int32 GetZOrder();
	struct CoreUObject_Vector2D GetSize();
	struct CoreUObject_Vector2D GetPosition();
	struct SlateCore_Margin GetOffsets();
	struct UMG_AnchorData GetLayout();
	bool GetAutoSize();
	struct Slate_Anchors GetAnchors();
	struct CoreUObject_Vector2D GetAlignment();
};

// 0xB18 (0xCB0 - 0x198)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44E9[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x19C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44EA[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_CheckBoxStyle               WidgetStyle;                                       // 0x1B0(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xC80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0xC81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0xC82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0xC83(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0xC84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44ED[0x3];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0xC88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_44EE[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCheckBox* GetDefaultObj();

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetIsChecked(bool InIsChecked);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetCheckedStateRegistration
class UWidgetCheckedStateRegistration : public UWidgetEnumStateRegistration
{
public:

	static class UClass* StaticClass();
	static class UWidgetCheckedStateRegistration* GetDefaultObj();

};

// 0x100 (0x280 - 0x180)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4507[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Image;                                             // 0x190(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bEnableRadius;                                     // 0x260(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4508[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCircularThrobber* GetDefaultObj();

	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int32 InNumberOfPieces);
};

// 0x7B0 (0x930 - 0x180)
// Class UMG.ComboBox
class UComboBox : public UWidget
{
public:
	struct SlateCore_ScrollBarStyle              ScrollBarStyle;                                    // 0x180(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       Items;                                             // 0x8F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x900(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x910(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_450E[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UComboBox* GetDefaultObj();

};

// 0x1BD0 (0x1D50 - 0x180)
// Class UMG.ComboBoxKey
class UComboBoxKey : public UWidget
{
public:
	TArray<class FName>                          Options;                                           // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  SelectedOption;                                    // 0x190(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4542[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_ComboBoxStyle               WidgetStyle;                                       // 0x1A0(0x660)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TableRowStyle               ItemStyle;                                         // 0x800(0xD50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ScrollBarStyle              ScrollBarStyle;                                    // 0x1550(0x770)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x1CC0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ContentPadding;                                    // 0x1CD4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxListHeight;                                     // 0x1CE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDownArrow;                                     // 0x1CE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGamepadNavigationMode;                      // 0x1CE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x1CEA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4547[0x1];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           OnGenerateContentWidget;                           // 0x1CEC(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGenerateItemWidget;                              // 0x1CFC(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4548[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1D10(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1D20(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_454A[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UComboBoxKey* GetDefaultObj();

	void SetSelectedOption(class FName Option);
	bool RemoveOption(class FName Option);
	void OnSelectionChangedEvent__DelegateSignature(class FName SelectedItem, enum class ESelectInfo SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	class FName GetSelectedOption();
	class UWidget* GenerateWidgetEvent__DelegateSignature(class FName Item);
	void ClearSelection();
	void ClearOptions();
	void AddOption(class FName Option);
};

// 0x1C50 (0x1DD0 - 0x180)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FString>                        DefaultOptions;                                    // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                SelectedOption;                                    // 0x190(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct SlateCore_ComboBoxStyle               WidgetStyle;                                       // 0x1A0(0x660)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TableRowStyle               ItemStyle;                                         // 0x800(0xD50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ScrollBarStyle              ScrollBarStyle;                                    // 0x1550(0x770)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ContentPadding;                                    // 0x1CC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxListHeight;                                     // 0x1CD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasDownArrow;                                      // 0x1CD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGamepadNavigationMode;                       // 0x1CD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45DA[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               Font;                                              // 0x1CD8(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x1D30(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x1D44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45DD[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x1D48(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1D58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1D68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_45E1[0x58];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UComboBoxString* GetDefaultObj();

	void SetSelectedOption(const class FString& Option);
	void SetSelectedIndex(int32 Index);
	bool RemoveOption(const class FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	class FString GetSelectedOption();
	int32 GetSelectedIndex();
	int32 GetOptionCount();
	class FString GetOptionAtIndex(int32 Index);
	int32 FindOptionIndex(const class FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const class FString& Option);
};

// 0xE0 (0x260 - 0x180)
// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget
{
public:
	struct CoreUObject_Vector2D                  EntrySpacing;                                      // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct CoreUObject_Vector2D>          SpacingPattern;                                    // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x1A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_45FD[0x3];                                     // Fixing Size After Last Property  
	struct UMG_SlateChildSize                    EntrySizeRule;                                     // 0x1A4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x1AC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x1AD(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_45FE[0x2];                                     // Fixing Size After Last Property  
	int32                                        MaxElementSize;                                    // 0x1B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct UMG_RadialBoxSettings                 RadialBoxSettings;                                 // 0x1B4(0x10)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_4600[0x14];                                    // Fixing Size After Last Property  
	struct UMG_UserWidgetPool                    EntryWidgetPool;                                   // 0x1D8(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDynamicEntryBoxBase* GetDefaultObj();

	void SetRadialSettings(struct UMG_RadialBoxSettings& InSettings);
	void SetEntrySpacing(struct CoreUObject_Vector2D& InEntrySpacing);
	int32 GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};

// 0x8 (0x268 - 0x260)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x260(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDynamicEntryBox* GetDefaultObj();

	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(TSubclassOf<class UUserWidget> EntryClass);
	class UUserWidget* BP_CreateEntry();
};

// 0x390 (0x510 - 0x180)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x180(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x198(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x1A8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1C0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_EditableTextStyle           WidgetStyle;                                       // 0x1D0(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPassword;                                        // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4636[0x2];                                     // Fixing Size After Last Property  
	float                                        MinimumDesiredWidth;                               // 0x4C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x4C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x4CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x4CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x4CD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x4CE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Slate_VirtualKeyboardOptions          VirtualKeyboardOptions;                            // 0x4CF(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x4D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x4D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x4D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x4D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_ShapedTextOptions                 ShapedTextOptions;                                 // 0x4D4(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_4639[0x1];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x4E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_463A[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEditableText* GetDefaultObj();

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetMinimumDesiredWidth(float InMinDesiredWidth);
	void SetJustification(enum class ETextJustify InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(class FText InHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct SlateCore_SlateFontInfo& InFontInfo);
	void OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	class FText GetText();
	enum class ETextJustify GetJustification();
	class FText GetHintText();
	struct SlateCore_SlateFontInfo GetFont();
};

// 0xF20 (0x10A0 - 0x180)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x180(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x198(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_465A[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_EditableTextBoxStyle        WidgetStyle;                                       // 0x1B0(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x1030(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1048(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x1058(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPassword;                                        // 0x1059(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_465C[0x2];                                     // Fixing Size After Last Property  
	float                                        MinimumDesiredWidth;                               // 0x105C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x1060(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x1061(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x1062(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x1063(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x1064(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x1065(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x1066(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Slate_VirtualKeyboardOptions          VirtualKeyboardOptions;                            // 0x1067(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x1068(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x1069(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x106A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x106B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_ShapedTextOptions                 ShapedTextOptions;                                 // 0x106C(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_4662[0x1];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1070(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1080(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4664[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEditableTextBox* GetDefaultObj();

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetJustification(enum class ETextJustify InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(class FText InText);
	void SetForegroundColor(const struct CoreUObject_LinearColor& Color);
	void SetError(class FText InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	bool HasError();
	class FText GetText();
	void ClearError();
};

// 0x310 (0x490 - 0x180)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_4672[0x10];                                    // Fixing Size After Last Property  
	struct SlateCore_ExpandableAreaStyle         Style;                                             // 0x190(0x1C0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BorderBrush;                                       // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BorderColor;                                       // 0x420(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsExpanded;                                       // 0x434(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4675[0x3];                                     // Fixing Size After Last Property  
	float                                        MaxHeight;                                         // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      HeaderPadding;                                     // 0x43C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      AreaPadding;                                       // 0x44C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4676[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnExpansionChanged;                                // 0x460(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                               HeaderContent;                                     // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               BodyContent;                                       // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4677[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UExpandableArea* GetDefaultObj();

	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// 0x30 (0x1C8 - 0x198)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x198(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RowFill;                                           // 0x1A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4689[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGridPanel* GetDefaultObj();

	void SetRowFill(int32 RowIndex, float Coefficient);
	void SetColumnFill(int32 ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content, int32 InRow, int32 InColumn);
};

// 0x40 (0x78 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46A2[0x2];                                     // Fixing Size After Last Property  
	int32                                        Row;                                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RowSpan;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Layer;                                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Nudge;                                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46A6[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGridSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRowSpan(int32 InRowSpan);
	void SetRow(int32 InRow);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetNudge(const struct CoreUObject_Vector2D& InNudge);
	void SetLayer(int32 InLayer);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumnSpan(int32 InColumnSpan);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x1A8 - 0x198)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_46B0[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UHorizontalBox* GetDefaultObj();

	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	uint8                                        Pad_46C1[0x8];                                     // Fixing Size After Last Property  
	struct UMG_SlateChildSize                    Size;                                              // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46C4[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UHorizontalBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(const struct UMG_SlateChildSize& InSize);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x158 (0x2D8 - 0x180)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct SlateCore_SlateBrush                  Brush;                                             // 0x180(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BrushDelegate;                                     // 0x250(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ColorAndOpacity;                                   // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x270(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46F9[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x284(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46FA[0x44];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UImage* GetDefaultObj();

	void SetOpacity(float InOpacity);
	void SetDesiredSizeOverride(const struct CoreUObject_Vector2D& DesiredSize);
	void SetColorAndOpacity(const struct CoreUObject_LinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct SlateCore_SlateColor& TintColor);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize);
	void SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(struct SlateCore_SlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x7E0 (0x960 - 0x180)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct SlateCore_ButtonStyle                 WidgetStyle;                                       // 0x180(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              TextStyle;                                         // 0x570(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct Slate_InputChord                      SelectedKey;                                       // 0x8B0(0x20)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Margin;                                            // 0x8D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  KeySelectionText;                                  // 0x8E0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  NoKeySpecifiedText;                                // 0x8F8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAllowModifierKeys;                                // 0x910(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowGamepadKeys;                                 // 0x911(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4719[0x6];                                     // Fixing Size After Last Property  
	TArray<struct InputCore_Key>                 EscapeKeys;                                        // 0x918(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x928(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsSelectingKeyChanged;                           // 0x938(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_471B[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInputKeySelector* GetDefaultObj();

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility);
	void SetSelectedKey(struct Slate_InputChord& InSelectedKey);
	void SetNoKeySpecifiedText(class FText InNoKeySpecifiedText);
	void SetKeySelectionText(class FText InKeySelectionText);
	void SetEscapeKeys(TArray<struct InputCore_Key>& InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct Slate_InputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// 0x18 (0x1B0 - 0x198)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4724[0x17];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInvalidationBox* GetDefaultObj();

	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// 0x50 (0x1E8 - 0x198)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	TSubclassOf<class UUserWidget>               MenuClass;                                         // 0x198(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGetMenuContentEvent;                             // 0x1A0(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGetUserMenuContentEvent;                         // 0x1B0(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMenuPlacement                    Placement;                                         // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFitInWindow;                                      // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x1C2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseApplicationMenuStack;                           // 0x1C3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4742[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnMenuOpenChanged;                                 // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4743[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMenuAnchor* GetDefaultObj();

	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(enum class EMenuPlacement InPlacement);
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	class UUserWidget* GetUserWidget__DelegateSignature();
	struct CoreUObject_Vector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};

// 0x20 (0x1A0 - 0x180)
// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget
{
public:
	struct UMG_ShapedTextOptions                 ShapedTextOptions;                                 // 0x180(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	enum class ETextJustify                      Justification;                                     // 0x183(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextWrappingPolicy               WrappingPolicy;                                    // 0x184(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        AutoWrapText : 1;                                  // Mask: 0x1, PropSize: 0x10x185(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_130 : 7;                                    // Fixing Bit-Field Size  
	uint8                                        Pad_474B[0x2];                                     // Fixing Size After Last Property  
	float                                        WrapTextAt;                                        // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct SlateCore_Margin                      Margin;                                            // 0x18C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                        LineHeightPercentage;                              // 0x19C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTextLayoutWidget* GetDefaultObj();

	void SetJustification(enum class ETextJustify InJustification);
};

// 0x3C0 (0x560 - 0x1A0)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x1A0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x1B8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1D0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              WidgetStyle;                                       // 0x1E0(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x521(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x522(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x523(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x524(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x525(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Slate_VirtualKeyboardOptions          VirtualKeyboardOptions;                            // 0x526(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x527(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x538(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4769[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMultiLineEditableText* GetDefaultObj();

	void SetWidgetStyle(struct SlateCore_TextBlockStyle& InWidgetStyle);
	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(class FText InHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct SlateCore_SlateFontInfo& InFontInfo);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& Text);
	class FText GetText();
	class FText GetHintText();
	struct SlateCore_SlateFontInfo GetFont();
};

// 0xF00 (0x10A0 - 0x1A0)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x1A0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x1B8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1D0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_EditableTextBoxStyle        WidgetStyle;                                       // 0x1E0(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0x1060(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x1061(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Slate_VirtualKeyboardOptions          VirtualKeyboardOptions;                            // 0x1062(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x1063(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478B[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1068(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1078(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_478C[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMultiLineEditableTextBox* GetDefaultObj();

	void SetTextStyle(struct SlateCore_TextBlockStyle& InTextStyle);
	void SetText(class FText InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(class FText InHintText);
	void SetForegroundColor(const struct CoreUObject_LinearColor& Color);
	void SetError(class FText InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	class FText GetText();
	class FText GetHintText();
};

// 0x10 (0x1A8 - 0x198)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_4790[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNamedSlot* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.NamedSlotInterface
class INamedSlotInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INamedSlotInterface* GetDefaultObj();

};

// 0x10 (0x190 - 0x180)
// Class UMG.NativeWidgetHost
class UNativeWidgetHost : public UWidget
{
public:
	uint8                                        Pad_4795[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNativeWidgetHost* GetDefaultObj();

};

// 0x10 (0x1A8 - 0x198)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_479F[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UOverlay* GetDefaultObj();

	bool ReplaceOverlayChildAt(int32 Index, class UWidget* Content);
	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_47A5[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A7[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UOverlaySlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x2F0 (0x470 - 0x180)
// Class UMG.ProgressBar
class UProgressBar : public UWidget
{
public:
	struct SlateCore_ProgressBarStyle            WidgetStyle;                                       // 0x180(0x290)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProgressBarFillType              BarFillType;                                       // 0x414(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProgressBarFillStyle             BarFillStyle;                                      // 0x415(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMarquee;                                        // 0x416(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseImageSize;                                     // 0x417(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  BorderPadding;                                     // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PercentDelegate;                                   // 0x428(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               FillColorAndOpacity;                               // 0x438(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x448(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C5[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UProgressBar* GetDefaultObj();

	void SetUseImageSize(bool InbUseImageSize);
	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct CoreUObject_LinearColor& InColor);
};

// 0x30 (0x1C8 - 0x198)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         bRetainRender;                                     // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RenderOnInvalidation;                              // 0x199(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderOnPhase;                                     // 0x19A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47E1[0x1];                                     // Fixing Size After Last Property  
	int32                                        Phase;                                             // 0x19C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhaseCount;                                        // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47E3[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    EffectMaterial;                                    // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TextureParameter;                                  // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47E6[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URetainerBox* GetDefaultObj();

	void SetTextureParameter(class FName TextureParameter);
	void SetRetainRendering(bool bInRetainRendering);
	void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// 0x700 (0x8A0 - 0x1A0)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x1A0(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            TextStyleSet;                                      // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class URichTextBlockDecorator>> DecoratorClasses;                                  // 0x1C0(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bOverrideDefaultStyle;                             // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4847[0xF];                                     // Fixing Size After Last Property  
	struct SlateCore_TextBlockStyle              DefaultTextStyleOverride;                          // 0x1E0(0x340)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        MinDesiredWidth;                                   // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x524(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x525(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_484B[0xA];                                     // Fixing Size After Last Property  
	struct SlateCore_TextBlockStyle              DefaultTextStyle;                                  // 0x530(0x340)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x870(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_484C[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URichTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText& InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(struct SlateCore_TextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct SlateCore_SlateBrush& InStrikeBrush);
	void SetDefaultShadowOffset(const struct CoreUObject_Vector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct CoreUObject_LinearColor& InShadowColorAndOpacity);
	void SetDefaultMaterial(class UMaterialInterface* InMaterial);
	void SetDefaultFont(const struct SlateCore_SlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct SlateCore_SlateColor& InColorAndOpacity);
	void SetDecorators(TArray<TSubclassOf<class URichTextBlockDecorator>>& InDecoratorClasses);
	void SetAutoWrapText(bool InAutoTextWrap);
	void RefreshTextLayout();
	class UDataTable* GetTextStyleSet();
	class FText GetText();
	class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();
	class URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<class URichTextBlockDecorator> DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};

// 0x0 (0x28 - 0x28)
// Class UMG.RichTextBlockDecorator
class URichTextBlockDecorator : public UObject
{
public:

	static class UClass* StaticClass();
	static class URichTextBlockDecorator* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URichTextBlockImageDecorator* GetDefaultObj();

};

// 0x18 (0x1B0 - 0x198)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadRight;                                          // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadTop;                                            // 0x19A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadBottom;                                         // 0x19B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_485F[0x14];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USafeZone* GetDefaultObj();

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// 0x38 (0x70 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4864[0x3];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      SafeAreaScale;                                     // 0x3C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4867[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      Padding;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4869[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USafeZoneSlot* GetDefaultObj();

};

// 0x20 (0x1B8 - 0x198)
// Class UMG.ScaleBox
class UScaleBox : public UContentWidget
{
public:
	enum class EStretch                          Stretch;                                           // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchDirection                 StretchDirection;                                  // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4876[0x2];                                     // Fixing Size After Last Property  
	float                                        UserSpecifiedScale;                                // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreInheritedScale;                              // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4877[0x17];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UScaleBox* GetDefaultObj();

	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection InStretchDirection);
	void SetStretch(enum class EStretch InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// 0x18 (0x50 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_488C[0x16];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UScaleBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x7B0 (0x930 - 0x180)
// Class UMG.ScrollBar
class UScrollBar : public UWidget
{
public:
	struct SlateCore_ScrollBarStyle              WidgetStyle;                                       // 0x180(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowScrollbar;                              // 0x8F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowScrollbarTrack;                         // 0x8F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x8F2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4897[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Thickness;                                         // 0x8F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x908(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4898[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UScrollBar* GetDefaultObj();

	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// 0xB58 (0xCF0 - 0x198)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	uint8                                        Pad_48E7[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_ScrollBoxStyle              WidgetStyle;                                       // 0x1A0(0x370)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ScrollBarStyle              WidgetBarStyle;                                    // 0x510(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0xC80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0xC81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xC82(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E8[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ScrollbarThickness;                                // 0xC88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ScrollbarPadding;                                  // 0xC98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AlwaysShowScrollbar;                               // 0xCA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlwaysShowScrollbarTrack;                          // 0xCA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowOverscroll;                                   // 0xCAA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BackPadScrolling;                                  // 0xCAB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FrontPadScrolling;                                 // 0xCAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateWheelScrolling;                            // 0xCAD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0xCAE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48ED[0x1];                                     // Fixing Size After Last Property  
	float                                        NavigationScrollPadding;                           // 0xCB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScrollWhenFocusChanges           ScrollWhenFocusChanges;                            // 0xCB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRightClickDragScrolling;                     // 0xCB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48EE[0x2];                                     // Fixing Size After Last Property  
	float                                        WheelScrollMultiplier;                             // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreciseScrolling;                                 // 0xCBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48EF[0x3];                                     // Fixing Size After Last Property  
	float                                        FPreciseThreshold;                                 // 0xCC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F0[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xCC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F3[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UScrollBox* GetDefaultObj();

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(struct CoreUObject_Vector2D& NewScrollbarThickness);
	void SetScrollbarPadding(struct SlateCore_Margin& NewScrollbarPadding);
	void SetOrientation(enum class EOrientation NewOrientation);
	void SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination);
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetViewFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};

// 0x28 (0x60 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct UMG_SlateChildSize                    Size;                                              // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	struct SlateCore_Margin                      Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490C[0xE];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UScrollBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x38 (0x1D0 - 0x198)
// Class UMG.SizeBox
class USizeBox : public UContentWidget
{
public:
	uint8                                        Pad_4934[0x10];                                    // Fixing Size After Last Property  
	float                                        WidthOverride;                                     // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOverride;                                    // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredWidth;                                   // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredHeight;                                  // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDesiredWidth;                                   // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDesiredHeight;                                  // 0x1BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAspectRatio;                                    // 0x1C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAspectRatio;                                    // 0x1C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x80, PropSize: 0x10x1C8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_493B[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USizeBox* GetDefaultObj();

	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// 0x28 (0x60 - 0x38)
// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_494A[0x10];                                    // Fixing Size After Last Property  
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494B[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USizeBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x5B0 (0x730 - 0x180)
// Class UMG.Slider
class USlider : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x184(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_496D[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SliderStyle                 WidgetStyle;                                       // 0x1A0(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_496F[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               SliderBarColor;                                    // 0x6A4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderHandleColor;                                 // 0x6B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x6C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x6C5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MouseUsesStep;                                     // 0x6C6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiresControllerLock;                            // 0x6C7(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSize;                                          // 0x6C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x6CC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4972[0x3];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x6D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x6E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x6F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x700(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x710(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4974[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USlider* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderBarColor(const struct CoreUObject_LinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	float GetNormalizedValue();
};

// 0x20 (0x1A0 - 0x180)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct CoreUObject_Vector2D                  Size;                                              // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_497C[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USpacer* GetDefaultObj();

	void SetSize(const struct CoreUObject_Vector2D& InSize);
};

// 0x720 (0x8A0 - 0x180)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x184(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B7[0xC];                                     // Fixing Size After Last Property  
	struct SlateCore_SpinBoxStyle                WidgetStyle;                                       // 0x1A0(0x600)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinFractionalDigits;                               // 0x7A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFractionalDigits;                               // 0x7A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysUsesDeltaSnap;                              // 0x7A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSlider;                                     // 0x7A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B8[0x2];                                     // Fixing Size After Last Property  
	float                                        Delta;                                             // 0x7AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderExponent;                                    // 0x7B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49BA[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               Font;                                              // 0x7B8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x810(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49BB[0x3];                                     // Fixing Size After Last Property  
	float                                        MinDesiredWidth;                                   // 0x814(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x818(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x819(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x81A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49BE[0x1];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x81C(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x830(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueCommitted;                                  // 0x840(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x850(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x860(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x870(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x870(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x870(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x870(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_14B : 4;                                    // Fixing Bit-Field Size  
	uint8                                        Pad_49C0[0x3];                                     // Fixing Size After Last Property  
	float                                        MinValue;                                          // 0x874(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0x878(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSliderValue;                                    // 0x87C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSliderValue;                                    // 0x880(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_49C1[0x1C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USpinBox* GetDefaultObj();

	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMinFractionalDigits(int32 NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetMaxFractionalDigits(int32 NewValue);
	void SetForegroundColor(const struct SlateCore_SlateColor& InForegroundColor);
	void SetDelta(float NewValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int32 GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int32 GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// 0x18 (0x1B0 - 0x198)
// Class UMG.StackBox
class UStackBox : public UPanelWidget
{
public:
	enum class EOrientation                      Orientation;                                       // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49D2[0x17];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UStackBox* GetDefaultObj();

	bool ReplaceStackBoxChildAt(int32 Index, class UWidget* Content);
	class UStackBoxSlot* AddChildToStackBox(class UWidget* Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.StackBoxSlot
class UStackBoxSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct UMG_SlateChildSize                    Size;                                              // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49D5[0xE];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UStackBoxSlot* GetDefaultObj();

};

// 0x1C8 (0x368 - 0x1A0)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x1A0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x1B8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ColorAndOpacity;                                   // 0x1C8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x1DC(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49FC[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               Font;                                              // 0x1F0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49FD[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  StrikeBrush;                                       // 0x250(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  ShadowOffset;                                      // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ShadowColorAndOpacity;                             // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x340(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredWidth;                                   // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWrapWithInvalidationPanel;                        // 0x354(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x355(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x356(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleTextMode;                                   // 0x357(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A00[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTextBlock* GetDefaultObj();

	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy);
	void SetText(class FText InText);
	void SetStrikeBrush(const struct SlateCore_SlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct CoreUObject_Vector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct CoreUObject_LinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
	void SetFontMaterial(class UMaterialInterface* InMaterial);
	void SetFont(const struct SlateCore_SlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct SlateCore_SlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	class FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// 0xF0 (0x270 - 0x180)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateHorizontally;                              // 0x184(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateVertically;                                // 0x185(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateOpacity;                                   // 0x186(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A15[0x9];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Image;                                             // 0x190(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A16[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UThrobber* GetDefaultObj();

	void SetNumberOfPieces(int32 InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// 0x30 (0xCA0 - 0xC70)
// Class UMG.TileView
class UTileView : public UListView
{
public:
	float                                        EntryHeight;                                       // 0xC70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EntryWidth;                                        // 0xC74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EListItemAlignment                TileAlignment;                                     // 0xC78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapHorizontalNavigation;                         // 0xC79(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A26[0x16];                                    // Fixing Size After Last Property  
	bool                                         bEntrySizeIncludesEntrySpacing;                    // 0xC90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A27[0xF];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTileView* GetDefaultObj();

	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
	bool IsAligned();
	float GetEntryWidth();
	float GetEntryHeight();
};

// 0x58 (0xCC8 - 0xC70)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_4A30[0x10];                                    // Fixing Size After Last Property  
	FDelegateProperty_                           BP_OnGetItemChildren;                              // 0xC80(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemExpansionChanged;                         // 0xC90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A32[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTreeView* GetDefaultObj();

	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// 0x28 (0x1C0 - 0x198)
// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget
{
public:
	struct SlateCore_Margin                      SlotPadding;                                       // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDesiredSlotWidth;                               // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredSlotHeight;                              // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A43[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUniformGridPanel* GetDefaultObj();

	void SetSlotPadding(const struct SlateCore_Margin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32 InRow, int32 InColumn);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A59[0x2];                                     // Fixing Size After Last Property  
	int32                                        Row;                                               // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A5C[0xC];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUniformGridSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetRow(int32 InRow);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetColumn(int32 InColumn);
};

// 0x10 (0x1A8 - 0x198)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_4A69[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UVerticalBox* GetDefaultObj();

	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct UMG_SlateChildSize                    Size;                                              // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A7E[0xE];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UVerticalBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetSize(const struct UMG_SlateChildSize& InSize);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x50 (0x1E8 - 0x198)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct CoreUObject_LinearColor               BackgroundColor;                                   // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AB6[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UViewport* GetDefaultObj();

	class AActor* Spawn(TSubclassOf<class AActor> ActorClass);
	void SetViewRotation(const struct CoreUObject_Rotator& Rotation);
	void SetViewLocation(const struct CoreUObject_Vector& Location);
	struct CoreUObject_Rotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct CoreUObject_Vector GetViewLocation();
};

// 0x140 (0x6E8 - 0x5A8)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x5A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x5A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B46[0x6];                                     // Fixing Size After Last Property  
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x5B0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_IntPoint                  DrawSize;                                          // 0x5B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManuallyRedraw;                                   // 0x5C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRedrawRequested;                                  // 0x5C1(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B4A[0x2];                                     // Fixing Size After Last Property  
	float                                        RedrawTime;                                        // 0x5C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B4B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntPoint                  CurrentDrawSize;                                   // 0x5D0(0x8)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawAtDesiredSize;                                // 0x5D8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B4E[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Pivot;                                             // 0x5E0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReceiveHardwareInput;                             // 0x5F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWindowFocusable;                                  // 0x5F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWindowVisibility                 WindowVisibility;                                  // 0x5F2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyGammaCorrection;                             // 0x5F3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B55[0x4];                                     // Fixing Size After Last Property  
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x5F8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_LinearColor               BackgroundColor;                                   // 0x600(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_LinearColor               TintColorAndOpacity;                               // 0x610(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityFromTexture;                                // 0x620(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x624(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTwoSided;                                       // 0x625(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         TickWhenOffscreen;                                 // 0x626(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B5C[0x1];                                     // Fixing Size After Last Property  
	class UBodySetup*                            BodySetup;                                         // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x630(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x638(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x640(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x648(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x650(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x658(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x660(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x668(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAddedToScreen;                                    // 0x670(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEditTimeUsable;                                   // 0x671(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B6F[0x2];                                     // Fixing Size After Last Property  
	class FName                                  SharedLayerName;                                   // 0x674(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LayerZOrder;                                       // 0x67C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x680(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B79[0x3];                                     // Fixing Size After Last Property  
	float                                        CylinderArcAngle;                                  // 0x684(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETickMode                         TickMode;                                          // 0x688(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4B7C[0x2F];                                    // Fixing Size After Last Property  
	class UUserWidget*                           Widget;                                            // 0x6B8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B7F[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetComponent* GetDefaultObj();

	void SetWindowVisibility(enum class EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(enum class EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct CoreUObject_LinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetTickMode(enum class ETickMode InTickMode);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(struct CoreUObject_Vector2D& InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct CoreUObject_Vector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct CoreUObject_LinearColor& NewBackgroundColor);
	void RequestRenderUpdate();
	void RequestRedraw();
	bool IsWidgetVisible();
	enum class EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	enum class EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetWidget();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct CoreUObject_Vector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	enum class EWidgetGeometryMode GetGeometryMode();
	struct CoreUObject_Vector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct CoreUObject_Vector2D GetCurrentDrawSize();
};

// 0x2D0 (0x570 - 0x2A0)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnHoveredWidgetChanged;                            // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BDE[0x10];                                    // Fixing Size After Last Property  
	int32                                        VirtualUserIndex;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointerIndex;                                      // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE1[0x3];                                     // Fixing Size After Last Property  
	float                                        InteractionDistance;                               // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHitTesting;                                 // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebug;                                        // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE2[0x1];                                     // Fixing Size After Last Property  
	float                                        DebugSphereLineThickness;                          // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLineThickness;                                // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               DebugColor;                                        // 0x2DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE3[0x7C];                                    // Fixing Size After Last Property  
	struct Engine_HitResult                      CustomHitResult;                                   // 0x368(0xE8)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  LocalHitLocation;                                  // 0x450(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  LastLocalHitLocation;                              // 0x460(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Engine_HitResult                      LastHitResult;                                     // 0x478(0xE8)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x560(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x561(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x562(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4BE4[0xD];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetInteractionComponent* GetDefaultObj();

	void SetFocus(class UWidget* FocusWidget);
	void SetCustomHitResult(struct Engine_HitResult& HitResult);
	bool SendKeyChar(const class FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct InputCore_Key& Key);
	bool ReleaseKey(const struct InputCore_Key& Key);
	void PressPointerKey(const struct InputCore_Key& Key);
	bool PressKey(const struct InputCore_Key& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct InputCore_Key& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct Engine_HitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct CoreUObject_Vector2D Get2DHitLocation();
};

// 0x18 (0x1B0 - 0x198)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF3[0x14];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetSwitcher* GetDefaultObj();

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetNumWidgets();
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	uint8                                        Pad_4BFD[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BFF[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWidgetSwitcherSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x20 (0x1B8 - 0x198)
// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                         bWindowButtonsEnabled;                             // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x199(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C0C[0x1E];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWindowTitleBarArea* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4C1E[0x16];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWindowTitleBarAreaSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x28 (0x1C0 - 0x198)
// Class UMG.WrapBox
class UWrapBox : public UPanelWidget
{
public:
	struct CoreUObject_Vector2D                  InnerSlotPadding;                                  // 0x198(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapSize;                                          // 0x1A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplicitWrapSize;                                 // 0x1AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x1AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x1AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C31[0x11];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWrapBox* GetDefaultObj();

	void SetInnerSlotPadding(const struct CoreUObject_Vector2D& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct SlateCore_Margin                      Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FillSpanWhenLessThan;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillEmptySpace;                                   // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceNewLine;                                     // 0x4F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C53[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWrapBoxSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct SlateCore_Margin& InPadding);
	void SetNewLine(bool InForceNewLine);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

// 0x68 (0x90 - 0x28)
// Class UMG.DragDropOperation
class UDragDropOperation : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Payload;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C67[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Offset;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDrop;                                            // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDragCancelled;                                   // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDragDropOperation* GetDefaultObj();

	void Drop(struct SlateCore_PointerEvent& PointerEvent);
	void Dragged(struct SlateCore_PointerEvent& PointerEvent);
	void DragCancelled(struct SlateCore_PointerEvent& PointerEvent);
};

// 0x0 (0x28 - 0x28)
// Class UMG.SlateBlueprintLibrary
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USlateBlueprintLibrary* GetDefaultObj();

	struct CoreUObject_Vector2D TransformVectorLocalToAbsolute(struct SlateCore_Geometry& Geometry, const struct CoreUObject_Vector2D& LocalVector);
	struct CoreUObject_Vector2D TransformVectorAbsoluteToLocal(struct SlateCore_Geometry& Geometry, const struct CoreUObject_Vector2D& AbsoluteVector);
	float TransformScalarLocalToAbsolute(struct SlateCore_Geometry& Geometry, float LocalScalar);
	float TransformScalarAbsoluteToLocal(struct SlateCore_Geometry& Geometry, float AbsoluteScalar);
	void ScreenToWidgetLocal(class UObject* WorldContextObject, struct SlateCore_Geometry& Geometry, const struct CoreUObject_Vector2D& ScreenPosition, struct CoreUObject_Vector2D* LocalCoordinate, bool bIncludeWindowPosition);
	void ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct CoreUObject_Vector2D& ScreenPosition, struct CoreUObject_Vector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);
	void ScreenToViewport(class UObject* WorldContextObject, const struct CoreUObject_Vector2D& ScreenPosition, struct CoreUObject_Vector2D* ViewportPosition);
	void LocalToViewport(class UObject* WorldContextObject, struct SlateCore_Geometry& Geometry, const struct CoreUObject_Vector2D& LocalCoordinate, struct CoreUObject_Vector2D* PixelPosition, struct CoreUObject_Vector2D* ViewportPosition);
	struct CoreUObject_Vector2D LocalToAbsolute(struct SlateCore_Geometry& Geometry, const struct CoreUObject_Vector2D& LocalCoordinate);
	bool IsUnderLocation(struct SlateCore_Geometry& Geometry, struct CoreUObject_Vector2D& AbsoluteCoordinate);
	struct CoreUObject_Vector2D GetLocalTopLeft(struct SlateCore_Geometry& Geometry);
	struct CoreUObject_Vector2D GetLocalSize(struct SlateCore_Geometry& Geometry);
	struct CoreUObject_Vector2D GetAbsoluteSize(struct SlateCore_Geometry& Geometry);
	bool EqualEqual_SlateBrush(struct SlateCore_SlateBrush& A, struct SlateCore_SlateBrush& B);
	void AbsoluteToViewport(class UObject* WorldContextObject, const struct CoreUObject_Vector2D& AbsoluteDesktopCoordinate, struct CoreUObject_Vector2D* PixelPosition, struct CoreUObject_Vector2D* ViewportPosition);
	struct CoreUObject_Vector2D AbsoluteToLocal(struct SlateCore_Geometry& Geometry, const struct CoreUObject_Vector2D& AbsoluteCoordinate);
};

// 0x48 (0x70 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct UMG_SlateMeshVertex>           VertexData;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector2D                  ExtentMin;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector2D                  ExtentMax;                                         // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USlateVectorArtData* GetDefaultObj();

};

// 0x70 (0x3D8 - 0x368)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x368(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                        // 0x370(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x1, PropSize: 0x10x380(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_152 : 7;                                    // Fixing Bit-Field Size  
	uint8                                        Pad_4CDF[0x7];                                     // Fixing Size After Last Property  
	TArray<struct UMG_DelegateRuntimeBinding>    Bindings;                                          // 0x388(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x398(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamedSlots;                                        // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          AvailableNamedSlots;                               // 0x3B8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InstanceNamedSlots;                                // 0x3C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWidgetBlueprintGeneratedClass* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintLibrary
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetBlueprintLibrary* GetDefaultObj();

	struct UMG_EventReply UnlockMouse(struct UMG_EventReply& Reply);
	struct UMG_EventReply Unhandled();
	void SetWindowTitleBarState(class UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate);
	void SetWindowTitleBarCloseButtonActive(bool bActive);
	struct UMG_EventReply SetUserFocus(struct UMG_EventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct UMG_EventReply SetMousePosition(struct UMG_EventReply& Reply, const struct CoreUObject_Vector2D& NewMousePosition);
	void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bFlushInput);
	void SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput);
	void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput);
	bool SetHardwareCursor(class UObject* WorldContextObject, enum class EMouseCursor CursorShape, class FName CursorName, const struct CoreUObject_Vector2D& HotSpot);
	void SetFocusToGameViewport();
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	void SetBrushResourceToTexture(struct SlateCore_SlateBrush& Brush, class UTexture2D* Texture);
	void SetBrushResourceToMaterial(struct SlateCore_SlateBrush& Brush, class UMaterialInterface* Material);
	void RestorePreviousWindowTitleBarState();
	struct UMG_EventReply ReleaseMouseCapture(struct UMG_EventReply& Reply);
	struct UMG_EventReply ReleaseJoystickCapture(struct UMG_EventReply& Reply, bool bInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct SlateCore_SlateBrush NoResourceBrush();
	struct SlateCore_SlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height);
	struct SlateCore_SlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height);
	struct SlateCore_SlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct UMG_EventReply LockMouse(struct UMG_EventReply& Reply, class UWidget* CapturingWidget);
	bool IsDragDropping();
	struct UMG_EventReply Handled();
	void GetSafeZonePadding(class UObject* WorldContextObject, struct CoreUObject_Vector4* SafePadding, struct CoreUObject_Vector2D* SafePaddingScale, struct CoreUObject_Vector4* SpillOverPadding);
	struct SlateCore_KeyEvent GetKeyEventFromAnalogInputEvent(struct SlateCore_AnalogInputEvent& Event);
	struct SlateCore_InputEvent GetInputEventFromPointerEvent(struct SlateCore_PointerEvent& Event);
	struct SlateCore_InputEvent GetInputEventFromNavigationEvent(struct SlateCore_NavigationEvent& Event);
	struct SlateCore_InputEvent GetInputEventFromKeyEvent(struct SlateCore_KeyEvent& Event);
	struct SlateCore_InputEvent GetInputEventFromCharacterEvent(struct SlateCore_CharacterEvent& Event);
	class UMaterialInstanceDynamic* GetDynamicMaterial(struct SlateCore_SlateBrush& Brush);
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D(struct SlateCore_SlateBrush& Brush);
	class UMaterialInterface* GetBrushResourceAsMaterial(struct SlateCore_SlateBrush& Brush);
	class UObject* GetBrushResource(struct SlateCore_SlateBrush& Brush);
	void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class IInterface> Interface, bool TopLevelOnly);
	void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
	struct UMG_EventReply EndDragDrop(struct UMG_EventReply& Reply);
	void DrawTextFormatted(struct UMG_PaintContext& Context, class FText& Text, const struct CoreUObject_Vector2D& Position, class UFont* Font, float FontSize, class FName FontTypeFace, const struct CoreUObject_LinearColor& Tint);
	void DrawText(struct UMG_PaintContext& Context, const class FString& InString, const struct CoreUObject_Vector2D& Position, const struct CoreUObject_LinearColor& Tint);
	void DrawSpline(struct UMG_PaintContext& Context, const struct CoreUObject_Vector2D& Start, const struct CoreUObject_Vector2D& StartDir, const struct CoreUObject_Vector2D& End, const struct CoreUObject_Vector2D& EndDir, const struct CoreUObject_LinearColor& Tint, float Thickness);
	void DrawLines(struct UMG_PaintContext& Context, TArray<struct CoreUObject_Vector2D>& Points, const struct CoreUObject_LinearColor& Tint, bool bAntiAlias, float Thickness);
	void DrawLine(struct UMG_PaintContext& Context, const struct CoreUObject_Vector2D& PositionA, const struct CoreUObject_Vector2D& PositionB, const struct CoreUObject_LinearColor& Tint, bool bAntiAlias, float Thickness);
	void DrawBox(struct UMG_PaintContext& Context, const struct CoreUObject_Vector2D& Position, const struct CoreUObject_Vector2D& Size, class USlateBrushAsset* Brush, const struct CoreUObject_LinearColor& Tint);
	void DismissAllMenus();
	struct UMG_EventReply DetectDragIfPressed(struct SlateCore_PointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct InputCore_Key& DragKey);
	struct UMG_EventReply DetectDrag(struct UMG_EventReply& Reply, class UWidget* WidgetDetectingDrag, const struct InputCore_Key& DragKey);
	class UDragDropOperation* CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass);
	class UUserWidget* Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer);
	struct UMG_EventReply ClearUserFocus(struct UMG_EventReply& Reply, bool bInAllUsers);
	struct UMG_EventReply CaptureMouse(struct UMG_EventReply& Reply, class UWidget* CapturingWidget);
	struct UMG_EventReply CaptureJoystick(struct UMG_EventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void CancelDragDrop();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UWidgetLayoutLibrary* GetDefaultObj();

	class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);
	class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);
	class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);
	class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);
	class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);
	class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);
	class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);
	class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);
	void RemoveAllWidgets(class UObject* WorldContextObject);
	bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct CoreUObject_Vector& WorldLocation, struct CoreUObject_Vector2D* ScreenPosition, bool bPlayerViewportRelative);
	struct SlateCore_Geometry GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct CoreUObject_Vector2D GetViewportSize(class UObject* WorldContextObject);
	float GetViewportScale(class UObject* WorldContextObject);
	struct SlateCore_Geometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct CoreUObject_Vector2D GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct CoreUObject_Vector2D GetMousePositionOnPlatform();
};

// 0x60 (0x88 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	uint8                                        Pad_4DFE[0x8];                                     // Fixing Size After Last Property  
	class UWidget*                               RootWidget;                                        // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UWidget*>            NamedSlotBindings;                                 // 0x38(0x50)(ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWidgetTree* GetDefaultObj();

};

}


