#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x167 (0x168 - 0x1)
// ScriptStruct ABP_Crate.ABP_Crate_C.AnimBlueprintGeneratedConstantData
struct ABP_Crate_ABP_Crate_C_AnimBlueprintGeneratedConstantData : public Engine_AnimBlueprintConstantData
{
public:
	uint8                                        Pad_2AB7[0x3];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_129;                                // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_130;                                // 0xC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_131;                                 // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_132;                                // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_133;                                 // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_134;                                // 0x24(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ABA[0x3];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_135;                                // 0x28(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                         __BlendProfile_136;                                // 0x30(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_137;                                  // 0x38(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_138;                                // 0x40(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_139;                                // 0x41(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AC9[0x6];                                     // Fixing Size After Last Property  
	TArray<float>                                __ArrayProperty_140;                               // 0x48(0x10)(BlueprintVisible, EditFixedSize)
	class FName                                  __NameProperty_141;                                // 0x58(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_142;                               // 0x60(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_InputScaleBiasClampConstants   __StructProperty_143;                              // 0x64(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_144;                               // 0x90(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_145;                                // 0x94(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_146;                                // 0x95(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_147;                                // 0x96(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AD8[0x1];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_148;                                // 0x98(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_149;                                // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_150;                                 // 0xA8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ADC[0x4];                                     // Fixing Size After Last Property  
	struct Engine_AnimNodeFunctionRef            __StructProperty_151;                              // 0xB0(0x20)(BlueprintVisible, NoDestructor)
	struct Engine_AnimSubsystem_PropertyAccess   AnimBlueprintExtension_PropertyAccess;             // 0xD0(0x80)(None)
	struct Engine_AnimSubsystem_Base             AnimBlueprintExtension_Base;                       // 0x150(0x18)(None)
};

// 0x2 (0x3 - 0x1)
// ScriptStruct ABP_Crate.ABP_Crate_C.AnimBlueprintGeneratedMutableData
struct ABP_Crate_ABP_Crate_C_AnimBlueprintGeneratedMutableData : public Engine_AnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_0;                                  // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


