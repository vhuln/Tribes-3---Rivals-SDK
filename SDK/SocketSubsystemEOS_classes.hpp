#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1E90 - 0x1E88)
// Class SocketSubsystemEOS.NetConnectionEOS
class UNetConnectionEOS : public UIpConnection
{
public:
	uint8                                        Pad_C7[0x8];                                       // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNetConnectionEOS* GetDefaultObj();

};

// 0x8 (0x8A8 - 0x8A0)
// Class SocketSubsystemEOS.NetDriverEOSBase
class UNetDriverEOSBase : public UIpNetDriver
{
public:
	bool                                         bIsPassthrough;                                    // 0x8A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUsingP2PSockets;                                // 0x8A1(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC[0x6];                                       // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNetDriverEOSBase* GetDefaultObj();

};

}


