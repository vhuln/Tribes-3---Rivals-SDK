#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10F (0x110 - 0x1)
// ScriptStruct ABP_PAK_Shield.ABP_PAK_Shield_C.AnimBlueprintGeneratedConstantData
struct ABP_PAK_Shield_ABP_PAK_Shield_C_AnimBlueprintGeneratedConstantData : public Engine_AnimBlueprintConstantData
{
public:
	uint8                                        Pad_1125[0x3];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_7;                                  // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1128[0x4];                                     // Fixing Size After Last Property  
	struct Engine_AnimNodeFunctionRef            __StructProperty_8;                                // 0x10(0x20)(BlueprintVisible, NoDestructor)
	bool                                         __BoolProperty_9;                                  // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_113C[0x3];                                     // Fixing Size After Last Property  
	float                                        __FloatProperty_10;                                // 0x34(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_InputScaleBiasClampConstants   __StructProperty_11;                               // 0x38(0x2C)(BlueprintVisible, NoDestructor)
	float                                        __FloatProperty_12;                                // 0x64(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         __BoolProperty_13;                                 // 0x68(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimSyncMethod                   __EnumProperty_14;                                 // 0x69(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAnimGroupRole                    __ByteProperty_15;                                 // 0x6A(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_114B[0x1];                                     // Fixing Size After Last Property  
	class FName                                  __NameProperty_16;                                 // 0x6C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1150[0x4];                                     // Fixing Size After Last Property  
	struct Engine_AnimSubsystem_PropertyAccess   AnimBlueprintExtension_PropertyAccess;             // 0x78(0x80)(None)
	struct Engine_AnimSubsystem_Base             AnimBlueprintExtension_Base;                       // 0xF8(0x18)(None)
};

}


