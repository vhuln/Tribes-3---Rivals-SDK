#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x580 (0x700 - 0x180)
// Class AudioWidgets.AudioMeter
class UAudioMeter : public UWidget
{
public:
	TArray<struct AudioWidgets_MeterChannelInfo> MeterChannelInfo;                                  // 0x180(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           MeterChannelInfoDelegate;                          // 0x190(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AudioWidgets_AudioMeterStyle          WidgetStyle;                                       // 0x1A0(0x4D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x670(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E6[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               BackgroundColor;                                   // 0x674(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               MeterBackgroundColor;                              // 0x684(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               MeterValueColor;                                   // 0x694(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               MeterPeakColor;                                    // 0x6A4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               MeterClippingColor;                                // 0x6B4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               MeterScaleColor;                                   // 0x6C4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               MeterScaleLabelColor;                              // 0x6D4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11FB[0x1C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioMeter* GetDefaultObj();

	void SetMeterValueColor(const struct CoreUObject_LinearColor& InValue);
	void SetMeterScaleLabelColor(const struct CoreUObject_LinearColor& InValue);
	void SetMeterScaleColor(const struct CoreUObject_LinearColor& InValue);
	void SetMeterPeakColor(const struct CoreUObject_LinearColor& InValue);
	void SetMeterClippingColor(const struct CoreUObject_LinearColor& InValue);
	void SetMeterChannelInfo(TArray<struct AudioWidgets_MeterChannelInfo>& InMeterChannelInfo);
	void SetMeterBackgroundColor(const struct CoreUObject_LinearColor& InValue);
	void SetBackgroundColor(const struct CoreUObject_LinearColor& InValue);
	TArray<struct AudioWidgets_MeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
	TArray<struct AudioWidgets_MeterChannelInfo> GetMeterChannelInfo();
};

// 0x220 (0x3A0 - 0x180)
// Class AudioWidgets.AudioRadialSlider
class UAudioRadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x184(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioRadialSliderLayout          WidgetLayout;                                      // 0x194(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CF[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CenterBackgroundColor;                             // 0x198(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderProgressColor;                               // 0x1A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderBarColor;                                    // 0x1B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  HandStartEndRatio;                                 // 0x1C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  UnitsText;                                         // 0x1D8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               TextLabelBackgroundColor;                          // 0x1F0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLabelOnlyOnHover;                              // 0x200(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnitsText;                                     // 0x201(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnitsTextReadOnly;                               // 0x202(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValueTextReadOnly;                               // 0x203(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderThickness;                                   // 0x204(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  OutputRange;                                       // 0x208(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D5[0x178];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioRadialSlider* GetDefaultObj();

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout);
	void SetValueTextReadOnly(bool bIsReadOnly);
	void SetUnitsTextReadOnly(bool bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(const struct SlateCore_SlateColor& InColor);
	void SetSliderThickness(float InThickness);
	void SetSliderProgressColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderBarColor(const struct CoreUObject_LinearColor& InValue);
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	void SetOutputRange(const struct CoreUObject_Vector2D& InOutputRange);
	void SetHandStartEndRatio(const struct CoreUObject_Vector2D& InHandStartEndRatio);
	void SetCenterBackgroundColor(const struct CoreUObject_LinearColor& InValue);
	float GetSliderValue(float OutputValue);
	float GetOutputValue(float InSliderValue);
};

// 0x0 (0x3A0 - 0x3A0)
// Class AudioWidgets.AudioVolumeRadialSlider
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioVolumeRadialSlider* GetDefaultObj();

};

// 0x0 (0x3A0 - 0x3A0)
// Class AudioWidgets.AudioFrequencyRadialSlider
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioFrequencyRadialSlider* GetDefaultObj();

};

// 0x850 (0x9D0 - 0x180)
// Class AudioWidgets.AudioSliderBase
class UAudioSliderBase : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1354[0x4];                                     // Fixing Size After Last Property  
	class FText                                  UnitsText;                                         // 0x188(0x18)(Edit, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               TextLabelBackgroundColor;                          // 0x1A0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextLabelBackgroundColorDelegate;                  // 0x1B0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLabelOnlyOnHover;                              // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnitsText;                                     // 0x1C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnitsTextReadOnly;                               // 0x1C2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValueTextReadOnly;                               // 0x1C3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x1C4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderBackgroundColor;                             // 0x1D4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderBackgroundColorDelegate;                     // 0x1E4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderBarColor;                                    // 0x1F4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderBarColorDelegate;                            // 0x204(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderThumbColor;                                  // 0x214(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderThumbColorDelegate;                          // 0x224(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               WidgetBackgroundColor;                             // 0x234(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           WidgetBackgroundColorDelegate;                     // 0x244(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x254(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136E[0x3];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_136F[0x768];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioSliderBase* GetDefaultObj();

	void SetWidgetBackgroundColor(const struct CoreUObject_LinearColor& InValue);
	void SetValueTextReadOnly(bool bIsReadOnly);
	void SetUnitsTextReadOnly(bool bIsReadOnly);
	void SetUnitsText(class FText Units);
	void SetTextLabelBackgroundColor(const struct SlateCore_SlateColor& InColor);
	void SetSliderThumbColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderBarColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderBackgroundColor(const struct CoreUObject_LinearColor& InValue);
	void SetShowUnitsText(bool bShowUnitsText);
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
	float GetSliderValue(float OutputValue);
	float GetOutputValue(float InSliderValue);
	float GetLinValue(float OutputValue);
};

// 0x10 (0x9E0 - 0x9D0)
// Class AudioWidgets.AudioSlider
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>            LinToOutputCurve;                                  // 0x9D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCurveFloat>            OutputToLinCurve;                                  // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioSlider* GetDefaultObj();

};

// 0x0 (0x9E0 - 0x9E0)
// Class AudioWidgets.AudioVolumeSlider
class UAudioVolumeSlider : public UAudioSlider
{
public:

	static class UClass* StaticClass();
	static class UAudioVolumeSlider* GetDefaultObj();

};

// 0x10 (0x9E0 - 0x9D0)
// Class AudioWidgets.AudioFrequencySlider
class UAudioFrequencySlider : public UAudioSliderBase
{
public:
	struct CoreUObject_Vector2D                  OutputRange;                                       // 0x9D0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAudioFrequencySlider* GetDefaultObj();

};

}


