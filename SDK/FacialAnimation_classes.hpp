#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xCC0 - 0xC78)
// Class FacialAnimation.AudioCurveSourceComponent
class UAudioCurveSourceComponent : public UAudioComponent
{
public:
	uint8                                        Pad_1614[0x8];                                     // Fixing Size After Last Property  
	class FName                                  CurveSourceBindingName;                            // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveSyncOffset;                                   // 0xC88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1616[0x34];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioCurveSourceComponent* GetDefaultObj();

};

}


