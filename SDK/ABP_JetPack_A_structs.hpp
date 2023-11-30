#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x147 (0x148 - 0x1)
// ScriptStruct ABP_JetPack_A.ABP_JetPack_A_C.AnimBlueprintGeneratedConstantData
struct ABP_JetPack_A_ABP_JetPack_A_C_AnimBlueprintGeneratedConstantData : public Engine_AnimBlueprintConstantData
{
public:
	uint8                                        Pad_19AA[0x3];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_91;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_92;                                 // 0xC(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_93;                                  // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_94;                                 // 0x18(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19D5[0x3];                                     // Fixing Size After Last Property  
	float                                        __FloatProperty_95;                                // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_InputScaleBiasClampConstants   __StructProperty_96;                               // 0x20(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_97;                                // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_98;                                 // 0x50(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_99;                                 // 0x51(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A04[0x2];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_100;                                // 0x54(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_101;                                // 0x5C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_102;                                 // 0x64(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                         __BlendProfile_103;                                // 0x68(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_104;                                  // 0x70(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         __BoolProperty_105;                                // 0x78(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_106;                                // 0x79(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_107;                                // 0x7A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6B[0x5];                                     // Fixing Size After Last Property  
	TArray<float>                                __ArrayProperty_108;                               // 0x80(0x10)(BlueprintVisible, EditFixedSize)
	struct Engine_AnimNodeFunctionRef            __StructProperty_109;                              // 0x90(0x20)(BlueprintVisible, NoDestructor)
	struct Engine_AnimSubsystem_PropertyAccess   AnimBlueprintExtension_PropertyAccess;             // 0xB0(0x80)(None)
	struct Engine_AnimSubsystem_Base             AnimBlueprintExtension_Base;                       // 0x130(0x18)(None)
};

// 0xC (0xD - 0x1)
// ScriptStruct ABP_JetPack_A.ABP_JetPack_A_C.AnimBlueprintGeneratedMutableData
struct ABP_JetPack_A_ABP_JetPack_A_C_AnimBlueprintGeneratedMutableData : public Engine_AnimBlueprintMutableData
{
public:
	uint8                                        Pad_1AA5[0x3];                                     // Fixing Size After Last Property  
	float                                        __FloatProperty;                                   // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_0;                                 // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_1;                                  // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


