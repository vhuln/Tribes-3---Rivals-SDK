#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class AudioLinkCore.AudioLinkSettingsAbstract
class UAudioLinkSettingsAbstract : public UObject
{
public:
	uint8                                        Pad_387[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAudioLinkSettingsAbstract* GetDefaultObj();

};

}


