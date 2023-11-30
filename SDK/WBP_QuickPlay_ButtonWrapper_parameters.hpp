#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.HandleOnQueueInfoSet
struct UWBP_QuickPlay_ButtonWrapper_C_HandleOnQueueInfoSet_Params
{
public:
	class URH_MatchmakingQueueInfo*              QueueInfo;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.GetNavigationWidgets
struct UWBP_QuickPlay_ButtonWrapper_C_GetNavigationWidgets_Params
{
public:
	TArray<class URHWidget*>                     Return_Value;                                      // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class URHWidget*>                     CallFunc_GetNavigationWidgets_Return_Value;        // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x14 (0x14 - 0x0)
// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper
struct UWBP_QuickPlay_ButtonWrapper_C_ExecuteUbergraph_WBP_QuickPlay_ButtonWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_QuickPlay_ButtonWrapper.WBP_QuickPlay_ButtonWrapper_C.OnQueueInfoSet__DelegateSignature
struct UWBP_QuickPlay_ButtonWrapper_C_OnQueueInfoSet__DelegateSignature_Params
{
public:
	class URH_MatchmakingQueueInfo*              QueueInfo;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


