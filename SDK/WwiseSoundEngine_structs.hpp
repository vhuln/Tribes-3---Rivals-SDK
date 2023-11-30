#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct WwiseSoundEngine.AkUInt64Wrapper
struct WwiseSoundEngine_AkUInt64Wrapper
{
public:
	uint64                                       UInt64Value;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct WwiseSoundEngine.AkUInt32Wrapper
struct WwiseSoundEngine_AkUInt32Wrapper
{
public:
	uint32                                       UInt32Value;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct WwiseSoundEngine.AkOutputDeviceID
struct WwiseSoundEngine_AkOutputDeviceID : public WwiseSoundEngine_AkUInt64Wrapper
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct WwiseSoundEngine.AkUniqueID
struct WwiseSoundEngine_AkUniqueID : public WwiseSoundEngine_AkUInt32Wrapper
{
public:
};

}


