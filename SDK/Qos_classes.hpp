#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x360 - 0x328)
// Class Qos.QosBeaconClient
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_F7B[0x38];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AQosBeaconClient* GetDefaultObj();

	void ServerQosRequest(const class FString& InSessionId);
	void ClientQosResponse(enum class EQosResponseType Response);
};

// 0x10 (0x2D0 - 0x2C0)
// Class Qos.QosBeaconHost
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_F86[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AQosBeaconHost* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Qos.QosEvaluator
class UQosEvaluator : public UObject
{
public:
	uint8                                        Pad_F8A[0x20];                                     // Fixing Size After Last Property  
	bool                                         bInProgress;                                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCancelOperation;                                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F8D[0x6];                                      // Fixing Size After Last Property  
	TArray<struct Qos_DatacenterQosInstance>     Datacenters;                                       // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F8E[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UQosEvaluator* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class Qos.QosRegionManager
class UQosRegionManager : public UObject
{
public:
	int32                                        NumTestsPerRegion;                                 // 0x28(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PingTimeout;                                       // 0x2C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableSubspaceBiasOrder;                          // 0x30(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F98[0x7];                                      // Fixing Size After Last Property  
	class FString                                SubspaceDelimiter;                                 // 0x38(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct Qos_QosRegionInfo>             RegionDefinitions;                                 // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct Qos_QosDatacenterInfo>         DatacenterDefinitions;                             // 0x58(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct CoreUObject_DateTime                  LastCheckTimestamp;                                // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                         Evaluator;                                         // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EQosCompletionResult              QosEvalResult;                                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F9C[0x7];                                      // Fixing Size After Last Property  
	TArray<struct Qos_RegionQosInstance>         RegionOptions;                                     // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                ForceRegionId;                                     // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRegionForcedViaCommandline;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FA1[0x7];                                      // Fixing Size After Last Property  
	class FString                                SelectedRegionId;                                  // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FA3[0x40];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UQosRegionManager* GetDefaultObj();

};

}


