#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUINavigationRule : uint8
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7,
};

enum class EColorVisionDeficiency : uint8
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4,
};

enum class EButtonClickMethod : uint8
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4,
};

enum class EButtonTouchMethod : uint8
{
	DownAndUp                      = 0,
	Down                           = 1,
	PreciseTap                     = 2,
	EButtonTouchMethod_MAX         = 3,
};

enum class EButtonPressMethod : uint8
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3,
};

enum class EUINavigation : uint8
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8,
};

enum class EUINavigationAction : uint8
{
	Accept                         = 0,
	Back                           = 1,
	Num                            = 2,
	Invalid                        = 3,
	EUINavigationAction_MAX        = 4,
};

enum class ENavigationSource : uint8
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2,
};

enum class ENavigationGenesis : uint8
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3,
};

enum class EHorizontalAlignment : uint8
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4,
};

enum class EVerticalAlignment : uint8
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4,
};

enum class EMenuPlacement : uint8
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13,
};

enum class EOrientation : uint8
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2,
};

enum class EScrollDirection : uint8
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2,
};

enum class ETextCommit : uint8
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4,
};

enum class ESelectInfo : uint8
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4,
};

enum class EWidgetPixelSnapping : uint8
{
	Inherit                        = 0,
	Disabled                       = 1,
	SnapToPixel                    = 2,
	EWidgetPixelSnapping_MAX       = 3,
};

enum class ESlateDebuggingInputEvent : uint8
{
	MouseMove                      = 0,
	MouseEnter                     = 1,
	MouseLeave                     = 2,
	PreviewMouseButtonDown         = 3,
	MouseButtonDown                = 4,
	MouseButtonUp                  = 5,
	MouseButtonDoubleClick         = 6,
	MouseWheel                     = 7,
	TouchStart                     = 8,
	TouchEnd                       = 9,
	TouchForceChanged              = 10,
	TouchFirstMove                 = 11,
	TouchMoved                     = 12,
	DragDetected                   = 13,
	DragEnter                      = 14,
	DragLeave                      = 15,
	DragOver                       = 16,
	DragDrop                       = 17,
	DropMessage                    = 18,
	PreviewKeyDown                 = 19,
	KeyDown                        = 20,
	KeyUp                          = 21,
	KeyChar                        = 22,
	AnalogInput                    = 23,
	TouchGesture                   = 24,
	MotionDetected                 = 25,
	MAX                            = 26,
};

enum class ESlateDebuggingStateChangeEvent : uint8
{
	MouseCaptureGained             = 0,
	MouseCaptureLost               = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2,
};

enum class ESlateDebuggingNavigationMethod : uint8
{
	Unknown                        = 0,
	Explicit                       = 1,
	CustomDelegateBound            = 2,
	CustomDelegateUnbound          = 3,
	NextOrPrevious                 = 4,
	HitTestGrid                    = 5,
	ESlateDebuggingNavigationMethod_MAX = 6,
};

enum class ESlateDebuggingFocusEvent : uint8
{
	FocusChanging                  = 0,
	FocusLost                      = 1,
	FocusReceived                  = 2,
	MAX                            = 3,
};

enum class EFontHinting : uint8
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5,
};

enum class EFontLoadingPolicy : uint8
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3,
};

enum class EFontLayoutMethod : uint8
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2,
};

enum class ETextShapingMethod : uint8
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3,
};

enum class EFocusCause : uint8
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6,
};

enum class EWidgetClipping : uint8
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	EWidgetClipping_MAX            = 5,
};

enum class EFlowDirectionPreference : uint8
{
	Inherit                        = 0,
	Culture                        = 1,
	LeftToRight                    = 2,
	RightToLeft                    = 3,
	EFlowDirectionPreference_MAX   = 4,
};

enum class ESlateBrushDrawType : uint8
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	RoundedBox                     = 4,
	ESlateBrushDrawType_MAX        = 5,
};

enum class ESlateBrushTileType : uint8
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4,
};

enum class ESlateBrushMirrorType : uint8
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4,
};

