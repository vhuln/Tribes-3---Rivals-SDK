#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.SetThrobberColor
struct UWBP_TriangleThrobber_C_SetThrobberColor_Params
{
public:
	struct SlateCore_SlateColor                  NewColor;                                          // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.PreConstruct
struct UWBP_TriangleThrobber_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_TriangleThrobber.WBP_TriangleThrobber_C.ExecuteUbergraph_WBP_TriangleThrobber
struct UWBP_TriangleThrobber_C_ExecuteUbergraph_WBP_TriangleThrobber_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


