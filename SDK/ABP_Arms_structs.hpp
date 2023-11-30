#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x157 (0x158 - 0x1)
// ScriptStruct ABP_Arms.ABP_Arms_C.AnimBlueprintGeneratedConstantData
struct ABP_Arms_ABP_Arms_C_AnimBlueprintGeneratedConstantData : public Engine_AnimBlueprintConstantData
{
public:
	uint8                                        Pad_2F91[0x3];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_82;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F97[0x4];                                     // Fixing Size After Last Property  
	class UBlendProfile*                         __BlendProfile_83;                                 // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_84;                                   // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_85;                                 // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_86;                                 // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F9F[0x6];                                     // Fixing Size After Last Property  
	TArray<float>                                __ArrayProperty_87;                                // 0x28(0x10)(BlueprintVisible, EditFixedSize)
	class FName                                  __NameProperty_88;                                 // 0x38(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_89;                                  // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_90;                                 // 0x44(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB0[0x3];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_91;                                 // 0x48(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_92;                                  // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        __FloatProperty_93;                                // 0x54(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_InputScaleBiasClampConstants   __StructProperty_94;                               // 0x58(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_95;                                // 0x84(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_96;                                 // 0x88(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_97;                                 // 0x89(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_98;                                 // 0x8A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FC4[0x1];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_99;                                 // 0x8C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  __NameProperty_100;                                // 0x94(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        __IntProperty_101;                                 // 0x9C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_AnimNodeFunctionRef            __StructProperty_102;                              // 0xA0(0x20)(BlueprintVisible, NoDestructor)
	struct Engine_AnimSubsystem_PropertyAccess   AnimBlueprintExtension_PropertyAccess;             // 0xC0(0x80)(None)
	struct Engine_AnimSubsystem_Base             AnimBlueprintExtension_Base;                       // 0x140(0x18)(None)
};

// 0x1 (0x2 - 0x1)
// ScriptStruct ABP_Arms.ABP_Arms_C.AnimBlueprintGeneratedMutableData
struct ABP_Arms_ABP_Arms_C_AnimBlueprintGeneratedMutableData : public Engine_AnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


