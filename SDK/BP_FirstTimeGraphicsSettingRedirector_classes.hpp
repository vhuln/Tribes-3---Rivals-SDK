#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BP_FirstTimeGraphicsSettingRedirector.BP_FirstTimeGraphicsSettingRedirector_C
class UBP_FirstTimeGraphicsSettingRedirector_C : public URHViewRedirector_LocalSetting
{
public:

	static class UClass* StaticClass();
	static class UBP_FirstTimeGraphicsSettingRedirector_C* GetDefaultObj();

	bool DoesLocalSettingApply(class ARHHUDCommon* HUD, bool CallFunc_IsPlatformType_ReturnValue);
};

}


