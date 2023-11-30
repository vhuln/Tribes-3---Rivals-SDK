#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:

	static class UClass* StaticClass();
	static class UFixedFrameRateCustomTimeStep* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TimeManagement.GenlockedCustomTimeStep
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_548[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGenlockedCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct CoreUObject_FrameRate                 FrameRate;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_571[0x16];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_593[0x27];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGenlockedTimecodeProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeManagementBlueprintLibrary
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTimeManagementBlueprintLibrary* GetDefaultObj();

	struct CoreUObject_FrameTime TransformTime(struct CoreUObject_FrameTime& SourceTime, struct CoreUObject_FrameRate& SourceRate, struct CoreUObject_FrameRate& DestinationRate);
	struct CoreUObject_FrameNumber Subtract_FrameNumberInteger(const struct CoreUObject_FrameNumber& A, int32 B);
	struct CoreUObject_FrameNumber Subtract_FrameNumberFrameNumber(const struct CoreUObject_FrameNumber& A, const struct CoreUObject_FrameNumber& B);
	struct CoreUObject_FrameTime SnapFrameTimeToRate(struct CoreUObject_FrameTime& SourceTime, struct CoreUObject_FrameRate& SourceRate, struct CoreUObject_FrameRate& SnapToRate);
	struct CoreUObject_FrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct CoreUObject_FrameRate& FrameRate);
	struct CoreUObject_FrameNumber Multiply_FrameNumberInteger(const struct CoreUObject_FrameNumber& A, int32 B);
	bool IsValid_MultipleOf(struct CoreUObject_FrameRate& InFrameRate, struct CoreUObject_FrameRate& OtherFramerate);
	bool IsValid_Framerate(struct CoreUObject_FrameRate& InFrameRate);
	struct CoreUObject_FrameRate GetTimecodeFrameRate();
	struct CoreUObject_Timecode GetTimecode();
	struct CoreUObject_FrameNumber Divide_FrameNumberInteger(const struct CoreUObject_FrameNumber& A, int32 B);
	class FString Conv_TimecodeToString(struct CoreUObject_Timecode& InTimecode, bool bForceSignDisplay);
	float Conv_QualifiedFrameTimeToSeconds(struct CoreUObject_QualifiedFrameTime& InFrameTime);
	float Conv_FrameRateToSeconds(struct CoreUObject_FrameRate& InFrameRate);
	float Conv_FrameRateToInterval(const struct CoreUObject_FrameRate& InFrameRate);
	int32 Conv_FrameNumberToInteger(struct CoreUObject_FrameNumber& InFrameNumber);
	struct CoreUObject_FrameNumber Add_FrameNumberInteger(const struct CoreUObject_FrameNumber& A, int32 B);
	struct CoreUObject_FrameNumber Add_FrameNumberFrameNumber(const struct CoreUObject_FrameNumber& A, const struct CoreUObject_FrameNumber& B);
};

// 0x8 (0x30 - 0x28)
// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85F[0x3];                                      // Fixing Size After Last Property  
	int32                                        FrameOffset;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTimeSynchronizationSource* GetDefaultObj();

};

}


