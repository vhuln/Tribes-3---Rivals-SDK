#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x690 (0x810 - 0x180)
// Class AdvancedWidgets.RadialSlider
class URadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x184(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomDefaultValue;                            // 0x194(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154D[0x3];                                     // Fixing Size After Last Property  
	float                                        CustomDefaultValue;                                // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1553[0x4];                                     // Fixing Size After Last Property  
	struct Engine_RuntimeFloatCurve              SliderRange;                                       // 0x1A0(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<float>                                ValueTags;                                         // 0x228(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SliderHandleStartAngle;                            // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderHandleEndAngle;                              // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularOffset;                                     // 0x240(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  HandStartEndRatio;                                 // 0x248(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1563[0x8];                                     // Fixing Size After Last Property  
	struct SlateCore_SliderStyle                 WidgetStyle;                                       // 0x260(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderBarColor;                                    // 0x760(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderProgressColor;                               // 0x770(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SliderHandleColor;                                 // 0x780(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               CenterBackgroundColor;                             // 0x790(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x7A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MouseUsesStep;                                     // 0x7A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiresControllerLock;                            // 0x7A2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158D[0x1];                                     // Fixing Size After Last Property  
	float                                        StepSize;                                          // 0x7A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x7A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseVerticalDrag;                                   // 0x7A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSliderHandle;                                  // 0x7AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowSliderHand;                                    // 0x7AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159A[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x7B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x7C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x7D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x7E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x7F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BE[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URadialSlider* GetDefaultObj();

	void SetValueTags(TArray<float>& InValueTags);
	void SetValue(float InValue);
	void SetUseVerticalDrag(bool InUseVerticalDrag);
	void SetStepSize(float InValue);
	void SetSliderRange(struct Engine_RuntimeFloatCurve& InSliderRange);
	void SetSliderProgressColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderHandleStartAngle(float InValue);
	void SetSliderHandleEndAngle(float InValue);
	void SetSliderHandleColor(const struct CoreUObject_LinearColor& InValue);
	void SetSliderBarColor(const struct CoreUObject_LinearColor& InValue);
	void SetShowSliderHandle(bool InShowSliderHandle);
	void SetShowSliderHand(bool InShowSliderHand);
	void SetLocked(bool InValue);
	void SetHandStartEndRatio(const struct CoreUObject_Vector2D& InValue);
	void SetCustomDefaultValue(float InValue);
	void SetCenterBackgroundColor(const struct CoreUObject_LinearColor& InValue);
	void SetAngularOffset(float InValue);
	float GetValue();
	float GetNormalizedSliderHandlePosition();
	float GetCustomDefaultValue();
};

}


