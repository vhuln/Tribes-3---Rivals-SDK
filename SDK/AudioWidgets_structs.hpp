#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAudioRadialSliderLayout : uint8
{
	Layout_LabelTop                = 0,
	Layout_LabelCenter             = 1,
	Layout_LabelBottom             = 2,
	Layout_MAX                     = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct AudioWidgets.MeterChannelInfo
struct AudioWidgets_MeterChannelInfo
{
public:
	float                                        MeterValue;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakValue;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClippingValue;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C8 (0x4D0 - 0x8)
// ScriptStruct AudioWidgets.AudioMeterStyle
struct AudioWidgets_AudioMeterStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_138B[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  MeterValueImage;                                   // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  BackgroundImage;                                   // 0xE0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MeterBackgroundImage;                              // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MeterValueBackgroundImage;                         // 0x280(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  MeterPeakImage;                                    // 0x350(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  MeterSize;                                         // 0x420(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  MeterPadding;                                      // 0x430(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeterValuePadding;                                 // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakValueWidth;                                    // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  ValueRangeDb;                                      // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowScale;                                        // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleSide;                                        // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1399[0x2];                                     // Fixing Size After Last Property  
	float                                        ScaleHashOffset;                                   // 0x45C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleHashWidth;                                    // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleHashHeight;                                   // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DecibelsPerHash;                                   // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139C[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               Font;                                              // 0x470(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139E[0x8];                                     // Fixing Size Of Struct 
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct AudioWidgets.AudioTextBoxStyle
struct AudioWidgets_AudioTextBoxStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_13A2[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundImage;                                   // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BackgroundColor;                                   // 0xE0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A5[0xC];                                     // Fixing Size Of Struct 
};

// 0x748 (0x750 - 0x8)
// ScriptStruct AudioWidgets.AudioSliderStyle
struct AudioWidgets_AudioSliderStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_13A9[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SliderStyle                 SliderStyle;                                       // 0x10(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct AudioWidgets_AudioTextBoxStyle        TextBoxStyle;                                      // 0x510(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  WidgetBackgroundImage;                             // 0x610(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SliderBackgroundColor;                             // 0x6E0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AD[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  SliderBackgroundSize;                              // 0x6F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LabelPadding;                                      // 0x708(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SliderBarColor;                                    // 0x70C(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SliderThumbColor;                                  // 0x720(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  WidgetBackgroundColor;                             // 0x734(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B4[0x8];                                     // Fixing Size Of Struct 
};

// 0x158 (0x160 - 0x8)
// ScriptStruct AudioWidgets.AudioRadialSliderStyle
struct AudioWidgets_AudioRadialSliderStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_13B8[0x8];                                     // Fixing Size After Last Property  
	struct AudioWidgets_AudioTextBoxStyle        TextBoxStyle;                                      // 0x10(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  CenterBackgroundColor;                             // 0x110(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SliderBarColor;                                    // 0x124(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SliderProgressColor;                               // 0x138(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        LabelPadding;                                      // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultSliderRadius;                               // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BF[0xC];                                     // Fixing Size Of Struct 
};

// 0x158 (0x160 - 0x8)
// ScriptStruct AudioWidgets.SampledSequenceViewerStyle
struct AudioWidgets_SampledSequenceViewerStyle : public SlateCore_SlateWidgetStyle
{
public:
	struct SlateCore_SlateColor                  SequenceColor;                                     // 0x8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        SequenceLineThickness;                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  MajorGridLineColor;                                // 0x20(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  MinorGridLineColor;                                // 0x34(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  ZeroCrossingLineColor;                             // 0x48(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        ZeroCrossingLineThickness;                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SampleMarkersSize;                                 // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  SequenceBackgroundColor;                           // 0x64(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C8[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x80(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CB[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct AudioWidgets.PlayheadOverlayStyle
struct AudioWidgets_PlayheadOverlayStyle : public SlateCore_SlateWidgetStyle
{
public:
	struct SlateCore_SlateColor                  PlayheadColor;                                     // 0x8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        PlayheadWidth;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x268 (0x270 - 0x8)
// ScriptStruct AudioWidgets.FixedSampleSequenceRulerStyle
struct AudioWidgets_FixedSampleSequenceRulerStyle : public SlateCore_SlateWidgetStyle
{
public:
	float                                        HandleWidth;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  HandleColor;                                       // 0xC(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  HandleBrush;                                       // 0x20(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  TicksColor;                                        // 0xF0(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  TicksTextColor;                                    // 0x104(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_SlateFontInfo               TicksTextFont;                                     // 0x118(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TicksTextOffset;                                   // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  BackgroundColor;                                   // 0x174(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DE[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  BackgroundBrush;                                   // 0x190(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DF[0x8];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct AudioWidgets.SampledSequenceValueGridOverlayStyle
struct AudioWidgets_SampledSequenceValueGridOverlayStyle : public SlateCore_SlateWidgetStyle
{
public:
	struct SlateCore_SlateColor                  GridColor;                                         // 0x8(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        GridThickness;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateColor                  LabelTextColor;                                    // 0x20(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E7[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               LabelTextFont;                                     // 0x38(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredWidth;                                      // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredHeight;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


