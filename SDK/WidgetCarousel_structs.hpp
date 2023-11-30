#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x598 (0x5A0 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
struct WidgetCarousel_WidgetCarouselNavigationButtonStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_469[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_ButtonStyle                 InnerButtonStyle;                                  // 0x10(0x3F0)(NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NavigationButtonLeftImage;                         // 0x400(0xD0)(NativeAccessSpecifierPublic)
	struct SlateCore_SlateBrush                  NavigationButtonRightImage;                        // 0x4D0(0xD0)(NativeAccessSpecifierPublic)
};

// 0xCA8 (0xCB0 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
struct WidgetCarousel_WidgetCarouselNavigationBarStyle : public SlateCore_SlateWidgetStyle
{
public:
	uint8                                        Pad_470[0x8];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateBrush                  HighlightBrush;                                    // 0x10(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 LeftButtonStyle;                                   // 0xE0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 CenterButtonStyle;                                 // 0x4D0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct SlateCore_ButtonStyle                 RightButtonStyle;                                  // 0x8C0(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


