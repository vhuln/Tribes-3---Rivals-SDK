#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x140 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_15F2[0xF8];                                    // Fixing Size After Last Property  
	struct CoreUObject_SoftClassPath             SignificanceManagerClassName;                      // 0x120(0x20)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USignificanceManager* GetDefaultObj();

};

}


