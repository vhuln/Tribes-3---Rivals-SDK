#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x19 - 0x0)
// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnRejectSafeVoiceConsent
struct UWBP_SafeVoiceUserAgreement_C_OnRejectSafeVoiceConsent_Params
{
public:
	class ARHHUDCommon*                          CallFunc_GetHUDCommon_HUD_Common;                  // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValGameUserSettings*                  K2Node_DynamicCast_AsVal_Game_User_Settings;       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnAcceptSafeVoiceConsent
struct UWBP_SafeVoiceUserAgreement_C_OnAcceptSafeVoiceConsent_Params
{
public:
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature
struct UWBP_SafeVoiceUserAgreement_C_BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature_Params
{
public:
	bool                                         Checked;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.ExecuteUbergraph_WBP_SafeVoiceUserAgreement
struct UWBP_SafeVoiceUserAgreement_C_ExecuteUbergraph_WBP_SafeVoiceUserAgreement_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveViewRoute_ReturnValue;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Checked;                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnPlayerSelectedConsentStatus__DelegateSignature
struct UWBP_SafeVoiceUserAgreement_C_OnPlayerSelectedConsentStatus__DelegateSignature_Params
{
public:
	bool                                         ConsentEnabled;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


