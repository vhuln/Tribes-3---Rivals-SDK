#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x70 - 0x38)
// Class CommonLoadingScreen.CommonLoadingScreenSettings
class UCommonLoadingScreenSettings : public UDeveloperSettingsBackedByCVars
{
public:
	struct CoreUObject_SoftClassPath             LoadingScreenWidget;                               // 0x38(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LoadingScreenZOrder;                               // 0x58(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldLoadingScreenAdditionalSecs;                   // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadingScreenHeartbeatHangDuration;                // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LogLoadingScreenHeartbeatInterval;                 // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LogLoadingScreenReasonEveryFrame;                  // 0x68(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceLoadingScreenVisible;                         // 0x69(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HoldLoadingScreenAdditionalSecsEvenInEditor;       // 0x6A(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTickLoadingScreenEvenInEditor;                // 0x6B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D28[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCommonLoadingScreenSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CommonLoadingScreen.LoadingProcessInterface
class ILoadingProcessInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ILoadingProcessInterface* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class CommonLoadingScreen.LoadingProcessTask
class ULoadingProcessTask : public UObject
{
public:
	uint8                                        Pad_DB3[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULoadingProcessTask* GetDefaultObj();

	void Unregister();
	void SetShowLoadingScreenReason(const class FString& InReason);
	class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, const class FString& ShowLoadingScreenReason);
};

// 0x98 (0xC8 - 0x30)
// Class CommonLoadingScreen.LoadingScreenManager
class ULoadingScreenManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_E0C[0x80];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BeginWidgetRemovalDel;                             // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bWidgetWillRemoveSelf;                             // 0xC0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTempViewportWidgetAdded;                          // 0xC1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E17[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULoadingScreenManager* GetDefaultObj();

	void WidgetRemoveSelf();
	class FString GetDebugReasonForShowingOrHidingLoadingScreen();
};

}