enum class ESlateBrushImageType : uint8
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	Vector                         = 3,
	ESlateBrushImageType_MAX       = 4,
};

enum class ESlateBrushRoundingType : uint8
{
	FixedRadius                    = 0,
	HalfHeightRadius               = 1,
	ESlateBrushRoundingType_MAX    = 2,
};

enum class ESlateColorStylingMode : uint8
{
	UseColor_Specified             = 0,
	UseColor_ColorTable            = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_UseStyle              = 4,
	UseColor_MAX                   = 5,
};

enum class EConsumeMouseWheel : uint8
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3,
};

enum class ESlateParentWindowSearchMethod : uint8
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2,
};

enum class ESlateCheckBoxType : uint8
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2,
};

enum class ECheckBoxState : uint8
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3,
};

enum class ETextOverflowPolicy : uint8
{
	Clip                           = 0,
	Ellipsis                       = 1,
	ETextOverflowPolicy_MAX        = 2,
};

enum class ETextTransformPolicy : uint8
{
	None                           = 0,
	ToLower                        = 1,
	ToUpper                        = 2,
	ETextTransformPolicy_MAX       = 3,
};

enum class EStyleColor : uint8
{
	Black                          = 0,
	Background                     = 1,
	Title                          = 2,
	WindowBorder                   = 3,
	Foldout                        = 4,
	Input                          = 5,
	InputOutline                   = 6,
	Recessed                       = 7,
	Panel                          = 8,
	Header                         = 9,
	Dropdown                       = 10,
	DropdownOutline                = 11,
	Hover                          = 12,
	Hover2                         = 13,
	White                          = 14,
	White25                        = 15,
	Highlight                      = 16,
	Primary                        = 17,
	PrimaryHover                   = 18,
	PrimaryPress                   = 19,
	Secondary                      = 20,
	Foreground                     = 21,
	ForegroundHover                = 22,
	ForegroundInverted             = 23,
	ForegroundHeader               = 24,
	Select                         = 25,
	SelectInactive                 = 26,
	SelectParent                   = 27,
	SelectHover                    = 28,
	Notifications                  = 29,
	AccentBlue                     = 30,
	AccentPurple                   = 31,
	AccentPink                     = 32,
	AccentRed                      = 33,
	AccentOrange                   = 34,
	AccentYellow                   = 35,
	AccentGreen                    = 36,
	AccentBrown                    = 37,
	AccentBlack                    = 38,
	AccentGray                     = 39,
	AccentWhite                    = 40,
	AccentFolder                   = 41,
	Warning                        = 42,
	Error                          = 43,
	Success                        = 44,
	User1                          = 45,
	User2                          = 46,
	User3                          = 47,
	User4                          = 48,
	User5                          = 49,
	User6                          = 50,
	User7                          = 51,
	User8                          = 52,
	User9                          = 53,
	User10                         = 54,
	User11                         = 55,
	User12                         = 56,
	User13                         = 57,
	User14                         = 58,
	User15                         = 59,
	User16                         = 60,
	MAX                            = 61,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.Geometry
struct SlateCore_Geometry
{
public:
	uint8                                        Pad_FC[0x38];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct SlateCore.SlateColor
struct SlateCore_SlateColor
{
public:
	struct CoreUObject_LinearColor               SpecifiedColor;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateColorStylingMode            ColorUseRule;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD[0x3];                                       // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct SlateCore.SlateBrushOutlineSettings
struct SlateCore_SlateBrushOutlineSettings
{
public:
	struct CoreUObject_Vector4                   CornerRadii;                                       // 0x0(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  Color;                                             // 0x20(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushRoundingType           RoundingType;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseBrushTransparency;                             // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF[0x6];                                       // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Margin
struct SlateCore_Margin
{
public:
	float                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct SlateCore.DeprecateSlateVector2D
struct SlateCore_DeprecateSlateVector2D : public CoreUObject_Vector2f
{
public:
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct SlateCore.SlateBrush
struct SlateCore_SlateBrush
{
public:
	uint8                                        Pad_101[0x10];                                     // Fixing Size After Last Property  
	uint8                                        bIsDynamicallyLoaded : 1;                          // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasUObject : 1;                                   // Mask: 0x2, PropSize: 0x10x10(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_3 : 6;                                      // Fixing Bit-Field Size  
	enum class ESlateBrushDrawType               DrawAs;                                            // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushTileType               Tiling;                                            // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushMirrorType             Mirroring;                                         // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateBrushImageType              ImageType;                                         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_102[0x3];                                      // Fixing Size After Last Property  
	struct SlateCore_DeprecateSlateVector2D      ImageSize;                                         // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Margin;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  TintColor;                                         // 0x30(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_105[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrushOutlineSettings   OutlineSettings;                                   // 0x50(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               ResourceObject;                                    // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ResourceName;                                      // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Box2f                     UVRegion;                                          // 0xA0(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_106[0x1C];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.InputEvent
struct SlateCore_InputEvent
{
public:
	uint8                                        Pad_107[0x20];                                     // Fixing Size Of Struct 
};

// 0x58 (0x78 - 0x20)
// ScriptStruct SlateCore.PointerEvent
struct SlateCore_PointerEvent : public SlateCore_InputEvent
{
public:
	uint8                                        Pad_109[0x58];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.SlateWidgetStyle
struct SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_10A[0x8];                                      // Fixing Size Of Struct 
};

// 0x768 (0x770 - 0x8)
// ScriptStruct SlateCore.ScrollBarStyle
struct SlateCore_ScrollBarStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_10C[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  HorizontalBackgroundImage;                         // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  VerticalBackgroundImage;                           // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  VerticalTopSlotImage;                              // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HorizontalTopSlotImage;                            // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  VerticalBottomSlotImage;                           // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HorizontalBottomSlotImage;                         // 0x420(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalThumbImage;                                  // 0x4F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredThumbImage;                                 // 0x5C0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DraggedThumbImage;                                 // 0x690(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x760(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E[0xC];                                      // Fixing Size Of Struct 
};

// 0xD48 (0xD50 - 0x8)
// ScriptStruct SlateCore.TableRowStyle
struct SlateCore_TableRowStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_110[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  SelectorFocusedBrush;                              // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ActiveHoveredBrush;                                // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ActiveBrush;                                       // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  InactiveHoveredBrush;                              // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  InactiveBrush;                                     // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bUseParentRowBrush;                                // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112[0xF];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  ParentRowBackgroundBrush;                          // 0x430(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ParentRowBackgroundHoveredBrush;                   // 0x500(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  EvenRowBackgroundHoveredBrush;                     // 0x5D0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  EvenRowBackgroundBrush;                            // 0x6A0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  OddRowBackgroundHoveredBrush;                      // 0x770(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  OddRowBackgroundBrush;                             // 0x840(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  TextColor;                                         // 0x910(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SelectedTextColor;                                 // 0x924(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_113[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  DropIndicator_Above;                               // 0x940(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DropIndicator_Onto;                                // 0xA10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DropIndicator_Below;                               // 0xAE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ActiveHighlightedBrush;                            // 0xBB0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  InactiveHighlightedBrush;                          // 0xC80(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.SlateSound
struct SlateCore_SlateSound
{
public:
	class UObject*                               ResourceObject;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_115[0x10];                                     // Fixing Size Of Struct 
};

// 0x3E8 (0x3F0 - 0x8)
// ScriptStruct SlateCore.ButtonStyle
struct SlateCore_ButtonStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_116[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Normal;                                            // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  Hovered;                                           // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  Pressed;                                           // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  Disabled;                                          // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  NormalForeground;                                  // 0x350(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  HoveredForeground;                                 // 0x364(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  PressedForeground;                                 // 0x378(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  DisabledForeground;                                // 0x38C(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      NormalPadding;                                     // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      PressedPadding;                                    // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  PressedSlateSound;                                 // 0x3C0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  HoveredSlateSound;                                 // 0x3D8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.ComboButtonStyle
struct SlateCore_ComboButtonStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_119[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 ButtonStyle;                                       // 0x10(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DownArrowImage;                                    // 0x400(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_DeprecateSlateVector2D      ShadowOffset;                                      // 0x4D0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ShadowColorAndOpacity;                             // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  MenuBorderBrush;                                   // 0x4F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      MenuBorderPadding;                                 // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ContentPadding;                                    // 0x5D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      DownArrowPadding;                                  // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                DownArrowAlign;                                    // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C[0xF];                                      // Fixing Size Of Struct 
};

// 0x658 (0x660 - 0x8)
// ScriptStruct SlateCore.ComboBoxStyle
struct SlateCore_ComboBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_11F[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_ComboButtonStyle            ComboButtonStyle;                                  // 0x10(0x600)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  PressedSlateSound;                                 // 0x610(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  SelectionChangeSlateSound;                         // 0x628(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ContentPadding;                                    // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      MenuRowPadding;                                    // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct SlateCore.FontOutlineSettings
struct SlateCore_FontOutlineSettings
{
public:
	int32                                        OutlineSize;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSeparateFillAlpha;                                // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyOutlineToDropShadows;                        // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_121[0x2];                                      // Fixing Size After Last Property  
	class UObject*                               OutlineMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               OutlineColor;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct SlateCore.SlateFontInfo
struct SlateCore_SlateFontInfo
{
public:
	class UObject*                               FontObject;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               FontMaterial;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_FontOutlineSettings         OutlineSettings;                                   // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123[0x10];                                     // Fixing Size After Last Property  
	class FName                                  TypefaceFontName;                                  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LetterSpacing;                                     // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SkewAmount;                                        // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124[0x4];                                      // Fixing Size Of Struct 
};

// 0x2E8 (0x2F0 - 0x8)
// ScriptStruct SlateCore.EditableTextStyle
struct SlateCore_EditableTextStyle : public SlateCore_SlateWidgetStyle
{
public:
	struct SlateCore_SlateFontInfo               Font;                                              // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ColorAndOpacity;                                   // 0x60(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_126[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundImageSelected;                           // 0x80(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundImageComposing;                          // 0x150(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  CaretImage;                                        // 0x220(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x338 (0x340 - 0x8)
// ScriptStruct SlateCore.TextBlockStyle
struct SlateCore_TextBlockStyle : public SlateCore_SlateWidgetStyle
{
public:
	struct SlateCore_SlateFontInfo               Font;                                              // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ColorAndOpacity;                                   // 0x60(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_DeprecateSlateVector2D      ShadowOffset;                                      // 0x74(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ShadowColorAndOpacity;                             // 0x7C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SelectedBackgroundColor;                           // 0x8C(0x14)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  HighlightColor;                                    // 0xA0(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_129[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  HighlightShape;                                    // 0xC0(0xD0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  StrikeBrush;                                       // 0x190(0xD0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  UnderlineBrush;                                    // 0x260(0xD0)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              TransformPolicy;                                   // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B[0xE];                                      // Fixing Size Of Struct 
};

// 0xE78 (0xE80 - 0x8)
// ScriptStruct SlateCore.EditableTextBoxStyle
struct SlateCore_EditableTextBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_12D[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundImageNormal;                             // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundImageHovered;                            // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundImageFocused;                            // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundImageReadOnly;                           // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              TextStyle;                                         // 0x360(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x6A0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BackgroundColor;                                   // 0x6B4(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ReadOnlyForegroundColor;                           // 0x6C8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  FocusedForegroundColor;                            // 0x6DC(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      HScrollBarPadding;                                 // 0x6F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      VScrollBarPadding;                                 // 0x700(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_ScrollBarStyle              ScrollBarStyle;                                    // 0x710(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x5F8 (0x600 - 0x8)
// ScriptStruct SlateCore.SpinBoxStyle
struct SlateCore_SpinBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_130[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ActiveBackgroundBrush;                             // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredBackgroundBrush;                            // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ActiveFillBrush;                                   // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredFillBrush;                                  // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  InactiveFillBrush;                                 // 0x420(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ArrowsImage;                                       // 0x4F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x5C0(0x14)(NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      TextPadding;                                       // 0x5D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      InsetPadding;                                      // 0x5E4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_134[0xC];                                      // Fixing Size Of Struct 
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.CharacterEvent
struct SlateCore_CharacterEvent : public SlateCore_InputEvent
{
public:
	uint8                                        Pad_135[0x8];                                      // Fixing Size Of Struct 
};

// 0x20 (0x40 - 0x20)
// ScriptStruct SlateCore.KeyEvent
struct SlateCore_KeyEvent : public SlateCore_InputEvent
{
public:
	uint8                                        Pad_137[0x20];                                     // Fixing Size Of Struct 
};

// 0x8 (0x28 - 0x20)
// ScriptStruct SlateCore.NavigationEvent
struct SlateCore_NavigationEvent : public SlateCore_InputEvent
{
public:
	uint8                                        Pad_138[0x8];                                      // Fixing Size Of Struct 
};

// 0x8 (0x48 - 0x40)
// ScriptStruct SlateCore.AnalogInputEvent
struct SlateCore_AnalogInputEvent : public SlateCore_KeyEvent
{
public:
	uint8                                        Pad_139[0x8];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.FocusEvent
struct SlateCore_FocusEvent
{
public:
	uint8                                        Pad_13A[0x8];                                      // Fixing Size Of Struct 
};

// 0x60 (0x80 - 0x20)
// ScriptStruct SlateCore.MotionEvent
struct SlateCore_MotionEvent : public SlateCore_InputEvent
{
public:
	uint8                                        Pad_13C[0x60];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SlateCore.FontData
struct SlateCore_FontData
{
public:
	class FString                                FontFilename;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13E[0x4];                                      // Fixing Size After Last Property  
	enum class EFontHinting                      Hinting;                                           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EFontLoadingPolicy                LoadingPolicy;                                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_13F[0x2];                                      // Fixing Size After Last Property  
	int32                                        SubFaceIndex;                                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_140[0x4];                                      // Fixing Size After Last Property  
	class UObject*                               FontFaceAsset;                                     // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct SlateCore.TypefaceEntry
struct SlateCore_TypefaceEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_FontData                    Font;                                              // 0x8(0x28)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SlateCore.Typeface
struct SlateCore_Typeface
{
public:
	TArray<struct SlateCore_TypefaceEntry>       Fonts;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct SlateCore.CompositeFallbackFont
struct SlateCore_CompositeFallbackFont
{
public:
	struct SlateCore_Typeface                    Typeface;                                          // 0x0(0x10)(NativeAccessSpecifierPublic)
	float                                        ScalingFactor;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x38 - 0x18)
// ScriptStruct SlateCore.CompositeSubFont
struct SlateCore_CompositeSubFont : public SlateCore_CompositeFallbackFont
{
public:
	TArray<struct CoreUObject_Int32Range>        CharacterRanges;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Cultures;                                          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SlateCore.CompositeFont
struct SlateCore_CompositeFont
{
public:
	struct SlateCore_Typeface                    DefaultTypeface;                                   // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct SlateCore_CompositeFallbackFont       FallbackTypeface;                                  // 0x10(0x18)(NativeAccessSpecifierPublic)
	TArray<struct SlateCore_CompositeSubFont>    SubTypefaces;                                      // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct SlateCore.CaptureLostEvent
struct SlateCore_CaptureLostEvent
{
public:
	uint8                                        Pad_147[0x8];                                      // Fixing Size Of Struct 
};

// 0xAC8 (0xAD0 - 0x8)
// ScriptStruct SlateCore.CheckBoxStyle
struct SlateCore_CheckBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	enum class ESlateCheckBoxType                CheckBoxType;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B[0x7];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  UncheckedImage;                                    // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  UncheckedHoveredImage;                             // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  UncheckedPressedImage;                             // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  CheckedImage;                                      // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  CheckedHoveredImage;                               // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  CheckedPressedImage;                               // 0x420(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  UndeterminedImage;                                 // 0x4F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  UndeterminedHoveredImage;                          // 0x5C0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  UndeterminedPressedImage;                          // 0x690(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x760(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundImage;                                   // 0x770(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundHoveredImage;                            // 0x840(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundPressedImage;                            // 0x910(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x9E0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  HoveredForeground;                                 // 0x9F4(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  PressedForeground;                                 // 0xA08(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  CheckedForeground;                                 // 0xA1C(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  CheckedHoveredForeground;                          // 0xA30(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  CheckedPressedForeground;                          // 0xA44(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  UndeterminedForeground;                            // 0xA58(0x14)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BorderBackgroundColor;                             // 0xA6C(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  CheckedSlateSound;                                 // 0xA80(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  UncheckedSlateSound;                               // 0xA98(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_SlateSound                  HoveredSlateSound;                                 // 0xAB0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E[0x8];                                      // Fixing Size Of Struct 
};

// 0x2158 (0x2160 - 0x8)
// ScriptStruct SlateCore.SegmentedControlStyle
struct SlateCore_SegmentedControlStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_14F[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_CheckBoxStyle               ControlStyle;                                      // 0x10(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_CheckBoxStyle               FirstControlStyle;                                 // 0xAE0(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_CheckBoxStyle               LastControlStyle;                                  // 0x15B0(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x2080(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      UniformPadding;                                    // 0x2150(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x748 (0x750 - 0x8)
// ScriptStruct SlateCore.HyperlinkStyle
struct SlateCore_HyperlinkStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_152[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 UnderlineStyle;                                    // 0x10(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              TextStyle;                                         // 0x400(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Padding;                                           // 0x740(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x11C8 (0x11D0 - 0x8)
// ScriptStruct SlateCore.InlineEditableTextBlockStyle
struct SlateCore_InlineEditableTextBlockStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_153[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_EditableTextBoxStyle        EditableTextBoxStyle;                              // 0x10(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              TextStyle;                                         // 0xE90(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x288 (0x290 - 0x8)
// ScriptStruct SlateCore.ProgressBarStyle
struct SlateCore_ProgressBarStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_154[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundImage;                                   // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  FillImage;                                         // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MarqueeImage;                                      // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         EnableFillAnimation;                               // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155[0xF];                                      // Fixing Size Of Struct 
};

// 0x1B8 (0x1C0 - 0x8)
// ScriptStruct SlateCore.ExpandableAreaStyle
struct SlateCore_ExpandableAreaStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_159[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  CollapsedImage;                                    // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ExpandedImage;                                     // 0xE0(0xD0)(Edit, NativeAccessSpecifierPublic)
	float                                        RolloutAnimationSeconds;                           // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C[0xC];                                      // Fixing Size Of Struct 
};

// 0x1248 (0x1250 - 0x8)
// ScriptStruct SlateCore.SearchBoxStyle
struct SlateCore_SearchBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_15D[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_EditableTextBoxStyle        TextBoxStyle;                                      // 0x10(0xE80)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateFontInfo               ActiveFontInfo;                                    // 0xE90(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  UpArrowImage;                                      // 0xEF0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DownArrowImage;                                    // 0xFC0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  GlassImage;                                        // 0x1090(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ClearImage;                                        // 0x1160(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ImagePadding;                                      // 0x1230(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignButtons;                                 // 0x1240(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignSearchResultButtons;                     // 0x1241(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLeftAlignGlassImageAndClearButton;                // 0x1242(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F[0xD];                                      // Fixing Size Of Struct 
};

// 0x4F8 (0x500 - 0x8)
// ScriptStruct SlateCore.SliderStyle
struct SlateCore_SliderStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_161[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  NormalBarImage;                                    // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredBarImage;                                   // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DisabledBarImage;                                  // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalThumbImage;                                  // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredThumbImage;                                 // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  DisabledThumbImage;                                // 0x420(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        BarThickness;                                      // 0x4F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163[0xC];                                      // Fixing Size Of Struct 
};

// 0x918 (0x920 - 0x8)
// ScriptStruct SlateCore.VolumeControlStyle
struct SlateCore_VolumeControlStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_165[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SliderStyle                 SliderStyle;                                       // 0x10(0x500)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HighVolumeImage;                                   // 0x510(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MidVolumeImage;                                    // 0x5E0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  LowVolumeImage;                                    // 0x6B0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NoVolumeImage;                                     // 0x780(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MutedImage;                                        // 0x850(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct SlateCore.InlineTextImageStyle
struct SlateCore_InlineTextImageStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_167[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Image;                                             // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
	int16                                        Baseline;                                          // 0xE0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168[0xE];                                      // Fixing Size Of Struct 
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct SlateCore.SplitterStyle
struct SlateCore_SplitterStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_169[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  HandleNormalBrush;                                 // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HandleHighlightBrush;                              // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct SlateCore.TableViewStyle
struct SlateCore_TableViewStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_16C[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x758 (0x760 - 0x8)
// ScriptStruct SlateCore.TableColumnHeaderStyle
struct SlateCore_TableColumnHeaderStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_16E[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  SortPrimaryAscendingImage;                         // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SortPrimaryDescendingImage;                        // 0xE0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SortSecondaryAscendingImage;                       // 0x1B0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SortSecondaryDescendingImage;                      // 0x280(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalBrush;                                       // 0x350(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredBrush;                                      // 0x420(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MenuDropdownImage;                                 // 0x4F0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MenuDropdownNormalBorderBrush;                     // 0x5C0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MenuDropdownHoveredBorderBrush;                    // 0x690(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0x1258 (0x1260 - 0x8)
// ScriptStruct SlateCore.HeaderRowStyle
struct SlateCore_HeaderRowStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_174[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_TableColumnHeaderStyle      ColumnStyle;                                       // 0x10(0x760)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_TableColumnHeaderStyle      LastColumnStyle;                                   // 0x770(0x760)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SplitterStyle               ColumnSplitterStyle;                               // 0xED0(0x1B0)(Edit, NativeAccessSpecifierPublic)
	float                                        SplitterHandleSize;                                // 0x1080(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x1090(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundColor;                                   // 0x1160(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_177[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  HorizontalSeparatorBrush;                          // 0x1180(0xD0)(Edit, NativeAccessSpecifierPublic)
	float                                        HorizontalSeparatorThickness;                      // 0x1250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178[0xC];                                      // Fixing Size Of Struct 
};

// 0xD78 (0xD80 - 0x8)
// ScriptStruct SlateCore.DockTabStyle
struct SlateCore_DockTabStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_179[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 CloseButtonStyle;                                  // 0x10(0x3F0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NormalBrush;                                       // 0x400(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ColorOverlayTabBrush;                              // 0x4D0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ColorOverlayIconBrush;                             // 0x5A0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ForegroundBrush;                                   // 0x670(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HoveredBrush;                                      // 0x740(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ContentAreaBrush;                                  // 0x810(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  TabWellBrush;                                      // 0x8E0(0xD0)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              TabTextStyle;                                      // 0x9B0(0x340)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      TabPadding;                                        // 0xCF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_DeprecateSlateVector2D      IconSize;                                          // 0xD00(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverlapWidth;                                      // 0xD08(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  FlashColor;                                        // 0xD0C(0x14)(Edit, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  NormalForegroundColor;                             // 0xD20(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  HoveredForegroundColor;                            // 0xD34(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ActiveForegroundColor;                             // 0xD48(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ForegroundForegroundColor;                         // 0xD5C(0x14)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	float                                        IconBorderPadding;                                 // 0xD70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E[0xC];                                      // Fixing Size Of Struct 
};

// 0x368 (0x370 - 0x8)
// ScriptStruct SlateCore.ScrollBoxStyle
struct SlateCore_ScrollBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	float                                        BarThickness;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F[0x4];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  TopShadowBrush;                                    // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BottomShadowBrush;                                 // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  LeftShadowBrush;                                   // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  RightShadowBrush;                                  // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      HorizontalScrolledContentPadding;                  // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      VerticalScrolledContentPadding;                    // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct SlateCore.ScrollBorderStyle
struct SlateCore_ScrollBorderStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_182[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  TopShadowBrush;                                    // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BottomShadowBrush;                                 // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x1938 (0x1940 - 0x8)
// ScriptStruct SlateCore.WindowStyle
struct SlateCore_WindowStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_183[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 MinimizeButtonStyle;                               // 0x10(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 MaximizeButtonStyle;                               // 0x400(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 RestoreButtonStyle;                                // 0x7F0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 CloseButtonStyle;                                  // 0xBE0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              TitleTextStyle;                                    // 0xFD0(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ActiveTitleBrush;                                  // 0x1310(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  InactiveTitleBrush;                                // 0x13E0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  FlashTitleBrush;                                   // 0x14B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BackgroundColor;                                   // 0x1580(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_188[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  OutlineBrush;                                      // 0x15A0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  OutlineColor;                                      // 0x1670(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_189[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BorderBrush;                                       // 0x1690(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BorderColor;                                       // 0x1760(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C[0xC];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x1780(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ChildBackgroundBrush;                              // 0x1850(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        WindowCornerRadius;                                // 0x1920(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      BorderPadding;                                     // 0x1924(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D[0xC];                                      // Fixing Size Of Struct 
};

// 0x988 (0x988 - 0x0)
// ScriptStruct SlateCore.StyleColorList
struct SlateCore_StyleColorList
{
public:
	struct CoreUObject_LinearColor               StyleColors[0x3D];                                 // 0x0(0x3D0)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E[0x5B8];                                    // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct SlateCore.StyleTheme
struct SlateCore_StyleTheme
{
public:
	uint8                                        Pad_18F[0x48];                                     // Fixing Size Of Struct 
};

// 0x3E88 (0x3E90 - 0x8)
// ScriptStruct SlateCore.ToolBarStyle
struct SlateCore_ToolBarStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_190[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  ExpandBrush;                                       // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  SeparatorBrush;                                    // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_TextBlockStyle              LabelStyle;                                        // 0x280(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_EditableTextBoxStyle        EditableTextStyle;                                 // 0x5C0(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_CheckBoxStyle               ToggleButton;                                      // 0x1440(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ComboButtonStyle            ComboButtonStyle;                                  // 0x1F10(0x600)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 SettingsButtonStyle;                               // 0x2510(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ComboButtonStyle            SettingsComboButton;                               // 0x2900(0x600)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_CheckBoxStyle               SettingsToggleButton;                              // 0x2F00(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 ButtonStyle;                                       // 0x39D0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      LabelPadding;                                      // 0x3DC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        UniformBlockWidth;                                 // 0x3DD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UniformBlockHeight;                                // 0x3DD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumColumns;                                        // 0x3DD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      IconPadding;                                       // 0x3DDC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      SeparatorPadding;                                  // 0x3DEC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ComboButtonPadding;                                // 0x3DFC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      ButtonPadding;                                     // 0x3E0C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      CheckBoxPadding;                                   // 0x3E1C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      BlockPadding;                                      // 0x3E2C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      IndentedBlockPadding;                              // 0x3E3C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      BackgroundPadding;                                 // 0x3E4C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_DeprecateSlateVector2D      IconSize;                                          // 0x3E5C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowLabels;                                       // 0x3E64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_196[0x3];                                      // Fixing Size After Last Property  
	float                                        ButtonContentMaxWidth;                             // 0x3E68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ButtonContentFillWidth;                            // 0x3E6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      IconPaddingWithVisibleLabel;                       // 0x3E70(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      IconPaddingWithCollapsedLabel;                     // 0x3E80(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}


