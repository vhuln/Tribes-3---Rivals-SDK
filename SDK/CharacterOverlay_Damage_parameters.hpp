#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x110 (0x110 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.SetOutlineColor
struct UCharacterOverlay_Damage_C_SetOutlineColor_Params
{
public:
	struct CoreUObject_LinearColor               Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalHeadshot;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16E1[0x7];                                     // Fixing Size After Last Property  
	double                                       LocalValue;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_FontOutlineSettings         K2Node_MakeStruct_FontOutlineSettings;             // 0x20(0x20)(NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateFontInfo               K2Node_MakeStruct_SlateFontInfo;                   // 0x40(0x58)(HasGetValueTypeHash)
	struct SlateCore_FontOutlineSettings         K2Node_MakeStruct_FontOutlineSettings_1;           // 0x98(0x20)(NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateFontInfo               K2Node_MakeStruct_SlateFontInfo_1;                 // 0xB8(0x58)(HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.AggregateData
struct UCharacterOverlay_Damage_C_AggregateData_Params
{
public:
	struct Valhalla_DamageData                   Data;                                              // 0x0(0x100)(BlueprintVisible, BlueprintReadOnly, Parm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x100(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x110(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CallFunc_GetAnimation_Animation;                   // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.GetAnimation
struct UCharacterOverlay_Damage_C_GetAnimation_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RandomBool_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_185F[0x4];                                     // Fixing Size After Last Property  
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      K2Node_Select_Default_1;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.GetPosition
struct UCharacterOverlay_Damage_C_GetPosition_Params
{
public:
	struct CoreUObject_Vector2D                  Value;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1932[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Temp_struct_Variable;                              // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_194A[0x7];                                     // Fixing Size After Last Property  
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  CallFunc_MakeVector2D_ReturnValue;                 // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  K2Node_Select_Default;                             // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.UpdateAppearance
struct UCharacterOverlay_Damage_C_UpdateAppearance_Params
{
public:
	struct Valhalla_DamageData                   Data;                                              // 0x0(0x100)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         LocalShieldDamage;                                 // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LocalHeadshot;                                     // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AC1[0x6];                                     // Fixing Size After Last Property  
	double                                       LocalValue;                                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AD0[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CallFunc_SelectColor_ReturnValue;                  // 0x114(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1ADA[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CallFunc_SelectColor_ReturnValue_1;                // 0x128(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               CallFunc_SelectColor_ReturnValue_2;                // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x148(0x14)(None)
	uint8                                        Pad_1AEA[0x4];                                     // Fixing Size After Last Property  
	double                                       K2Node_VariableSet_LocalValue_ImplicitCast;        // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x138 (0x138 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.UpdateValue
struct UCharacterOverlay_Damage_C_UpdateValue_Params
{
public:
	struct Valhalla_DamageData                   Value;                                             // 0x0(0x100)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Round64_ReturnValue;                      // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x110(0x18)(None)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.UpdateData
struct UCharacterOverlay_Damage_C_UpdateData_Params
{
public:
	struct Valhalla_DamageData                   Data;                                              // 0x0(0x100)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EDamageNumberType                 NumberType;                                        // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BB2[0x7];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    CallFunc_K2_SetTimer_ReturnValue;                  // 0x108(0x8)(NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      CallFunc_GetAnimation_Animation;                   // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  CallFunc_GetPosition_Value;                        // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x130(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CharacterOverlay_Damage.CharacterOverlay_Damage_C.OnComplete__DelegateSignature
struct UCharacterOverlay_Damage_C_OnComplete__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


