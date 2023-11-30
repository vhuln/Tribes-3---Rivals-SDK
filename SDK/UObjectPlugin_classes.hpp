#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class UObjectPlugin.MyPluginObject
class UMyPluginObject : public UObject
{
public:
	struct UObjectPlugin_MyPluginStruct          MyStruct;                                          // 0x28(0x10)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMyPluginObject* GetDefaultObj();

};

}


