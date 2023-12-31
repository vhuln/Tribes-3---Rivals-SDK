#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{
public:

	static class UClass* StaticClass();
	static class USteamAuthComponentModuleInterface* GetDefaultObj();

};

// 0x8 (0x1E90 - 0x1E88)
// Class OnlineSubsystemSteam.SteamNetConnection
class USteamNetConnection : public UIpConnection
{
public:
	bool                                         bIsPassthrough;                                    // 0x1E88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FD[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USteamNetConnection* GetDefaultObj();

};

// 0x8 (0x8A8 - 0x8A0)
// Class OnlineSubsystemSteam.SteamNetDriver
class USteamNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_828[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USteamNetDriver* GetDefaultObj();

};

}


