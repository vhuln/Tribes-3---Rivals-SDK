#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlateVisibility : uint8
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5,
};

enum class EVirtualKeyboardType : uint8
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6,
};

enum class ESlateAccessibleBehavior : uint8
{
	NotAccessible                  = 0,
	Auto                           = 1,
	Summary                        = 2,
	Custom                         = 3,
	ToolTip                        = 4,
	ESlateAccessibleBehavior_MAX   = 5,
};

enum class ESlateSizeRule : uint8
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2,
};

enum class EDynamicBoxType : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Wrap                           = 2,
	VerticalWrap                   = 3,
	Radial                         = 4,
	Overlay                        = 5,
	EDynamicBoxType_MAX            = 6,
};

enum class EWidgetDesignFlags : uint8
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 4,
	Previewing                     = 8,
	EWidgetDesignFlags_MAX         = 9,
};

enum class EWidgetSpace : uint8
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2,
};

enum class EWidgetTimingPolicy : uint8
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2,
};

enum class EWidgetBlendMode : uint8
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3,
};

enum class EWidgetGeometryMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2,
};

enum class EWindowVisibility : uint8
{
	Visible                        = 0,
	SelfHitTestInvisible           = 1,
	EWindowVisibility_MAX          = 2,
};

enum class ETickMode : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Automatic                      = 2,
	ETickMode_MAX                  = 3,
};

enum class EWidgetInteractionSource : uint8
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4,
};

enum class EDragPivot : uint8
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10,
};

enum class EWidgetTickFrequency : uint8
{
	Never                          = 0,
	Auto                           = 1,
	EWidgetTickFrequency_MAX       = 2,
};

enum class EWidgetAnimationEvent : uint8
{
	Started                        = 0,
	Finished                       = 1,
	EWidgetAnimationEvent_MAX      = 2,
};

enum class EUMGSequencePlayMode : uint8
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3,
};

enum class EBindingKind : uint8
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xB8 - 0x0)
// ScriptStruct UMG.EventReply
struct UMG_EventReply
{
public:
	uint8                                        Pad_4DFF[0xB8];                                    // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct UMG.WidgetTransform
struct UMG_WidgetTransform
{
public:
	struct CoreUObject_Vector2D                  Translation;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Scale;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Shear;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E00[0x4];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// ScriptStruct UMG.ShapedTextOptions
struct UMG_ShapedTextOptions
{
public:
	uint8                                        bOverride_TextShapingMethod : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_TextFlowDirection : 1;                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15C : 6;                                    // Fixing Bit-Field Size  
	enum class ETextShapingMethod                TextShapingMethod;                                 // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextFlowDirection                TextFlowDirection;                                 // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct UMG.PaintContext
struct UMG_PaintContext
{
public:
	uint8                                        Pad_4E05[0x30];                                    // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UMG.AnimationEventBinding
struct UMG_AnimationEventBinding
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetAnimationEvent             AnimationEvent;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E10[0x3];                                     // Fixing Size After Last Property  
	class FName                                  UserTag;                                           // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E11[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.WidgetChild
struct UMG_WidgetChild
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UWidget>                WidgetPtr;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.NamedSlotBinding
struct UMG_NamedSlotBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Content;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.RadialBoxSettings
struct UMG_RadialBoxSettings
{
public:
	float                                        StartingAngle;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistributeItemsEvenly;                            // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E16[0x3];                                     // Fixing Size After Last Property  
	float                                        AngleBetweenItems;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectorCentralAngle;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.SlateChildSize
struct UMG_SlateChildSize
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateSizeRule                    SizeRule;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E17[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct UMG.WidgetEventField
struct UMG_WidgetEventField
{
public:
	uint8                                        Pad_4E19[0x1];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// ScriptStruct UMG.WidgetNavigationData
struct UMG_WidgetNavigationData
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E1A[0x3];                                     // Fixing Size After Last Property  
	class FName                                  WidgetToFocus;                                     // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                Widget;                                            // 0xC(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CustomDelegate;                                    // 0x14(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct UMG.MovieScene2DTransformMask
struct UMG_MovieScene2DTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct UMG.SequenceTickManagerWidgetData
struct UMG_SequenceTickManagerWidgetData
{
public:
	uint8                                        Pad_4E1B[0x2];                                     // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// ScriptStruct UMG.WidgetAnimationBinding
struct UMG_WidgetAnimationBinding
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotWidgetName;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      AnimationGuid;                                     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootWidget;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E1D[0x3];                                     // Fixing Size Of Struct 
};

// 0x1C (0x1C - 0x0)
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct UMG_BlueprintWidgetAnimationDelegateBinding
{
public:
	enum class EWidgetAnimationEvent             Action;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E1E[0x3];                                     // Fixing Size After Last Property  
	class FName                                  AnimationToBind;                                   // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UserTag;                                           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct UMG.DynamicPropertyPath
struct UMG_DynamicPropertyPath : public PropertyPath_CachedPropertyPath
{
public:
};

// 0x590 (0x590 - 0x0)
// ScriptStruct UMG.WidgetStateBitfield
struct UMG_WidgetStateBitfield
{
public:
	uint8                                        Pad_4E1F[0x590];                                   // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct UMG.GameViewportWidgetSlot
struct UMG_GameViewportWidgetSlot
{
public:
	struct Slate_Anchors                         Anchors;                                           // 0x0(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      Offsets;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Alignment;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E21[0x4];                                     // Fixing Size Of Struct 
};

// 0x88 (0x88 - 0x0)
// ScriptStruct UMG.UserWidgetPool
struct UMG_UserWidgetPool
{
public:
	TArray<class UUserWidget*>                   ActiveWidgets;                                     // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UUserWidget*>                   InactiveWidgets;                                   // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E24[0x68];                                    // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct UMG.AnchorData
struct UMG_AnchorData
{
public:
	struct SlateCore_Margin                      Offsets;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Slate_Anchors                         Anchors;                                           // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Alignment;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x348 (0x350 - 0x8)
// ScriptStruct UMG.RichTextStyleRow
struct UMG_RichTextStyleRow : public Engine_TableRowBase
{
public:
	uint8                                        Pad_4E26[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_TextBlockStyle              TextStyle;                                         // 0x10(0x340)(Edit, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct UMG.RichImageRow
struct UMG_RichImageRow : public Engine_TableRowBase
{
public:
	uint8                                        Pad_4E27[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  Brush;                                             // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0xC8 - 0xB8)
// ScriptStruct UMG.WidgetComponentInstanceData
struct UMG_WidgetComponentInstanceData : public Engine_SceneComponentInstanceData
{
public:
	uint8                                        Pad_4E29[0x10];                                    // Fixing Size Of Struct 
};

// 0x3C (0x3C - 0x0)
// ScriptStruct UMG.SlateMeshVertex
struct UMG_SlateMeshVertex
{
public:
	struct CoreUObject_Vector2f                  Position;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     Color;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  UV0;                                               // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  UV1;                                               // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  UV2;                                               // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  UV3;                                               // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  UV4;                                               // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  UV5;                                               // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct UMG.DelegateRuntimeBinding
struct UMG_DelegateRuntimeBinding
{
public:
	class FString                                ObjectName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_DynamicPropertyPath               SourcePath;                                        // 0x20(0x38)(NativeAccessSpecifierPublic)
	enum class EBindingKind                      Kind;                                              // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E2B[0x7];                                     // Fixing Size Of Struct 
};

}


