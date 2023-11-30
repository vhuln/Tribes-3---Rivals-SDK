#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C
class UFirstTimeSafeZoneViewRedirector_C : public URHViewRedirector_LocalSetting
{
public:

	static class UClass* StaticClass();
	static class UFirstTimeSafeZoneViewRedirector_C* GetDefaultObj();

	bool DoesLocalSettingApply(class ARHHUDCommon* HUD, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


