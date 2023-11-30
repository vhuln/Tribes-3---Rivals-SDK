#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LocalizableMessageBlueprint.LocalizableMessageLibrary
class ULocalizableMessageLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULocalizableMessageLibrary* GetDefaultObj();

	void Reset_LocalizableMessage(struct LocalizableMessage_LocalizableMessage& Message);
	bool IsEmpty_LocalizableMessage(struct LocalizableMessage_LocalizableMessage& Message);
	class FText Conv_LocalizableMessageToText(class UObject* WorldContextObject, struct LocalizableMessage_LocalizableMessage& Message);
};

}


