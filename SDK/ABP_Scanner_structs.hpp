#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x137 (0x138 - 0x1)
// ScriptStruct ABP_Scanner.ABP_Scanner_C.AnimBlueprintGeneratedConstantData
struct ABP_Scanner_ABP_Scanner_C_AnimBlueprintGeneratedConstantData : public Engine_AnimBlueprintConstantData
{
public:
	uint8                                        Pad_310[0x3];                                      // Fixing Size After Last Property  
	class FName                                  __NameProperty_36;                                 // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_317[0x4];                                      // Fixing Size After Last Property  
	class UBlendProfile*                         __BlendProfile_37;                                 // 0x10(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                           __CurveFloat_38;                                   // 0x18(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EAlphaBlendOption                 __EnumProperty_39;                                 // 0x20(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBlendListTransitionType          __EnumProperty_40;                                 // 0x21(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324[0x6];                                      // Fixing Size After Last Property  
	TArray<float>                                __ArrayProperty_41;                                // 0x28(0x10)(BlueprintVisible, EditFixedSize)
	struct Engine_AnimNodeFunctionRef            __StructProperty_42;                               // 0x38(0x20)(BlueprintVisible, NoDestructor)
	bool                                         __BoolProperty_43;                                 // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32D[0x3];                                      // Fixing Size After Last Property  
	float                                        __FloatProperty_44;                                // 0x5C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_InputScaleBiasClampConstants   __StructProperty_45;                               // 0x60(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_46;                                // 0x8C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_47;                                 // 0x90(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_48;                                 // 0x91(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_49;                                 // 0x92(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_339[0x1];                                      // Fixing Size After Last Property  
	class FName                                  __NameProperty_50;                                 // 0x94(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F[0x4];                                      // Fixing Size After Last Property  
	struct Engine_AnimSubsystem_PropertyAccess   AnimBlueprintExtension_PropertyAccess;             // 0xA0(0x80)(None)
	struct Engine_AnimSubsystem_Base             AnimBlueprintExtension_Base;                       // 0x120(0x18)(None)
};

// 0x1 (0x2 - 0x1)
// ScriptStruct ABP_Scanner.ABP_Scanner_C.AnimBlueprintGeneratedMutableData
struct ABP_Scanner_ABP_Scanner_C_AnimBlueprintGeneratedMutableData : public Engine_AnimBlueprintMutableData
{
public:
	bool                                         __BoolProperty;                                    // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


