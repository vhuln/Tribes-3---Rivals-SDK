#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class NetCore.NetAnalyticsAggregatorConfig
class UNetAnalyticsAggregatorConfig : public UObject
{
public:
	TArray<struct NetCore_NetAnalyticsDataConfig> NetAnalyticsData;                                  // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class NetCore.StatePerObjectConfig
class UStatePerObjectConfig : public UObject
{
public:
	uint8                                        Pad_2F1[0x28];                                     // Fixing Size After Last Property  
	class FString                                PerObjectConfigSection;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x60(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F6[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UStatePerObjectConfig* GetDefaultObj();

};

// 0x20 (0x88 - 0x68)
// Class NetCore.EscalationManagerConfig
class UEscalationManagerConfig : public UStatePerObjectConfig
{
public:
	TArray<class FString>                        EscalationSeverity;                                // 0x68(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_306[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEscalationManagerConfig* GetDefaultObj();

};

}


