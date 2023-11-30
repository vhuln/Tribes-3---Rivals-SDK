#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function UI_Shared_Key.UI_Shared_Key_C.UpdateDefaults
struct UUI_Shared_Key_C_UpdateDefaults_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UI_Shared_Key.UI_Shared_Key_C.PreConstruct
struct UUI_Shared_Key_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_Shared_Key.UI_Shared_Key_C.UpdateText
struct UUI_Shared_Key_C_UpdateText_Params
{
public:
	class FText                                  Value;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


